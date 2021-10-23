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
static const char *ng0 = "C:/digiCExp/FPGAXC3_Test/Verilog HDL/Uart_Tx.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {168U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {16U, 0U};
static unsigned int ng5[] = {32U, 0U};
static unsigned int ng6[] = {48U, 0U};
static unsigned int ng7[] = {64U, 0U};
static unsigned int ng8[] = {80U, 0U};
static unsigned int ng9[] = {96U, 0U};
static unsigned int ng10[] = {112U, 0U};
static unsigned int ng11[] = {128U, 0U};
static unsigned int ng12[] = {144U, 0U};
static unsigned int ng13[] = {160U, 0U};



static void Always_19_0(char *t0)
{
    char t6[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 2168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2652);
    *((int *)t2) = 1;
    t3 = (t0 + 2196);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 864U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1368);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t6 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t6) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 864U);
    t24 = *((char **)t23);
    t26 = *((unsigned int *)t6);
    t27 = *((unsigned int *)t24);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t23 = (t6 + 4);
    t29 = (t24 + 4);
    t30 = (t25 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB12;

LAB13:
LAB14:    t56 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t56, t25, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t6) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t25) = (t36 | t37);
    t38 = (t6 + 4);
    t39 = (t24 + 4);
    t40 = *((unsigned int *)t6);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t24);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t54 & t50);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    goto LAB14;

}

static void Always_25_1(char *t0)
{
    char t7[8];
    char t19[8];
    char t40[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;

LAB0:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2660);
    *((int *)t2) = 1;
    t3 = (t0 + 2340);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1460);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB9:    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t15);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB10;

LAB11:    memcpy(t48, t7, 8);

LAB12:    t80 = (t48 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t48);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t8);
    t16 = (t12 ^ t13);
    t17 = (t11 | t16);
    t18 = *((unsigned int *)t6);
    t24 = *((unsigned int *)t8);
    t25 = (t18 | t24);
    t26 = (~(t25));
    t27 = (t17 & t26);
    if (t27 != 0)
        goto LAB32;

LAB29:    if (t25 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t7) = 1;

LAB32:    t15 = (t7 + 4);
    t28 = *((unsigned int *)t15);
    t32 = (~(t28));
    t33 = *((unsigned int *)t7);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB33;

LAB34:
LAB35:
LAB28:    goto LAB2;

LAB6:    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB8:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB9;

LAB10:    t20 = (t0 + 1092);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    memset(t19, 0, 8);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t23) == 0)
        goto LAB13;

LAB15:    t29 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t29) = 1;

LAB16:    t30 = (t19 + 4);
    t31 = (t22 + 4);
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    *((unsigned int *)t19) = t33;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB18;

LAB17:    t38 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t38 & 1U);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t39 & 1U);
    memset(t40, 0, 8);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t19);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t41) != 0)
        goto LAB21;

LAB22:    t49 = *((unsigned int *)t7);
    t50 = *((unsigned int *)t40);
    t51 = (t49 & t50);
    *((unsigned int *)t48) = t51;
    t52 = (t7 + 4);
    t53 = (t40 + 4);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t52);
    t56 = *((unsigned int *)t53);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = *((unsigned int *)t54);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB18:    t34 = *((unsigned int *)t19);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t19) = (t34 | t35);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t36 | t37);
    goto LAB17;

LAB19:    *((unsigned int *)t40) = 1;
    goto LAB22;

LAB21:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB22;

LAB23:    t60 = *((unsigned int *)t48);
    t61 = *((unsigned int *)t54);
    *((unsigned int *)t48) = (t60 | t61);
    t62 = (t7 + 4);
    t63 = (t40 + 4);
    t64 = *((unsigned int *)t7);
    t65 = (~(t64));
    t66 = *((unsigned int *)t62);
    t67 = (~(t66));
    t68 = *((unsigned int *)t40);
    t69 = (~(t68));
    t70 = *((unsigned int *)t63);
    t71 = (~(t70));
    t72 = (t65 & t67);
    t73 = (t69 & t71);
    t74 = (~(t72));
    t75 = (~(t73));
    t76 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t76 & t74);
    t77 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t77 & t75);
    t78 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t78 & t74);
    t79 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t79 & t75);
    goto LAB25;

