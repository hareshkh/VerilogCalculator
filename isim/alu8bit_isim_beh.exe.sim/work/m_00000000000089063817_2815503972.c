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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Haresh/Calculator/mul1step.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};



static void NetDecl_24_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    xsi_vlog_unsigned_add(t5, 8, t3, 8, t4, 8);
    t2 = (t0 + 5688);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 7U);
    t18 = (t0 + 5528);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_25_1(char *t0)
{
    char t4[8];
    char t15[8];
    char t17[8];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    *((unsigned int *)t4) = t8;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB5;

LAB4:    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 4294967295U);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t3, 8, t4, 32);
    t16 = ((char*)((ng1)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t15, 32, t16, 32);
    t18 = (t0 + 5752);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 255U;
    t24 = t23;
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 7U);
    t31 = (t0 + 5544);
    *((int *)t31) = 1;

LAB1:    return;
LAB5:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    *((unsigned int *)t4) = (t9 | t10);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t2) = (t11 | t12);
    goto LAB4;

}

static void Always_27_2(char *t0)
{
    char t4[8];
    char t8[8];
    char t18[8];
    char t19[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    int t17;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    int t40;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t5) = t15;
    xsi_vlogtype_concat(t4, 2, 2, 2U, t8, 1, t6, 1);

LAB6:    t16 = ((char*)((ng2)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t16, 2);
    if (t17 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t17 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng4)));
    t40 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 2);
    if (t40 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t17 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(29, ng0);

LAB16:    xsi_set_current_line(30, ng0);
    t20 = (t0 + 1048U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t22 = (t21 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (t23 >> 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 1);
    *((unsigned int *)t20) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 127U);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 127U);
    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t29 = (t31 + 4);
    t32 = (t30 + 4);
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 7);
    t35 = (t34 & 1);
    *((unsigned int *)t31) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 7);
    t38 = (t37 & 1);
    *((unsigned int *)t29) = t38;
    xsi_vlogtype_concat(t18, 8, 8, 2U, t31, 1, t19, 7);
    t39 = (t0 + 2728);
    xsi_vlogvar_assign_value(t39, t18, 0, 0, 8);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4);
    t5 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 1);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 1);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 127U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 127U);
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t19, 0, 8);
    t6 = (t19 + 4);
    t9 = (t7 + 4);
    t23 = *((unsigned int *)t7);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t9);
    t27 = (t26 >> 0);
    t28 = (t27 & 1);
    *((unsigned int *)t6) = t28;
    xsi_vlogtype_concat(t8, 8, 8, 2U, t19, 1, t18, 7);
    t16 = (t0 + 2888);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 8);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t5 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t2) = t15;
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 1);
    goto LAB15;

LAB9:    goto LAB7;

LAB11:    xsi_set_current_line(35, ng0);

LAB17:    xsi_set_current_line(36, ng0);
    t5 = (t0 + 2168U);
    t6 = *((char **)t5);
    memset(t18, 0, 8);
    t5 = (t18 + 4);
    t7 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 1);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 1);
    *((unsigned int *)t5) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 127U);
    t15 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t15 & 127U);
    t9 = (t0 + 2168U);
    t16 = *((char **)t9);
    memset(t19, 0, 8);
    t9 = (t19 + 4);
    t20 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (t23 >> 7);
    t25 = (t24 & 1);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t20);
    t27 = (t26 >> 7);
    t28 = (t27 & 1);
    *((unsigned int *)t9) = t28;
    xsi_vlogtype_concat(t8, 8, 8, 2U, t19, 1, t18, 7);
    t21 = (t0 + 2728);
    xsi_vlogvar_assign_value(t21, t8, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4);
    t5 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 1);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 1);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 127U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 127U);
    t6 = (t0 + 2168U);
    t7 = *((char **)t6);
    memset(t19, 0, 8);
    t6 = (t19 + 4);
    t9 = (t7 + 4);
    t23 = *((unsigned int *)t7);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t9);
    t27 = (t26 >> 0);
    t28 = (t27 & 1);
    *((unsigned int *)t6) = t28;
    xsi_vlogtype_concat(t8, 8, 8, 2U, t19, 1, t18, 7);
    t16 = (t0 + 2888);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 8);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t5 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t2) = t15;
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 1);
    goto LAB15;

LAB13:    xsi_set_current_line(41, ng0);

LAB18:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 2328U);
    t5 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t6 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 1);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 1);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 127U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 127U);
    t7 = (t0 + 2328U);
    t9 = *((char **)t7);
    memset(t19, 0, 8);
    t7 = (t19 + 4);
    t16 = (t9 + 4);
    t23 = *((unsigned int *)t9);
    t24 = (t23 >> 7);
    t25 = (t24 & 1);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t16);
    t27 = (t26 >> 7);
    t28 = (t27 & 1);
    *((unsigned int *)t7) = t28;
    xsi_vlogtype_concat(t8, 8, 8, 2U, t19, 1, t18, 7);
    t20 = (t0 + 2728);
    xsi_vlogvar_assign_value(t20, t8, 0, 0, 8);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t18 + 4);
    t5 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 1);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 1);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 127U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 127U);
    t6 = (t0 + 2328U);
    t7 = *((char **)t6);
    memset(t19, 0, 8);
    t6 = (t19 + 4);
    t9 = (t7 + 4);
    t23 = *((unsigned int *)t7);
    t24 = (t23 >> 0);
    t25 = (t24 & 1);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t9);
    t27 = (t26 >> 0);
    t28 = (t27 & 1);
    *((unsigned int *)t6) = t28;
    xsi_vlogtype_concat(t8, 8, 8, 2U, t19, 1, t18, 7);
    t16 = (t0 + 2888);
    xsi_vlogvar_assign_value(t16, t8, 0, 0, 8);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t5 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t2) = t15;
    t6 = (t0 + 3048);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 1);
    goto LAB15;

}

static void Cont_49_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5816);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 5576);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_50_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 4960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5880);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 5592);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_51_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5944);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 5608);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000089063817_2815503972_init()
{
	static char *pe[] = {(void *)NetDecl_24_0,(void *)NetDecl_25_1,(void *)Always_27_2,(void *)Cont_49_3,(void *)Cont_50_4,(void *)Cont_51_5};
	xsi_register_didat("work_m_00000000000089063817_2815503972", "isim/alu8bit_isim_beh.exe.sim/work/m_00000000000089063817_2815503972.didat");
	xsi_register_executes(pe);
}
