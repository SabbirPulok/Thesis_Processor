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
static const char *ng0 = "H:/MyThesis/Xilinx/thesisTry/comm_fpga_fx2.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {31, 0};
static int ng5[] = {24, 0};
static int ng6[] = {23, 0};
static int ng7[] = {16, 0};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {15, 0};
static int ng10[] = {8, 0};
static unsigned int ng11[] = {4U, 0U};
static int ng12[] = {7, 0};
static int ng13[] = {0, 0};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {9U, 0U};
static unsigned int ng16[] = {6U, 0U};
static int ng17[] = {1, 0};
static unsigned int ng18[] = {7U, 0U};
static unsigned int ng19[] = {8U, 0U};
static unsigned int ng20[] = {0U, 255U};



static void Always_80_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 8568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 10376);
    *((int *)t2) = 1;
    t3 = (t0 + 8600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 5728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5888);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 4, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 6208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6368);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 6528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 7, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 6848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 7168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_90_1(char *t0)
{
    char t9[8];
    char t30[8];
    char t31[8];
    char t32[8];
    char t68[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t10;
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
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    int t42;
    int t43;
    char *t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;

LAB0:    t1 = (t0 + 8816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 10392);
    *((int *)t2) = 1;
    t3 = (t0 + 8848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);

LAB5:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 5888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 6368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6528);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 7008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 7328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(218, ng0);

LAB172:    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB176;

LAB173:    if (t19 != 0)
        goto LAB175;

LAB174:    *((unsigned int *)t9) = 1;

LAB176:    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB177;

LAB178:
LAB179:
LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(106, ng0);

LAB28:    xsi_set_current_line(107, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t0 + 5088);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB32;

LAB29:    if (t19 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t9) = 1;

LAB32:    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB33;

LAB34:
LAB35:    goto LAB27;

LAB9:    xsi_set_current_line(117, ng0);

LAB39:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB43;

LAB40:    if (t19 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t9) = 1;

LAB43:    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB27;

LAB11:    xsi_set_current_line(128, ng0);

LAB50:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB54;

LAB51:    if (t19 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t9) = 1;

LAB54:    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB55;

LAB56:
LAB57:    goto LAB27;

LAB13:    xsi_set_current_line(139, ng0);

LAB61:    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB65;

LAB62:    if (t19 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t9) = 1;

LAB65:    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB66;

LAB67:
LAB68:    goto LAB27;

LAB15:    xsi_set_current_line(153, ng0);

LAB79:    xsi_set_current_line(154, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 6368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t9, 0, 8);
    t6 = (t9 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 511U);
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 511U);
    t22 = ((char*)((ng1)));
    memset(t30, 0, 8);
    t28 = (t9 + 4);
    t29 = (t22 + 4);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t22);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t28);
    t20 = *((unsigned int *)t29);
    t21 = (t19 ^ t20);
    t23 = (t18 | t21);
    t24 = *((unsigned int *)t28);
    t25 = *((unsigned int *)t29);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t39 = (t23 & t27);
    if (t39 != 0)
        goto LAB83;

LAB80:    if (t26 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t30) = 1;

LAB83:    t34 = (t30 + 4);
    t41 = *((unsigned int *)t34);
    t45 = (~(t41));
    t48 = *((unsigned int *)t30);
    t50 = (t48 & t45);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7168);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB86:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB27;

LAB17:    xsi_set_current_line(164, ng0);

LAB87:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 3888U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB91;

LAB88:    if (t19 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t9) = 1;

LAB91:    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB92;

LAB93:
LAB94:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3888U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB98;

LAB95:    if (t19 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t9) = 1;

LAB98:    memset(t30, 0, 8);
    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t22) != 0)
        goto LAB101;

LAB102:    t29 = (t30 + 4);
    t39 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t29);
    t45 = (t39 || t41);
    if (t45 > 0)
        goto LAB103;

LAB104:    memcpy(t68, t30, 8);

LAB105:    t97 = (t68 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t68);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB119:    goto LAB27;

LAB19:    xsi_set_current_line(187, ng0);

LAB136:    xsi_set_current_line(188, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB27;

LAB21:    xsi_set_current_line(194, ng0);

LAB137:    xsi_set_current_line(195, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB27;

LAB23:    xsi_set_current_line(202, ng0);

LAB138:    xsi_set_current_line(203, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 5088);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t6);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB142;

LAB139:    if (t19 != 0)
        goto LAB141;

LAB140:    *((unsigned int *)t9) = 1;

LAB142:    memset(t30, 0, 8);
    t22 = (t9 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t22) != 0)
        goto LAB145;

