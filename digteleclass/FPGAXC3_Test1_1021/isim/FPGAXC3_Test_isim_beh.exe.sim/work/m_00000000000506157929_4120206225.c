/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/digiCExp/FPGAXC3_Test/Verilog HDL/AD_Top.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {6592U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {6208U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {32768U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {15U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {37184U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {53248U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {62463U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {16523U, 0U};
static unsigned int ng17[] = {6464U, 0U};
static unsigned int ng18[] = {6336U, 0U};



static void Cont_49_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2936U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 12);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 12);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 15U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 15U);
    t12 = (t0 + 5080);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 15U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 3);
    t25 = (t0 + 5012);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Initial_54_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(55, ng0);

LAB2:    xsi_set_current_line(56, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3348);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(57, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3440);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(59, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3624);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(60, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3716);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);
    xsi_set_current_line(61, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 3256);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 21);
    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3532);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3164);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_66_2(char *t0)
{
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 4528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 5020);
    *((int *)t2) = 1;
    t3 = (t0 + 4556);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 3348);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(136, ng0);

LAB53:    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(75, ng0);

LAB16:    xsi_set_current_line(76, ng0);
    t9 = (t0 + 3440);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);

LAB17:    t12 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t11, 3, t12, 3);
    if (t13 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t8 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t8 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t8 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 3, t2, 3);
    if (t8 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(113, ng0);

LAB42:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3164);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB34:    goto LAB15;

LAB9:    xsi_set_current_line(121, ng0);

LAB43:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 3624);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 3164);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 16);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB15;

LAB11:    xsi_set_current_line(126, ng0);

LAB44:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 3624);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 3716);
    t9 = (t7 + 36U);
    t10 = *((char **)t9);
    memset(t16, 0, 8);
    t12 = (t5 + 4);
    t14 = (t10 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t10);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t12);
    t21 = *((unsigned int *)t14);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t14);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB48;

LAB45:    if (t26 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t16) = 1;

LAB48:    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t16);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(130, ng0);

LAB52:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3624);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3716);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);

LAB51:    goto LAB15;

LAB18:    xsi_set_current_line(78, ng0);

LAB35:    xsi_set_current_line(79, ng0);
    t14 = ((char*)((ng4)));
    t15 = (t0 + 3164);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 16);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB34;

LAB20:    xsi_set_current_line(83, ng0);

LAB36:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 3164);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB34;

LAB22:    xsi_set_current_line(88, ng0);

LAB37:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 3164);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB34;

LAB24:    xsi_set_current_line(93, ng0);

LAB38:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 3164);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 3440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB34;

LAB26:    xsi_set_current_line(98, ng0);

LAB39:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 3164);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB34;

LAB28:    xsi_set_current_line(103, ng0);

LAB40:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 3164);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB34;

LAB30:    xsi_set_current_line(108, ng0);

LAB41:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 3164);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3348);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB34;

LAB47:    t15 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(128, ng0);
    t35 = ((char*)((ng1)));
    t36 = (t0 + 3164);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 16);
    goto LAB51;

}

static void Always_146_3(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 4672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 5028);
    *((int *)t2) = 1;
    t3 = (t0 + 4700);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(147, ng0);

LAB5:    xsi_set_current_line(148, ng0);
    t4 = (t0 + 3348);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3532);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(149, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t0 + 3532);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB12;

}

static void Always_154_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 5036);
    *((int *)t2) = 1;
    t3 = (t0 + 4844);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(155, ng0);

LAB5:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 2384U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(158, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3624);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB17;

LAB9:    xsi_set_current_line(160, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 3624);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB17;

LAB11:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 3624);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB17;

LAB13:    xsi_set_current_line(164, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3624);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB17;

}


extern void work_m_00000000000506157929_4120206225_init()
{
	static char *pe[] = {(void *)Cont_49_0,(void *)Initial_54_1,(void *)Always_66_2,(void *)Always_146_3,(void *)Always_154_4};
	xsi_register_didat("work_m_00000000000506157929_4120206225", "isim/FPGAXC3_Test_isim_beh.exe.sim/work/m_00000000000506157929_4120206225.didat");
	xsi_register_executes(pe);
}
