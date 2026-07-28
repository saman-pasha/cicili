;;;; **************************** sha.h ****************************/
;;;; ***************** See RFC 6234 for details. *******************/
;;;; *
;;;;   Copyright (c) 2011 IETF Trust and the persons identified as
;;;;   authors of the code.  All rights reserved.

;;;;   Redistribution and use in source and binary forms, with or
;;;;   without modification, are permitted provided that the following
;;;;   conditions are met:

;;;;   - Redistributions of source code must retain the above
;;;;   copyright notice, this list of conditions and
;;;;   the following disclaimer.



;;;;   - Redistributions in binary form must reproduce the above
;;;;   copyright notice, this list of conditions and the following
;;;;   disclaimer in the documentation and/or other materials provided
;;;;   with the distribution.

;;;;   - Neither the name of Internet Society, IETF or IETF Trust, nor
;;;;   the names of specific contributors, may be used to endorse or
;;;;   promote products derived from this software without specific
;;;;   prior written permission.

;;;;   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
;;;;   CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
;;;;   INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
;;;;   MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
;;;;   DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
;;;;   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
;;;;   SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
;;;;   NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
;;;;   LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
;;;;   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
;;;;   CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
;;;;   OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
;;;;   EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
;;;; *

(header "sha.h" ()
        (guard _SHA_H_

               ;; *
               ;; *  Description:
               ;; *      This file implements the Secure Hash Algorithms
               ;; *      as defined in the U.S. National Institute of Standards
               ;; *      and Technology Federal Information Processing Standards
               ;; *      Publication (FIPS PUB) 180-3 published in October 2008
               ;; *      and formerly defined in its predecessors, FIPS PUB 180-1
               ;; *      and FIP PUB 180-2.
               ;; *
               ;; *      A combined document showing all algorithms is available at
               ;; *              http://csrc.nist.gov/publications/fips/
               ;; *                     fips180-3/fips180-3_final.pdf
               ;; *
               ;; *      The five hashes are defined in these sizes:
               ;; *              SHA-1           20 byte / 160 bit
               ;; *              SHA-224         28 byte / 224 bit
               ;; *              SHA-256         32 byte / 256 bit
               ;; *              SHA-384         48 byte / 384 bit
               ;; *              SHA-512         64 byte / 512 bit
               ;; *
               ;; *  Compilation Note:
               ;; *    These files may be compiled with two options:
               ;; *        USE_32BIT_ONLY - use 32-bit arithmetic only, for systems
               ;; *                         without 64-bit integers
               ;; *
               ;; *        USE_MODIFIED_MACROS - use alternate form of the SHA_Ch()
               ;; *                         and SHA_Maj() macros that are equivalent
               ;; *                         and potentially faster on many systems
               ;; *
               ;; *

               (include <stdint.h>)

               (guard _SHA_enum_
                      ;; *
                      ;; *  All SHA functions return one of these values.
                      ;; *
                      (enum
	                   (shaSuccess . 0)
	                   (shaNull)            ; Null pointer parameter
	                   (shaInputTooLong)    ; input data too long
	                   (shaStateError)      ; called Input after FinalBits or Result
	                   (shaBadParam)))      ; passed a bad parameter
               
               ;;  *
               ;;  *  These constants hold size information for each of the SHA
               ;;  *  hashing operations
               ;;  *
               (enum
                (SHA1_Message_Block_Size . 64)
                (SHA224_Message_Block_Size . 64)
                (SHA256_Message_Block_Size . 64)
                (SHA384_Message_Block_Size . 128)
                (SHA512_Message_Block_Size . 128)
                (USHA_Max_Message_Block_Size . SHA512_Message_Block_Size)
                (SHA1HashSize . 20)
                (SHA224HashSize . 28) 
                (SHA256HashSize . 32)
                (SHA384HashSize . 48) 
                (SHA512HashSize . 64)
                (USHAMaxHashSize . SHA512HashSize)
                (SHA1HashSizeBits . 160)
                (SHA224HashSizeBits . 224)
                (SHA256HashSizeBits . 256) 
                (SHA384HashSizeBits . 384)
                (SHA512HashSizeBits . 512)
                (USHAMaxHashSizeBits . SHA512HashSizeBits))

               ;;  *
               ;;  *  These constants are used in the USHA (Unified SHA) functions.
               ;;  *
               (enum SHAversion
                     (SHA1)
                     (SHA224)
                     (SHA256)
                     (SHA384)
                     (SHA512))

               ;; *
               ;; *  This structure will hold context information for the SHA-1
               ;; *  hashing operation.
               ;; *
               (struct SHA1Context
                       (member uint32_t Intermediate_Hash [(/ SHA1HashSize 4)]) ; Message Digest
                       (member uint32_t Length_High)                            ; Message length in bits
                       (member uint32_t Length_Low)                             ; Message length in bits
                       (member int_least16_t Message_Block_Index)               ; Message_Block array index
                       (member uint8_t Message_Block [SHA1_Message_Block_Size]) ; 512-bit message blocks
                       (member int Computed)                                    ; Is the hash computed?
                       (member int Corrupted))                                  ; Cumulative corruption code

               ;; *
               ;; *  This structure will hold context information for the SHA-256
               ;; *  hashing operation.
               ;; *
               (struct SHA256Context
                       (member uint32_t Intermediate_Hash[(/ SHA256HashSize 4)]) ; Message Digest
                       (member uint32_t Length_High)                             ; Message length in bits
                       (member uint32_t Length_Low)                              ; Message length in bits
                       (member int_least16_t Message_Block_Index)                ; Message_Block array index
                       (member uint8_t Message_Block[SHA256_Message_Block_Size]) ; 512-bit message blocks
                       (member int Computed)                                     ; Is the hash computed?
                       (member int Corrupted))                                   ; Cumulative corruption code

               ;; *
               ;; *  This structure will hold context information for the SHA-512
               ;; *  hashing operation.
               ;; *
               (struct SHA512Context
                       (@ifdef USE_32BIT_ONLY)
                       (member uint32_t Intermediate_Hash32[(/ SHA512HashSize 4)]) ; Message Digest
                       (member uint32_t Length[4])                                 ; Message length in bits
                       (@else)                                                     ; !USE_32BIT_ONLY
                       (member uint64_t Intermediate_Hash64[(/ SHA512HashSize 8)]) ; Message Digest
                       (member uint64_t Length_High)
                       (member uint64_t Length_Low)                                ; Message length in bits
                       (@endif)                                                    ; USE_32BIT_ONLY
                       (member int_least16_t Message_Block_Index)                  ; Message_Block array index
                       (member uint8_t Message_Block[SHA512_Message_Block_Size])   ; 1024-bit message blocks
                       (member int Computed)                                       ; Is the hash computed?
                       (member int Corrupted))                                     ; Cumulative corruption code

               ;; *
               ;; *  This structure will hold context information for the SHA-224
               ;; *  hashing operation.  It uses the SHA-256 structure for computation.
               ;; *
               (typedef SHA256Context SHA224Context)

               ;; *
               ;; *  This structure will hold context information for the SHA-384
               ;; *  hashing operation.  It uses the SHA-512 structure for computation.
               ;; *
               (typedef SHA512Context SHA384Context)

               ;; *
               ;; *  This structure holds context information for all SHA
               ;; *  hashing operations.
               ;; *
               (struct USHAContext
                       (member int whichSha)                  ; which SHA is being used
                       (union
	                    (member SHA1Context   sha1Context)
	                    (member SHA224Context sha224Context) 
	                    (member SHA256Context sha256Context)
	                    (member SHA384Context sha384Context) 
	                    (member SHA512Context sha512Context)
	                    (declare ctx)))

               ;; * SHA-1 *
               {extern} {decl} (func SHA1Reset ((SHA1Context *)) (out int))
               {extern} {decl} (func SHA1Input ((SHA1Context *) (const uint8_t * bytes) (uint bytecount)) (out int))
               {extern} {decl} (func SHA1FinalBits ((SHA1Context *) (uint8_t bits) (uint bit_count)) (out int))
               {extern} {decl} (func SHA1Result ((SHA1Context *) (uint8_t Message_Digest[SHA1HashSize])) (out int))

               ;; * SHA-224 *
               {extern} {decl} (func SHA224Reset ((SHA224Context *)) (out int))
               {extern} {decl} (func SHA224Input ((SHA224Context *) (const uint8_t * bytes) (uint bytecount)) (out int))
               {extern} {decl} (func SHA224FinalBits ((SHA224Context *) (uint8_t bits) (uint bit_count)) (out int))
               {extern} {decl} (func SHA224Result ((SHA224Context *) (uint8_t Message_Digest[SHA224HashSize])) (out int))

               ;; * SHA-256 *
               {extern} {decl} (func SHA256Reset ((SHA256Context *)) (out int))
               {extern} {decl} (func SHA256Input ((SHA256Context *) (const uint8_t * bytes) (uint bytecount)) (out int))
               {extern} {decl} (func SHA256FinalBits ((SHA256Context *) (uint8_t bits) (uint bit_count)) (out int))
               {extern} {decl} (func SHA256Result ((SHA256Context *) (uint8_t Message_Digest[SHA256HashSize])) (out int))

               ;; * SHA-384 *
               {extern} {decl} (func SHA384Reset ((SHA384Context *)) (out int))
               {extern} {decl} (func SHA384Input ((SHA384Context *) (const uint8_t * bytes) (uint bytecount)) (out int))
               {extern} {decl} (func SHA384FinalBits ((SHA384Context *) (uint8_t bits) (uint bit_count)) (out int))
               {extern} {decl} (func SHA384Result ((SHA384Context *) (uint8_t Message_Digest[SHA384HashSize])) (out int))

               ;; * SHA-512 *
               {extern} {decl} (func SHA512Reset ((SHA512Context *)) (out int))
               {extern} {decl} (func SHA512Input ((SHA512Context *) (const uint8_t * bytes) (uint bytecount)) (out int))
               {extern} {decl} (func SHA512FinalBits ((SHA512Context *) (uint8_t bits) (uint bit_count)) (out int))
               {extern} {decl} (func SHA512Result ((SHA512Context *) (uint8_t Message_Digest[SHA512HashSize])) (out int))

               ;; * Unified SHA functions, chosen by whichSha *
               {extern} {decl} (func USHAReset ((USHAContext * context) (SHAversion whichSha)) (out int))
               {extern} {decl} (func USHAInput ((USHAContext * context) (const uint8_t * bytes) (uint bytecount)) (out int))
               {extern} {decl} (func USHAFinalBits ((USHAContext * context) (uint8_t bits) (uint bit_count)) (out int))
               {extern} {decl} (func USHAResult ((USHAContext * context) (uint8_t Message_Digest[USHAMaxHashSize]))(out int))

               {extern} {decl} (func USHABlockSize ((SHAversion whichSha)) (out int))
               {extern} {decl} (func USHAHashSize ((SHAversion whichSha)) (out int))
               {extern} {decl} (func USHAHashSizeBits ((SHAversion whichSha)) (out int))
               {extern} {decl} (func USHAHashName ((SHAversion whichSha)) (out const char *))
               
               )) ; target sha.h

