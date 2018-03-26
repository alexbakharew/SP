//                 lexer.h 2018
// ATTENTION! THIS HEADER HAS SOME ERORRS, WHICH WILL BE FIXED AFTER REPORT CHECKING!
#ifndef LEXER_H
#define LEXER_H
#include "baselexer.h"
//********************************************
//*        Developed by  xxx		     *
//*             (c)  2018                    *
//********************************************
class tLexer:public tBaseLexer{
public:
// ������������ ��� ������������
 std::string Authentication()const{
                     return "BAT"
                +std::string("2018");}
//�����������
 tLexer():tBaseLexer(){
//������� ��������:
//  ���� Azero
    addstr  (Azero,0,"+-", 2);
    addstr  (Azero,0,"0",  1);
    addstr  (Azero,2,"0",  1);
  Azero.final(1);

//________________________________________
// �����
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
//________________________________________
// �������������
//0
    addrange(Aid,0,'a','z',1);
    addrange(Aid,0,'A','Z',1);
//1
    addrange(Aid,1,'a','z',1);
    addrange(Aid,1,'A','Z',1);
    addrange(Aid,1,'0','9',1);
    addstr(Aid,1,"-",1);
    addstr(Aid,1,"!",1);
//......................
  Aid.final(1);
//________________________________________
// ������������� ���������
//0
    addrange(Aidq,0,'a','z',1);
    addrange(Aidq,0,'A','Z',1);
    addstr(Aidq,0,"-",1);
//1
    addrange(Aidq,1,'a','z',1);
    addrange(Aidq,1,'A','Z',1);
    addrange(Aidq,1,'0','9',1);
    addstr(Aidq,1,"-",1);
    addstr(Aidq,1,"?",2);
//2
  Aidq.final(2);
}
};
#endif

