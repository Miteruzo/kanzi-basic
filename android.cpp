//
//	hsp3cnv(3.5b5) generated source
//	[android.ax]
//
#include "hsp3r.h"

#define _HSP3CNV_DATE "2019/01/26"
#define _HSP3CNV_TIME "23:57:48"
#define _HSP3CNV_MAXVAR 37
#define _HSP3CNV_MAXHPI 16
#define _HSP3CNV_VERSION 0x350
#define _HSP3CNV_BOOTOPT 4096

/*-----------------------------------------------------------*/

static PVal *Var_0;
static PVal *Var_1;
static PVal *Var_2;
static PVal *Var_3;
static PVal *Var_4;
static PVal *Var_5;
static PVal *Var_6;
static PVal *Var_7;
static PVal *Var_8;
static PVal *Var_9;
static PVal *Var_10;
static PVal *Var_11;
static PVal *Var_12;
static PVal *Var_13;
static PVal *Var_14;
static PVal *Var_15;
static PVal *Var_16;
static PVal *Var_17;
static PVal *Var_18;
static PVal *Var_19;
static PVal *Var_20;
static PVal *Var_21;
static PVal *Var_22;
static PVal *Var_23;
static PVal *Var_24;
static PVal *Var_25;
static PVal *Var_26;
static PVal *Var_27;
static PVal *Var_28;
static PVal *Var_29;
static PVal *Var_30;
static PVal *Var_31;
static PVal *Var_32;
static PVal *Var_33;
static PVal *Var_34;
static PVal *Var_35;
static PVal *Var_36;

/*-----------------------------------------------------------*/

void __HspEntry( void ) {
	// Var initalize
	Var_0 = &mem_var[0];
	Var_1 = &mem_var[1];
	Var_2 = &mem_var[2];
	Var_3 = &mem_var[3];
	Var_4 = &mem_var[4];
	Var_5 = &mem_var[5];
	Var_6 = &mem_var[6];
	Var_7 = &mem_var[7];
	Var_8 = &mem_var[8];
	Var_9 = &mem_var[9];
	Var_10 = &mem_var[10];
	Var_11 = &mem_var[11];
	Var_12 = &mem_var[12];
	Var_13 = &mem_var[13];
	Var_14 = &mem_var[14];
	Var_15 = &mem_var[15];
	Var_16 = &mem_var[16];
	Var_17 = &mem_var[17];
	Var_18 = &mem_var[18];
	Var_19 = &mem_var[19];
	Var_20 = &mem_var[20];
	Var_21 = &mem_var[21];
	Var_22 = &mem_var[22];
	Var_23 = &mem_var[23];
	Var_24 = &mem_var[24];
	Var_25 = &mem_var[25];
	Var_26 = &mem_var[26];
	Var_27 = &mem_var[27];
	Var_28 = &mem_var[28];
	Var_29 = &mem_var[29];
	Var_30 = &mem_var[30];
	Var_31 = &mem_var[31];
	Var_32 = &mem_var[32];
	Var_33 = &mem_var[33];
	Var_34 = &mem_var[34];
	Var_35 = &mem_var[35];
	Var_36 = &mem_var[36];

	// goto *L0000
	TaskSwitch(0);
	return;
	TaskSwitch(1);
}

static void L0001( void ) {
	// #deffunc ondisplay str _prm0
	// _HspVar0 =_prm0
	PushFuncPrm(0); 
	VarSet(Var_0,0);
	// repeat
	PushFuncEnd(); 	PushVAP(Var_0,0); 
	PushIntfunc(2,1); 
	PushLabel(2); 
	PushLabel(29); Prgcmd(4,3); return;
	TaskSwitch(29);
}

static void L0029( void ) {
	// if (_HspVar1+cnt)>=50
	PushVar(Var_1,0); PushSysvar(4,0); CalcAddI(); PushInt(50); CalcGtEqI(); 
	if (HspIf()) { TaskSwitch(30); return; }
	// _HspVar1 =cnt*-1
	PushSysvar(4,0); PushInt(-1); CalcMulI(); 
	VarSet(Var_1,0);
	// _HspVar2 ++
	VarInc(Var_2,0);
	TaskSwitch(30);
}

static void L0030( void ) {
	// if (cnt+_HspVar1)<0
	PushSysvar(4,0); PushVar(Var_1,0); CalcAddI(); PushInt(0); CalcLtI(); 
	if (HspIf()) { TaskSwitch(31); return; }
	// _HspVar1 =0
	PushInt(0); 
	VarSet(Var_1,0);
	TaskSwitch(31);
}

static void L0031( void ) {
	// _HspVar3 (cnt+_HspVar1, _HspVar2)=((_HspVar4<<8|peek(_HspVar0, cnt)_HspVar5<<16)|_HspVar6<<24)|
	PushFuncEnd(); 	PushSysvar(4,0); 
	PushVAP(Var_0,0); 
PushIntfunc(9,2); PushVar(Var_4,0); PushInt(8); CalcLrI(); CalcOrI(); PushVar(Var_5,0); PushInt(16); CalcLrI(); CalcOrI(); PushVar(Var_6,0); PushInt(24); CalcLrI(); CalcOrI(); 
	PushVar(Var_2,0); 
	PushSysvar(4,0); PushVar(Var_1,0); CalcAddI(); 
	VarSet(Var_3,2);
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(2);
}

static void L0002( void ) {
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(0);
}