;;;;**************************** sha1.c ***************************
;;;;***************** See RFC 6234 for details. *******************
;;;;* Copyright (c) 2011 IETF Trust and the persons identified as *
;;;;* authors of the code.  All rights reserved.                  *
;;;;* See sha.h for terms of use and redistribution.              *

;;; *
;;; *  Description:
;;; *      This file implements the Secure Hash Algorithm SHA-1
;;; *      as defined in the U.S. National Institute of Standards
;;; *      and Technology Federal Information Processing Standards
;;; *      Publication (FIPS PUB) 180-3 published in October 2008
;;; *      and formerly defined in its predecessors, FIPS PUB 180-1
;;; *      and FIP PUB 180-2.
;;; *
;;; *      A combined document showing all algorithms is available at
;;; *              http://csrc.nist.gov/publications/fips/
;;; *                     fips180-3/fips180-3_final.pdf
;;; *
;;; *      The SHA-1 algorithm produces a 160-bit message digest for a
;;; *      given data stream that can serve as a means of providing a
;;; *      "fingerprint" for a message.
;;; *
;;; *  Portability Issues:
;;; *      SHA-1 is defined in terms of 32-bit "words".  This code
;;; *      uses <stdint.h> (included via "sha.h") to define 32- and
;;; *      8-bit unsigned integer types.  If your C compiler does
;;; *      not support 32-bit unsigned integers, this code is not
;;; *      appropriate.
;;; *
;;; *  Caveats:
;;; *      SHA-1 is designed to work with messages less than 2^64 bits
;;; *      long.  This implementation uses SHA1Input() to hash the bits
;;; *      that are a multiple of the size of an 8-bit octet, and then
;;; *      optionally uses SHA1FinalBits() to hash the final few bits of
;;; *      the input.
;;; *

