/* $e03 */
#include "code-gen.h"
using namespace std;
int tCG::p01(){ // S -> PROG
  string header ="/*  " + lex.Authentication()+"   */\n";
  header += "#include \"mlisp.h\"\n";
  header += declarations;
  header += "//________________ \n";
  S1->obj = header + S1->obj;
	return 0;}
int tCG::p02(){ //   PROG -> CALCS1
	return 0;}
int tCG::p03(){ //   PROG -> DEFS
	return 0;}
int tCG::p04(){ //   PROG -> DEFS CALCS1
	return 0;}
int tCG::p05(){ // CALCS1 -> CALCS
	return 0;}
int tCG::p06(){ //  CALCS -> CALC
	return 0;}
int tCG::p07(){ //  CALCS -> CALCS CALC
	return 0;}
int tCG::p08(){ //   CALC -> E1
	return 0;}
int tCG::p09(){ //   CALC -> BOOL
	return 0;}
int tCG::p10(){ //   CALC -> STR
	return 0;}
int tCG::p11(){ //   CALC -> DISPSET
	return 0;}
int tCG::p12(){ //     E1 -> E
	return 0;}
int tCG::p13(){ //      E -> $id
	return 0;}
int tCG::p14(){ //      E -> $zero
	return 0;}
int tCG::p15(){ //      E -> ADD
	return 0;}
int tCG::p16(){ //      E -> SUB
	return 0;}
int tCG::p17(){ //      E -> DIV
	return 0;}
int tCG::p18(){ //      E -> MUL
	return 0;}
int tCG::p19(){ //      E -> COND
	return 0;}
int tCG::p20(){ //      E -> CPROC
	return 0;}
int tCG::p21(){ //    ADD -> HADD E1 )
	return 0;}
int tCG::p22(){ //   HADD -> ( +
	return 0;}
int tCG::p23(){ //   HADD -> HADD E1
	return 0;}
int tCG::p24(){ //    SUB -> HSUB E1 )
	return 0;}
int tCG::p25(){ //   HSUB -> ( - E
	return 0;}
int tCG::p26(){ //    DIV -> HDIV E1 )
	return 0;}
int tCG::p27(){ //   HDIV -> ( /
	return 0;}
int tCG::p28(){ //   HDIV -> HDIV E1
	return 0;}
int tCG::p29(){ //    MUL -> HMUL E1 )
	return 0;}
int tCG::p30(){ //   HMUL -> ( *
	return 0;}
int tCG::p31(){ //   HMUL -> HMUL E1
	return 0;}
int tCG::p32(){ //   COND -> HCOND ELSE )
	return 0;}
int tCG::p33(){ //  HCOND -> ( cond
	return 0;}
int tCG::p34(){ //  HCOND -> HCOND CLAUS
	return 0;}
int tCG::p35(){ //  CLAUS -> HCLAUS E1 )
	return 0;}
int tCG::p36(){ // HCLAUS -> ( BOOL
	return 0;}
int tCG::p37(){ // HCLAUS -> HCLAUS DISPSET
	return 0;}
int tCG::p38(){ //   ELSE -> HELSE E1 )
	return 0;}
int tCG::p39(){ //  HELSE -> ( else
	return 0;}
int tCG::p40(){ //  HELSE -> HELSE DISPSET
	return 0;}
int tCG::p41(){ //  CPROC -> HCPROC )
	return 0;}
int tCG::p42(){ // HCPROC -> ( $id
	return 0;}
int tCG::p43(){ // HCPROC -> HCPROC E
	return 0;}
int tCG::p44(){ //   BOOL -> $bool
	return 0;}
int tCG::p45(){ //   BOOL -> CPRED
	return 0;}
int tCG::p46(){ //   BOOL -> REL
	return 0;}
int tCG::p47(){ //   BOOL -> OR
	return 0;}
int tCG::p48(){ //   BOOL -> ( not BOOL )
	return 0;}
int tCG::p49(){ //  CPRED -> HCPRED )
	return 0;}
int tCG::p50(){ // HCPRED -> ( $idq
	return 0;}
int tCG::p51(){ // HCPRED -> HCPRED E
	return 0;}
int tCG::p52(){ //    REL -> HREL E1 )
	return 0;}
int tCG::p53(){ //   HREL -> ( <= E
	return 0;}
int tCG::p54(){ //   HREL -> ( = E
	return 0;}
int tCG::p55(){ //     OR -> HOR BOOL )
	return 0;}
int tCG::p56(){ //    HOR -> ( or
	return 0;}
int tCG::p57(){ //    HOR -> HOR BOOL
	return 0;}
int tCG::p58(){ //    STR -> $str
	return 0;}
int tCG::p59(){ //    SET -> HSET E1 )
	return 0;}
int tCG::p60(){ //   HSET -> ( set! $id
	return 0;}
int tCG::p61(){ //DISPSET -> ( display E1 )
	return 0;}
int tCG::p62(){ //DISPSET -> ( display BOOL )
	return 0;}
int tCG::p63(){ //DISPSET -> ( display STR )
	return 0;}
int tCG::p64(){ //DISPSET -> ( newline )
	return 0;}
int tCG::p65(){ //DISPSET -> SET
	return 0;}
int tCG::p66(){ //   DEFS -> DEF
	return 0;}
int tCG::p67(){ //   DEFS -> DEFS DEF
	return 0;}
int tCG::p68(){ //    DEF -> PRED
	return 0;}
int tCG::p69(){ //    DEF -> VAR
	return 0;}
int tCG::p70(){ //    DEF -> PROC
	return 0;}
int tCG::p71(){ //   PRED -> HPRED BOOL )
	return 0;}
int tCG::p72(){ //  HPRED -> PDPAR )
	return 0;}
int tCG::p73(){ //  PDPAR -> ( define ( $idq
	return 0;}
int tCG::p74(){ //  PDPAR -> PDPAR $id
	return 0;}
int tCG::p75(){ //    VAR -> VARINI )
	return 0;}
int tCG::p76(){ // VARINI -> HVAR $zero
	return 0;}
int tCG::p77(){ // VARINI -> HVAR $dec
	return 0;}
int tCG::p78(){ //   HVAR -> ( define $id
	return 0;}
int tCG::p79(){ //   PROC -> HPROC LETLOC )
	return 0;}
int tCG::p80(){ //   PROC -> HPROC E1 )
	return 0;}
int tCG::p81(){ //  HPROC -> PCPAR )
	return 0;}
int tCG::p82(){ //  HPROC -> HPROC DISPSET
	return 0;}
int tCG::p83(){ //  PCPAR -> ( define ( $id
	return 0;}
int tCG::p84(){ //  PCPAR -> PCPAR $id
	return 0;}
int tCG::p85(){ // LETLOC -> HLETLOC E1 )
	return 0;}
int tCG::p86(){ //HLETLOC -> LTVAR )
	return 0;}
int tCG::p87(){ //HLETLOC -> HLETLOC DISPSET
	return 0;}
int tCG::p88(){ //  LTVAR -> ( let ( CPROC
	return 0;}
int tCG::p89(){ //  LTVAR -> LTVAR CPROC
	return 0;}
//_____________________
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