static void L0000( void ) {
	// screen 0, 8*50, 800
	PushInt(800); 
	PushInt(400);/*OPT*/ 
	PushInt(0); 
	Extcmd(42,3);
	// _HspVar7 =16*25-ginfo(13)
	PushFuncEnd(); 	PushInt(13); 
PushExtvar(256,1); PushInt(400);/*OPT*/ CalcSubI(); 
	VarSet(Var_7,0);
	// _HspVar8 =1.000000
	PushDouble(1.000000); 
	VarSet(Var_8,0);
	// _HspVar9 =0
	PushInt(0); 
	VarSet(Var_9,0);
	// _HspVar10 =0
	PushInt(0); 
	VarSet(Var_10,0);
	// _HspVar11 =strf("%c", 136)("%c", 234)+strf("%c", 234), strf("%c", 147)("%c", 241)+strf("%c", 241), strf("%c", 142)("%c", 79)+strf("%c", 79), strf("%c", 142)("%c", 108)+strf("%c", 108), strf("%c", 140)("%c", 220)+strf("%c", 220), strf("%c", 152)("%c", 90)+strf("%c", 90), strf("%c", 142)("%c", 181)+strf("%c", 181), strf("%c", 148)("%c", 170)+strf("%c", 170), strf("%c", 139)("%c", 227)+strf("%c", 227), strf("%c", 143)("%c", 92)+strf("%c", 92), strf("%c", 147)("%c", 249)+strf("%c", 249), strf("%c", 153)("%c", 191)+strf("%c", 191), strf("%c", 149)("%c", 83)+strf("%c", 83), strf("%c", 144)("%c", 231)+strf("%c", 231), strf("%c", 228)("%c", 221)+strf("%c", 221), strf("%c", 137)("%c", 173)+strf("%c", 173), strf("%c", 146)("%c", 155)+strf("%c", 155), strf("%c", 139)("%c", 158)+strf("%c", 158), strf("%c", 154)("%c", 180)+strf("%c", 180), strf("%c", 158)("%c", 96)+strf("%c", 96), strf("%c", 143)("%c", 245)+strf("%c", 245), strf("%c", 141)("%c", 97)+strf("%c", 97), strf("%c", 138)("%c", 192)+strf("%c", 192), strf("%c", 144)("%c", 179)+strf("%c", 179), strf("%c", 141)("%c", 218)+strf("%c", 218), strf("%c", 139)("%c", 201)+strf("%c", 201)
	PushFuncEnd(); 	PushInt(136); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(234); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet(Var_11,0);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(147); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(241); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(142); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(79); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(142); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(108); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(140); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(220); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(152); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(90); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(142); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(181); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(148); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(170); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(139); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(227); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(143); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(92); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(147); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(249); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(153); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(191); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(149); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(83); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(144); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(231); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(228); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(221); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(137); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(173); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(146); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(155); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(139); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(158); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(154); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(180); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(158); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(96); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(143); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(245); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(141); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(97); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(138); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(192); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(144); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(179); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(141); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(218); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	PushVarOffset(Var_11);
	PushFuncEnd(); 	PushInt(139); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(201); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_11);
	// _HspVar12 =strf("%c", 252)("%c", 75)+strf("%c", 75), strf("%c", 251)("%c", 242)+strf("%c", 242), strf("%c", 144)("%c", 212)+strf("%c", 212), strf("%c", 147)("%c", 141)+strf("%c", 141), strf("%c", 251)("%c", 141)+strf("%c", 141), strf("%c", 144)("%c", 133)+strf("%c", 133), strf("%c", 137)("%c", 169)+strf("%c", 169), strf("%c", 148)("%c", 146)+strf("%c", 146)
	PushFuncEnd(); 	PushInt(252); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(75); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet(Var_12,0);
	PushVarOffset(Var_12);
	PushFuncEnd(); 	PushInt(251); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(242); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_12);
	PushVarOffset(Var_12);
	PushFuncEnd(); 	PushInt(144); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(212); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_12);
	PushVarOffset(Var_12);
	PushFuncEnd(); 	PushInt(147); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(141); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_12);
	PushVarOffset(Var_12);
	PushFuncEnd(); 	PushInt(251); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(141); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_12);
	PushVarOffset(Var_12);
	PushFuncEnd(); 	PushInt(144); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(133); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_12);
	PushVarOffset(Var_12);
	PushFuncEnd(); 	PushInt(137); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(169); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_12);
	PushVarOffset(Var_12);
	PushFuncEnd(); 	PushInt(148); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(146); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_12);
	// _HspVar13 =0
	PushInt(0); 
	VarSet(Var_13,0);
	// _HspVar14 =((strf("%c", 230)("%c", 164)+strf("%c", 164))+strf("%c", 129))+strf("%c", 117), ((strf("%c", 136)("%c", 207)+strf("%c", 207))+strf("%c", 229))+strf("%c", 106), strf("%c", 139)("%c", 142)+strf("%c", 142), ((strf("%c", 139)("%c", 76)+strf("%c", 76))+strf("%c", 149))+strf("%c", 182), (strf("%c", 145)("%c", 150)+strf("%c", 150))+"\n", ((strf("%c", 143)("%c", 145)+strf("%c", 145))+strf("%c", 129))+strf("%c", 117), ((((strf("%c", 140)("%c", 174)+strf("%c", 174))+strf("%c", 149))+strf("%c", 164))+strf("%c", 144))+strf("%c", 165), strf("%c", 139)("%c", 76)+strf("%c", 76), (((strf("%c", 149)("%c", 210)+strf("%c", 210))+strf("%c", 143))+strf("%c", 83))+"\n", (((strf("%c", 141)("%c", 196)+strf("%c", 196))+strf("%c", 145))+strf("%c", 150))+"\n"
	PushFuncEnd(); 	PushInt(230); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(164); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(129); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(117); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet(Var_14,0);
	PushVarOffset(Var_14);
	PushFuncEnd(); 	PushInt(136); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(207); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(229); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(106); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_14);
	PushVarOffset(Var_14);
	PushFuncEnd(); 	PushInt(139); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(142); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_14);
	PushVarOffset(Var_14);
	PushFuncEnd(); 	PushInt(139); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(76); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(149); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(182); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_14);
	PushVarOffset(Var_14);
	PushFuncEnd(); 	PushInt(145); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(150); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushStr("\r"); CalcAddI(); 
	VarSet2(Var_14);
	PushVarOffset(Var_14);
	PushFuncEnd(); 	PushInt(143); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(145); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(129); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(117); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_14);
	PushVarOffset(Var_14);
	PushFuncEnd(); 	PushInt(140); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(174); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(149); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(164); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(144); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(165); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_14);
	PushVarOffset(Var_14);
	PushFuncEnd(); 	PushInt(139); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(76); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_14);
	PushVarOffset(Var_14);
	PushFuncEnd(); 	PushInt(149); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(210); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(143); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(83); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushStr("\r"); CalcAddI(); 
	VarSet2(Var_14);
	PushVarOffset(Var_14);
	PushFuncEnd(); 	PushInt(141); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(196); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(145); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(150); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushStr("\r"); CalcAddI(); 
	VarSet2(Var_14);
	// _HspVar15 =strf("%c", 129)("%c", 64)+strf("%c", 64), " "
	PushFuncEnd(); 	PushInt(129); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(64); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet(Var_15,0);
	PushVarOffset(Var_15);
	PushStr(" "); 
	VarSet2(Var_15);
	// _HspVar16 =((strf("%c", 149)("%c", 210)+strf("%c", 210))+strf("%c", 143))+strf("%c", 87), strf("%c", 151)("%c", 94)+strf("%c", 94), strf("%c", 147)("%c", 199)+strf("%c", 199), strf("%c", 137)("%c", 230)+strf("%c", 230), strf("%c", 147)("%c", 95)+strf("%c", 95), strf("%c", 140)("%c", 111)+strf("%c", 111), strf("%c", 143)("%c", 93)+strf("%c", 93), strf("%c", 156)("%c", 110)+strf("%c", 110), strf("%c", 145)("%c", 177)+strf("%c", 177), strf("%c", 143)("%c", 230)+strf("%c", 230), strf("%c", 150)("%c", 156)+strf("%c", 156), strf("%c", 151)("%c", 93)+strf("%c", 93), strf("%c", 151)("%c", 144)+strf("%c", 144), strf("%c", 137)("%c", 126)+strf("%c", 126), strf("%c", 141)("%c", 134)+strf("%c", 134), strf("%c", 148)("%c", 93)+strf("%c", 93), strf("%c", 141)("%c", 149)+strf("%c", 149), strf("%c", 144)("%c", 194)+strf("%c", 194), strf("%c", 151)("%c", 206)+strf("%c", 206), strf("%c", 145)("%c", 206)+strf("%c", 206), strf("%c", 137)("%c", 243)+strf("%c", 243), strf("%c", 139)("%c", 65)+strf("%c", 65), strf("%c", 138)("%c", 214)+strf("%c", 214), strf("%c", 142)("%c", 251)+strf("%c", 251), strf("%c", 148)("%c", 178)+strf("%c", 178), strf("%c", 150)("%c", 212)+strf("%c", 212)
	PushFuncEnd(); 	PushInt(149); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(210); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(143); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(87); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet(Var_16,0);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(151); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(94); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(147); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(199); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(137); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(230); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(147); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(95); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(140); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(111); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(143); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(93); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(156); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(110); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(145); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(177); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(143); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(230); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(150); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(156); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(151); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(93); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(151); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(144); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(137); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(126); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(141); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(134); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(148); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(93); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(141); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(149); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(144); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(194); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(151); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(206); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(145); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(206); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(137); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(243); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(139); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(65); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(138); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(214); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(142); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(251); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(148); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(178); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(150); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(212); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	// _HspVar17 =((strf("%c", 149)("%c", 210)+strf("%c", 210))+strf("%c", 143))+strf("%c", 83), strf("%c", 228)("%c", 111)+strf("%c", 111), strf("%c", 230)("%c", 164)+strf("%c", 164), strf("%c", 225)("%c", 96)+strf("%c", 96), strf("%c", 234)("%c", 121)+strf("%c", 121), strf("%c", 227)("%c", 83)+strf("%c", 83), strf("%c", 156)("%c", 110)+strf("%c", 110), strf("%c", 152)("%c", 184)+strf("%c", 184), strf("%c", 227)("%c", 148)+strf("%c", 148), strf("%c", 152)("%c", 169)+strf("%c", 169), strf("%c", 228)("%c", 221)+strf("%c", 221), strf("%c", 233)("%c", 80)+strf("%c", 80), strf("%c", 152)("%c", 170)+strf("%c", 170), strf("%c", 154)("%c", 162)+strf("%c", 162), strf("%c", 229)("%c", 106)+strf("%c", 106), strf("%c", 228)("%c", 73)+strf("%c", 73), strf("%c", 252)("%c", 75)+strf("%c", 75), strf("%c", 251)("%c", 242)+strf("%c", 242), strf("%c", 251)("%c", 141)+strf("%c", 141), strf("%c", 155)("%c", 148)+strf("%c", 148), strf("%c", 154)("%c", 211)+strf("%c", 211), strf("%c", 159)("%c", 100)+strf("%c", 100), strf("%c", 232)("%c", 144)+strf("%c", 144), strf("%c", 157)("%c", 190)+strf("%c", 190), strf("%c", 157)("%c", 85)+strf("%c", 85), strf("%c", 227)("%c", 164)+strf("%c", 164)
	PushFuncEnd(); 	PushInt(149); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(210); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(143); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); PushFuncEnd(); 	PushInt(83); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet(Var_17,0);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(228); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(111); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(230); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(164); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(225); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(96); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(234); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(121); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(227); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(83); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(156); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(110); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(152); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(184); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(227); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(148); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(152); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(169); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(228); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(221); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(233); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(80); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(152); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(170); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(154); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(162); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(229); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(106); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(228); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(73); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(252); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(75); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(251); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(242); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(251); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(141); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(155); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(148); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(154); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(211); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(159); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(100); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(232); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(144); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(157); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(190); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(157); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(85); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(227); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(164); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	// _HspVar16 (length(_HspVar16))=strf("%c", 137)("%c", 158)+strf("%c", 158), strf("%c", 146)("%c", 102)+strf("%c", 102), strf("%c", 136)("%c", 235)+strf("%c", 235), strf("%c", 145)("%c", 111)+strf("%c", 111), strf("%c", 151)("%c", 136)+strf("%c", 136), strf("%c", 148)("%c", 173)+strf("%c", 173), strf("%c", 149)("%c", 207)+strf("%c", 207), strf("%c", 144)("%c", 148)+strf("%c", 148), strf("%c", 145)("%c", 139)+strf("%c", 139), strf("%c", 140)("%c", 97)+strf("%c", 97)
	PushFuncEnd(); 	PushInt(137); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(158); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	PushFuncEnd(); 	PushVAP(Var_16,0); 
