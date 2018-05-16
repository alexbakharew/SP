(define dd 18)
(define mm 1)
(define LARGEST-COIN 50)
(define d50 50)
(define d25 25)
(define d20 20)
(define d100 100)
(define one 1)
(define two 2)
(define three 3)

(define (cc amount largest-coin)
(cond((or(= amount 0)(= largest-coin one)) one)
     ((or (<= amount 0) (<= largest-coin 0)) 0) 
     (else (+ (cc amount (next-coin largest-coin)) (cc (- amount largest-coin) largest-coin)))
  ))
(define (count-change amount)
  (cc amount LARGEST-COIN)
)

(define (next-coin coin)
(cond((= coin d50) d25)
     ((= coin d25) d20)
     ((= coin d20) three)
     ((= coin three) two)
     ((= coin two) one)
     (else 0)
     )
)
(define (GR-AMOUNT)
  (+(* d100 mm) dd))

(display " BAT variant 3") (newline)

(display " 1-2-3-20-25-50") (newline)

(display "count-change for 100 \t= ")

(display (count-change d100)) (newline)

(display "count-change for ")

(display (GR-AMOUNT))

(display " \t= ")

(display (count-change (GR-AMOUNT))) (newline)