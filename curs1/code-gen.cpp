/* $e10 */
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
int tCG::p14(){ //      E -> CONST
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
int tCG::p21(){ //  CONST -> $zero
	return 0;}
int tCG::p22(){ //  CONST -> $dec
	return 0;}
int tCG::p23(){ //    ADD -> HADD E1 )
	return 0;}
int tCG::p24(){ //   HADD -> ( +
	return 0;}
int tCG::p25(){ //   HADD -> HADD E1
	return 0;}
int tCG::p26(){ //    SUB -> HSUB E1 )
	return 0;}
int tCG::p27(){ //   HSUB -> ( - E
	return 0;}
int tCG::p28(){ //    DIV -> ( / E1 )
	return 0;}
int tCG::p29(){ //    MUL -> HMUL E1 )
	return 0;}
int tCG::p30(){ //   HMUL -> ( *
	return 0;}
int tCG::p31(){ //   HMUL -> HMUL E1
	return 0;}
int tCG::p32(){ //   COND -> HCOND CLAUS )
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
int tCG::p41(){ //    HIF -> ( if BOOL
	return 0;}
int tCG::p42(){ //  CPROC -> HCPROC )
	return 0;}
int tCG::p43(){ // HCPROC -> ( $id
	return 0;}
int tCG::p44(){ // HCPROC -> HCPROC E
	return 0;}
int tCG::p45(){ //   BOOL -> $bool
	return 0;}
int tCG::p46(){ //   BOOL -> CPRED
	return 0;}
int tCG::p47(){ //   BOOL -> REL
	return 0;}
int tCG::p48(){ //   BOOL -> OR
	return 0;}
int tCG::p49(){ //   BOOL -> ( not BOOL )
	return 0;}
int tCG::p50(){ //  CPRED -> HCPRED )
	return 0;}
int tCG::p51(){ // HCPRED -> ( $idq
	return 0;}
int tCG::p52(){ // HCPRED -> HCPRED E
	return 0;}
int tCG::p53(){ //    REL -> HREL E1 )
	return 0;}
int tCG::p54(){ //   HREL -> ( <= E
	return 0;}
int tCG::p55(){ //   HREL -> ( = E
	return 0;}
int tCG::p56(){ //     OR -> HOR BOOL )
	return 0;}
int tCG::p57(){ //    HOR -> ( or
	return 0;}
int tCG::p58(){ //    HOR -> HOR BOOL
	return 0;}
int tCG::p59(){ //    STR -> $str
	return 0;}
int tCG::p60(){ //    STR -> SIF
	return 0;}
int tCG::p61(){ //    SIF -> SIFTRUE STR )
	return 0;}
int tCG::p62(){ //SIFTRUE -> HIF STR
	return 0;}
int tCG::p63(){ //    SET -> HSET E1 )
	return 0;}
int tCG::p64(){ //   HSET -> ( set! $id
	return 0;}
int tCG::p65(){ //DISPSET -> ( display E1 )
	return 0;}
int tCG::p66(){ //DISPSET -> ( display BOOL )
	return 0;}
int tCG::p67(){ //DISPSET -> ( display STR )
	return 0;}
int tCG::p68(){ //DISPSET -> ( newline )
	return 0;}
int tCG::p69(){ //DISPSET -> SET
	return 0;}
int tCG::p70(){ //   DEFS -> DEF
	return 0;}
int tCG::p71(){ //   DEFS -> DEFS DEF
	return 0;}
int tCG::p72(){ //    DEF -> PRED
	return 0;}
int tCG::p73(){ //    DEF -> VAR
	return 0;}
int tCG::p74(){ //    DEF -> PROC
	return 0;}
int tCG::p75(){ //   PRED -> HPRED BOOL )
	return 0;}
int tCG::p76(){ //  HPRED -> PDPAR )
	return 0;}
int tCG::p77(){ //  PDPAR -> ( define ( $idq
	return 0;}
int tCG::p78(){ //  PDPAR -> PDPAR $id
	return 0;}
int tCG::p79(){ //    VAR -> VARINI )
	return 0;}
int tCG::p80(){ // VARINI -> HVAR CONST
	return 0;}
int tCG::p81(){ //   HVAR -> ( define $id
	return 0;}
int tCG::p82(){ //   PROC -> HPROC LETLOC )
	return 0;}
int tCG::p83(){ //   PROC -> HPROC E1 )
	return 0;}
int tCG::p84(){ //  HPROC -> PCPAR )
	return 0;}
int tCG::p85(){ //  HPROC -> HPROC DISPSET
	return 0;}
int tCG::p86(){ //  PCPAR -> ( define ( $id
	return 0;}
int tCG::p87(){ //  PCPAR -> PCPAR $id
	return 0;}
int tCG::p88(){ // LETLOC -> HLETLOC E1 )
	return 0;}
int tCG::p89(){ //HLETLOC -> LTVAR )
	return 0;}
int tCG::p90(){ //HLETLOC -> HLETLOC DISPSET
	return 0;}
int tCG::p91(){ //  LTVAR -> ( let ( CPROC
	return 0;}
int tCG::p92(){ //  LTVAR -> LTVAR CPROC
	return 0;}
//_____________________
int tCG::p93(){return 0;} int tCG::p94(){return 0;} 
int tCG::p95(){return 0;} int tCG::p96(){return 0;} 
int tCG::p97(){return 0;} int tCG::p98(){return 0;} 
int tCG::p99(){return 0;} int tCG::p100(){return 0;} 
int tCG::p101(){return 0;} int tCG::p102(){return 0;} 
int tCG::p103(){return 0;} int tCG::p104(){return 0;} 
int tCG::p105(){return 0;} int tCG::p106(){return 0;} 
int tCG::p107(){return 0;} int tCG::p108(){return 0;} 
int tCG::p109(){return 0;} int tCG::p110(){return 0;} 