PushIntfunc(3,1); 
	VarSet(Var_16,1);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(146); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(102); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(136); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(235); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(145); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(111); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(151); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(136); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(148); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(173); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(149); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(207); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(144); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(148); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(145); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(139); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	PushVarOffset(Var_16);
	PushFuncEnd(); 	PushInt(140); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(97); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_16);
	// _HspVar17 (length(_HspVar17))=strf("%c", 156)("%c", 228)+strf("%c", 228), strf("%c", 157)("%c", 208)+strf("%c", 208), strf("%c", 154)("%c", 227)+strf("%c", 227), strf("%c", 153)("%c", 212)+strf("%c", 212), strf("%c", 152)("%c", 210)+strf("%c", 210), strf("%c", 225)("%c", 162)+strf("%c", 162), strf("%c", 157)("%c", 204)+strf("%c", 204), strf("%c", 157)("%c", 201)+strf("%c", 201), strf("%c", 226)("%c", 120)+strf("%c", 120), strf("%c", 156)("%c", 108)+strf("%c", 108)
	PushFuncEnd(); 	PushInt(156); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(228); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	PushFuncEnd(); 	PushVAP(Var_17,0); 
PushIntfunc(3,1); 
	VarSet(Var_17,1);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(157); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(208); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(154); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(227); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(153); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(212); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(152); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(210); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(225); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(162); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(157); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(204); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(157); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(201); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(226); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(120); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	PushVarOffset(Var_17);
	PushFuncEnd(); 	PushInt(156); 
	PushStr("%c"); 
PushIntfunc(259,2); PushFuncEnd(); 	PushInt(108); 
	PushStr("%c"); 
PushIntfunc(259,2); CalcAddI(); 
	VarSet2(Var_17);
	// dim _HspVar3, 50, 25
	PushInt(25); 
	PushInt(50); 
	PushVAP(Var_3,0); 
	Prgcmd(9,3);
	// sdim _HspVar18, 256, 65529
	PushInt(65529); 
	PushInt(256); 
	PushVAP(Var_18,0); 
	Prgcmd(10,3);
	// pos 0, 16*25
	PushInt(400);/*OPT*/ 
	PushInt(0); 
	Extcmd(17,2);
	// repeat
	PushInt(16); 
	PushLabel(3); 
	PushLabel(32); Prgcmd(4,3); return;
	TaskSwitch(32);
}

static void L0032( void ) {
	// if cnt=10
	PushSysvar(4,0); PushInt(10); CalcEqI(); 
	if (HspIf()) { TaskSwitch(33); return; }
	// pos 64, 16*25
	PushInt(400);/*OPT*/ 
	PushInt(64); 
	Extcmd(17,2);
	TaskSwitch(33);
}

static void L0033( void ) {
	// button 	gosub strf("%X", cnt), *L0004
	PushLabel(4); 
	PushFuncEnd(); 	PushSysvar(4,0); 
		PushStr("%X"); 
	PushIntfunc(259,2); 
	PushInt(1); Extcmd(0,3);
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(3);
}

static void L0003( void ) {
	// pos 64, (16*2532*7)+
	PushInt(624);/*OPT*/ 
	PushInt(64); 
	Extcmd(17,2);
	// button 	gosub "PUT", *L0005
	PushLabel(5); 
	PushStr("PUT"); 
	PushInt(1); Extcmd(0,3);
	// button 	gosub "CLR", *L0006
	PushLabel(6); 
	PushStr("CLR"); 
	PushInt(1); Extcmd(0,3);
	// pos 192, (16*25)+256
	PushInt(656);/*OPT*/ 
	PushInt(192); 
	Extcmd(17,2);
	// button 	gosub "←", *L0007
	PushLabel(7); 
	PushStr("←"); 
	PushInt(1); Extcmd(0,3);
	// pos 320, (16*25)+256
	PushInt(656);/*OPT*/ 
	PushInt(320); 
	Extcmd(17,2);
	// button 	gosub "→", *L0008
	PushLabel(8); 
	PushStr("→"); 
	PushInt(1); Extcmd(0,3);
	// pos 256, (16*25)+224
	PushInt(624);/*OPT*/ 
	PushInt(256); 
	Extcmd(17,2);
	// button 	gosub "↑", *L0009
	PushLabel(9); 
	PushStr("↑"); 
	PushInt(1); Extcmd(0,3);
	// button 	gosub "RETURN", *L000a
	PushLabel(10); 
	PushStr("RETURN"); 
	PushInt(1); Extcmd(0,3);
	// button 	gosub "↓", *L000b
	PushLabel(11); 
	PushStr("↓"); 
	PushInt(1); Extcmd(0,3);
	// pos 256, (16*25)+64
	PushInt(464);/*OPT*/ 
	PushInt(256); 
	Extcmd(17,2);
	// button 	gosub "+", *L000c
	PushLabel(12); 
	PushStr("+"); 
	PushInt(1); Extcmd(0,3);
	// button 	gosub "-", *L000d
	PushLabel(13); 
	PushStr("-"); 
	PushInt(1); Extcmd(0,3);
	// _HspVar19 =""
	PushStr(""); 
	VarSet(Var_19,0);
	// _HspVar4 =0
	PushInt(0); 
	VarSet(Var_4,0);
	// _HspVar5 =255
	PushInt(255); 
	VarSet(Var_5,0);
	// _HspVar6 =255
	PushInt(255); 
	VarSet(Var_6,0);
	// ondisplay strf("%c%c%c%c%s%c%c%c%c%c%c%c%c%c%c%s%c%c%s", 138, 191, 142, 154, " BASIC ", 129, 124, 148, 124, 138, 238, 140, 78, 129, 124, (" ("+strf("%d.%d.%d.%d", 0, 8, 0, 134))+" ", 229, 106, ")")
	PushFuncEnd(); 	PushStr(")"); 
		PushInt(106); 
		PushInt(229); 
		PushStr(" ("); PushFuncEnd(); 	PushInt(134); 
		PushInt(0); 
		PushInt(8); 
		PushInt(0); 
		PushStr("%d.%d.%d.%d"); 
	PushIntfunc(259,5); CalcAddI(); PushStr(" "); CalcAddI(); 
		PushInt(124); 
		PushInt(129); 
		PushInt(78); 
		PushInt(140); 
		PushInt(238); 
		PushInt(138); 
		PushInt(124); 
		PushInt(148); 
		PushInt(124); 
		PushInt(129); 
		PushStr(" BASIC "); 
		PushInt(154); 
		PushInt(142); 
		PushInt(191); 
		PushInt(138); 
		PushStr("%c%c%c%c%s%c%c%c%c%c%c%c%c%c%c%s%c%c%s"); 
	PushIntfunc(259,20); 
	PushLabel(34);
	Modcmd(0,1);
	return;
}

static void L0034( void ) {
	// _HspVar2 ++
	VarInc(Var_2,0);
	// ondisplay strf("%s%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", "(C)", 143, 188, 147, 99, 151, 76, 146, 152, 141, 236, 158, 220, 137, 151, 149, 189, 144, 172, 142, 79, 143, 92, 148, 78)
	PushFuncEnd(); 	PushInt(78); 
		PushInt(148); 
		PushInt(92); 
		PushInt(143); 
		PushInt(79); 
		PushInt(142); 
		PushInt(172); 
		PushInt(144); 
		PushInt(189); 
		PushInt(149); 
		PushInt(151); 
		PushInt(137); 
		PushInt(220); 
		PushInt(158); 
		PushInt(236); 
		PushInt(141); 
		PushInt(152); 
		PushInt(146); 
		PushInt(76); 
		PushInt(151); 
		PushInt(99); 
		PushInt(147); 
		PushInt(188); 
		PushInt(143); 
		PushStr("(C)"); 
		PushStr("%s%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c"); 
	PushIntfunc(259,26); 
	PushLabel(35);
	Modcmd(0,1);
	return;
}

static void L0035( void ) {
	// _HspVar2 ++
	VarInc(Var_2,0);
	// ondisplay strf("%c%c%c%c%c%d%c%c%c%c%c", 148, 92, 151, 112, 32, (_HspVar18)(_HspVar18)*length(_HspVar18), 32, 142, 154, 144, 223)
	PushFuncEnd(); 	PushInt(223); 
		PushInt(144); 
		PushInt(154); 
		PushInt(142); 
		PushInt(32); 
		PushFuncEnd(); 	PushVAP(Var_18,0); 
	PushIntfunc(20,1); PushFuncEnd(); 	PushVAP(Var_18,0); 
	PushIntfunc(3,1); CalcMulI(); 
		PushInt(32); 
		PushInt(112); 
		PushInt(151); 
		PushInt(92); 
		PushInt(148); 
		PushStr("%c%c%c%c%c%d%c%c%c%c%c"); 
	PushIntfunc(259,12); 
	PushLabel(36);
	Modcmd(0,1);
	return;
}