LAB26:    xsi_set_current_line(28, ng0);
    t86 = ((char*)((ng1)));
    t87 = (t0 + 1276);
    xsi_vlogvar_wait_assign_value(t87, t86, 0, 0, 1, 0LL);
    goto LAB28;

LAB31:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(30, ng0);
    t20 = ((char*)((ng3)));
    t21 = (t0 + 1276);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 1, 0LL);
    goto LAB35;

}

static void Always_33_2(char *t0)
{
    char t8[8];
    char t37[8];
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
    char *t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2668);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1276);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
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

LAB11:    xsi_set_current_line(124, ng0);

LAB81:    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(36, ng0);

LAB13:    xsi_set_current_line(37, ng0);
    t30 = (t0 + 1644);
    t31 = (t30 + 36U);
    t32 = *((char **)t31);

LAB14:    t33 = ((char*)((ng3)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 8, t33, 8);
    if (t34 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 8, t2, 8);
    if (t34 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 8, t2, 8);
    if (t34 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 8, t2, 8);
    if (t34 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng7)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 8, t2, 8);
    if (t34 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng8)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 8, t2, 8);
    if (t34 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng9)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 8, t2, 8);
    if (t34 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng10)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 8, t2, 8);
    if (t34 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng11)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 8, t2, 8);
    if (t34 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng12)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 8, t2, 8);
    if (t34 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng13)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 8, t2, 8);
    if (t34 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng2)));
    t34 = xsi_vlog_unsigned_case_compare(t32, 8, t2, 8);
    if (t34 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);

LAB41:    goto LAB12;

LAB15:    xsi_set_current_line(39, ng0);

LAB42:    xsi_set_current_line(40, ng0);
    t35 = ((char*)((ng3)));
    t36 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);
    goto LAB41;

LAB17:    xsi_set_current_line(45, ng0);

LAB43:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 772U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t6 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 772U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t5 = ((char*)((ng3)));
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    *((unsigned int *)t37) = t19;
    t6 = (t8 + 4);
    t7 = (t5 + 4);
    t9 = (t37 + 4);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    *((unsigned int *)t9) = t22;
    t25 = *((unsigned int *)t9);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB44;

LAB45:
LAB46:    t10 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t10, t37, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);
    goto LAB41;

LAB19:    xsi_set_current_line(52, ng0);

LAB47:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 772U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t6 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 772U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t5 = (t0 + 1552);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    *((unsigned int *)t37) = t19;
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t23 = (t37 + 4);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t23) = t22;
    t25 = *((unsigned int *)t23);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB48;

LAB49:
LAB50:    t24 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t24, t37, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);
    goto LAB41;

LAB21:    xsi_set_current_line(59, ng0);

LAB51:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 772U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t6 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 772U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 2);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t5 = (t0 + 1552);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    *((unsigned int *)t37) = t19;
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t23 = (t37 + 4);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t23) = t22;
    t25 = *((unsigned int *)t23);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB52;

LAB53:
LAB54:    t24 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t24, t37, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);
    goto LAB41;

LAB23:    xsi_set_current_line(66, ng0);

LAB55:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 772U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 3);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t6 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 772U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 3);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t5 = (t0 + 1552);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    *((unsigned int *)t37) = t19;
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t23 = (t37 + 4);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t23) = t22;
    t25 = *((unsigned int *)t23);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB56;

LAB57:
LAB58:    t24 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t24, t37, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);
    goto LAB41;

LAB25:    xsi_set_current_line(73, ng0);

LAB59:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 772U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 4);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t6 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 772U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 4);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t5 = (t0 + 1552);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    *((unsigned int *)t37) = t19;
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t23 = (t37 + 4);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t23) = t22;
    t25 = *((unsigned int *)t23);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB60;

LAB61:
LAB62:    t24 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t24, t37, 0, 0, 1, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);
    goto LAB41;

LAB27:    xsi_set_current_line(80, ng0);

