(define one 1)
(define two 2)

(define(even-bits n)
  (cond((= n 0)one)
       (else (cond
       ((=(remainder n two)0)
          (even-bits (quotient n two)))
       (else(odd-bits(quotient n two)))
       )))
       )

(define(odd-bits n)
  (cond((= n 0)0)
       (else (cond
       ((=(remainder n two)0)
          (odd-bits (quotient n two)))
       (else(even-bits(quotient n two)))
       )))
  )

(define(display-bin n)
  (display(remainder n two))
  (cond ((= n 0)0) (else (display-bin (quotient n two))))
)

(define(report-results n)
  (let ((x 0))
  (display "Happy birthday to you!\n\t")
  (display n)(display " (decimal)\n\t")
  (set! n(display-bin n))(display "(reversed binary)\n")
  (display "\teven?\t")(set! x (cond((=(even-bits n)one)(display "yes") one)(else (display "no") 0)))
  (newline)
  (display "\todd?\t")(set! x (cond((=(odd-bits n)one)(display "yes") one)(else (display"no") 0)))
  (newline)
  0
  ))

;***** Date of YOUR birthday *******
(define dd 18)
(define mm 1)
(define yyyy 1998)

(define day 1000000)
(define month 10000) 
;***********************************
(report-results (+ (* dd day)
                   (* mm month)
                   yyyy))