static void L0036( void ) {
	// _HspVar2 ++
	VarInc(Var_2,0);
	// _HspVar4 =255
	PushInt(255); 
	VarSet(Var_4,0);
	// _HspVar5 =255
	PushInt(255); 
	VarSet(Var_5,0);
	// _HspVar6 =255
	PushInt(255); 
	VarSet(Var_6,0);
	// ondisplay "OK"
	PushStr("OK"); 
	PushLabel(37);
	Modcmd(0,1);
	return;
}

static void L0037( void ) {
	// _HspVar1 =0
	PushInt(0); 
	VarSet(Var_1,0);
	// _HspVar2 +=2
	PushInt(2); 
	VarCalc(Var_2,0,0);
	// sdim _HspVar20, 65536*4
	PushInt(262144);/*OPT*/ 
	PushVAP(Var_20,0); 
	Prgcmd(10,2);
	// bload "utf8.dat", _HspVar20, 65536*4
	PushInt(262144);/*OPT*/ 
	PushVAP(Var_20,0); 
	PushStr("utf8.dat"); 
	Intcmd(22,3);
	// repeat
	PushLabel(14); 
	PushLabel(38); Prgcmd(4,2); return;
	TaskSwitch(38);
}

static void L0038( void ) {
	//  _HspVar21, 0
	PushInt(0); 
	PushVAP(Var_21,0); 
	Extcmd(70,2);
	// if _HspVar21(0)
		PushInt(0); 
	PushVAP(Var_21,1); 
	if (HspIf()) { TaskSwitch(39); return; }
	// if (((0<=mousex8*50<mousex)&0<=mousey)&_HspVar22*_HspVar13-25*16<mousey)&
	PushInt(0); PushFuncEnd(); PushExtvar(0,0); CalcLtEqI(); PushFuncEnd(); PushExtvar(0,0); PushInt(400);/*OPT*/ CalcLtI(); CalcAndI(); PushInt(0); PushFuncEnd(); PushExtvar(1,0); CalcLtEqI(); CalcAndI(); PushFuncEnd(); PushExtvar(1,0); PushInt(16); PushInt(25); PushVar(Var_22,0); PushVar(Var_13,0); CalcMulI(); CalcSubI(); CalcMulI(); CalcLtI(); CalcAndI(); 
	if (HspIf()) { TaskSwitch(40); return; }
	// if (((mousex+_HspVar9_HspVar8*8)/!=_HspVar1mousey+_HspVar10_HspVar8*16)/!=_HspVar2)|
	PushVar(Var_1,0); PushFuncEnd(); PushExtvar(0,0); PushVar(Var_9,0); CalcAddI(); PushVar(Var_8,0); PushInt(8); CalcMulI(); CalcDivI(); CalcNeI(); PushVar(Var_2,0); PushFuncEnd(); PushExtvar(1,0); PushVar(Var_10,0); CalcAddI(); PushVar(Var_8,0); PushInt(16); CalcMulI(); CalcDivI(); CalcNeI(); CalcOrI(); 
	if (HspIf()) { TaskSwitch(41); return; }
	// _HspVar1 =(mousex+_HspVar9_HspVar8*8)/
	PushFuncEnd(); PushExtvar(0,0); PushVar(Var_9,0); CalcAddI(); PushVar(Var_8,0); PushInt(8); CalcMulI(); CalcDivI(); 
	VarSet(Var_1,0);
	// _HspVar2 =(mousey+_HspVar10_HspVar8*16)/
	PushFuncEnd(); PushExtvar(1,0); PushVar(Var_10,0); CalcAddI(); PushVar(Var_8,0); PushInt(16); CalcMulI(); CalcDivI(); 
	VarSet(Var_2,0);
	// _HspVar23 =0
	PushInt(0); 
	VarSet(Var_23,0);
	//  "vibrate", 10
	PushInt(10); 
	PushStr("vibrate"); 
	Extcmd(74,2);
	TaskSwitch(41);
}

static void L0041( void ) {
	TaskSwitch(40);
}

static void L0040( void ) {
	TaskSwitch(39);
}

static void L0039( void ) {
	// redraw 0
	PushInt(0); 
	Extcmd(27,1);
	// color 0, 0, 0
	PushInt(0); 
	PushInt(0); 
	PushInt(0); 
	Extcmd(24,3);
	// boxf 0, 0, 8*50, 16*25
	PushInt(400);/*OPT*/ 
	PushInt(400);/*OPT*/ 
	PushInt(0); 
	PushInt(0); 
	Extcmd(49,4);
	// font "ＭＳ ゴシック", _HspVar8*16
	PushVar(Var_8,0); PushInt(16); CalcMulI(); 
	PushStr("ＭＳ ゴシック"); 
	Extcmd(20,2);
	// if _HspVar13
	PushVAP(Var_13,0); 
	if (HspIf()) { TaskSwitch(42); return; }
	// if _HspVar24
	PushVAP(Var_24,0); 
	if (HspIf()) { TaskSwitch(43); return; }
	// color 255, 255, 0
	PushInt(0); 
	PushInt(255); 
	PushInt(255); 
	Extcmd(24,3);
	// pos 0, 25-1*16
	PushInt(384);/*OPT*/ 
	PushInt(0); 
	Extcmd(17,2);
	// pos ginfo(22), (0.250000*_HspVar8)*16-ginfo(23)
	PushFuncEnd(); 	PushInt(23); 
	PushExtvar(256,1); PushDouble(0.250000); PushVar(Var_8,0); CalcMulI(); PushInt(16); CalcMulI(); CalcSubI(); 
	PushFuncEnd(); 	PushInt(22); 
	PushExtvar(256,1); 
	Extcmd(17,2);
	// mes "〔範圍選択中〕"
	PushStr("〔範圍選択中〕"); 
	Extcmd(15,1);
	TaskSwitch(44);
}

static void L0043( void ) {
	// else
	// if (((8*501+_HspVar25*86*10)+11)*)>=
	PushInt(400);/*OPT*/ PushInt(8); PushInt(1); PushVar(Var_25,0); CalcAddI(); CalcMulI(); PushInt(71);/*OPT*/ CalcMulI(); CalcGtEqI(); 
	if (HspIf()) { TaskSwitch(45); return; }
	// repeat
	PushInt(10); 
	PushLabel(15); 
	PushLabel(46); Prgcmd(4,3); return;
	TaskSwitch(46);
}

static void L0046( void ) {
	// _HspVar26 =(((double((((((8*501+_HspVar25*86*10)+8)*)-cnt>=5)+1)*)/31+_HspVar25*87*cntcnt>=5)-)*)+
	PushFuncEnd(); 	PushInt(400);/*OPT*/ PushInt(8); PushInt(1); PushVar(Var_25,0); CalcAddI(); CalcMulI(); PushInt(68);/*OPT*/ CalcMulI(); CalcSubI(); PushSysvar(4,0); PushInt(5); CalcGtEqI(); PushInt(1); CalcAddI(); CalcMulI(); 
PushIntfunc(389,1); PushInt(3); CalcDivI(); PushInt(8); PushInt(1); PushVar(Var_25,0); CalcAddI(); CalcMulI(); PushInt(7); PushSysvar(4,0); CalcMulI(); PushSysvar(4,0); PushInt(5); CalcGtEqI(); CalcSubI(); CalcMulI(); CalcAddI(); 
	VarSet(Var_26,0);
	// color 255, 255, 255
	PushInt(255); 
	PushInt(255); 
	PushInt(255); 
	Extcmd(24,3);
	// boxf _HspVar26, 25-1*16, (1+_HspVar25*8)*6+_HspVar26, 16*25
	PushInt(400);/*OPT*/ 
	PushVar(Var_26,0); PushInt(8); PushInt(1); PushVar(Var_25,0); CalcAddI(); CalcMulI(); PushInt(6); CalcMulI(); CalcAddI(); 
	PushInt(384);/*OPT*/ 
	PushVAP(Var_26,0); 
	Extcmd(49,4);
	// color 0, 0, 0
	PushInt(0); 
	PushInt(0); 
	PushInt(0); 
	Extcmd(24,3);
	// pos _HspVar26, 25-1*16
	PushInt(384);/*OPT*/ 
	PushVAP(Var_26,0); 
	Extcmd(17,2);
	// pos ginfo(22), (0.250000*_HspVar8)*16-ginfo(23)
	PushFuncEnd(); 	PushInt(23); 
	PushExtvar(256,1); PushDouble(0.250000); PushVar(Var_8,0); CalcMulI(); PushInt(16); CalcMulI(); CalcSubI(); 
	PushFuncEnd(); 	PushInt(22); 
	PushExtvar(256,1); 
	Extcmd(17,2);
	// mes strmid(_HspVar14(cnt), 0, 6)
	PushFuncEnd(); 	PushInt(6); 
		PushInt(0); 
			PushSysvar(4,0); 
	PushVAP(Var_14,1); 
	PushIntfunc(257,3); 
	Extcmd(15,1);
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(15);
}

static void L0015( void ) {
	TaskSwitch(47);
}

static void L0045( void ) {
	// else
	// repeat
	PushInt(5); 
	PushLabel(16); 
	PushLabel(48); Prgcmd(4,3); return;
	TaskSwitch(48);
}

