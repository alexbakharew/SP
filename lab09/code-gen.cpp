/* $m18 */
#include "code-gen.h"
using namespace std;
int tCG::p01(){ // S -> PROG
  string header ="/*  " + lex.Authentication()+"   */\n";
  header += "#include \"mlisp.h\"\n";
  header += declarations;
  header += "//________________ \n";
  S1->obj = header + S1->obj;
	return 0;}
int tCG::p02(){ //     PROG -> CALCS1
 S1->obj = "int main(){\n" + S1->obj
    + " std::cin.get();\n return 0;\n}\n";
	return 0;}
int tCG::p03(){ //     PROG -> DEFS
 S1->obj += "int main(){\n"
    " display(\"No calculations!\");newline();\n"
    " std::cin.get();\nreturn 0;\n}\n";
	return 0;}
int tCG::p04(){ //     PROG -> DEFS CALCS1
//?????????
	return 0;}
int tCG::p05(){ //   CALCS1 -> CALCS
	return 0;}
int tCG::p06(){ //    CALCS -> CALC
	return 0;}
int tCG::p07(){ //    CALCS -> CALCS CALC
 S1->obj += S2->obj;
	return 0;}
int tCG::p08(){ //     CALC -> E1
 S1->obj = " display("+S1->obj+"); newline();\n";
	return 0;}
int tCG::p09(){ //     CALC -> BOOL
//????
	return 0;}
int tCG::p10(){ //    CONST -> $zero
//????
	S1->obj = "0";
	return 0;}
int tCG::p11(){ //    CONST -> $dec
	S1->obj = S1->name;
	return 0;}
int tCG::p12(){ //       E1 -> E
	return 0;}
int tCG::p13(){ //        E -> $id
 S1->obj = decor(S1->name);
	return 0;}
int tCG::p14(){ //        E -> CONST
	return 0;}
int tCG::p15(){ //        E -> CPROC
	return 0;}
int tCG::p16(){ //        E -> MUL
	return 0;}
int tCG::p17(){ //    CPROC -> HCPROC )
//????
	return 0;}
int tCG::p18(){ //   HCPROC -> ( $id
//????
	return 0;}
int tCG::p19(){ //   HCPROC -> HCPROC E
//????
	return 0;}
int tCG::p20(){ //      MUL -> HMUL E1 )
 if(S1->count==0) //���� �������
    S1->obj = S2->obj;
 else            //����� ������ ��������
    S1->obj += S2->obj ;
 S1->count =0;
	return 0;}
int tCG::p21(){ //     HMUL -> ( *
	return 0;}
int tCG::p22(){ //     HMUL -> HMUL E1
 S1->obj += S2->obj + " * ";
 ++S1->count;
	return 0;}
int tCG::p23(){ //     BOOL -> $bool
//????
	return 0;}
int tCG::p24(){ //     BOOL -> REL
	return 0;}
int tCG::p25(){ //     BOOL -> ( not BOOL )
//????
	return 0;}
int tCG::p26(){ //      REL -> HREL E1 )
//????
	return 0;}
int tCG::p27(){ //     HREL -> ( = E
//????
	return 0;}
int tCG::p28(){ //      SET -> HSET E1 )
//????
	return 0;}
int tCG::p29(){ //     HSET -> ( set! $id
//????
	return 0;}
int tCG::p30(){ //      DEF -> PROC
	return 0;}
int tCG::p31(){ //     DEFS -> DEF
	return 0;}
int tCG::p32(){ //     DEFS -> DEFS DEF
//????
	return 0;}
int tCG::p33(){ //   PROC -> HPROC E1 )
//????
	return 0;}
int tCG::p34(){ //    HPROC -> PCPAR )
//????
	return 0;}
int tCG::p35(){ //    HPROC -> HPROC SET
//????
	return 0;}
int tCG::p36(){ //    PCPAR -> ( define ( $id
//????
	return 0;}
int tCG::p37(){ //    PCPAR -> PCPAR $id
//????
	return 0;}
//_____________________
int tCG::p38(){return 0;} int tCG::p39(){return 0;} 
int tCG::p40(){return 0;} int tCG::p41(){return 0;} 
int tCG::p42(){return 0;} int tCG::p43(){return 0;} 
int tCG::p44(){return 0;} int tCG::p45(){return 0;} 
int tCG::p46(){return 0;} int tCG::p47(){return 0;} 
int tCG::p48(){return 0;} int tCG::p49(){return 0;} 
int tCG::p50(){return 0;} int tCG::p51(){return 0;} 
int tCG::p52(){return 0;} int tCG::p53(){return 0;} 
int tCG::p54(){return 0;} int tCG::p55(){return 0;} 
int tCG::p56(){return 0;} int tCG::p57(){return 0;} 
int tCG::p58(){return 0;} int tCG::p59(){return 0;} 
int tCG::p60(){return 0;} int tCG::p61(){return 0;} 
int tCG::p62(){return 0;} int tCG::p63(){return 0;} 
int tCG::p64(){return 0;} int tCG::p65(){return 0;} 
int tCG::p66(){return 0;} int tCG::p67(){return 0;} 
int tCG::p68(){return 0;} int tCG::p69(){return 0;} 
int tCG::p70(){return 0;} int tCG::p71(){return 0;} 
int tCG::p72(){return 0;} int tCG::p73(){return 0;} 
int tCG::p74(){return 0;} int tCG::p75(){return 0;} 
int tCG::p76(){return 0;} int tCG::p77(){return 0;} 
int tCG::p78(){return 0;} int tCG::p79(){return 0;} 
int tCG::p80(){return 0;} int tCG::p81(){return 0;} 
int tCG::p82(){return 0;} int tCG::p83(){return 0;} 
int tCG::p84(){return 0;} int tCG::p85(){return 0;} 
int tCG::p86(){return 0;} int tCG::p87(){return 0;} 
int tCG::p88(){return 0;} int tCG::p89(){return 0;} 
int tCG::p90(){return 0;} int tCG::p91(){return 0;} 
int tCG::p92(){return 0;} int tCG::p93(){return 0;} 
int tCG::p94(){return 0;} int tCG::p95(){return 0;} 
int tCG::p96(){return 0;} int tCG::p97(){return 0;} 
int tCG::p98(){return 0;} int tCG::p99(){return 0;} 
int tCG::p100(){return 0;} int tCG::p101(){return 0;} 
int tCG::p102(){return 0;} int tCG::p103(){return 0;} 
int tCG::p104(){return 0;} int tCG::p105(){return 0;} 
int tCG::p106(){return 0;} int tCG::p107(){return 0;} 
int tCG::p108(){return 0;} int tCG::p109(){return 0;} 
int tCG::p110(){return 0;} 

