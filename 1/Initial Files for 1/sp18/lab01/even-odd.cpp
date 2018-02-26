/*
(define(even-bits n)
  (cond((= n 0)1)
       ((=(remainder n 2)0)
          (even-bits (quotient n 2)))
       (else(odd-bits(quotient n 2)))
       ))
(define(odd-bits n)
  (cond((= n 0)0)
       ((=(remainder n 2)0)
          (odd-bits (quotient n 2)))
       (#t(even-bits(quotient n 2)))
       ))
(define(display-bin n)
  (display(remainder n 2))
  (if(= n 0)0 (display-bin (quotient n 2)))
       )
(define(report-results n)
  (display "Happy birthday to you!\n\t")
  (display n)(display " (decimal)\n\t")
  (display-bin n)(display "(reversed binary)\n")
  (display "\teven?\t")(display (if(=(even-bits n)1) "yes" "no"))
  (newline)
  (display "\todd?\t")(display (if(=(odd-bits n)1) "yes" "no"))
  (newline)
  0
       )
;***** Date of YOUR birthday *******
(define dd 31)
(define mm 12)
(define yyyy 2018)
;***********************************
(report-results (+ (* dd 1000000)
                   (* mm 10000)
                   yyyy))
*/
#include "mlisp.h"
//...
double odd__bits(double n)
 {
  return (n == 0 ? 0
       : remainder(n,2) == 0 ?
                odd__bits (quotient(n,2))
       : true ? even__bits(quotient(n,2))
       : _infinity);
 }
//...
int main(){
 display(report__results (dd*1000000+
                         mm*10000+
                         yyyy));
 newline();

 std::cin.get();
 return 0;
}