static void L0048( void ) {
	// _HspVar26 =((double((((8*501+_HspVar25*86*5)+4)*)-)/21+_HspVar25*87*cnt)*)+
	PushFuncEnd(); 	PushInt(400);/*OPT*/ PushInt(8); PushInt(1); PushVar(Var_25,0); CalcAddI(); CalcMulI(); PushInt(34);/*OPT*/ CalcMulI(); CalcSubI(); 
PushIntfunc(389,1); PushInt(2); CalcDivI(); PushInt(8); PushInt(1); PushVar(Var_25,0); CalcAddI(); CalcMulI(); PushInt(7); PushSysvar(4,0); CalcMulI(); CalcMulI(); CalcAddI(); 
	VarSet(Var_26,0);
	// color 255, 255, 255
	PushInt(255); 
	PushInt(255); 
	PushInt(255); 
	Extcmd(24,3);
	// boxf _HspVar26, 25-1*16, (1+_HspVar25*8)*6+_HspVar26, 16*25
	PushInt(400);/*OPT*/ 
	PushVar(Var_26,0); PushInt(8); PushInt(1); PushVar(Var_25,0); CalcAddI(); CalcMulI(); PushInt(6); CalcMulI(); CalcAddI(); 
	PushInt(384);/*OPT*/ 
	PushVAP(Var_26,0); 
	Extcmd(49,4);
	// color 0, 0, 0
	PushInt(0); 
	PushInt(0); 
	PushInt(0); 
	Extcmd(24,3);
	// pos _HspVar26, 25-1*16
	PushInt(384);/*OPT*/ 
	PushVAP(Var_26,0); 
	Extcmd(17,2);
	// pos ginfo(22), (0.250000*_HspVar8)*16-ginfo(23)
	PushFuncEnd(); 	PushInt(23); 
	PushExtvar(256,1); PushDouble(0.250000); PushVar(Var_8,0); CalcMulI(); PushInt(16); CalcMulI(); CalcSubI(); 
	PushFuncEnd(); 	PushInt(22); 
	PushExtvar(256,1); 
	Extcmd(17,2);
	// mes strmid(_HspVar14(cnt), 0, 6)
	PushFuncEnd(); 	PushInt(6); 
		PushInt(0); 
			PushSysvar(4,0); 
	PushVAP(Var_14,1); 
	PushIntfunc(257,3); 
	Extcmd(15,1);
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(47);
}

static void L0047( void ) {
	TaskSwitch(44);
}

static void L0044( void ) {
	TaskSwitch(42);
}

static void L0042( void ) {
	TaskSwitch(16);
}

static void L0016( void ) {
	// if (_HspVar23%32)<16
	PushVar(Var_23,0); PushInt(32); CalcModI(); PushInt(16); CalcLtI(); 
	if (HspIf()) { TaskSwitch(49); return; }
	// _HspVar21 =peek(_HspVar3, ((_HspVar2*50)+_HspVar1)*4)
	PushFuncEnd(); 	PushVar(Var_2,0); PushInt(50); CalcMulI(); PushVar(Var_1,0); CalcAddI(); PushInt(4); CalcMulI(); 
	PushVAP(Var_3,0); 
PushIntfunc(9,2); 
	VarSet(Var_21,0);
	// color 255, 255, 255
	PushInt(255); 
	PushInt(255); 
	PushInt(255); 
	Extcmd(24,3);
	// if (((129<=_HspVar21_HspVar21<=159)&224<=_HspVar21_HspVar21<=252)&)|
	PushInt(129); PushVar(Var_21,0); CalcLtEqI(); PushVar(Var_21,0); PushInt(159); CalcLtEqI(); CalcAndI(); PushInt(224); PushVar(Var_21,0); CalcLtEqI(); PushVar(Var_21,0); PushInt(252); CalcLtEqI(); CalcAndI(); CalcOrI(); 
	if (HspIf()) { TaskSwitch(50); return; }
	// boxf ((_HspVar8*8)*_HspVar1)-_HspVar9, ((_HspVar8*16)*_HspVar2)-_HspVar10, ((_HspVar8*8_HspVar1+2)*)-_HspVar9, ((_HspVar8*16_HspVar2+1)*)-_HspVar10
	PushVar(Var_8,0); PushInt(16); CalcMulI(); PushVar(Var_2,0); PushInt(1); CalcAddI(); CalcMulI(); PushVar(Var_10,0); CalcSubI(); 
	PushVar(Var_8,0); PushInt(8); CalcMulI(); PushVar(Var_1,0); PushInt(2); CalcAddI(); CalcMulI(); PushVar(Var_9,0); CalcSubI(); 
	PushVar(Var_8,0); PushInt(16); CalcMulI(); PushVar(Var_2,0); CalcMulI(); PushVar(Var_10,0); CalcSubI(); 
	PushVar(Var_8,0); PushInt(8); CalcMulI(); PushVar(Var_1,0); CalcMulI(); PushVar(Var_9,0); CalcSubI(); 
	Extcmd(49,4);
	TaskSwitch(51);
}

static void L0050( void ) {
	// else
	// boxf ((_HspVar8*8)*_HspVar1)-_HspVar9, ((_HspVar8*16)*_HspVar2)-_HspVar10, ((_HspVar8*8_HspVar1+1)*)-_HspVar9, ((_HspVar8*16_HspVar2+1)*)-_HspVar10
	PushVar(Var_8,0); PushInt(16); CalcMulI(); PushVar(Var_2,0); PushInt(1); CalcAddI(); CalcMulI(); PushVar(Var_10,0); CalcSubI(); 
	PushVar(Var_8,0); PushInt(8); CalcMulI(); PushVar(Var_1,0); PushInt(1); CalcAddI(); CalcMulI(); PushVar(Var_9,0); CalcSubI(); 
	PushVar(Var_8,0); PushInt(16); CalcMulI(); PushVar(Var_2,0); CalcMulI(); PushVar(Var_10,0); CalcSubI(); 
	PushVar(Var_8,0); PushInt(8); CalcMulI(); PushVar(Var_1,0); CalcMulI(); PushVar(Var_9,0); CalcSubI(); 
	Extcmd(49,4);
	TaskSwitch(51);
}

static void L0051( void ) {
	TaskSwitch(49);
}

static void L0049( void ) {
	// repeat
	PushInt(50); PushInt(25); PushVar(Var_13,0); CalcSubI(); CalcMulI(); 
	PushLabel(17); 
	PushLabel(52); Prgcmd(4,3); return;
	TaskSwitch(52);
}

static void L0052( void ) {
	// _HspVar21 =_HspVar3(cnt%50, cnt/50)&255
		PushSysvar(4,0); PushInt(50); CalcDivI(); 
	PushSysvar(4,0); PushInt(50); CalcModI(); 
PushVar(Var_3,2); PushInt(255); CalcAndI(); 
	VarSet(Var_21,0);
	// if _HspVar27
	PushVAP(Var_27,0); 
	if (HspIf()) { TaskSwitch(53); return; }
	// pos (((cnt-1)%50)*8*_HspVar8)-_HspVar9, (((cnt-1)/50)*16*_HspVar8)-_HspVar10
	PushVar(Var_8,0); PushSysvar(4,0); PushInt(1); CalcSubI(); PushInt(50); CalcDivI(); PushInt(16); CalcMulI(); CalcMulI(); PushVar(Var_10,0); CalcSubI(); 
	PushVar(Var_8,0); PushSysvar(4,0); PushInt(1); CalcSubI(); PushInt(50); CalcModI(); PushInt(8); CalcMulI(); CalcMulI(); PushVar(Var_9,0); CalcSubI(); 
	Extcmd(17,2);
	// color (_HspVar3((cnt-1)%50, (cnt-1)/50)>>8)&255, (_HspVar3((cnt-1)%50, (cnt-1)/50)>>16)&255, (_HspVar3((cnt-1)%50, (cnt-1)/50)>>24)&255
		PushSysvar(4,0); PushInt(1); CalcSubI(); PushInt(50); CalcDivI(); 
		PushSysvar(4,0); PushInt(1); CalcSubI(); PushInt(50); CalcModI(); 
	PushVar(Var_3,2); PushInt(24); CalcRrI(); PushInt(255); CalcAndI(); 
		PushSysvar(4,0); PushInt(1); CalcSubI(); PushInt(50); CalcDivI(); 
		PushSysvar(4,0); PushInt(1); CalcSubI(); PushInt(50); CalcModI(); 
	PushVar(Var_3,2); PushInt(16); CalcRrI(); PushInt(255); CalcAndI(); 
		PushSysvar(4,0); PushInt(1); CalcSubI(); PushInt(50); CalcDivI(); 
		PushSysvar(4,0); PushInt(1); CalcSubI(); PushInt(50); CalcModI(); 
	PushVar(Var_3,2); PushInt(8); CalcRrI(); PushInt(255); CalcAndI(); 
	Extcmd(24,3);
	// if ((((_HspVar23%32)<16cnt-1_HspVar2*50)+_HspVar1)=)&
	PushVar(Var_23,0); PushInt(32); CalcModI(); PushInt(16); CalcLtI(); PushSysvar(4,0); PushInt(1); CalcSubI(); PushVar(Var_2,0); PushInt(50); CalcMulI(); PushVar(Var_1,0); CalcAddI(); CalcEqI(); CalcAndI(); 
	if (HspIf()) { TaskSwitch(54); return; }
	// color 255-ginfo(16), 255-ginfo(17), 255-ginfo(18)
	PushInt(255); PushFuncEnd(); 	PushInt(18); 
	PushExtvar(256,1); CalcSubI(); 
	PushInt(255); PushFuncEnd(); 	PushInt(17); 
	PushExtvar(256,1); CalcSubI(); 
	PushInt(255); PushFuncEnd(); 	PushInt(16); 
	PushExtvar(256,1); CalcSubI(); 
	Extcmd(24,3);
	TaskSwitch(54);
}

