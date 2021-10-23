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
static const char *ng0 = "C:/digiCExp/FPGAXC3_Test/Verilog HDL/LED_Nixietube.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {5000U, 0U};
static unsigned int ng5[] = {252U, 0U};
static unsigned int ng6[] = {96U, 0U};
static unsigned int ng7[] = {218U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {242U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {102U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {182U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {190U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {224U, 0U};
static unsigned int ng18[] = {8U, 0U};
static unsigned int ng19[] = {254U, 0U};
static unsigned int ng20[] = {9U, 0U};
static unsigned int ng21[] = {246U, 0U};



static void Cont_20_0(char *t0)
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

LAB0:    t1 = (t0 + 2876U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1664U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 4);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 255U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 255U);
    t12 = (t0 + 3716);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 255U;
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
    xsi_driver_vfirst_trans(t12, 0, 7);
    t25 = (t0 + 3648);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_36_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 3020U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1572U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t12);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t42, 8);

LAB16:    t43 = (t0 + 3752);
    t44 = (t43 + 32U);
    t45 = *((char **)t44);
    t46 = (t45 + 40U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 3U;
    t49 = t48;
    t50 = (t3 + 4);
    t51 = *((unsigned int *)t3);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans(t43, 0, 1);
    t56 = (t0 + 3656);
    *((int *)t56) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 2168);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t21) != 0)
        goto LAB19;

LAB20:    t28 = (t17 + 4);
    t29 = *((unsigned int *)t17);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB21;

LAB22:    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t28);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t28) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t17) > 0)
        goto LAB27;

LAB28:    memcpy(t16, t37, 8);

LAB29:    goto LAB9;

LAB10:    t42 = ((char*)((ng3)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 2, t16, 2, t42, 2);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t17) = 1;
    goto LAB20;

LAB19:    t27 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB21:    t32 = ((char*)((ng1)));
    goto LAB22;

LAB23:    t37 = ((char*)((ng2)));
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t16, 2, t32, 2, t37, 2);
    goto LAB29;

LAB27:    memcpy(t16, t32, 8);
    goto LAB29;

}

static void Initial_38_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(39, ng0);

LAB2:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);
    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2168);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2260);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2352);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 13, 0LL);

LAB1:    return;
}

static void Always_46_3(char *t0)
{
    char t8[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    t1 = (t0 + 3308U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3664);
    *((int *)t2) = 1;
    t3 = (t0 + 3336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 2352);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB8;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(51, ng0);

LAB14:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2260);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t5);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t5) == 0)
        goto LAB15;

LAB17:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB18:    t7 = (t8 + 4);
    t9 = (t4 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    *((unsigned int *)t8) = t25;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB20;

LAB19:    t30 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t30 & 1U);
    t31 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t31 & 1U);
    t10 = (t0 + 2260);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2352);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 13);

LAB13:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(49, ng0);
    t18 = (t0 + 2352);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 13, t20, 13, t21, 13);
    t23 = (t0 + 2352);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 13);
    goto LAB13;

LAB15:    *((unsigned int *)t8) = 1;
    goto LAB18;

LAB20:    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t26 | t27);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t28 | t29);
    goto LAB19;

}

static void Always_57_4(char *t0)
{
    char t20[8];
    char t34[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    char *t35;

LAB0:    t1 = (t0 + 3452U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3672);
    *((int *)t2) = 1;
    t3 = (t0 + 3480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1572U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(60, ng0);

LAB9:    xsi_set_current_line(61, ng0);
    t11 = (t0 + 2168);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(78, ng0);

LAB38:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    memset(t34, 0, 8);
    t2 = (t34 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t34) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t10 & 15U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 15U);

LAB39:    t5 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t34, 4, t5, 4);
    if (t31 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t34, 4, t2, 4);
    if (t31 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t34, 4, t2, 4);
    if (t31 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng8)));
    t31 = xsi_vlog_unsigned_case_compare(t34, 4, t2, 4);
    if (t31 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng10)));
    t31 = xsi_vlog_unsigned_case_compare(t34, 4, t2, 4);
    if (t31 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng12)));
    t31 = xsi_vlog_unsigned_case_compare(t34, 4, t2, 4);
    if (t31 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng14)));
    t31 = xsi_vlog_unsigned_case_compare(t34, 4, t2, 4);
    if (t31 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng16)));
    t31 = xsi_vlog_unsigned_case_compare(t34, 4, t2, 4);
    if (t31 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng18)));
    t31 = xsi_vlog_unsigned_case_compare(t34, 4, t2, 4);
    if (t31 == 1)
        goto LAB56;

