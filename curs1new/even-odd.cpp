/*  BAT2018   */
#include "mlisp.h"
double one = 1;
double two = 2;
double even__bits(double n);
double odd__bits(double n);
double display__bin(double n);
double report__results(double n);
double dd = 18;
double mm = 1;
double yyyy = 1998;
double day = 1000000;
double month = 10000;
//________________ 
double even__bits(double n) {
return ((n == 0) ? one
: ((remainder(n, two) == 0) ? even__bits(quotient(n, two))
: odd__bits(quotient(n, two))));
}
double odd__bits(double n) {
return ((n == 0) ? 0
: ((remainder(n, two) == 0) ? odd__bits(quotient(n, two))
: even__bits(quotient(n, two))));
}
double display__bin(double n) {
display(remainder(n, two));
return ((n == 0) ? 0
: display__bin(quotient(n, two)));
}
double report__results(double n) {
{//let
 double x(0);
display("Happy birthday to you!\n\t");
display(n);
display(" (decimal)\n\t");
n = display__bin(n);
display("(reversed binary)\n");
display("\teven?\t");
x = ((even__bits(n) == one) ? display("yes"),one
: display("no"),0);
newline();
display("\todd?\t");
x = ((odd__bits(n) == one) ? display("yes"),one
: display("no"),0);
newline();
return 0;
}//let
}
int main(){
 display(report__results(((dd * day) + (mm * month) + yyyy))); newline();
std::cin.get();
 return 0;
}