(source "sha1.c" (:std #t :compile #f)

        (include "sha.h")
        
        ;; *
        ;; *  Define the SHA1 circular left shift macro
        ;; *
        (@define (code "SHA1_ROTL(bits, word) (((word) << (bits)) | ((word) >> (32-(bits)))"))

        ;; *
        ;; * Add "length" to the length.
        ;; * Set Corrupted when overflow has occurred.
        ;; *
        {static} (var uint32_t addTemp)
        (@define (code "SHA1AddLength(context, length) \\
(addTemp = (context)->Length_Low, \\
(context)->Corrupted = \\
(((context)->Length_Low += (length)) < addTemp) && \\
(++(context)->Length_High == 0) ? shaInputTooLong \\
: (context)->Corrupted)"))

        ;; * Local Function Prototypes *
        {decl} {static} (func SHA1ProcessMessageBlock ((SHA1Context * context)))
        {decl} {static} (func SHA1Finalize ((SHA1Context * context) (uint8_t Pad_Byte)))
        {decl} {static} (func SHA1PadMessage ((SHA1Context * context) (uint8_t Pad_Byte)))
        
        ;; *
        ;; *  SHA1Reset
        ;; *
        ;; *  Description:
        ;; *      This function will initialize the SHA1Context in preparation
        ;; *      for computing a new SHA1 message digest.
        ;; *
        ;; *  Parameters:
        ;; *      context: [in/out]
        ;; *          The context to reset.
        ;; *
        ;; *  Returns:
        ;; *      sha Error Code.
        ;; *
        ;; *
        {resolve #f}
        (func SHA1Reset ((SHA1Context * context)) (out int)
	              (if (not context) (return shaNull))

	              (set (-> context Length_High) 0 (-> context Length_Low) 0)
	              (set (-> context Message_Block_Index) 0)

	              ;; Initial Hash Values: FIPS 180-3 section 5.3.1
	              (set (nth 0 (-> context Intermediate_Hash)) 0x67452301)
	              (set (nth 1 (-> context Intermediate_Hash)) 0xEFCDAB89)
	              (set (nth 2 (-> context Intermediate_Hash)) 0x98BADCFE)
	              (set (nth 3 (-> context Intermediate_Hash)) 0x10325476)
	              (set (nth 4 (-> context Intermediate_Hash)) 0xC3D2E1F0)
	              
	              (set (-> context Computed)  0)
	              (set (-> context Corrupted) shaSuccess)
	              
	              (return shaSuccess))

        ;; *
        ;; *  SHA1Input
        ;; *
        ;; *  Description:
        ;; *      This function accepts an array of octets as the next portion
        ;; *      of the message.
        ;; *
        ;; *  Parameters:
        ;; *      context: [in/out]
        ;; *          The SHA context to update.
        ;; *      message_array[ ]: [in]
        ;; *          An array of octets representing the next portion of
        ;; *          the message.
        ;; *      length: [in]
        ;; *          The length of the message in message_array.
        ;; *
        ;; *  Returns:
        ;; *      sha Error Code.
        ;; *
        ;; *
        {resolve #f}
        (func SHA1Input ((SHA1Context * context) (const uint8_t * message_array) (unsigned length)) (out int)
	              (if (not context)          (return shaNull))
	              (if (not length)           (return shaSuccess))
	              (if (not message_array)    (return shaNull))
	              (if (-> context Computed)  (block
					                             (set (-> context Corrupted) shaStateError)
					                           (return shaStateError)))
	              (if (-> context Corrupted) (return (-> context Corrupted)))

	              (while (1- length)
	                     (set (nth (1+ (-> context Message_Block_Index))
			                       (-> context Message_Block))
		                      (cof message_array))

	                     (if (and (== (SHA1AddLength context 8) shaSuccess)
		                          (== (-> context Message_Block_Index) SHA1_Message_Block_Size))
		                     (SHA1ProcessMessageBlock context))

	                     (++ message_array))

	              (return (-> context Corrupted)))

        ;; *
        ;; * SHA1FinalBits
        ;; *
        ;; * Description:
        ;; *   This function will add in any final bits of the message.
        ;; *
        ;; * Parameters:
        ;; *   context: [in/out]
        ;; *     The SHA context to update.
        ;; *   message_bits: [in]
        ;; *     The final bits of the message, in the upper portion of the
        ;; *     byte.  (Use 0b###00000 instead of 0b00000### to input the
        ;; *     three bits ###.)
        ;; *   length: [in]
        ;; *     The number of bits in message_bits, between 1 and 7.
        ;; *
        ;; * Returns:
        ;; *   sha Error Code.
        ;; *
        {resolve #f}
        (func SHA1FinalBits ((SHA1Context * context) (uint8_t message_bits) (uint length)) (out int)
	              (if (not context) (return shaNull))
	              (if (not length)  (return shaSuccess))
	              (if (-> context Corrupted) (return (-> context Corrupted)))
	              (if (-> context Computed)  (block
					                             (set (-> context Corrupted) shaStateError)
					                           (return (-> context Corrupted))))
	              (if (>= length 8) (block
			                            (set (-> context Corrupted) shaBadParam)
			                          (return (-> context Corrupted))))
	              
	              (SHA1AddLength context length)
	              (let ({static} (uint8_t masks   [8] . '{0x00 0x80 0xC0 0xE0 0xF0 0xF8 0xFC 0xFE})
		                {static} (uint8_t markbit [8] . '{0x80 0x40 0x20 0x10 0x08 0x04 0x02 0x01}))
	                (SHA1Finalize  context (cast (uint8_t)
					                             (bitor (bitand message_bits (nth length masks))
						                                (nth length markbit)))))

	              (return (-> context Corrupted)))

        ;; *
        ;; * SHA224_256ProcessMessageBlock
        ;; *
        ;; * Description:
        ;; *   This helper function will process the next 512 bits of the
        ;; *   message stored in the Message_Block array.
        ;; *
        ;; * Parameters:
        ;; *   context: [in/out]
        ;; *     The SHA context to update.
        ;; *
        ;; * Returns:
        ;; *   Nothing.
        ;; *
        ;; * Comments:
        ;; *   Many of the variable names in this code, especially the
        ;; *   single character names, were used because those were the
        ;; *   names used in the Secure Hash Standard.
        ;; *
        {static}
        {resolve #f}
        (func SHA224_256ProcessMessageBlock ((SHA256Context * context))
	              ;; Constants defined in FIPS 180-3, section 4.2.2
	          (let ({static}
                    (const uint32_t K [64] . '{
                           0x428a2f98 0x71374491 0xb5c0fbcf 0xe9b5dba5 0x3956c25b
						   0x59f111f1 0x923f82a4 0xab1c5ed5 0xd807aa98 0x12835b01
						   0x243185be 0x550c7dc3 0x72be5d74 0x80deb1fe 0x9bdc06a7
						   0xc19bf174 0xe49b69c1 0xefbe4786 0x0fc19dc6 0x240ca1cc
						   0x2de92c6f 0x4a7484aa 0x5cb0a9dc 0x76f988da 0x983e5152
						   0xa831c66d 0xb00327c8 0xbf597fc7 0xc6e00bf3 0xd5a79147
						   0x06ca6351 0x14292967 0x27b70a85 0x2e1b2138 0x4d2c6dfc
						   0x53380d13 0x650a7354 0x766a0abb 0x81c2c92e 0x92722c85
						   0xa2bfe8a1 0xa81a664b 0xc24b8b70 0xc76c51a3 0xd192e819
						   0xd6990624 0xf40e3585 0x106aa070 0x19a4c116 0x1e376c08
						   0x2748774c 0x34b0bcb5 0x391c0cb3 0x4ed8aa4a 0x5b9cca4f
						   0x682e6ff3 0x748f82ee 0x78a5636f 0x84c87814 0x8cc70208
						   0x90befffa 0xa4506ceb 0xbef9a3f7 0xc67178f2})
		             (int      t)
		             (int      t4)            ; Loop counter
		             (uint32_t temp1)
		             (uint32_t temp2)         ; Temporary word value
		             (uint32_t W [64]))       ; Word sequence

	                ;; *
	                ;; * Initialize the first 16 words in the array W
	                ;; *
	                (for ((t  . 0)
		                  (t4 . 0))
		                 (< t 16)
		                 (1+ t)
		                 (set t4 (+ t4 4))
		                 (set (nth t W) (bitor (<< (cast (uint32_t) (nth    t4    (-> context Message_Block))) 24)
					                           (<< (cast (uint32_t) (nth (+ t4 1) (-> context Message_Block))) 16)
					                           (<< (cast (uint32_t) (nth (+ t4 2) (-> context Message_Block)))  8)
					                           (cast (uint32_t) (nth (+ t4 3) (-> context Message_Block))) )))

	                (for ((t . 16))
		                 (< t 64)
		                 (1+ t)
		                 (set (nth t W) (+ (SHA256_sigma1 (nth (- t 2) W))
				                           (nth (- t 7) W)
				                           (SHA256_sigma0 (nth (- t 15) W))
				                           (nth (- t 16) W))))

	                (let ((uint32_t A)
		                  (uint32_t B)
		                  (uint32_t C)
		                  (uint32_t D)
		                  (uint32_t E)
		                  (uint32_t F)
		                  (uint32_t G)
		                  (uint32_t H))            ; Word buffers

		              (set A (nth 0 (-> context Intermediate_Hash)))
		              (set B (nth 1 (-> context Intermediate_Hash)))
		              (set C (nth 2 (-> context Intermediate_Hash)))
		              (set D (nth 3 (-> context Intermediate_Hash)))
		              (set E (nth 4 (-> context Intermediate_Hash)))
		              (set F (nth 5 (-> context Intermediate_Hash)))
		              (set G (nth 6 (-> context Intermediate_Hash)))
		              (set H (nth 7 (-> context Intermediate_Hash)))

		              (for ((t . 0))
		                   (< t 64)
		                   (1+ t)
		                   (set temp1 (+ H (SHA256_SIGMA1 E) (SHA_Ch E F G) (nth t K) (nth t W)))
		                   (set temp2 (+ (SHA256_SIGMA0 A) (SHA_Maj A B C)))
		                   (set H G G F F E E (+ D temp1) D C C B B A A (+ temp1 temp2)))
		              
		              (+= (nth 0 (-> context Intermediate_Hash)) A)
		              (+= (nth 1 (-> context Intermediate_Hash)) B)
		              (+= (nth 2 (-> context Intermediate_Hash)) C)
		              (+= (nth 3 (-> context Intermediate_Hash)) D)
		              (+= (nth 4 (-> context Intermediate_Hash)) E)
		              (+= (nth 5 (-> context Intermediate_Hash)) F)
		              (+= (nth 6 (-> context Intermediate_Hash)) G)
		              (+= (nth 7 (-> context Intermediate_Hash)) H)))

	              (set (-> context Message_Block_Index) 0))

        ) ; target "sha.c"