LAB146:    t29 = (t30 + 4);
    t39 = *((unsigned int *)t30);
    t41 = *((unsigned int *)t29);
    t45 = (t39 || t41);
    if (t45 > 0)
        goto LAB147;

LAB148:    memcpy(t68, t30, 8);

LAB149:    t97 = (t68 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t68);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB161;

LAB162:    xsi_set_current_line(213, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB163:    goto LAB27;

LAB31:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(109, ng0);

LAB36:    xsi_set_current_line(111, ng0);
    t28 = (t0 + 3248U);
    t29 = *((char **)t28);
    t28 = (t0 + 6208);
    t33 = (t0 + 6208);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    t37 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t30, t31, t32, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t39 = *((unsigned int *)t38);
    t8 = (!(t39));
    t40 = (t31 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t8 && t42);
    t44 = (t32 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t43 && t46);
    if (t47 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB35;

LAB37:    t48 = *((unsigned int *)t32);
    t49 = (t48 + 0);
    t50 = *((unsigned int *)t30);
    t51 = *((unsigned int *)t31);
    t52 = (t50 - t51);
    t53 = (t52 + 1);
    xsi_vlogvar_assign_value(t28, t29, t49, *((unsigned int *)t31), t53);
    goto LAB38;

LAB42:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(120, ng0);

LAB47:    xsi_set_current_line(122, ng0);
    t28 = (t0 + 3248U);
    t29 = *((char **)t28);
    t28 = (t0 + 6208);
    t33 = (t0 + 6208);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng6)));
    t37 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t30, t31, t32, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t39 = *((unsigned int *)t38);
    t8 = (!(t39));
    t40 = (t31 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t8 && t42);
    t44 = (t32 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t43 && t46);
    if (t47 == 1)
        goto LAB48;

LAB49:    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB46;

LAB48:    t48 = *((unsigned int *)t32);
    t49 = (t48 + 0);
    t50 = *((unsigned int *)t30);
    t51 = *((unsigned int *)t31);
    t52 = (t50 - t51);
    t53 = (t52 + 1);
    xsi_vlogvar_assign_value(t28, t29, t49, *((unsigned int *)t31), t53);
    goto LAB49;

LAB53:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(131, ng0);

LAB58:    xsi_set_current_line(133, ng0);
    t28 = (t0 + 3248U);
    t29 = *((char **)t28);
    t28 = (t0 + 6208);
    t33 = (t0 + 6208);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng9)));
    t37 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t30, t31, t32, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t39 = *((unsigned int *)t38);
    t8 = (!(t39));
    t40 = (t31 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t8 && t42);
    t44 = (t32 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t43 && t46);
    if (t47 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB57;

LAB59:    t48 = *((unsigned int *)t32);
    t49 = (t48 + 0);
    t50 = *((unsigned int *)t30);
    t51 = *((unsigned int *)t31);
    t52 = (t50 - t51);
    t53 = (t52 + 1);
    xsi_vlogvar_assign_value(t28, t29, t49, *((unsigned int *)t31), t53);
    goto LAB60;

LAB64:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(142, ng0);

LAB69:    xsi_set_current_line(144, ng0);
    t28 = (t0 + 3248U);
    t29 = *((char **)t28);
    t28 = (t0 + 6208);
    t33 = (t0 + 6208);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng12)));
    t37 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t30, t31, t32, ((int*)(t35)), 2, t36, 32, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t39 = *((unsigned int *)t38);
    t8 = (!(t39));
    t40 = (t31 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (!(t41));
    t43 = (t8 && t42);
    t44 = (t32 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (!(t45));
    t47 = (t43 && t46);
    if (t47 == 1)
        goto LAB70;

LAB71:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 7008);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t22 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t22);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t22);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB75;

LAB72:    if (t19 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t9) = 1;

LAB75:    t29 = (t9 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(148, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB78:    goto LAB68;

LAB70:    t48 = *((unsigned int *)t32);
    t49 = (t48 + 0);
    t50 = *((unsigned int *)t30);
    t51 = *((unsigned int *)t31);
    t52 = (t50 - t51);
    t53 = (t52 + 1);
    xsi_vlogvar_assign_value(t28, t29, t49, *((unsigned int *)t31), t53);
    goto LAB71;

LAB74:    t28 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB75;

LAB76:    xsi_set_current_line(146, ng0);
    t33 = ((char*)((ng14)));
    t34 = (t0 + 5728);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 4);
    goto LAB78;

LAB82:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(157, ng0);
    t35 = ((char*)((ng3)));
    t36 = (t0 + 7168);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 1);
    goto LAB86;

LAB90:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB91;

LAB92:    xsi_set_current_line(167, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 5568);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    goto LAB94;

LAB97:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB98;

