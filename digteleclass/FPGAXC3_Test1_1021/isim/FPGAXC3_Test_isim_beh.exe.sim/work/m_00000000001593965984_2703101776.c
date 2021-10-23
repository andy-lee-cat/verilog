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
static const char *ng0 = "C:/digiCExp/FPGAXC3_Test/Verilog HDL/Uart_Rx.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {168U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {24U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {40U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {56U, 0U};
static int ng9[] = {2, 0};
static unsigned int ng10[] = {72U, 0U};
static int ng11[] = {3, 0};
static unsigned int ng12[] = {88U, 0U};
static int ng13[] = {4, 0};
static unsigned int ng14[] = {104U, 0U};
static int ng15[] = {5, 0};
static unsigned int ng16[] = {120U, 0U};
static int ng17[] = {6, 0};
static unsigned int ng18[] = {136U, 0U};
static int ng19[] = {7, 0};
static unsigned int ng20[] = {152U, 0U};



static void Always_27_0(char *t0)
{
    char t6[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
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

LAB0:    t1 = (t0 + 2444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2928);
    *((int *)t2) = 1;
    t3 = (t0 + 2472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 864U);
    t5 = *((char **)t4);
    t4 = (t0 + 1552);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1552);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 864U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t7 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t13 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t6 + 4);
    t15 = (t7 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    *((unsigned int *)t6) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t6);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4);
    t29 = (t6 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB12;

LAB13:
LAB14:    t56 = (t0 + 1644);
    xsi_vlogvar_wait_assign_value(t56, t24, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

LAB12:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t6 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t6);
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
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB14;

}

static void Always_36_1(char *t0)
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

LAB0:    t1 = (t0 + 2588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2936);
    *((int *)t2) = 1;
    t3 = (t0 + 2616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1644);
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

LAB27:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1460);
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

LAB10:    t20 = (t0 + 1920);
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

LAB26:    xsi_set_current_line(39, ng0);
    t86 = ((char*)((ng1)));
    t87 = (t0 + 1736);
    xsi_vlogvar_wait_assign_value(t87, t86, 0, 0, 1, 0LL);
    goto LAB28;

LAB31:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(41, ng0);
    t20 = ((char*)((ng3)));
    t21 = (t0 + 1736);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 1, 0LL);
    goto LAB35;

}

static void Always_47_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 2732U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2944);
    *((int *)t2) = 1;
    t3 = (t0 + 2760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t5 = (t0 + 772U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1736);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    t13 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t6);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t12);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t4) = 1;

LAB17:    t20 = (t4 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(145, ng0);

LAB113:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(50, ng0);

LAB13:    xsi_set_current_line(51, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1276);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(59, ng0);

LAB21:    xsi_set_current_line(60, ng0);
    t28 = (t0 + 1460);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);

LAB22:    t31 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 8, t31, 8);
    if (t32 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t32 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t32 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng8)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t32 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng10)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t32 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng12)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t32 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng14)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t32 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t32 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng18)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t32 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng20)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t32 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 8, t2, 8);
    if (t32 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);

LAB47:    goto LAB20;

LAB23:    xsi_set_current_line(61, ng0);