LAB63:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 772U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 5);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t6 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 772U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 5);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t5 = (t0 + 1552);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    *((unsigned int *)t37) = t19;
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t23 = (t37 + 4);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t23) = t22;
    t25 = *((unsigned int *)t23);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB64;

LAB65:
LAB66:    t24 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t24, t37, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);
    goto LAB41;

LAB29:    xsi_set_current_line(87, ng0);

LAB67:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 772U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 6);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t6 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 772U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 6);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t5 = (t0 + 1552);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    *((unsigned int *)t37) = t19;
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t23 = (t37 + 4);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t23) = t22;
    t25 = *((unsigned int *)t23);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB68;

LAB69:
LAB70:    t24 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t24, t37, 0, 0, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);
    goto LAB41;

LAB31:    xsi_set_current_line(94, ng0);

LAB71:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 772U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t3) = t16;
    t6 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 772U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t5 = (t0 + 1552);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    *((unsigned int *)t37) = t19;
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t23 = (t37 + 4);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    *((unsigned int *)t23) = t22;
    t25 = *((unsigned int *)t23);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB72;

LAB73:
LAB74:    t24 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t24, t37, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);
    goto LAB41;

LAB33:    xsi_set_current_line(101, ng0);

LAB75:    xsi_set_current_line(102, ng0);
    t3 = (t0 + 1552);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 772U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t5 = ((char*)((ng3)));
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    *((unsigned int *)t37) = t19;
    t6 = (t8 + 4);
    t7 = (t5 + 4);
    t9 = (t37 + 4);
    t20 = *((unsigned int *)t6);
    t21 = *((unsigned int *)t7);
    t22 = (t20 | t21);
    *((unsigned int *)t9) = t22;
    t25 = *((unsigned int *)t9);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB76;

LAB77:
LAB78:    t10 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t10, t37, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);
    goto LAB41;

LAB35:    xsi_set_current_line(108, ng0);

LAB79:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);
    goto LAB41;

LAB37:    xsi_set_current_line(114, ng0);

LAB80:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 8, t4, 8, t5, 8);
    t6 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 8, 0LL);
    goto LAB41;

LAB44:    t27 = *((unsigned int *)t37);
    t28 = *((unsigned int *)t9);
    *((unsigned int *)t37) = (t27 | t28);
    goto LAB46;

LAB48:    t27 = *((unsigned int *)t37);
    t28 = *((unsigned int *)t23);
    *((unsigned int *)t37) = (t27 | t28);
    goto LAB50;

LAB52:    t27 = *((unsigned int *)t37);
    t28 = *((unsigned int *)t23);
    *((unsigned int *)t37) = (t27 | t28);
    goto LAB54;

LAB56:    t27 = *((unsigned int *)t37);
    t28 = *((unsigned int *)t23);
    *((unsigned int *)t37) = (t27 | t28);
    goto LAB58;

LAB60:    t27 = *((unsigned int *)t37);
    t28 = *((unsigned int *)t23);
    *((unsigned int *)t37) = (t27 | t28);
    goto LAB62;

LAB64:    t27 = *((unsigned int *)t37);
    t28 = *((unsigned int *)t23);
    *((unsigned int *)t37) = (t27 | t28);
    goto LAB66;

LAB68:    t27 = *((unsigned int *)t37);
    t28 = *((unsigned int *)t23);
    *((unsigned int *)t37) = (t27 | t28);
    goto LAB70;

LAB72:    t27 = *((unsigned int *)t37);
    t28 = *((unsigned int *)t23);
    *((unsigned int *)t37) = (t27 | t28);
    goto LAB74;

LAB76:    t27 = *((unsigned int *)t37);
    t28 = *((unsigned int *)t9);
    *((unsigned int *)t37) = (t27 | t28);
    goto LAB78;

}


extern void work_m_00000000000876846108_4148472022_init()
{
	static char *pe[] = {(void *)Always_19_0,(void *)Always_25_1,(void *)Always_33_2};
	xsi_register_didat("work_m_00000000000876846108_4148472022", "isim/FPGAXC3_Test_isim_beh.exe.sim/work/m_00000000000876846108_4148472022.didat");
	xsi_register_executes(pe);
}