LAB99:    *((unsigned int *)t30) = 1;
    goto LAB102;

LAB101:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB102;

LAB103:    t33 = (t0 + 4688U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng3)));
    memset(t31, 0, 8);
    t35 = (t34 + 4);
    t36 = (t33 + 4);
    t48 = *((unsigned int *)t34);
    t50 = *((unsigned int *)t33);
    t51 = (t48 ^ t50);
    t54 = *((unsigned int *)t35);
    t55 = *((unsigned int *)t36);
    t56 = (t54 ^ t55);
    t57 = (t51 | t56);
    t58 = *((unsigned int *)t35);
    t59 = *((unsigned int *)t36);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB109;

LAB106:    if (t60 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t31) = 1;

LAB109:    memset(t32, 0, 8);
    t38 = (t31 + 4);
    t63 = *((unsigned int *)t38);
    t64 = (~(t63));
    t65 = *((unsigned int *)t31);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t38) != 0)
        goto LAB112;

LAB113:    t69 = *((unsigned int *)t30);
    t70 = *((unsigned int *)t32);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t44 = (t30 + 4);
    t72 = (t32 + 4);
    t73 = (t68 + 4);
    t74 = *((unsigned int *)t44);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB105;

LAB108:    t37 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB109;

LAB110:    *((unsigned int *)t32) = 1;
    goto LAB113;

LAB112:    t40 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB113;

LAB114:    t79 = *((unsigned int *)t68);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t68) = (t79 | t80);
    t81 = (t30 + 4);
    t82 = (t32 + 4);
    t83 = *((unsigned int *)t30);
    t84 = (~(t83));
    t85 = *((unsigned int *)t81);
    t86 = (~(t85));
    t87 = *((unsigned int *)t32);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (~(t89));
    t8 = (t84 & t86);
    t42 = (t88 & t90);
    t91 = (~(t8));
    t92 = (~(t42));
    t93 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t93 & t91);
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t94 & t92);
    t95 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t95 & t91);
    t96 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t96 & t92);
    goto LAB116;

LAB117:    xsi_set_current_line(169, ng0);

LAB120:    xsi_set_current_line(170, ng0);
    t103 = ((char*)((ng3)));
    t104 = (t0 + 6048);
    xsi_vlogvar_assign_value(t104, t103, 0, 0, 2);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 4528U);
    t3 = *((char **)t2);
    t2 = (t0 + 7488);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 6368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng17)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t5, 32, t6, 32);
    t7 = (t0 + 6208);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);
    xsi_set_current_line(174, ng0);
    t2 = (t0 + 6368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t22 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t22);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t22);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB124;

LAB121:    if (t19 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t9) = 1;

LAB124:    t29 = (t9 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB125;

LAB126:
LAB127:    goto LAB119;

LAB123:    t28 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB124;

LAB125:    xsi_set_current_line(175, ng0);

LAB128:    xsi_set_current_line(176, ng0);
    t33 = (t0 + 7328);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t37 = (t35 + 4);
    t38 = (t36 + 4);
    t39 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t45 = (t39 ^ t41);
    t48 = *((unsigned int *)t37);
    t50 = *((unsigned int *)t38);
    t51 = (t48 ^ t50);
    t54 = (t45 | t51);
    t55 = *((unsigned int *)t37);
    t56 = *((unsigned int *)t38);
    t57 = (t55 | t56);
    t58 = (~(t57));
    t59 = (t54 & t58);
    if (t59 != 0)
        goto LAB132;

LAB129:    if (t57 != 0)
        goto LAB131;

LAB130:    *((unsigned int *)t30) = 1;

LAB132:    t44 = (t30 + 4);
    t60 = *((unsigned int *)t44);
    t61 = (~(t60));
    t62 = *((unsigned int *)t30);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB135:    goto LAB127;

LAB131:    t40 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB132;

LAB133:    xsi_set_current_line(177, ng0);
    t72 = ((char*)((ng18)));
    t73 = (t0 + 5728);
    xsi_vlogvar_assign_value(t73, t72, 0, 0, 4);
    goto LAB135;

LAB141:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB142;

LAB143:    *((unsigned int *)t30) = 1;
    goto LAB146;

LAB145:    t28 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB146;

LAB147:    t33 = (t0 + 4368U);
    t34 = *((char **)t33);
    t33 = ((char*)((ng3)));
    memset(t31, 0, 8);
    t35 = (t34 + 4);
    t36 = (t33 + 4);
    t48 = *((unsigned int *)t34);
    t50 = *((unsigned int *)t33);
    t51 = (t48 ^ t50);
    t54 = *((unsigned int *)t35);
    t55 = *((unsigned int *)t36);
    t56 = (t54 ^ t55);
    t57 = (t51 | t56);
    t58 = *((unsigned int *)t35);
    t59 = *((unsigned int *)t36);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB153;

LAB150:    if (t60 != 0)
        goto LAB152;

LAB151:    *((unsigned int *)t31) = 1;

LAB153:    memset(t32, 0, 8);
    t38 = (t31 + 4);
    t63 = *((unsigned int *)t38);
    t64 = (~(t63));
    t65 = *((unsigned int *)t31);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB154;

LAB155:    if (*((unsigned int *)t38) != 0)
        goto LAB156;

LAB157:    t69 = *((unsigned int *)t30);
    t70 = *((unsigned int *)t32);
    t71 = (t69 & t70);
    *((unsigned int *)t68) = t71;
    t44 = (t30 + 4);
    t72 = (t32 + 4);
    t73 = (t68 + 4);
    t74 = *((unsigned int *)t44);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB158;

LAB159:
LAB160:    goto LAB149;

LAB152:    t37 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB153;

LAB154:    *((unsigned int *)t32) = 1;
    goto LAB157;

LAB156:    t40 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB157;

LAB158:    t79 = *((unsigned int *)t68);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t68) = (t79 | t80);
    t81 = (t30 + 4);
    t82 = (t32 + 4);
    t83 = *((unsigned int *)t30);
    t84 = (~(t83));
    t85 = *((unsigned int *)t81);
    t86 = (~(t85));
    t87 = *((unsigned int *)t32);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (~(t89));
    t8 = (t84 & t86);
    t42 = (t88 & t90);
    t91 = (~(t8));
    t92 = (~(t42));
    t93 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t93 & t91);
    t94 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t94 & t92);
    t95 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t95 & t91);
    t96 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t96 & t92);
    goto LAB160;

