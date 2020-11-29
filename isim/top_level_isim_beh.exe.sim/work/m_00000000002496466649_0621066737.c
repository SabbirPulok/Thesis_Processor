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
static const char *ng0 = "H:/MyThesis/Xilinx/thesisTry/RF.v";
static unsigned int ng1[] = {73U, 0U};
static unsigned int ng2[] = {6U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};



static void Initial_36_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);

LAB2:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);

LAB1:    return;
}

static void Always_42_1(char *t0)
{
    char t7[8];
    char t8[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 5336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 7144);
    *((int *)t2) = 1;
    t3 = (t0 + 5368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    t4 = (t3 + 4);
    t9 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t9);
    t18 = (t14 ^ t15);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t9);
    t24 = (t20 | t23);
    t25 = (~(t24));
    t26 = (t19 & t25);
    if (t26 != 0)
        goto LAB114;

LAB113:    if (t24 != 0)
        goto LAB115;

LAB116:    t16 = (t7 + 4);
    t30 = *((unsigned int *)t16);
    t31 = (~(t30));
    t32 = *((unsigned int *)t7);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB117;

LAB118:
LAB119:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);
    t9 = (t0 + 1848U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t9) != 0)
        goto LAB24;

LAB25:    t17 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB26;

LAB27:    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t17);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t17) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t8) > 0)
        goto LAB32;

LAB33:    memcpy(t7, t28, 8);

LAB34:    t29 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t29, t7, 0, 0, 8, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t3) != 0)
        goto LAB37;

LAB38:    t10 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB39;

LAB40:    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t10) > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t8) > 0)
        goto LAB45;

LAB46:    memcpy(t7, t22, 8);

LAB47:    t27 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t27, t7, 0, 0, 8, 0LL);
    goto LAB21;

LAB11:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t3) != 0)
        goto LAB50;

LAB51:    t10 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB52;

LAB53:    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t10) > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t8) > 0)
        goto LAB58;

LAB59:    memcpy(t7, t22, 8);

LAB60:    t27 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t27, t7, 0, 0, 8, 0LL);
    goto LAB21;

LAB13:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t3) != 0)
        goto LAB63;

LAB64:    t10 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB65;

LAB66:    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t10) > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t8) > 0)
        goto LAB71;

LAB72:    memcpy(t7, t22, 8);

LAB73:    t27 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t27, t7, 0, 0, 8, 0LL);
    goto LAB21;

LAB15:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t3) != 0)
        goto LAB76;

LAB77:    t10 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB78;

LAB79:    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t10) > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t8) > 0)
        goto LAB84;

LAB85:    memcpy(t7, t22, 8);

LAB86:    t27 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t27, t7, 0, 0, 8, 0LL);
    goto LAB21;

LAB17:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t3) != 0)
        goto LAB89;

LAB90:    t10 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB91;

LAB92:    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t10) > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t8) > 0)
        goto LAB97;

LAB98:    memcpy(t7, t22, 8);

LAB99:    t27 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t27, t7, 0, 0, 8, 0LL);
    goto LAB21;

LAB19:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t3) != 0)
        goto LAB102;

LAB103:    t10 = (t8 + 4);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB104;

LAB105:    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t10) > 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t8) > 0)
        goto LAB110;

LAB111:    memcpy(t7, t22, 8);

LAB112:    t27 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t27, t7, 0, 0, 8, 0LL);
    goto LAB21;

LAB22:    *((unsigned int *)t8) = 1;
    goto LAB25;

LAB24:    t16 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB25;

LAB26:    t21 = (t0 + 1048U);
    t22 = *((char **)t21);
    goto LAB27;

LAB28:    t21 = (t0 + 3208);
    t27 = (t21 + 56U);
    t28 = *((char **)t27);
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t7, 8, t22, 8, t28, 8);
    goto LAB34;

LAB32:    memcpy(t7, t22, 8);
    goto LAB34;

LAB35:    *((unsigned int *)t8) = 1;
    goto LAB38;

LAB37:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB38;

LAB39:    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    goto LAB40;

LAB41:    t16 = (t0 + 3368);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    goto LAB42;

LAB43:    xsi_vlog_unsigned_bit_combine(t7, 8, t17, 8, t22, 8);
    goto LAB47;

LAB45:    memcpy(t7, t17, 8);
    goto LAB47;

LAB48:    *((unsigned int *)t8) = 1;
    goto LAB51;

LAB50:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB51;

LAB52:    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    goto LAB53;

LAB54:    t16 = (t0 + 3528);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    goto LAB55;

LAB56:    xsi_vlog_unsigned_bit_combine(t7, 8, t17, 8, t22, 8);
    goto LAB60;

LAB58:    memcpy(t7, t17, 8);
    goto LAB60;

LAB61:    *((unsigned int *)t8) = 1;
    goto LAB64;

LAB63:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB64;

LAB65:    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    goto LAB66;

LAB67:    t16 = (t0 + 3688);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    goto LAB68;