static void L0054( void ) {
	// _HspVar28 =lpeek(_HspVar20, ((_HspVar3((cnt-1)%50, (cnt-1)/50)&255_HspVar21<<8)+)*4)
	PushFuncEnd(); 		PushSysvar(4,0); PushInt(1); CalcSubI(); PushInt(50); CalcDivI(); 
	PushSysvar(4,0); PushInt(1); CalcSubI(); PushInt(50); CalcModI(); 
PushVar(Var_3,2); PushInt(255); CalcAndI(); PushVar(Var_21,0); PushInt(8); CalcLrI(); CalcAddI(); PushInt(4); CalcMulI(); 
	PushVAP(Var_20,0); 
PushIntfunc(11,2); 
	VarSet(Var_28,0);
	// pos ginfo(22), (0.250000*_HspVar8)*16-ginfo(23)
	PushFuncEnd(); 	PushInt(23); 
	PushExtvar(256,1); PushDouble(0.250000); PushVar(Var_8,0); CalcMulI(); PushInt(16); CalcMulI(); CalcSubI(); 
	PushFuncEnd(); 	PushInt(22); 
	PushExtvar(256,1); 
	Extcmd(17,2);
	// mes strf("%c%c%c%c", _HspVar28&255, (_HspVar28>>8)&255, (_HspVar28>>16)&255, (_HspVar28>>24)&255)
	PushFuncEnd(); 	PushVar(Var_28,0); PushInt(24); CalcRrI(); PushInt(255); CalcAndI(); 
		PushVar(Var_28,0); PushInt(16); CalcRrI(); PushInt(255); CalcAndI(); 
		PushVar(Var_28,0); PushInt(8); CalcRrI(); PushInt(255); CalcAndI(); 
		PushVar(Var_28,0); PushInt(255); CalcAndI(); 
		PushStr("%c%c%c%c"); 
	PushIntfunc(259,5); 
	Extcmd(15,1);
	// _HspVar27 =0
	PushInt(0); 
	VarSet(Var_27,0);
	TaskSwitch(55);
}

static void L0053( void ) {
	// else
	// if ((((129<=_HspVar21_HspVar21<=159)&224<=_HspVar21_HspVar21<=252)&)|peek(_HspVar3, (((cnt/50cnt%50)+)+1)*4)!=0)&(_HspVar3, (((cnt/50cnt%50)+)+1)*4)
	PushInt(129); PushVar(Var_21,0); CalcLtEqI(); PushVar(Var_21,0); PushInt(159); CalcLtEqI(); CalcAndI(); PushInt(224); PushVar(Var_21,0); CalcLtEqI(); PushVar(Var_21,0); PushInt(252); CalcLtEqI(); CalcAndI(); CalcOrI(); PushFuncEnd(); 	PushSysvar(4,0); PushInt(50); CalcDivI(); PushSysvar(4,0); PushInt(50); CalcModI(); CalcAddI(); PushInt(1); CalcAddI(); PushInt(4); CalcMulI(); 
		PushVAP(Var_3,0); 
	PushIntfunc(9,2); PushInt(0); CalcNeI(); CalcAndI(); 
	if (HspIf()) { TaskSwitch(56); return; }
	// _HspVar27 =1
	PushInt(1); 
	VarSet(Var_27,0);
	TaskSwitch(57);
}

static void L0056( void ) {
	// else
	// if _HspVar3(cnt%50, cnt/50)%256
		PushSysvar(4,0); PushInt(50); CalcDivI(); 
		PushSysvar(4,0); PushInt(50); CalcModI(); 
	PushVar(Var_3,2); PushInt(256); CalcModI(); 
	if (HspIf()) { TaskSwitch(58); return; }
	// pos ((cnt%50)*8*_HspVar8)-_HspVar9, ((cnt/50)*16*_HspVar8)-_HspVar10
	PushVar(Var_8,0); PushSysvar(4,0); PushInt(50); CalcDivI(); PushInt(16); CalcMulI(); CalcMulI(); PushVar(Var_10,0); CalcSubI(); 
	PushVar(Var_8,0); PushSysvar(4,0); PushInt(50); CalcModI(); PushInt(8); CalcMulI(); CalcMulI(); PushVar(Var_9,0); CalcSubI(); 
	Extcmd(17,2);
	// color (_HspVar3(cnt%50, cnt/50)>>8)&255, (_HspVar3(cnt%50, cnt/50)>>16)&255, (_HspVar3(cnt%50, cnt/50)>>24)&255
		PushSysvar(4,0); PushInt(50); CalcDivI(); 
		PushSysvar(4,0); PushInt(50); CalcModI(); 
	PushVar(Var_3,2); PushInt(24); CalcRrI(); PushInt(255); CalcAndI(); 
		PushSysvar(4,0); PushInt(50); CalcDivI(); 
		PushSysvar(4,0); PushInt(50); CalcModI(); 
	PushVar(Var_3,2); PushInt(16); CalcRrI(); PushInt(255); CalcAndI(); 
		PushSysvar(4,0); PushInt(50); CalcDivI(); 
		PushSysvar(4,0); PushInt(50); CalcModI(); 
	PushVar(Var_3,2); PushInt(8); CalcRrI(); PushInt(255); CalcAndI(); 
	Extcmd(24,3);
	// if (((_HspVar23%32)<16_HspVar2*50)+_HspVar1=cnt)&
	PushVar(Var_23,0); PushInt(32); CalcModI(); PushInt(16); CalcLtI(); PushSysvar(4,0); PushVar(Var_2,0); PushInt(50); CalcMulI(); PushVar(Var_1,0); CalcAddI(); CalcEqI(); CalcAndI(); 
	if (HspIf()) { TaskSwitch(59); return; }
	// color 255-ginfo(16), 255-ginfo(17), 255-ginfo(18)
	PushInt(255); PushFuncEnd(); 	PushInt(18); 
	PushExtvar(256,1); CalcSubI(); 
	PushInt(255); PushFuncEnd(); 	PushInt(17); 
	PushExtvar(256,1); CalcSubI(); 
	PushInt(255); PushFuncEnd(); 	PushInt(16); 
	PushExtvar(256,1); CalcSubI(); 
	Extcmd(24,3);
	TaskSwitch(59);
}

static void L0059( void ) {
	// pos ginfo(22), (0.250000*_HspVar8)*16-ginfo(23)
	PushFuncEnd(); 	PushInt(23); 
	PushExtvar(256,1); PushDouble(0.250000); PushVar(Var_8,0); CalcMulI(); PushInt(16); CalcMulI(); CalcSubI(); 
	PushFuncEnd(); 	PushInt(22); 
	PushExtvar(256,1); 
	Extcmd(17,2);
	// mes strf("%c", _HspVar3(cnt%50, cnt/50)&255)
	PushFuncEnd(); 		PushSysvar(4,0); PushInt(50); CalcDivI(); 
		PushSysvar(4,0); PushInt(50); CalcModI(); 
	PushVar(Var_3,2); PushInt(255); CalcAndI(); 
		PushStr("%c"); 
	PushIntfunc(259,2); 
	Extcmd(15,1);
	TaskSwitch(58);
}

static void L0058( void ) {
	TaskSwitch(57);
}

static void L0057( void ) {
	TaskSwitch(55);
}

static void L0055( void ) {
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(17);
}

static void L0017( void ) {
	// color 0, 0, 0
	PushInt(0); 
	PushInt(0); 
	PushInt(0); 
	Extcmd(24,3);
	// boxf 0, 16*25, 8*50, 800
	PushInt(800); 
	PushInt(400);/*OPT*/ 
	PushInt(400);/*OPT*/ 
	PushInt(0); 
	Extcmd(49,4);
	// color 255, 255, 255
	PushInt(255); 
	PushInt(255); 
	PushInt(255); 
	Extcmd(24,3);
	// pos 128, 16*25
	PushInt(400);/*OPT*/ 
	PushInt(128); 
	Extcmd(17,2);
	// pos ginfo(22), (0.250000*_HspVar8)*16-ginfo(23)
	PushFuncEnd(); 	PushInt(23); 
	PushExtvar(256,1); PushDouble(0.250000); PushVar(Var_8,0); CalcMulI(); PushInt(16); CalcMulI(); CalcSubI(); 
	PushFuncEnd(); 	PushInt(22); 
	PushExtvar(256,1); 
	Extcmd(17,2);
	// mes _HspVar19
	PushVAP(Var_19,0); 
	Extcmd(15,1);
	// _HspVar23 ++
	VarInc(Var_23,0);
	// redraw 1
	PushInt(1); 
	Extcmd(27,1);
	// await 15
	PushInt(15); 
	Prgcmd(8,1);
	TaskSwitch(60);
}

