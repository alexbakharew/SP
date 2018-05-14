/*  xxx2018   */
#include "mlisp.h"
double __xxx2018__try(x);
double f(x, y);
//________________ 
double __xxx2018__try(x){
x = f(x, x);
return x;
}
double f(x, y){
return x * y;
}
int main(){
 display(__xxx2018__try(3)); newline();
 std::cin.get();
 return 0;
}