LAB48:    xsi_set_current_line(62, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB25:    xsi_set_current_line(66, ng0);

LAB49:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = (t0 + 1092);
    t5 = (t0 + 1092);
    t6 = (t5 + 44U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 864U);
    t5 = *((char **)t3);
    t7 = *((unsigned int *)t2);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    *((unsigned int *)t4) = t9;
    t3 = (t2 + 4);
    t6 = (t5 + 4);
    t12 = (t4 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t14 = (t10 | t11);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB52;

LAB53:
LAB54:    t13 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB27:    xsi_set_current_line(73, ng0);

LAB55:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = (t0 + 1092);
    t5 = (t0 + 1092);
    t6 = (t5 + 44U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 864U);
    t12 = *((char **)t6);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    *((unsigned int *)t4) = t9;
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t19 = (t4 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t14 = (t10 | t11);
    *((unsigned int *)t19) = t14;
    t15 = *((unsigned int *)t19);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB58;

LAB59:
LAB60:    t20 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB29:    xsi_set_current_line(80, ng0);

LAB61:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = (t0 + 1092);
    t5 = (t0 + 1092);
    t6 = (t5 + 44U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB62;

LAB63:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 864U);
    t12 = *((char **)t6);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    *((unsigned int *)t4) = t9;
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t19 = (t4 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t14 = (t10 | t11);
    *((unsigned int *)t19) = t14;
    t15 = *((unsigned int *)t19);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB64;

LAB65:
LAB66:    t20 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB31:    xsi_set_current_line(87, ng0);

LAB67:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = (t0 + 1092);
    t5 = (t0 + 1092);
    t6 = (t5 + 44U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB68;

LAB69:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 864U);
    t12 = *((char **)t6);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    *((unsigned int *)t4) = t9;
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t19 = (t4 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t14 = (t10 | t11);
    *((unsigned int *)t19) = t14;
    t15 = *((unsigned int *)t19);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB70;

LAB71:
LAB72:    t20 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB33:    xsi_set_current_line(94, ng0);

LAB73:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = (t0 + 1092);
    t5 = (t0 + 1092);
    t6 = (t5 + 44U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 864U);
    t12 = *((char **)t6);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    *((unsigned int *)t4) = t9;
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t19 = (t4 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t14 = (t10 | t11);
    *((unsigned int *)t19) = t14;
    t15 = *((unsigned int *)t19);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB76;

LAB77:
LAB78:    t20 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB35:    xsi_set_current_line(101, ng0);

LAB79:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = (t0 + 1092);
    t5 = (t0 + 1092);
    t6 = (t5 + 44U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB80;

LAB81:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 864U);
    t12 = *((char **)t6);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    *((unsigned int *)t4) = t9;
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t19 = (t4 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t14 = (t10 | t11);
    *((unsigned int *)t19) = t14;
    t15 = *((unsigned int *)t19);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB82;

LAB83:
LAB84:    t20 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB37:    xsi_set_current_line(108, ng0);

LAB85:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = (t0 + 1092);
    t5 = (t0 + 1092);
    t6 = (t5 + 44U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng17)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB86;

LAB87:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 864U);
    t12 = *((char **)t6);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    *((unsigned int *)t4) = t9;
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t19 = (t4 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t14 = (t10 | t11);
    *((unsigned int *)t19) = t14;
    t15 = *((unsigned int *)t19);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB88;

LAB89:
LAB90:    t20 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB39:    xsi_set_current_line(115, ng0);

LAB91:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = (t0 + 1092);
    t5 = (t0 + 1092);
    t6 = (t5 + 44U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng19)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB92;

LAB93:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 864U);
    t12 = *((char **)t6);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    *((unsigned int *)t4) = t9;
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t19 = (t4 + 4);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t14 = (t10 | t11);
    *((unsigned int *)t19) = t14;
    t15 = *((unsigned int *)t19);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB94;

LAB95:
LAB96:    t20 = (t0 + 1828);
    xsi_vlogvar_wait_assign_value(t20, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB41:    xsi_set_current_line(122, ng0);

LAB97:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 864U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t13 = (t12 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t6);
    t11 = *((unsigned int *)t13);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t13);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB101;

LAB98:    if (t18 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t4) = 1;

LAB101:    t20 = (t4 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1276);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB104:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB43:    xsi_set_current_line(131, ng0);

LAB105:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1920);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 864U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t2 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = *((unsigned int *)t5);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB109;

LAB106:    if (t18 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t4) = 1;

LAB109:    t13 = (t4 + 4);
    t23 = *((unsigned int *)t13);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB112:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 8, t5, 8, t6, 8);
    t12 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB47;

LAB50:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB51;

LAB52:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    goto LAB54;

LAB56:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB57;

LAB58:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t17 | t18);
    goto LAB60;

LAB62:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB63;

LAB64:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t17 | t18);
    goto LAB66;

LAB68:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB69;

LAB70:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t17 | t18);
    goto LAB72;

LAB74:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB75;

LAB76:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t17 | t18);
    goto LAB78;

LAB80:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB81;

LAB82:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t17 | t18);
    goto LAB84;

LAB86:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB87;

LAB88:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t17 | t18);
    goto LAB90;

LAB92:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB93;

LAB94:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t19);
    *((unsigned int *)t4) = (t17 | t18);
    goto LAB96;

LAB100:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB101;

LAB102:    xsi_set_current_line(125, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 1276);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB104;

LAB108:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB109;

LAB110:    xsi_set_current_line(134, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 1368);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    goto LAB112;

}


extern void work_m_00000000001593965984_2703101776_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)Always_36_1,(void *)Always_47_2};
	xsi_register_didat("work_m_00000000001593965984_2703101776", "isim/FPGAXC3_Test_isim_beh.exe.sim/work/m_00000000001593965984_2703101776.didat");
	xsi_register_executes(pe);
}
