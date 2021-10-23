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
static const char *ng0 = "E:/DigTeleProject/ShoppingDemo/test.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {85U, 0U};
static int ng6[] = {5, 0};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {38U, 0U};
static unsigned int ng9[] = {25U, 0U};
static unsigned int ng10[] = {149U, 0U};
static int ng11[] = {10000, 0, 0, 0};
static const char *ng12 = "p1.vcd";



static void Always_13_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 1800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);

LAB4:    xsi_set_current_line(14, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1700);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(15, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1700);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Initial_20_1(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 1944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);

LAB4:    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1276);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1092);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1844);
    xsi_process_wait(t2, 8000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(24, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1092);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2428);
    *((int *)t2) = 1;
    t3 = (t0 + 1972);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1844);
    xsi_process_wait(t2, 16000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1276);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t8 = (t7 & t6);
    t4 = (t0 + 3704);
    *((int *)t4) = t8;

LAB8:    t9 = (t0 + 3704);
    if (*((int *)t9) > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1844);
    xsi_process_wait(t2, 16000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB9:    xsi_set_current_line(30, ng0);

LAB11:    xsi_set_current_line(31, ng0);
    t10 = (t0 + 2436);
    *((int *)t10) = 1;
    t11 = (t0 + 1972);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t9 = (t12 + 4);
    t10 = (t4 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (t5 >> 0);
    *((unsigned int *)t12) = t6;
    t7 = *((unsigned int *)t10);
    t13 = (t7 >> 0);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 3U);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 3U);
    t11 = (t0 + 1184);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 2);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t9 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_rshift(t12, 10, t4, 10, t9, 32);
    t10 = (t0 + 1276);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 10);
    t2 = (t0 + 3704);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB8;

LAB13:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1276);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t8 = (t7 & t6);
    t4 = (t0 + 3708);
    *((int *)t4) = t8;

LAB14:    t9 = (t0 + 3708);
    if (*((int *)t9) > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1844);
    xsi_process_wait(t2, 16000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB15:    xsi_set_current_line(39, ng0);

LAB17:    xsi_set_current_line(40, ng0);
    t10 = (t0 + 2444);
    *((int *)t10) = 1;
    t11 = (t0 + 1972);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t9 = (t12 + 4);
    t10 = (t4 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (t5 >> 0);
    *((unsigned int *)t12) = t6;
    t7 = *((unsigned int *)t10);
    t13 = (t7 >> 0);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 3U);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 3U);
    t11 = (t0 + 1184);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 2);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t9 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_rshift(t12, 10, t4, 10, t9, 32);
    t10 = (t0 + 1276);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 10);
    t2 = (t0 + 3708);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB14;

LAB19:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1276);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t8 = (t7 & t6);
    t4 = (t0 + 3712);
    *((int *)t4) = t8;

LAB20:    t9 = (t0 + 3712);
    if (*((int *)t9) > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1844);
    xsi_process_wait(t2, 16000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB21:    xsi_set_current_line(48, ng0);

LAB23:    xsi_set_current_line(49, ng0);
    t10 = (t0 + 2452);
    *((int *)t10) = 1;
    t11 = (t0 + 1972);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t9 = (t12 + 4);
    t10 = (t4 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (t5 >> 0);
    *((unsigned int *)t12) = t6;
    t7 = *((unsigned int *)t10);
    t13 = (t7 >> 0);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 3U);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 3U);
    t11 = (t0 + 1184);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 2);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t9 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_rshift(t12, 10, t4, 10, t9, 32);
    t10 = (t0 + 1276);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 10);
    t2 = (t0 + 3712);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB20;

LAB25:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1276);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t8 = (t7 & t6);
    t4 = (t0 + 3716);
    *((int *)t4) = t8;

LAB26:    t9 = (t0 + 3716);
    if (*((int *)t9) > 0)
        goto LAB27;

LAB28:    goto LAB1;

LAB27:    xsi_set_current_line(57, ng0);

LAB29:    xsi_set_current_line(58, ng0);
    t10 = (t0 + 2460);
    *((int *)t10) = 1;
    t11 = (t0 + 1972);
    *((char **)t11) = t10;
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t9 = (t12 + 4);
    t10 = (t4 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (t5 >> 0);
    *((unsigned int *)t12) = t6;
    t7 = *((unsigned int *)t10);
    t13 = (t7 >> 0);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t14 & 3U);
    t15 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t15 & 3U);
    t11 = (t0 + 1184);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 2);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t9 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_rshift(t12, 10, t4, 10, t9, 32);
    t10 = (t0 + 1276);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 10);
    t2 = (t0 + 3716);
    t8 = *((int *)t2);
    *((int *)t2) = (t8 - 1);
    goto LAB26;

}

static void Always_110_2(char *t0)
{
    char t3[16];
    char t5[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;

LAB0:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);

LAB4:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1988);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(112, ng0);
    t2 = xsi_vlog_time(t3, 1000.0000000000000, 1000.0000000000000);
    t4 = ((char*)((ng11)));
    xsi_vlog_unsigned_greatereq(t5, 64, t3, 64, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(112, ng0);
    xsi_vlog_finish(1);
    goto LAB8;

}

static void Initial_114_3(char *t0)
{

LAB0:    xsi_set_current_line(114, ng0);

LAB2:    xsi_set_current_line(115, ng0);
    xsi_vcd_dumpfile(ng12);
    xsi_set_current_line(116, ng0);
    xsi_vcd_dumpvars(t0);

LAB1:    return;
}


extern void work_m_00000000000785486648_1985558087_init()
{
	static char *pe[] = {(void *)Always_13_0,(void *)Initial_20_1,(void *)Always_110_2,(void *)Initial_114_3};
	xsi_register_didat("work_m_00000000000785486648_1985558087", "isim/test_isim_beh.exe.sim/work/m_00000000000785486648_1985558087.didat");
	xsi_register_executes(pe);
}
