#include "mlisp.h"
double tolerance  = 0.00001;
double fun(double z);
double half__interval__metod(double a, double b);
double __BAT__try(double neg__point, double pos__point);
double average(double a, double b);
bool close__enough_Q(double neg__point, double pos__point);
double root(double a, double b);
double fun(double z)
{
  z = z - (double)106/107 - (double)1/e;
	return  0.25 * expt(z, 3) + z - 1.2502;
}
double average(double a, double b)
{
	return (double)(a + b) / 2;
}
bool close__enough_Q(double x, double y)
{
  abs(x - y) < tolerance ? true : false;
}
double half__interval__metod(double a, double b)
{
	{
		double a__value = fun(a);
		double b__value = fun(b);
		return ((a__value < 0 && b__value > 0) ? __BAT__try(a, b)
		: (a__value > 0 && b__value < 0) ? __BAT__try(b, a)
		: b += 1);

	}
}
double __BAT__try(double neg__point, double pos__point)
{
	{
		double midpoint = average(neg__point, pos__point);
		double test__value = 0;
		display("+");
		return(close__enough_Q(neg__point, pos__point) ? midpoint
 	    : fun(midpoint) > 0 ? __BAT__try(neg__point, midpoint)
		: fun(midpoint) < 0 ? __BAT__try(midpoint, pos__point)	
		: midpoint);
	}
}
double root(double a, double b)
{
	display(" BAT variant 6");newline();
	display("interval=\t[");
	display(a);
	display(" , ");
	display(b);
	display("]\n");
	{
		double temp = half__interval__metod(a, b);
		newline();
		display("discrepancy=\t");
		display(fun(temp));
		newline();
		display("root=\t\t");
		display(((temp - b - 1) == 0) ? "[bad]" : "[good]");//  (display(if(=(- temp b 1)0)"[bad]" "[good]"))
		display(temp);
	}
}
int main()
{
	root(2, 3);
	std::cin.get();
}