static void L0060( void ) {
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(4);
}

static void L0004( void ) {
	TaskSwitch(14);
}

static void L0014( void ) {
	// _HspVar19 +=strf("%X", stat)
	PushFuncEnd(); 	PushSysvar(3,0); 
		PushStr("%X"); 
	PushIntfunc(259,2); 
	VarCalc(Var_19,0,0);
	//  "vibrate", 10
	PushInt(10); 
	PushStr("vibrate"); 
	Extcmd(74,2);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(6);
}

static void L0006( void ) {
	// _HspVar19 =""
	PushStr(""); 
	VarSet(Var_19,0);
	//  "vibrate", 10
	PushInt(10); 
	PushStr("vibrate"); 
	Extcmd(74,2);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(5);
}

static void L0005( void ) {
	// repeat
	PushFuncEnd(); 	PushVAP(Var_19,0); 
	PushIntfunc(2,1); PushInt(2); CalcDivI(); 
	PushLabel(18); 
	PushLabel(61); Prgcmd(4,3); return;
	TaskSwitch(61);
}

static void L0061( void ) {
	// ondisplay strf("%c", int("$"+strmid(_HspVar19, cnt*2, 2)))
	PushFuncEnd(); 	PushFuncEnd(); 	PushStr("$"); PushFuncEnd(); 	PushInt(2); 
		PushSysvar(4,0); PushInt(2); CalcMulI(); 
		PushVAP(Var_19,0); 
	PushIntfunc(257,3); CalcAddI(); 
	PushIntfunc(0,1); 
		PushStr("%c"); 
	PushIntfunc(259,2); 
	PushLabel(62);
	Modcmd(0,1);
	return;
}

static void L0062( void ) {
	// _HspVar29 =int("$"+strmid(_HspVar19, cnt*2, 2))
	PushFuncEnd(); 	PushStr("$"); PushFuncEnd(); 	PushInt(2); 
	PushSysvar(4,0); PushInt(2); CalcMulI(); 
	PushVAP(Var_19,0); 
PushIntfunc(257,3); CalcAddI(); 
PushIntfunc(0,1); 
	VarSet(Var_29,0);
	// if 0
	PushInt(0); 
	if (HspIf()) { TaskSwitch(63); return; }
	// _HspVar30 ++
	VarInc(Var_30,0);
	TaskSwitch(63);
}

static void L0063( void ) {
	// if (_HspVar29=10)|_HspVar30
	PushVar(Var_29,0); PushInt(10); CalcEqI(); PushVar(Var_30,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(64); return; }
	// _HspVar30 =0
	PushInt(0); 
	VarSet(Var_30,0);
	// _HspVar30 ++
	VarInc(Var_30,0);
	TaskSwitch(64);
}

static void L0064( void ) {
	// if (_HspVar29=13)|_HspVar30
	PushVar(Var_29,0); PushInt(13); CalcEqI(); PushVar(Var_30,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(65); return; }
	// _HspVar30 =0
	PushInt(0); 
	VarSet(Var_30,0);
	// gosub
	PushLabel(10); 
	PushLabel(66); Prgcmd(1,2); return;
}

static void L0066( void ) {
	// goto *L0013
	TaskSwitch(19);
	return;
	TaskSwitch(65);
}

static void L0065( void ) {
	// if 1
	PushInt(1); 
	if (HspIf()) { TaskSwitch(67); return; }
	// _HspVar1 ++
	VarInc(Var_1,0);
	// goto *L0013
	TaskSwitch(19);
	return;
	TaskSwitch(67);
}

static void L0067( void ) {
	TaskSwitch(19);
}

static void L0019( void ) {
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(18);
}

static void L0018( void ) {
	// if strlen(_HspVar19)%2
	PushFuncEnd(); 	PushVAP(Var_19,0); 
	PushIntfunc(2,1); PushInt(2); CalcModI(); 
	if (HspIf()) { TaskSwitch(68); return; }
	// ondisplay strf("%c", int("$"+strmid(_HspVar19, strlen(_HspVar19)-1, 1)))
	PushFuncEnd(); 	PushFuncEnd(); 	PushStr("$"); PushFuncEnd(); 	PushInt(1); 
		PushFuncEnd(); 	PushVAP(Var_19,0); 
	PushIntfunc(2,1); PushInt(1); CalcSubI(); 
		PushVAP(Var_19,0); 
	PushIntfunc(257,3); CalcAddI(); 
	PushIntfunc(0,1); 
		PushStr("%c"); 
	PushIntfunc(259,2); 
	PushLabel(69);
	Modcmd(0,1);
	return;
}

static void L0069( void ) {
	// _HspVar29 =int("$"+strmid(_HspVar19, strlen(_HspVar19)-1, 1))
	PushFuncEnd(); 	PushStr("$"); PushFuncEnd(); 	PushInt(1); 
	PushFuncEnd(); 	PushVAP(Var_19,0); 
PushIntfunc(2,1); PushInt(1); CalcSubI(); 
	PushVAP(Var_19,0); 
PushIntfunc(257,3); CalcAddI(); 
PushIntfunc(0,1); 
	VarSet(Var_29,0);
	// if 0
	PushInt(0); 
	if (HspIf()) { TaskSwitch(70); return; }
	// _HspVar30 ++
	VarInc(Var_30,0);
	TaskSwitch(70);
}

static void L0070( void ) {
	// if (_HspVar29=10)|_HspVar30
	PushVar(Var_29,0); PushInt(10); CalcEqI(); PushVar(Var_30,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(71); return; }
	// _HspVar30 =0
	PushInt(0); 
	VarSet(Var_30,0);
	// _HspVar30 ++
	VarInc(Var_30,0);
	TaskSwitch(71);
}

static void L0071( void ) {
	// if (_HspVar29=13)|_HspVar30
	PushVar(Var_29,0); PushInt(13); CalcEqI(); PushVar(Var_30,0); CalcOrI(); 
	if (HspIf()) { TaskSwitch(72); return; }
	// _HspVar30 =0
	PushInt(0); 
	VarSet(Var_30,0);
	// gosub
	PushLabel(10); 
	PushLabel(73); Prgcmd(1,2); return;
}

static void L0073( void ) {
	// goto *L0014
	TaskSwitch(20);
	return;
	TaskSwitch(72);
}

static void L0072( void ) {
	// if 1
	PushInt(1); 
	if (HspIf()) { TaskSwitch(74); return; }
	// _HspVar1 ++
	VarInc(Var_1,0);
	// goto *L0014
	TaskSwitch(20);
	return;
	TaskSwitch(74);
}

static void L0074( void ) {
	TaskSwitch(68);
}

static void L0068( void ) {
	TaskSwitch(20);
}

static void L0020( void ) {
	// _HspVar19 =""
	PushStr(""); 
	VarSet(Var_19,0);
	//  "vibrate", 10
	PushInt(10); 
	PushStr("vibrate"); 
	Extcmd(74,2);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(7);
}

static void L0007( void ) {
	// _HspVar1 --
	VarDec(Var_1,0);
	//  "vibrate", 10
	PushInt(10); 
	PushStr("vibrate"); 
	Extcmd(74,2);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(8);
}

static void L0008( void ) {
	// _HspVar1 ++
	VarInc(Var_1,0);
	//  "vibrate", 10
	PushInt(10); 
	PushStr("vibrate"); 
	Extcmd(74,2);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(9);
}

static void L0009( void ) {
	// _HspVar2 --
	VarDec(Var_2,0);
	//  "vibrate", 10
	PushInt(10); 
	PushStr("vibrate"); 
	Extcmd(74,2);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(11);
}

static void L0011( void ) {
	// _HspVar2 ++
	VarInc(Var_2,0);
	//  "vibrate", 10
	PushInt(10); 
	PushStr("vibrate"); 
	Extcmd(74,2);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(10);
}

static void L0010( void ) {
	// _HspVar31 =""
	PushStr(""); 
	VarSet(Var_31,0);
	// repeat
	PushInt(50); 
	PushLabel(21); 
	PushLabel(75); Prgcmd(4,3); return;
	TaskSwitch(75);
}

static void L0075( void ) {
	// if (_HspVar3(cnt, _HspVar2)&255)=0
		PushVar(Var_2,0); 
		PushSysvar(4,0); 
	PushVar(Var_3,2); PushInt(255); CalcAndI(); PushInt(0); CalcEqI(); 
	if (HspIf()) { TaskSwitch(76); return; }
	// break *L0015
	PushLabel(21); 
	Prgcmd(3,1);
	return;
	TaskSwitch(76);
}

static void L0076( void ) {
	// _HspVar31 +=strf("%c", _HspVar3(cnt, _HspVar2)&255)
	PushFuncEnd(); 		PushVar(Var_2,0); 
		PushSysvar(4,0); 
	PushVar(Var_3,2); PushInt(255); CalcAndI(); 
		PushStr("%c"); 
	PushIntfunc(259,2); 
	VarCalc(Var_31,0,0);
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(21);
}

