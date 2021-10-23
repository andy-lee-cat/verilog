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
static const char *ng0 = "C:/digiCExp/FPGAXC3_Test/Verilog HDL/Key.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {25000U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};



static void Initial_12_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(13, ng0);

LAB2:    xsi_set_current_line(14, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1104);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(15, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1012);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_18_1(char *t0)
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

LAB0:    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2492);
    *((int *)t2) = 1;
    t3 = (t0 + 1892);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1012);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
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

LAB11:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 16, t4, 16, t5, 16);
    t6 = (t0 + 1012);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 16);

LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(21, ng0);

LAB13:    xsi_set_current_line(22, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 1012);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 16);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t5) == 0)
        goto LAB14;

LAB16:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB17:    t7 = (t8 + 4);
    t9 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t8) = t17;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB19;

LAB18:    t22 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t22 & 1U);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t10 = (t0 + 1104);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 1);
    goto LAB12;

LAB14:    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB19:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t18 | t19);
    t20 = *((unsigned int *)t7);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t20 | t21);
    goto LAB18;

}

static void Always_29_2(char *t0)
{
    char t7[8];
    char t16[8];
    char t19[8];
    char t23[8];
    char t25[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    int t36;
    char *t37;
    unsigned int t38;
    int t39;
    int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    int t44;

LAB0:    t1 = (t0 + 2008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2500);
    *((int *)t2) = 1;
    t3 = (t0 + 2036);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1196);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t8 = (t0 + 1196);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = (t0 + 1196);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t7, 12, t6, t10, t13, 2, 1, t14, 32, 1);
    t15 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_lshift(t16, 12, t7, 12, t15, 32);
    t17 = (t0 + 692U);
    t18 = *((char **)t17);
    t17 = (t0 + 668U);
    t20 = (t17 + 44U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t19, 12, t18, t21, 2, t22, 32, 1);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 12, t16, 12, t19, 12);
    t24 = (t0 + 1196);
    t27 = (t0 + 1196);
    t28 = (t27 + 44U);
    t29 = *((char **)t28);
    t30 = (t0 + 1196);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t25, t26, t29, t32, 2, 1, t33, 32, 1);
    t34 = (t25 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (!(t35));
    t37 = (t26 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    t40 = (t36 && t39);
    if (t40 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1196);
    t6 = (t5 + 44U);
    t8 = *((char **)t6);
    t9 = (t0 + 1196);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t7, 12, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_lshift(t16, 12, t7, 12, t13, 32);
    t14 = (t0 + 692U);
    t15 = *((char **)t14);
    t14 = (t0 + 668U);
    t17 = (t14 + 44U);
    t18 = *((char **)t17);
    t20 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t19, 12, t15, t18, 2, t20, 32, 1);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 12, t16, 12, t19, 12);
    t21 = (t0 + 1196);
    t22 = (t0 + 1196);
    t24 = (t22 + 44U);
    t27 = *((char **)t24);
    t28 = (t0 + 1196);
    t29 = (t28 + 40U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t25, t26, t27, t30, 2, 1, t31, 32, 1);
    t32 = (t25 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (!(t35));
    t33 = (t26 + 4);
    t38 = *((unsigned int *)t33);
    t39 = (!(t38));
    t40 = (t36 && t39);
    if (t40 == 1)
        goto LAB8;

LAB9:    goto LAB2;

LAB6:    t41 = *((unsigned int *)t25);
    t42 = *((unsigned int *)t26);
    t43 = (t41 - t42);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, *((unsigned int *)t26), t44, 0LL);
    goto LAB7;

LAB8:    t41 = *((unsigned int *)t25);
    t42 = *((unsigned int *)t26);
    t43 = (t41 - t42);
    t44 = (t43 + 1);
    xsi_vlogvar_wait_assign_value(t21, t23, 0, *((unsigned int *)t26), t44, 0LL);
    goto LAB9;

}

static void Cont_35_3(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1196);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = (t0 + 1196);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t6, 12, t5, t9, t12, 2, 1, t13, 32, 1);
    memset(t3, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t14);
    t17 = (t15 | t16);
    if (t17 != 4095U)
        goto LAB5;

LAB4:    if (*((unsigned int *)t14) == 0)
        goto LAB6;

LAB7:    t18 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t18) = 1;

LAB5:    t19 = (t0 + 2560);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memset(t23, 0, 8);
    t24 = 1U;
    t25 = t24;
    t26 = (t3 + 4);
    t27 = *((unsigned int *)t3);
    t24 = (t24 & t27);
    t28 = *((unsigned int *)t26);
    t25 = (t25 & t28);
    t29 = (t23 + 4);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t30 | t24);
    t31 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t31 | t25);
    xsi_driver_vfirst_trans(t19, 0, 0);
    t32 = (t0 + 2508);
    *((int *)t32) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t3) = 1;
    goto LAB5;

}

static void Cont_36_4(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 2296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1196);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = (t0 + 1196);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t6, 12, t5, t9, t12, 2, 1, t13, 32, 1);
    memset(t3, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t14);
    t17 = (t15 | t16);
    if (t17 != 4095U)
        goto LAB5;

LAB4:    if (*((unsigned int *)t14) == 0)
        goto LAB6;

LAB7:    t18 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t18) = 1;

LAB5:    t19 = (t0 + 2596);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    memset(t23, 0, 8);
    t24 = 1U;
    t25 = t24;
    t26 = (t3 + 4);
    t27 = *((unsigned int *)t3);
    t24 = (t24 & t27);
    t28 = *((unsigned int *)t26);
    t25 = (t25 & t28);
    t29 = (t23 + 4);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t30 | t24);
    t31 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t31 | t25);
    xsi_driver_vfirst_trans(t19, 1, 1);
    t32 = (t0 + 2516);
    *((int *)t32) = 1;

LAB1:    return;
LAB6:    *((unsigned int *)t3) = 1;
    goto LAB5;

}


extern void work_m_00000000002446967530_1339722242_init()
{
	static char *pe[] = {(void *)Initial_12_0,(void *)Always_18_1,(void *)Always_29_2,(void *)Cont_35_3,(void *)Cont_36_4};
	xsi_register_didat("work_m_00000000002446967530_1339722242", "isim/FPGAXC3_Test_isim_beh.exe.sim/work/m_00000000002446967530_1339722242.didat");
	xsi_register_executes(pe);
}
