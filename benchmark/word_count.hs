
import System.IO
import System.IO.Error (ioError)
import System.Directory (removeFile)
import Control.Exception (bracket, try, IOException)
import qualified Data.ByteString as BS
import qualified Data.ByteString.Char8 as BSC
import Data.Time.Clock.POSIX (getPOSIXTime)

-- Write a temporary file and return its path and handle
writeTmpFile :: IO (Either String (FilePath, Handle))
writeTmpFile = do
  e <- try (openTempFile "/tmp" "cicili-wordcount.tmp") :: IO (Either IOException (FilePath, Handle))
  case e of
    Left err -> pure (Left $ "File opening error: " ++ show err)
    Right (path, h) -> do
      hPutStrLn h "Alan Turing"
      hPutStrLn h "John von Neumann"
      hPutStrLn h "Alonzo Church"
      hSeek h AbsoluteSeek 0
      pure (Right (path, h))

-- Read the file in fixed-size chunks as a list of strings
safeReadFile :: Handle -> IO [String]
safeReadFile h = go []
  where
    chunkSize = 8
    go acc = do
      bs <- BS.hGetSome h chunkSize
      if BS.null bs
        then pure (reverse acc)
        else go (BSC.unpack bs : acc)

-- Count words in a single chunk
countWords :: String -> Int
countWords = length . words

-- Iterate over chunks and print word counts
iterWords :: [String] -> IO ()
iterWords [] = putStrLn "Error: nothing to read"
iterWords parts = mapM_ printChunk parts
  where
    printChunk s = do
      putStr s
      putStrLn $ " Word count: " ++ show (countWords s)

-- Main loop: run 10,000 times and measure total time
main :: IO ()
main = do
  start <- getPOSIXTime
  let loop 0 = pure ()
      loop n = do
        eTmp <- writeTmpFile
        case eTmp of
          Left err -> putStrLn err
          Right (path, h) ->
            bracket (pure h)
                    (\handle -> do
                        hClose handle
                        putStrLn "file closed deferred"
                        removeFile path)
                    (\handle -> do
                        parts <- safeReadFile handle
                        putStrLn "File loaded successfully!"
                        iterWords parts)
        loop (n - 1)
  loop 1000000
  end <- getPOSIXTime
  putStrLn $ show (round (end - start) :: Integer) ++ " seconds elapsed"
