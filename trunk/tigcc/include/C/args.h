#ifndef __ARGS
#define __ARGS

#include <default.h>

/* Begin Auto-Generated Part */
#define NULL ((void*)0)
#ifndef __HAVE_bcd
#define __HAVE_bcd
typedef struct{unsigned short exponent;unsigned long long mantissa;}bcd __attribute__((__may_alias__));
#endif
#ifndef __HAVE_Bool
#define __HAVE_Bool
enum Bool{FALSE,TRUE};
#endif
#ifndef __HAVE_ESQ
#define __HAVE_ESQ
typedef unsigned char ESQ;
#endif
#ifndef __HAVE_CESI
#define __HAVE_CESI
typedef const ESQ*CESI;
#endif
#ifndef __HAVE_ESI
#define __HAVE_ESI
typedef ESQ*ESI;
#endif
#define EStackIndex ESI
#define Quantum ESQ
#ifndef __HAVE_SYM_STR
#define __HAVE_SYM_STR
typedef CESI SYM_STR;
#endif
#ifndef __HAVE_Tags
#define __HAVE_Tags
enum Tags{VAR_NAME_TAG=0x00,_VAR_Q_TAG=0x01,VAR_R_TAG=0x02,VAR_S_TAG=0x03,VAR_T_TAG=0x04,VAR_U_TAG=0x05,VAR_V_TAG=0x06,VAR_W_TAG=0x07,VAR_X_TAG=0x08,VAR_Y_TAG=0x09,VAR_Z_TAG=0x0A,VAR_A_TAG=0x0B,VAR_B_TAG=0x0C,VAR_C_TAG=0x0D,VAR_D_TAG=0x0E,VAR_E_TAG=0x0F,VAR_F_TAG=0x10,VAR_G_TAG=0x11,VAR_H_TAG=0x12,VAR_I_TAG=0x13,VAR_J_TAG=0x14,VAR_K_TAG=0x15,VAR_L_TAG=0x16,VAR_M_TAG=0x17,VAR_N_TAG=0x18,VAR_O_TAG=0x19,VAR_P_TAG=0x1A,VAR_Q_TAG=0x1B,EXT_SYSTEM_TAG=0x1C,ARB_REAL_TAG=0x1D,ARB_INT_TAG=0x1E,POSINT_TAG=0x1F,NEGINT_TAG=0x20,POSFRAC_TAG=0x21,NEGFRAC_TAG=0x22,FLOAT_TAG=0x23,BCD_TAG=0x23,PI_TAG=0x24,EXP_TAG=0x25,IM_TAG=0x26,NEGINFINITY_TAG=0x27,INFINITY_TAG=0x28,PN_INFINITY_TAG=0x29,UNDEF_TAG=0x2A,FALSE_TAG=0x2B,TRUE_TAG=0x2C,STR_TAG=0x2D,NOTHING_TAG=0x2E,ACOSH_TAG=0x2F,ASINH_TAG=0x30,ATANH_TAG=0x31
#if MIN_AMS>=208
,ASECH_TAG=0x32,ACSCH_TAG=0x33,ACOTH_TAG=0x34
#endif
,COSH_TAG=0x35,SINH_TAG=0x36,TANH_TAG=0x37
#if MIN_AMS>=208
,SECH_TAG=0x38,CSCH_TAG=0x39,COTH_TAG=0x3A
#endif
,ACOS_TAG=0x3B,ASIN_TAG=0x3C,ATAN_TAG=0x3D
#if MIN_AMS>=208
,ASEC_TAG=0x3E,ACSC_TAG=0x3F,ACOT_TAG=0x40
#endif
,RACOS_TAG=0x41,RASIN_TAG=0x42,RATAN_TAG=0x43,COS_TAG=0x44,SIN_TAG=0x45,TAN_TAG=0x46
#if MIN_AMS>=208
,SEC_TAG=0x47,CSC_TAG=0x48,COT_TAG=0x49
#endif
,ITAN_TAG=0x4A,ABS_TAG=0x4B,ANGLE_TAG=0x4C,CEILING_TAG=0x4D,FLOOR_TAG=0x4E,INT_TAG=0x4F,SIGN_TAG=0x50,SQRT_TAG=0x51,EXPF_TAG=0x52,LN_TAG=0x53,LOG_TAG=0x54,FPART_TAG=0x55,IPART_TAG=0x56,CONJ_TAG=0x57,IMAG_TAG=0x58,REAL_TAG=0x59,APPROX_TAG=0x5A,TEXPAND_TAG=0x5B,TCOLLECT_TAG=0x5C,GETDENOM_TAG=0x5D,GETNUM_TAG=0x5E,ERROR_TAG=0x5F,CUMSUM_TAG=0x60,DET_TAG=0x61,COLNORM_TAG=0x62,ROWNORM_TAG=0x63,NORM_TAG=0x64,MEAN_TAG=0x65,MEDIAN_TAG=0x66,PRODUCT_TAG=0x67,STDDEV_TAG=0x68,SUM_TAG=0x69,VARIANCE_TAG=0x6A,UNITV_TAG=0x6B,DIM_TAG=0x6C,MAT2LIST_TAG=0x6D,NEWLIST_TAG=0x6E,RREF_TAG=0x6F,REF_TAG=0x70,IDENTITY_TAG=0x71,DIAG_TAG=0x72,COLDIM_TAG=0x73,ROWDIM_TAG=0x74,TRANSPOSE_TAG=0x75,FACTORIAL_TAG=0x76,PERCENT_TAG=0x77,RADIANS_TAG=0x78,NOT_TAG=0x79,MINUS_TAG=0x7A,VEC_POLAR_TAG=0x7B,VEC_CYLIND_TAG=0x7C,VEC_SPHERE_TAG=0x7D,START_TAG=0x7E,ISTORE_TAG=0x7F,STORE_TAG=0x80,WITH_TAG=0x81,XOR_TAG=0x82,OR_TAG=0x83,AND_TAG=0x84,LT_TAG=0x85,LE_TAG=0x86,EQ_TAG=0x87,GE_TAG=0x88,GT_TAG=0x89,NE_TAG=0x8A,ADD_TAG=0x8B,ADDELT_TAG=0x8C,SUB_TAG=0x8D,SUBELT_TAG=0x8E,MUL_TAG=0x8F,MULELT_TAG=0x90,DIV_TAG=0x91,DIVELT_TAG=0x92,POW_TAG=0x93,POWELT_TAG=0x94,SINCOS_TAG=0x95,SOLVE_TAG=0x96,CSOLVE_TAG=0x97,NSOLVE_TAG=0x98,ZEROS_TAG=0x99,CZEROS_TAG=0x9A,FMIN_TAG=0x9B,FMAX_TAG=0x9C,COMPLEX_TAG=0x9D,POLYEVAL_TAG=0x9E,RANDPOLY_TAG=0x9F,CROSSP_TAG=0xA0,DOTP_TAG=0xA1,GCD_TAG=0xA2,LCM_TAG=0xA3,MOD_TAG=0xA4,INTDIV_TAG=0xA5,REMAIN_TAG=0xA6,NCR_TAG=0xA7,NPR_TAG=0xA8,P2RX_TAG=0xA9,P2RY_TAG=0xAA,P2PTHETA_TAG=0xAB,P2PR_TAG=0xAC,AUGMENT_TAG=0xAD,NEWMAT_TAG=0xAE,RANDMAT_TAG=0xAF,SIMULT_TAG=0xB0,PART_TAG=0xB1,EXP2LIST_TAG=0xB2,RANDNORM_TAG=0xB3,MROW_TAG=0xB4,ROWADD_TAG=0xB5,ROWSWAP_TAG=0xB6,ARCLEN_TAG=0xB7,NINT_TAG=0xB8,PI_PRODUCT_TAG=0xB9,SIGMA_SUM_TAG=0xBA,MROWADD_TAG=0xBB,ANS_TAG=0xBC,ENTRY_TAG=0xBD,EXACT_TAG=0xBE,LOGB_TAG=0xBF,COMDENOM_TAG=0xC0,EXPAND_TAG=0xC1,FACTOR_TAG=0xC2,CFACTOR_TAG=0xC3,INTEGRATE_TAG=0xC4,DIFFERENTIATE_TAG=0xC5,AVGRC_TAG=0xC6,NDERIV_TAG=0xC7,TAYLOR_TAG=0xC8,LIMIT_TAG=0xC9,PROPFRAC_TAG=0xCA,WHEN_TAG=0xCB,ROUND_TAG=0xCC,DMS_TAG=0xCD,LEFT_TAG=0xCE,RIGHT_TAG=0xCF,MID_TAG=0xD0,SHIFT_TAG=0xD1,SEQ_TAG=0xD2,LIST2MAT_TAG=0xD3,SUBMAT_TAG=0xD4,SUBSCRIPT_TAG=0xD5,RAND_TAG=0xD6,MIN_TAG=0xD7,MAX_TAG=0xD8,LIST_TAG=0xD9,USERFUNC_TAG=0xDA,MATRIX_TAG=0xDB,FUNC_TAG=0xDC,DATA_TAG=0xDD,GDB_TAG=0xDE,PIC_TAG=0xDF,TEXT_TAG=0xE0,FIG_TAG=0xE1,MAC_TAG=0xE2,EXT_TAG=0xE3,EXT_INSTR_TAG=0xE4,END_TAG=0xE5,COMMENT_TAG=0xE6,NEXTEXPR_TAG=0xE7,NEWLINE_TAG=0xE8,ENDSTACK_TAG=0xE9,PN1_TAG=0xEA,PN2_TAG=0xEB,ERROR_MSG_TAG=0xEC,EIGVC_TAG=0xED,EIGVL_TAG=0xEE,DASH_TAG=0xEF,LOCALVAR_TAG=0xF0,DESOLVE_TAG=0xF1,FDASH_TAG=0xF2,ASM_TAG=0xF3,ISPRIME_TAG=0xF4,OTH_TAG=0xF8,ROTATE_TAG=0xF9,VAR_TAG=0,PRIVILEDGED_VAR_TAG=1,R_VAR_TAG=2,S_VAR_TAG=3,T_VAR_TAG=4,U_VAR_TAG=5,V_VAR_TAG=6,W_VAR_TAG=7,X_VAR_TAG=8,Y_VAR_TAG=9,Z_VAR_TAG=10,A_VAR_TAG=11,B_VAR_TAG=12,C_VAR_TAG=13,D_VAR_TAG=14,E_VAR_TAG=15,F_VAR_TAG=16,G_VAR_TAG=17,H_VAR_TAG=18,I_VAR_TAG=19,J_VAR_TAG=20,K_VAR_TAG=21,L_VAR_TAG=22,M_VAR_TAG=23,N_VAR_TAG=24,O_VAR_TAG=25,P_VAR_TAG=26,Q_VAR_TAG=27,SYSVAR_TAG=28,NONNEGATIVE_INTEGER_TAG=31,NEGATIVE_INTEGER_TAG=32,POSITIVE_FRACTION_TAG=33,NEGATIVE_FRACTION_TAG=34,E_TAG=37,I_TAG=38,MINUS_INFINITY_TAG=39,PLUS_INFINITY_TAG=40,PLUS_OR_MINUS_INFINITY_TAG=41,UNDEFINED_TAG=42,STR_DATA_TAG=45,OMITTED_ARG_TAG=46,ACOS_RAD_TAG=65,ASIN_RAD_TAG=66,ATAN_RAD_TAG=67,TAN_RAD_TAG=74,PHASE_TAG=76,GREATEST_INT_TAG=79,LOG10_TAG=84,RAC_PART_TAG=85,INT_PART_TAG=86,IM_PART_TAG=88,RE_PART_TAG=89,APPROXIMATE_TAG=90,DENR_TAG=93,NUMR_TAG=94,DETERMINANT_TAG=97,MATNORM_TAG=100,PRODLIST_TAG=103,SUMLIST_TAG=105,DIMENSION_TAG=108,MAT_TO_LIST_TAG=109,RED_ROW_ECH_TAG=111,ROW_ECHELON_TAG=112,IDENTITY_MAT_TAG=113,CHS_TAG=122,POLARVEC_TAG=123,CYLINVEC_TAG=124,SPHERVEC_TAG=125,ASSIGN_TAG=127,SUCH_THAT_TAG=129,EQUATION_TAG=135,DOT_ADD_TAG=140,SUBTRACT_TAG=141,DOT_SUB_TAG=142,MULTIPLY_TAG=143,DOT_MULT_TAG=144,DIVIDE_TAG=145,DOT_DIV_TAG=146,EXPONENTIATION_TAG=147,DOT_EXPONENTIATE_TAG=148,SIN2_TAG=149,MIN_PT_TAG=155,MAX_PT_TAG=156,IM_RE_TAG=157,DENSE_POLY_EVAL_TAG=158,CROSS_PROD_TAG=160,DOTPRODUCT_TAG=161,INT_GCD_TAG=162,INT_LCM_TAG=163,INT_QUOTIENT_TAG=165,INT_REMAINDER_TAG=166,COMB_TAG=167,PERM_TAG=168,PLR_TO_X_TAG=169,PLR_TO_Y_TAG=170,REC_TO_ANGLE_TAG=171,REC_TO_RADIUS_TAG=172,EXP_TO_LIST_TAG=178,EXTENDED_PROD_TAG=185,SUMMATION_TAG=186,RATIONALIZE_TAG=190,LOG_GEN_TAG=191,COM_DEN_TAG=192,INTEGRAL_TAG=196,DIV_DIF_1F_TAG=198,DIV_DIF_1C_TAG=199,SERIES_TAG=200,LIM_TAG=201,DEGREES_TAG=205,SEQUENCE_TAG=210,LIST_TO_MAT_TAG=211,USER_FUN_TAG=218,USER_DEF_TAG=220,DATA_VAR_TAG=221,GDB_VAR_TAG=222,PIC_VAR_TAG=223,TEXT_VAR_TAG=224,GEO_FILE_TAG=225,GEO_MACRO_TAG=226,SECONDARY_TAG=227,COMMAND_TAG=228,SEPARATOR_TAG=231,EOL_TAG=232,END_OF_SEGMENT_TAG=233,UNARY_PLUS_OR_MINUS_TAG=234,BINARY_PLUS_OR_MINUS_TAG=235,PRIME_TAG=239,PARM_TAG=240,FUNC_DIF_TAG=242,ASM_PRGM_TAG=243,GEN_DATA_TAG=248};
#endif
#ifndef __HAVE_ti_float
#define __HAVE_ti_float
typedef float ti_float;
#endif
#define top_estack (*((ESI*)(_rom_call_addr(109))))
#define ArgCount() (RemainingArgCnt(top_estack))
#define EX_getArg _rom_call(ESI,(short),BE)
#define EX_getBCD _rom_call(short,(short,float*),BF)
#define GetArgType(p) (*(CESI)(p))
#define GetFloatArg(p) ({float __f;(CESI)(p)-=10;_rom_call(void*,(),26A)(&__f,(CESI)(p)+1,9L);((char*)&__f)[9]=0;__f;})
#define GetIntArg(p) ({register unsigned short __n=*(--(ESI)(p));register unsigned long __s=0;while(__n--)__s=(__s<<8)+*(--(unsigned char*)(p));(ESI)(p)--;__s;})
#define GetLongLongArg(p) ({register unsigned short __n=*(--(ESI)(p));register unsigned long long __s=0;while(__n--)__s=(__s<<8)+*(--(unsigned char*)(p));(ESI)(p)--;__s;})
#define GetStrnArg(p) ({(ESI)(p)-=2;while(*(ESI)(p)--);(const char*)((ESI)(p)+2);})
#define GetSymstrArg(p) ({register ESI __t=(ESI)(p);(ESI)(p)-=2;while(*(ESI)(p)--);(const char*)(__t-1);})
#define InitArgPtr(p) ((void)((p)=top_estack))
#define SkipArg(p) ((void)((p)=_rom_call(ESI,(ESI),10A)(p)))
#if MIN_AMS>=101
#define RemainingArgCnt _rom_call(unsigned short,(CESI),3C3)
#endif
/* End Auto-Generated Part */

#endif
