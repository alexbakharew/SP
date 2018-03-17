//               testadec.cpp
#include <iostream>
#include <iomanip>
#include "fsm.h"
using namespace std;

int main()
{
  tFSM Adec;
///////////////////////
//  Постоить автомат
//0
  addrange(Adec,0,'1','9',1);
  addstr(Adec,0,"+",2);
  addstr(Adec,0,"-",2);
  addstr(Adec,0,".",3);
  addstr(Adec,0,"0",4);
//1
  addrange(Adec,1,'0','9',1);
  addstr(Adec,1,"e",7);
  addstr(Adec,1,"E",7);
  addstr(Adec,1,".",6);
//2
  addstr(Adec,2,".",3);
  addrange(Adec,2,'1','9',1);
//3
  addrange(Adec,3,'0','9',3);
  addstr(Adec,3,"e",5);
  addstr(Adec,3,"E",5);
//4
  addstr(Adec,4,".",3);
//5
  addstr(Adec,5,"+",9);
  addstr(Adec,5,"-",9);
//6
  addrange(Adec,6,'0','9',6);
  addstr(Adec,6,"e",7);
  addstr(Adec,6,"E",7);
//7
  addstr(Adec,7,"+",8);
  addstr(Adec,7,"-",8);
//8
  addrange(Adec,8,'0','9',8);
//9
  addrange(Adec,9,'0','9',9);
//......................
 Adec.final(1);
 Adec.final(3);
 Adec.final(6);
 Adec.final(8);
 Adec.final(9);
///////////////////////
  cout << "*** BAT Adec "
       << "size=" << Adec.size()
       << " ***\n";
  cout << endl;

  while(true)
 {
  char input[81];
  cout << ">";
  cin.getline(input,81);
  if(!*input) break;
  int res = Adec.apply(input);
  cout << setw(res?res+1:0) << "^"
       << endl;
 }
 return 0;
}

