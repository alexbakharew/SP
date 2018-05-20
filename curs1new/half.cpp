/*  BAT2018   */
#include "mlisp.h"
double one = 1;
double two = 2.0;
double three = 3;
double four = 4;
double half__interval__metod(double a, double b);
double __BAT2018__try(double neg__point, double pos__point);
bool close__enough_Q(double x, double y);
double average(double x, double y);
double root(double a, double b);
double tolerance = 0.00001;
double d106 = 106;
double d107 = 107;
double d025 = 0.25;
double d12502 = 1.2502;
double fun(double z);
//________________ 
double half__interval__metod(double a, double b) {
{//let
 double a__value(fun(a)), b__value(fun(b));
return (((a__value <= 0) || (b__value <= 0)) ? __BAT2018__try(a, b)
:((a__value <= 0) || (b__value <= 0)) ? __BAT2018__try(b, a)
: (b + one));
}//let
}
double __BAT2018__try(double neg__point, double pos__point) {
{//let
 double midpoint(average(neg__point, pos__point)), test__value(0);
display("+");
return (close__enough_Q(neg__point, pos__point) ? midpoint
: test__value = fun(midpoint),(!((test__value <= 0)) ? __BAT2018__try(neg__point, midpoint)
: (!((0 <= test__value)) ? __BAT2018__try(midpoint, pos__point)
: midpoint)));
}//let
}
bool close__enough_Q(double x, double y){
return !((tolerance <= abs((x - y))));
}
double average(double x, double y) {
return ((x + y) * ((double)1 / two));
}
double root(double a, double b) {
display("interval=\t[");
display(a);
display(" , ");
display(b);
display("]\n");
{//let
 double temp(half__interval__metod(a, b)), x(0);
newline();
display("discrepancy=\t");
display(fun(temp));
newline();
display("root=\t\t");
x = ((((temp - b) - one) == 0) ? display("[bad]"),one
: display("[good]"),two);
return temp;
}//let
}
double fun(double z) {
z = ((z - ((double)d106 / d107)) - ((double)one / e));
return ((d025 * expt(z, three)) + (z - d12502));
}
int main(){
 display(" BAT variant 6"); newline();
 display(root(two, three)); newline();
std::cin.get();
 return 0;
}

