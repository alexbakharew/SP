/*  xxx2018   */
#include "mlisp.h"
double __xxx2018__try(x);
//________________ 
double __xxx2018__try(x){
x = x * x;
return x;
}
int main(){
 display(__xxx2018__try(2)); newline();
 std::cin.get();
 return 0;
}