LAB161:    xsi_set_current_line(205, ng0);

LAB164:    xsi_set_current_line(207, ng0);
    t103 = ((char*)((ng3)));
    t104 = (t0 + 5408);
    xsi_vlogvar_assign_value(t104, t103, 0, 0, 1);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 6368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng17)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t5, 32, t6, 32);
    t7 = (t0 + 6208);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 6368);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t22 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t22);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t22);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB168;

LAB165:    if (t19 != 0)
        goto LAB167;

LAB166:    *((unsigned int *)t9) = 1;

LAB168:    t29 = (t9 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t9);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB169;

LAB170:
LAB171:    goto LAB163;

LAB167:    t28 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB168;

LAB169:    xsi_set_current_line(210, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 5728);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 4);
    goto LAB171;

LAB175:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB176;

LAB177:    xsi_set_current_line(221, ng0);

LAB180:    xsi_set_current_line(224, ng0);
    t28 = (t0 + 3248U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t28 = (t30 + 4);
    t33 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t41 = (t39 >> 0);
    *((unsigned int *)t30) = t41;
    t45 = *((unsigned int *)t33);
    t48 = (t45 >> 0);
    *((unsigned int *)t28) = t48;
    t50 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t50 & 127U);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & 127U);
    t34 = (t0 + 6528);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 7);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t5 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t5);
    t14 = (t13 >> 7);
    t15 = (t14 & 1);
    *((unsigned int *)t2) = t15;
    t6 = (t0 + 6848);
    xsi_vlogvar_assign_value(t6, t9, 0, 0, 1);
    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB179;

}

static void Cont_233_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 9064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(233, ng0);
    t2 = (t0 + 6048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 10552);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 10408);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_234_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 9312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(234, ng0);
    t2 = (t0 + 6048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 10616);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 10424);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_235_4(char *t0)
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

LAB0:    t1 = (t0 + 9560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 6688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 127U;
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
    xsi_driver_vfirst_trans(t5, 0, 6);
    t18 = (t0 + 10440);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_236_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 9808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 3248U);
    t3 = *((char **)t2);
    t2 = (t0 + 10744);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 7);
    t16 = (t0 + 10456);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_237_6(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 10056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 7648);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 10808);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 255U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 7);
    t39 = (t0 + 10472);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 7488);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = ((char*)((ng20)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t20, 8, t25, 8);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}


extern void work_m_00000000001143617997_0120319455_init()
{
	static char *pe[] = {(void *)Always_80_0,(void *)Always_90_1,(void *)Cont_233_2,(void *)Cont_234_3,(void *)Cont_235_4,(void *)Cont_236_5,(void *)Cont_237_6};
	xsi_register_didat("work_m_00000000001143617997_0120319455", "isim/top_level_isim_beh.exe.sim/work/m_00000000001143617997_0120319455.didat");
	xsi_register_executes(pe);
}
