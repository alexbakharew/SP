(define dd 18)
(define mm 1)
(define LARGEST-COIN 50)

(define (cc amount largest-coin)
(cond((or(= amount 0)(= largest-coin 1)) 1)
     ((not(and (> amount 0) (> largest-coin 0))) 0) 
     (else (+ (cc amount (next-coin largest-coin)) (cc (- amount largest-coin) largest-coin)))
  ))
(define (count-change amount)
  (cc amount LARGEST-COIN)
)

(define (next-coin coin)
(cond((= coin 50) 25)
     ((= coin 25) 20)
     ((= coin 20) 3)
     ((= coin 3) 2)
     ((= coin 2) 1)
     (#t 0)
     )
)
(define (GR-AMOUNT)
  (+(* 100 mm) dd))

(display " BAT variant 3") (newline)

(display " 1-2-3-20-25-50") (newline)

(display "count-change for 100 \t= ")

(display (count-change 100)) (newline)

(display "count-change for ")

(display (GR-AMOUNT))

(display " \t= ")

(display (count-change (GR-AMOUNT))) (newline)
