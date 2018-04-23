/* $mlisp18 */
#include "semantics.h"
#include "semempty.cpp"
using namespace std;
void tSM::init(){
  globals.clear();
  locals.clear();
  params.clear();
  scope =0; // ���������� �������
//���������:
  globals["e"] = 
//          properties
    tgName(VAR|DEFINED|BUILT);
  globals["pi"] = 
    tgName(VAR|DEFINED|BUILT);
//
// ������������ ���������:
  globals["remainder"] =
//          properties       arity
    tgName(PROC|DEFINED|BUILT, 2);
  globals["abs"] =
    tgName(PROC|DEFINED|BUILT, 1);
// ...
// ������ �� ���������, ������� ������������
// � ����� ����������� �������
	return;}
int tSM::p01(){ //       S -> PROG
 bool error=false;
 for(tGlobal::iterator it=globals.begin();
     it!=globals.end();
     ++it){
// ����������� ������� ���������� ����
// � � ��������� �� ������� ������� �����
// ���� ���������, �� �� ������������ ��������,
// � ����� ��������������, �� �� ������������
// ���������� ����������. ��������� �������� [!].
// ����� ����, ������������ ��� ���� ������������,
// �� �� �������������� ���������� � ����������,
// �� ����������� ����������. ��������� �������� [?].
//   it->first   ���
//   it->second  ������� ������
// ...
 }//for...
 if(error) return 1;
	return 0;}
int tSM::p13(){ //       E -> $id
	return 0;}
int tSM::p21(){ //       E -> CPROC
 string name = S1->name;
 int    count= S1->count;
 if(scope=2){// ��������� �������
    if(locals.count(name)){// ��������� ���
//p21-1.ss
      ferror_message="[!]Procedure application:"
        " local variable '"+name+
        "' shadows the procedure!";
      return 1;
    } // if locals ...
  } // if scope ...
 if(scope=1){// ������� ����������
    if(params.count(name)){// ��� ���������
//p21-2.ss
      ferror_message="[!]Procedure application:"
        " parameter '"+name+
        "' shadows the procedure!";
      return 1;
    }// if params...
 }// if scope... 
 do{
//  ����� ��� � ���������� �������
    tgName& ref = globals[name];
    if(ref.empty()){//����������� ���
//        ������� ����� ������� ������
      ref = tgName(PROC|USED, count);
      break;
     }

// ��� �������
    if(!ref.test(PROC)){//�� ���������
//p21-3.ss
      ferror_message="[!]Procedure application:"
        "  '"+ name+
        "' is not a procedure!";
      return 1;
    }

    if(ref.arity!=count){//����� ����������
//                �� ����� ����� ���������� 
     std::ostringstream buf;
     buf<<"[!]Procedure application: '"<<name<< "' "
//p21-4.ss
        <<(ref.test(DEFINED) ? "expects " // ���������
//                                      ��� ����������
//p21-5.ss

// ��������� ��� �� ����������, �� ��� ���������� �����         
               : "has been called already\n\t with "
          )
        <<ref.arity<<" argument"
        <<(ref.arity!=1 ?"s":"")
        <<", given: "<<count<<" !";
     ferror_message = buf.str();
     return 1;
    }
// ������ ���
    ref.set(USED);//��� ������������
   }while(false);

	return 0;}
int tSM::p50(){ //  HCPROC -> ( $id
 S1->name = S2->name;
 S1->count = 0;
	return 0;}
int tSM::p51(){ //  HCPROC -> HCPROC E
 ++S1->count;
	return 0;}
int tSM::p58(){ //   CPRED -> HCPRED )
	return 0;}
int tSM::p59(){ //  HCPRED -> ( $idq
	return 0;}
int tSM::p60(){ //  HCPRED -> HCPRED E
	return 0;}
int tSM::p78(){ //    HSET -> ( set! $id
	return 0;}
int tSM::p89(){ //    PRED -> HPRED BOOL )
	return 0;}
int tSM::p90(){ //   HPRED -> PDPAR )
	return 0;}
int tSM::p91(){ //   PDPAR -> ( define ( $idq
	return 0;}
int tSM::p92(){ //   PDPAR -> PDPAR $id
	return 0;}
int tSM::p95(){ //    HVAR -> ( define $id
	return 0;}
int tSM::p96(){ //    PROC -> HPROC LETLOC )
 params.clear();
 scope = 0;
	return 0;}
int tSM::p97(){ //    PROC -> HPROC E1 )
 params.clear();
 scope = 0;
	return 0;}
int tSM::p98(){ //   HPROC -> PCPAR )
 scope = 1;
	return 0;}
int tSM::p100(){ //   PCPAR -> ( define ( $id
 S1->name = S4->name;
 S1->count = 0;
	return 0;}
int tSM::p101(){ //   PCPAR -> PCPAR $id
    if(params.count(S2->name)){
//p101-1.ss
      ferror_message=
        "[!]Procedure definition: in '"
        +S1->name+
        "' duplicate parameter identifier '"
        +S2->name+"'!";
      return 1;
    }
    params.insert(S2->name);
 ++S1->count;
	return 0;}
int tSM::p102(){ //  LETLOC -> HLETLOC E1 )
 locals.clear();
	return 0;}
int tSM::p103(){ // HLETLOC -> LTVAR )
	return 0;}
int tSM::p105(){ //   LTVAR -> ( let ( CPROC
	return 0;}
int tSM::p106(){ //   LTVAR -> LTVAR CPROC
	return 0;}
//_____________________