static void L0021( void ) {
	// _HspVar2 ++
	VarInc(Var_2,0);
	// _HspVar1 =0
	PushInt(0); 
	VarSet(Var_1,0);
	// _HspVar32 =stat
	PushSysvar(3,0); 
	VarSet(Var_32,0);
	// repeat
	PushFuncEnd(); 	PushVAP(Var_15,0); 
	PushIntfunc(3,1); 
	PushLabel(22); 
	PushLabel(77); Prgcmd(4,3); return;
	TaskSwitch(77);
}

static void L0077( void ) {
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(22);
}

static void L0022( void ) {
	// repeat
	PushFuncEnd(); 	PushVAP(Var_16,0); 
	PushIntfunc(3,1); 
	PushLabel(23); 
	PushLabel(78); Prgcmd(4,3); return;
	TaskSwitch(78);
}

static void L0078( void ) {
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(23);
}

static void L0023( void ) {
	// _HspVar31 =_HspVar33(0)
		PushInt(0); 
PushVar(Var_33,1); 
	VarSet(Var_31,0);
	// repeat
	PushInt(1); 
	PushVar(Var_32,0); PushInt(1); CalcSubI(); 
	PushLabel(24); 
	PushLabel(79); Prgcmd(4,4); return;
	TaskSwitch(79);
}

static void L0079( void ) {
	// _HspVar32 =stat
	PushSysvar(3,0); 
	VarSet(Var_32,0);
	// _HspVar33 (cnt)=_HspVar34(0)
		PushInt(0); 
PushVar(Var_34,1); 
	PushSysvar(4,0); 
	VarSet(Var_33,1);
	// _HspVar35 =cnt
	PushSysvar(4,0); 
	VarSet(Var_35,0);
	// repeat
	PushInt(1); 
	PushVar(Var_32,0); PushInt(1); CalcSubI(); 
	PushLabel(25); 
	PushLabel(80); Prgcmd(4,4); return;
	TaskSwitch(80);
}

static void L0080( void ) {
	// _HspVar36 =cnt
	PushSysvar(4,0); 
	VarSet(Var_36,0);
	// repeat
	PushFuncEnd(); 	PushVAP(Var_15,0); 
	PushIntfunc(3,1); 
	PushLabel(26); 
	PushLabel(81); Prgcmd(4,3); return;
	TaskSwitch(81);
}

static void L0081( void ) {
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(26);
}

static void L0026( void ) {
	// repeat
	PushFuncEnd(); 	PushVAP(Var_16,0); 
	PushIntfunc(3,1); 
	PushLabel(27); 
	PushLabel(82); Prgcmd(4,3); return;
	TaskSwitch(82);
}

static void L0082( void ) {
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(27);
}

static void L0027( void ) {
	// _HspVar33 (_HspVar35)+=(strf("%c", 129)("%c", 118)+strf("%c", 118))+_HspVar34(cnt)
	PushFuncEnd(); 	PushInt(129); 
		PushStr("%c"); 
	PushIntfunc(259,2); PushFuncEnd(); 	PushInt(118); 
		PushStr("%c"); 
	PushIntfunc(259,2); CalcAddI(); 	PushSysvar(4,0); 
	PushVar(Var_34,1); CalcAddI(); 
	PushVar(Var_35,0); 
	VarCalc(Var_33,1,0);
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(25);
}

static void L0025( void ) {
	// _HspVar31 +=(strf("%c", 129)("%c", 117)+strf("%c", 117))+_HspVar33(cnt)
	PushFuncEnd(); 	PushInt(129); 
		PushStr("%c"); 
	PushIntfunc(259,2); PushFuncEnd(); 	PushInt(117); 
		PushStr("%c"); 
	PushIntfunc(259,2); CalcAddI(); 	PushSysvar(4,0); 
	PushVar(Var_33,1); CalcAddI(); 
	VarCalc(Var_31,0,0);
	// loop 
	Prgcmd(5,0);
	return;
	TaskSwitch(24);
}

static void L0024( void ) {
	//  "vibrate", 10
	PushInt(10); 
	PushStr("vibrate"); 
	Extcmd(74,2);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(12);
}

static void L0012( void ) {
	// _HspVar8 +=0.100000
	PushDouble(0.100000); 
	VarCalc(Var_8,0,0);
	//  "vibrate", 10
	PushInt(10); 
	PushStr("vibrate"); 
	Extcmd(74,2);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(13);
}

static void L0013( void ) {
	// _HspVar8 -=0.100000
	PushDouble(0.100000); 
	VarCalc(Var_8,0,1);
	//  "vibrate", 10
	PushInt(10); 
	PushStr("vibrate"); 
	Extcmd(74,2);
	// return 
	Prgcmd(2,0);
	return;
	TaskSwitch(28);
}

static void L0028( void ) {
	// stop 
	Prgcmd(17,0);
	return;
	// goto 
	Prgcmd(0,0);
	return;
}

//-End of Source-------------------------------------------

CHSP3_TASK __HspTaskFunc[]={
(CHSP3_TASK) L0000,
(CHSP3_TASK) L0001,	// ondisplay
(CHSP3_TASK) L0002,
(CHSP3_TASK) L0003,
(CHSP3_TASK) L0004,
(CHSP3_TASK) L0005,
(CHSP3_TASK) L0006,
(CHSP3_TASK) L0007,
(CHSP3_TASK) L0008,
(CHSP3_TASK) L0009,
(CHSP3_TASK) L0010,
(CHSP3_TASK) L0011,
(CHSP3_TASK) L0012,
(CHSP3_TASK) L0013,
(CHSP3_TASK) L0014,
(CHSP3_TASK) L0015,
(CHSP3_TASK) L0016,
(CHSP3_TASK) L0017,
(CHSP3_TASK) L0018,
(CHSP3_TASK) L0019,
(CHSP3_TASK) L0020,
(CHSP3_TASK) L0021,
(CHSP3_TASK) L0022,
(CHSP3_TASK) L0023,
(CHSP3_TASK) L0024,
(CHSP3_TASK) L0025,
(CHSP3_TASK) L0026,
(CHSP3_TASK) L0027,
(CHSP3_TASK) L0028,
(CHSP3_TASK) L0029,
(CHSP3_TASK) L0030,
(CHSP3_TASK) L0031,
(CHSP3_TASK) L0032,
(CHSP3_TASK) L0033,
(CHSP3_TASK) L0034,
(CHSP3_TASK) L0035,
(CHSP3_TASK) L0036,
(CHSP3_TASK) L0037,
(CHSP3_TASK) L0038,
(CHSP3_TASK) L0039,
(CHSP3_TASK) L0040,
(CHSP3_TASK) L0041,
(CHSP3_TASK) L0042,
(CHSP3_TASK) L0043,
(CHSP3_TASK) L0044,
(CHSP3_TASK) L0045,
(CHSP3_TASK) L0046,
(CHSP3_TASK) L0047,
(CHSP3_TASK) L0048,
(CHSP3_TASK) L0049,
(CHSP3_TASK) L0050,
(CHSP3_TASK) L0051,
(CHSP3_TASK) L0052,
(CHSP3_TASK) L0053,
(CHSP3_TASK) L0054,
(CHSP3_TASK) L0055,
(CHSP3_TASK) L0056,
(CHSP3_TASK) L0057,
(CHSP3_TASK) L0058,
(CHSP3_TASK) L0059,
(CHSP3_TASK) L0060,
(CHSP3_TASK) L0061,
(CHSP3_TASK) L0062,
(CHSP3_TASK) L0063,
(CHSP3_TASK) L0064,
(CHSP3_TASK) L0065,
(CHSP3_TASK) L0066,
(CHSP3_TASK) L0067,
(CHSP3_TASK) L0068,
(CHSP3_TASK) L0069,
(CHSP3_TASK) L0070,
(CHSP3_TASK) L0071,
(CHSP3_TASK) L0072,
(CHSP3_TASK) L0073,
(CHSP3_TASK) L0074,
(CHSP3_TASK) L0075,
(CHSP3_TASK) L0076,
(CHSP3_TASK) L0077,
(CHSP3_TASK) L0078,
(CHSP3_TASK) L0079,
(CHSP3_TASK) L0080,
(CHSP3_TASK) L0081,
(CHSP3_TASK) L0082,
(CHSP3_TASK) 0,

};

/*-----------------------------------------------------------*/

STRUCTDAT __HspFuncInfo[]={
	{ -1,0, 0,1,0,0,1, (void *)0 },
};

STRUCTPRM __HspPrmInfo[]={
	{ -6, -1, 0 },
};

char __HspDataName[]="ondisplay\0"\
;


/*-----------------------------------------------------------*/

void __HspInit( Hsp3r *hsp3 ) {
	hsp3->Reset( _HSP3CNV_MAXVAR, _HSP3CNV_MAXHPI );
	hsp3->SetDataName( __HspDataName );
	hsp3->SetFInfo( __HspFuncInfo, 28 );
	hsp3->SetLInfo( 0, 0 );
	hsp3->SetMInfo( __HspPrmInfo, 8 );
}

/*-----------------------------------------------------------*/

