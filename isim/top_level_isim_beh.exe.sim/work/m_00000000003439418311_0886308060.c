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
static const char *ng0 = "H:/MyThesis/Xilinx/thesisTry/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static int ng9[] = {1, 0};



static void Always_36_0(char *t0)
{
    char t10[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4288);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t10, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t23 = (~(t21));
    t24 = (t18 & t23);
    if (t24 != 0)
        goto LAB38;

LAB35:    if (t21 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t10) = 1;

LAB38:    t9 = (t10 + 4);
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t10, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t23 = (~(t21));
    t24 = (t18 & t23);
    if (t24 != 0)
        goto LAB53;

LAB50:    if (t21 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t10) = 1;

LAB53:    t9 = (t10 + 4);
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB54;

LAB55:
LAB56:
LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 9, t8, 8, t9, 8);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 8);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t10, 8, 0, 1);
    goto LAB23;

LAB9:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 9, t4, 8, t7, 8);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 8);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t10, 8, 0, 1);
    goto LAB23;

LAB11:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_multiply(t10, 9, t4, 8, t7, 8);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 8);
    t8 = (t0 + 3048);
    xsi_vlogvar_assign_value(t8, t10, 8, 0, 1);
    goto LAB23;

LAB13:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_divide(t10, 8, t4, 8, t7, 8);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 8);
    goto LAB23;

LAB15:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 & t13);
    *((unsigned int *)t10) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB24;

LAB25:
LAB26:    t39 = (t0 + 2408);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 8);
    goto LAB23;

LAB17:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 | t13);
    *((unsigned int *)t10) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB27;

LAB28:
LAB29:    t39 = (t0 + 2408);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 8);
    goto LAB23;

LAB19:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (~(t12));
    *((unsigned int *)t10) = t13;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB31;

LAB30:    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 255U);
    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 255U);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 8);
    goto LAB23;

LAB21:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    *((unsigned int *)t10) = t14;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t8);
    t17 = (t15 | t16);
    *((unsigned int *)t9) = t17;
    t18 = *((unsigned int *)t9);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB32;

LAB33:
LAB34:    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 8);
    goto LAB23;

LAB24:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t20 | t21);
    t11 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t11);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB26;

LAB27:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t20 | t21);
    t11 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t11);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB29;

LAB31:    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t10) = (t14 | t15);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t16 | t17);
    goto LAB30;

LAB32:    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB34;

LAB37:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(50, ng0);

LAB42:    xsi_set_current_line(51, ng0);
    t11 = (t0 + 2408);
    t22 = (t11 + 56U);
    t39 = *((char **)t22);
    memset(t40, 0, 8);
    t41 = (t40 + 4);
    t42 = (t39 + 4);
    t30 = *((unsigned int *)t39);
    t33 = (t30 >> 7);
    t34 = (t33 & 1);
    *((unsigned int *)t40) = t34;
    t35 = *((unsigned int *)t42);
    t36 = (t35 >> 7);
    t37 = (t36 & 1);
    *((unsigned int *)t41) = t37;
    t43 = (t0 + 2728);
    xsi_vlogvar_assign_value(t43, t40, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t8);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    t23 = (~(t21));
    t24 = (t18 & t23);
    if (t24 != 0)
        goto LAB46;

LAB43:    if (t21 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t10) = 1;

LAB46:    t22 = (t10 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB47;

LAB48:
LAB49:    goto LAB41;

LAB45:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(53, ng0);
    t39 = ((char*)((ng9)));
    t41 = (t0 + 2568);
    xsi_vlogvar_assign_value(t41, t39, 0, 0, 1);
    goto LAB49;

LAB52:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(56, ng0);

LAB57:    xsi_set_current_line(57, ng0);
    t11 = (t0 + 2008U);
    t22 = *((char **)t11);
    memset(t40, 0, 8);
    t11 = (t40 + 4);
    t39 = (t22 + 4);
    t30 = *((unsigned int *)t22);
    t33 = (t30 >> 3);
    t34 = (t33 & 1);
    *((unsigned int *)t40) = t34;
    t35 = *((unsigned int *)t39);
    t36 = (t35 >> 3);
    t37 = (t36 & 1);
    *((unsigned int *)t11) = t37;
    t41 = (t0 + 2568);
    xsi_vlogvar_assign_value(t41, t40, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 2);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 2);
    t17 = (t16 & 1);
    *((unsigned int *)t2) = t17;
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t2) = t17;
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t10 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t2) = t17;
    t7 = (t0 + 3048);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 1);
    goto LAB56;

}


extern void work_m_00000000003439418311_0886308060_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000003439418311_0886308060", "isim/top_level_isim_beh.exe.sim/work/m_00000000003439418311_0886308060.didat");
	xsi_register_executes(pe);
}
