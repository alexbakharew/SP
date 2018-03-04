;lisp05
(define(f x)(* 2 x))
(f 3)
;________________________
(define(g x y)
  (+ (f x) y))
(g 4 5)
;________________________
(define(dx) 1e-5)
(dx)
(define(what_greater a b)
  (cond ((= a b) (display "Equal\n"))
        ((< a b) (display "a less than b\n"))
        (#t (display "a greater than b\n"))))
(what_greater 7 0)
"----------------------------------------"
(define dd 18)
(define mm 01)
(define LARGEST-COIN 50)

(define (GR-AMOUNT)
  +(* 100 mm) dd)
;;(define (GR-AMOUNT)
;;  100)
(GR-AMOUNT)