LAB57:    t2 = ((char*)((ng20)));
    t31 = xsi_vlog_unsigned_case_compare(t34, 4, t2, 4);
    if (t31 == 1)
        goto LAB58;

LAB59:
LAB61:
LAB60:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB62:
LAB12:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2168);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 1, t4, 1, t5, 1);
    t11 = (t0 + 2168);
    xsi_vlogvar_assign_value(t11, t36, 0, 0, 1);
    goto LAB8;

LAB10:    xsi_set_current_line(62, ng0);

LAB13:    xsi_set_current_line(63, ng0);
    t21 = (t0 + 1848U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (t24 >> 4);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 4);
    *((unsigned int *)t21) = t27;
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 15U);
    t29 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t29 & 15U);

LAB14:    t30 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t20, 4, t30, 4);
    if (t31 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t31 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t31 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t31 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t31 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng10)));
    t31 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t31 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t31 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t31 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t31 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t31 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng16)));
    t31 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t31 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng18)));
    t31 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t31 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng20)));
    t31 = xsi_vlog_unsigned_case_compare(t20, 4, t2, 4);
    if (t31 == 1)
        goto LAB33;

LAB34:
LAB36:
LAB35:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB37:    goto LAB12;

LAB15:    xsi_set_current_line(64, ng0);
    t32 = ((char*)((ng5)));
    t33 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 8, t32, 8, t33, 8);
    t35 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 8, 0LL);
    goto LAB37;

LAB17:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng6)));
    t4 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 8, t3, 8, t4, 8);
    t5 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t5, t34, 0, 0, 8, 0LL);
    goto LAB37;

LAB19:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 8, t3, 8, t4, 8);
    t5 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t5, t34, 0, 0, 8, 0LL);
    goto LAB37;

LAB21:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng9)));
    t4 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 8, t3, 8, t4, 8);
    t5 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t5, t34, 0, 0, 8, 0LL);
    goto LAB37;

LAB23:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng11)));
    t4 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 8, t3, 8, t4, 8);
    t5 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t5, t34, 0, 0, 8, 0LL);
    goto LAB37;

LAB25:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng13)));
    t4 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 8, t3, 8, t4, 8);
    t5 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t5, t34, 0, 0, 8, 0LL);
    goto LAB37;

LAB27:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng15)));
    t4 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 8, t3, 8, t4, 8);
    t5 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t5, t34, 0, 0, 8, 0LL);
    goto LAB37;

LAB29:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng17)));
    t4 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 8, t3, 8, t4, 8);
    t5 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t5, t34, 0, 0, 8, 0LL);
    goto LAB37;

LAB31:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng19)));
    t4 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 8, t3, 8, t4, 8);
    t5 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t5, t34, 0, 0, 8, 0LL);
    goto LAB37;

LAB33:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng21)));
    t4 = ((char*)((ng2)));
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 8, t3, 8, t4, 8);
    t5 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t5, t34, 0, 0, 8, 0LL);
    goto LAB37;

LAB40:    xsi_set_current_line(80, ng0);
    t11 = ((char*)((ng5)));
    t12 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB62;

LAB42:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB44:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB46:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB48:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB50:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB52:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB54:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB56:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB62;

LAB58:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 2076);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB62;

}


extern void work_m_00000000002955703038_1115383042_init()
{
	static char *pe[] = {(void *)Cont_20_0,(void *)Cont_36_1,(void *)Initial_38_2,(void *)Always_46_3,(void *)Always_57_4};
	xsi_register_didat("work_m_00000000002955703038_1115383042", "isim/FPGAXC3_Test_isim_beh.exe.sim/work/m_00000000002955703038_1115383042.didat");
	xsi_register_executes(pe);
}
