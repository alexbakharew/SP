/*  BAT2018   */
#include "mlisp.h"
double dd = 18;
double mm = 1;
double LARGEST__COIN = 50;
double d50 = 50;
double d25 = 25;
double d20 = 20;
double d100 = 100;
double one = 1;
double two = 2;
double three = 3;
double cc(double amount, double largest__coin);
double count__change(double amount);
double next__coin(double coin);
double GR__AMOUNT();
//________________ 
double cc(double amount, double largest__coin) {
return (((amount == 0) || (largest__coin == one)) ? one
:((amount <= 0) || (largest__coin <= 0)) ? 0
: (cc(amount, next__coin(largest__coin)) + cc((amount - largest__coin), largest__coin)));
}
double count__change(double amount) {
return cc(amount, LARGEST__COIN);
}
double next__coin(double coin) {
return ((coin == d50) ? d25
:(coin == d25) ? d20
:(coin == d20) ? three
:(coin == three) ? two
:(coin == two) ? one
: 0);
}
double GR__AMOUNT() {
return ((d100 * mm) + dd);
}
int main(){
display(" BAT variant 3");
newline();
display(" 1-2-3-20-25-50");
newline();
display("count-change for 100 \t= ");
display(count__change(d100));
newline();
display("count-change for ");
display(GR__AMOUNT());
display(" \t= ");
display(count__change(GR__AMOUNT()));
newline();
std::cin.get();
 return 0;
}