LAB69:    xsi_vlog_unsigned_bit_combine(t7, 8, t17, 8, t22, 8);
    goto LAB73;

LAB71:    memcpy(t7, t17, 8);
    goto LAB73;

LAB74:    *((unsigned int *)t8) = 1;
    goto LAB77;

LAB76:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB77;

LAB78:    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    goto LAB79;

LAB80:    t16 = (t0 + 3848);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    goto LAB81;

LAB82:    xsi_vlog_unsigned_bit_combine(t7, 8, t17, 8, t22, 8);
    goto LAB86;

LAB84:    memcpy(t7, t17, 8);
    goto LAB86;

LAB87:    *((unsigned int *)t8) = 1;
    goto LAB90;

LAB89:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB90;

LAB91:    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    goto LAB92;

LAB93:    t16 = (t0 + 4008);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    goto LAB94;

LAB95:    xsi_vlog_unsigned_bit_combine(t7, 8, t17, 8, t22, 8);
    goto LAB99;

LAB97:    memcpy(t7, t17, 8);
    goto LAB99;

LAB100:    *((unsigned int *)t8) = 1;
    goto LAB103;

LAB102:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB103;

LAB104:    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    goto LAB105;

LAB106:    t16 = (t0 + 4168);
    t21 = (t16 + 56U);
    t22 = *((char **)t21);
    goto LAB107;

LAB108:    xsi_vlog_unsigned_bit_combine(t7, 8, t17, 8, t22, 8);
    goto LAB112;

LAB110:    memcpy(t7, t17, 8);
    goto LAB112;

LAB114:    *((unsigned int *)t7) = 1;
    goto LAB116;

LAB115:    t10 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB116;

LAB117:    xsi_set_current_line(55, ng0);
    t17 = (t0 + 2008U);
    t21 = *((char **)t17);
    memset(t35, 0, 8);
    t17 = (t21 + 4);
    t36 = *((unsigned int *)t17);
    t37 = (~(t36));
    t38 = *((unsigned int *)t21);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t17) != 0)
        goto LAB122;

LAB123:    t27 = (t35 + 4);
    t41 = *((unsigned int *)t35);
    t42 = *((unsigned int *)t27);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB124;

LAB125:    t44 = *((unsigned int *)t35);
    t45 = (~(t44));
    t46 = *((unsigned int *)t27);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t27) > 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t35) > 0)
        goto LAB130;

LAB131:    memcpy(t8, t49, 8);

LAB132:    t50 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t50, t8, 0, 0, 8, 0LL);
    goto LAB119;

LAB120:    *((unsigned int *)t35) = 1;
    goto LAB123;

LAB122:    t22 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB123;

LAB124:    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    goto LAB125;

LAB126:    t28 = (t0 + 3208);
    t48 = (t28 + 56U);
    t49 = *((char **)t48);
    goto LAB127;

LAB128:    xsi_vlog_unsigned_bit_combine(t8, 8, t29, 8, t49, 8);
    goto LAB132;

LAB130:    memcpy(t8, t29, 8);
    goto LAB132;

}

static void Always_59_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 7160);
    *((int *)t2) = 1;
    t3 = (t0 + 5616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(62, ng0);
    t7 = (t0 + 3208);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 8, 0LL);
    goto LAB21;

LAB9:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 3368);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 8, 0LL);
    goto LAB21;

LAB11:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 3528);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 8, 0LL);
    goto LAB21;

LAB13:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 3688);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 8, 0LL);
    goto LAB21;

LAB15:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 3848);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 8, 0LL);
    goto LAB21;

LAB17:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 4008);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 8, 0LL);
    goto LAB21;

LAB19:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 4168);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 8, 0LL);
    goto LAB21;

}

static void Cont_72_3(char *t0)
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

LAB0:    t1 = (t0 + 5832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7320);
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
    t18 = (t0 + 7176);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_73_4(char *t0)
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

LAB0:    t1 = (t0 + 6080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 4008);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t3, 16, 16, 2U, t8, 8, t5, 8);
    t9 = (t0 + 7384);
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
    t22 = (t0 + 7192);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Cont_74_5(char *t0)
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

LAB0:    t1 = (t0 + 6328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7448);
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
    t18 = (t0 + 7208);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_75_6(char *t0)
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

LAB0:    t1 = (t0 + 6576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7512);
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
    t18 = (t0 + 7224);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_76_7(char *t0)
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

LAB0:    t1 = (t0 + 6824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7576);
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
    t18 = (t0 + 7240);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002496466649_0621066737_init()
{
	static char *pe[] = {(void *)Initial_36_0,(void *)Always_42_1,(void *)Always_59_2,(void *)Cont_72_3,(void *)Cont_73_4,(void *)Cont_74_5,(void *)Cont_75_6,(void *)Cont_76_7};
	xsi_register_didat("work_m_00000000002496466649_0621066737", "isim/top_level_isim_beh.exe.sim/work/m_00000000002496466649_0621066737.didat");
	xsi_register_executes(pe);
}
