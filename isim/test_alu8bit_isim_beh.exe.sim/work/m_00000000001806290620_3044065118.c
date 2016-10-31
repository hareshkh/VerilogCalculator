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
static const char *ng0 = "C:/Users/Haresh/Calculator/mul8bit.v";
static int ng1[] = {8, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {1, 0};



static void Initial_21_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(21, ng0);

LAB2:    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1368U);
    t2 = *((char **)t1);
    t1 = (t0 + 2568);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 1);
    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 8);
    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1048U);
    t2 = *((char **)t1);
    t1 = (t0 + 2248);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 8);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1208U);
    t2 = *((char **)t1);
    t1 = (t0 + 2088);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 8);

LAB1:    return;
}

static void Always_30_1(char *t0)
{
    char t8[8];
    char t18[8];
    char t28[8];
    char t48[8];
    char t64[8];
    char t108[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4464);
    *((int *)t2) = 1;
    t3 = (t0 + 3928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greater(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);

LAB9:    xsi_set_current_line(32, ng0);
    t15 = (t0 + 2088);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    t27 = ((char*)((ng4)));
    memset(t28, 0, 8);
    t29 = (t18 + 4);
    t30 = (t27 + 4);
    t31 = *((unsigned int *)t18);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB13;

LAB10:    if (t40 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t28) = 1;

LAB13:    t44 = (t0 + 2408);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng2)));
    memset(t48, 0, 8);
    t49 = (t46 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t46);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB17;

LAB14:    if (t60 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t48) = 1;

LAB17:    t65 = *((unsigned int *)t28);
    t66 = *((unsigned int *)t48);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t68 = (t28 + 4);
    t69 = (t48 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB18;

LAB19:
LAB20:    t96 = (t64 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t64);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t8 + 4);
    t6 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    t21 = (t14 & 1);
    *((unsigned int *)t5) = t21;
    t7 = ((char*)((ng2)));
    memset(t18, 0, 8);
    t9 = (t8 + 4);
    t15 = (t7 + 4);
    t22 = *((unsigned int *)t8);
    t23 = *((unsigned int *)t7);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t15);
    t31 = (t25 ^ t26);
    t32 = (t24 | t31);
    t33 = *((unsigned int *)t9);
    t34 = *((unsigned int *)t15);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB28;

LAB25:    if (t35 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t18) = 1;

LAB28:    t17 = (t0 + 2408);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t27 = ((char*)((ng4)));
    memset(t28, 0, 8);
    t29 = (t20 + 4);
    t30 = (t27 + 4);
    t38 = *((unsigned int *)t20);
    t39 = *((unsigned int *)t27);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t30);
    t51 = (t41 ^ t42);
    t52 = (t40 | t51);
    t53 = *((unsigned int *)t29);
    t54 = *((unsigned int *)t30);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB32;

LAB29:    if (t55 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t28) = 1;

LAB32:    t58 = *((unsigned int *)t18);
    t59 = *((unsigned int *)t28);
    t60 = (t58 & t59);
    *((unsigned int *)t48) = t60;
    t44 = (t18 + 4);
    t45 = (t28 + 4);
    t46 = (t48 + 4);
    t61 = *((unsigned int *)t44);
    t62 = *((unsigned int *)t45);
    t65 = (t61 | t62);
    *((unsigned int *)t46) = t65;
    t66 = *((unsigned int *)t46);
    t67 = (t66 != 0);
    if (t67 == 1)
        goto LAB33;

LAB34:
LAB35:    t50 = (t48 + 4);
    t91 = *((unsigned int *)t50);
    t92 = (~(t91));
    t93 = *((unsigned int *)t48);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB23:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 1928);
    t15 = (t9 + 56U);
    t16 = *((char **)t15);
    memset(t18, 0, 8);
    t17 = (t18 + 4);
    t19 = (t16 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t18) = t12;
    t13 = *((unsigned int *)t19);
    t14 = (t13 >> 7);
    t21 = (t14 & 1);
    *((unsigned int *)t17) = t21;
    xsi_vlogtype_concat(t8, 17, 17, 3U, t18, 1, t7, 8, t4, 8);
    t20 = (t0 + 2408);
    xsi_vlogvar_assign_value(t20, t8, 0, 0, 1);
    t27 = (t0 + 2088);
    xsi_vlogvar_assign_value(t27, t8, 1, 0, 8);
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t8, 9, 0, 8);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    xsi_vlog_signed_minus(t8, 32, t4, 32, t5, 32);
    t6 = (t0 + 2728);
    xsi_vlogvar_assign_value(t6, t8, 0, 0, 32);
    goto LAB8;

LAB12:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB13;

LAB16:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB17;

LAB18:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t28 + 4);
    t79 = (t48 + 4);
    t80 = *((unsigned int *)t28);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t48);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t88 = (t81 & t83);
    t89 = (t85 & t87);
    t90 = (~(t88));
    t91 = (~(t89));
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    t95 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t95 & t91);
    goto LAB20;

LAB21:    xsi_set_current_line(32, ng0);

LAB24:    xsi_set_current_line(33, ng0);
    t102 = (t0 + 1928);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = (t0 + 2248);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t108, 0, 8);
    xsi_vlog_unsigned_minus(t108, 8, t104, 8, t107, 8);
    t109 = (t0 + 1928);
    xsi_vlogvar_assign_value(t109, t108, 0, 0, 8);
    goto LAB23;

LAB27:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB28;

LAB31:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB32;

LAB33:    t71 = *((unsigned int *)t48);
    t72 = *((unsigned int *)t46);
    *((unsigned int *)t48) = (t71 | t72);
    t47 = (t18 + 4);
    t49 = (t28 + 4);
    t73 = *((unsigned int *)t18);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (~(t75));
    t77 = *((unsigned int *)t28);
    t80 = (~(t77));
    t81 = *((unsigned int *)t49);
    t82 = (~(t81));
    t88 = (t74 & t76);
    t89 = (t80 & t82);
    t83 = (~(t88));
    t84 = (~(t89));
    t85 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t85 & t83);
    t86 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t86 & t84);
    t87 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t87 & t83);
    t90 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t90 & t84);
    goto LAB35;

LAB36:    xsi_set_current_line(35, ng0);

LAB39:    xsi_set_current_line(36, ng0);
    t63 = (t0 + 1928);
    t68 = (t63 + 56U);
    t69 = *((char **)t68);
    t70 = (t0 + 2248);
    t78 = (t70 + 56U);
    t79 = *((char **)t78);
    memset(t64, 0, 8);
    xsi_vlog_unsigned_add(t64, 8, t69, 8, t79, 8);
    t96 = (t0 + 1928);
    xsi_vlogvar_assign_value(t96, t64, 0, 0, 8);
    goto LAB38;

}

static void Cont_43_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 4144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1928);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t3, 16, 16, 2U, t8, 8, t5, 8);
    t9 = (t0 + 4560);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 65535U;
    t15 = t14;
    t16 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t9, 0, 15);
    t22 = (t0 + 4480);
    *((int *)t22) = 1;

LAB1:    return;
}


extern void work_m_00000000001806290620_3044065118_init()
{
	static char *pe[] = {(void *)Initial_21_0,(void *)Always_30_1,(void *)Cont_43_2};
	xsi_register_didat("work_m_00000000001806290620_3044065118", "isim/test_alu8bit_isim_beh.exe.sim/work/m_00000000001806290620_3044065118.didat");
	xsi_register_executes(pe);
}
