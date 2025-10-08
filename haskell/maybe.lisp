
(generic specialize-Maybe-header (a)

         ;; uses this definition in c header
         ;; data Maybe = Nothing | Just a
         ;; (enum Maybe
         ;;   (Nothing)
         ;;   (Just))
         
         (guard (<> __H Maybe a)
           (struct (<> Maybe a)
             (member Maybe __h_ctor)
             (union
                 (struct (declare Nothing))
               (struct (member a __h_0_mem) (declare Just))
               (declare __h_data)))
           
           (decl) (func (<> Nothing a) () (out (<> Maybe a)))
           (decl) (func (<> Just a) ((a value)) (out (<> Maybe a)))
         ))

(generic specialize-Maybe-source (a)

         (func (<> Nothing a) ()
               (out (<> Maybe a))
               (return (cast (<> Maybe a) '{
                             $__h_ctor
                             __h_Nothing_t
                             $__h_data$Nothing
                             '{ }
                             })))

         (func (<> Just a) ((a value))
               (out (<> Maybe a))
               (return (cast (<> Maybe a) '{
                             $__h_ctor
                             __h_Just_t
                             $__h_data$Just
                             '{ $__h_0_mem value }
                             })))
         )
