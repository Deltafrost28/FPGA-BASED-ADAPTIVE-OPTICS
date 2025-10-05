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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/ao/pid_controller.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {0U, 0U, 0U, 0U};
static int ng3[] = {16, 0};
static unsigned int ng4[] = {4294967295U, 0U, 32767U, 0U};
static unsigned int ng5[] = {0U, 0U, 32768U, 0U};
static unsigned int ng6[] = {32767U, 0U, 0U, 0U};
static unsigned int ng7[] = {32767U, 0U};
static unsigned int ng8[] = {32768U, 0U, 0U, 0U};
static unsigned int ng9[] = {32768U, 0U};
static unsigned int ng10[] = {1U, 0U};
static const char *ng11 = "Time=%0t | Error=%0d | P=%0d | I=%0d | D=%0d | Out=%0d";



static void Always_26_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[16];
    char t25[16];
    char t26[16];
    char t27[16];
    char t30[8];
    char t35[8];
    char t46[16];
    char t47[16];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;

LAB0:    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 5168);
    *((int *)t2) = 1;
    t3 = (t0 + 4880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1616U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);

LAB10:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);

LAB9:    xsi_set_current_line(28, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 48, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 48, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(38, ng0);

LAB14:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1936U);
    t5 = *((char **)t4);
    t4 = (t0 + 2096U);
    t11 = *((char **)t4);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t5, 16, t11, 16);
    t4 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t4, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    xsi_vlog_signed_multiply(t13, 32, t3, 16, t4, 16);
    t2 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t2, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 3936);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    xsi_vlog_signed_minus(t13, 32, t3, 16, t5, 16);
    t11 = (t0 + 2416U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    xsi_vlog_signed_multiply(t14, 32, t13, 32, t12, 16);
    t11 = (t0 + 3456);
    xsi_vlogvar_wait_assign_value(t11, t14, 0, 0, 32, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3296);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 3296);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t14, 0, 8);
    t20 = (t14 + 4);
    t21 = (t19 + 4);
    t6 = *((unsigned int *)t19);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t21);
    t10 = (t9 >> 31);
    t22 = (t10 & 1);
    *((unsigned int *)t20) = t22;
    xsi_vlog_mul_concat(t13, 16, 1, t16, 1U, t14, 1);
    xsi_vlogtype_concat(t15, 48, 48, 2U, t13, 16, t12, 32);
    t23 = (t0 + 472);
    t24 = *((char **)t23);
    xsi_vlog_unsigned_arith_rshift(t25, 48, t15, 48, t24, 32);
    xsi_vlog_unsigned_add(t26, 48, t4, 48, t25, 48);
    t23 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t23, t26, 0, 0, 48, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    xsi_vlog_signed_greater(t15, 48, t4, 48, t5, 48);
    t11 = (t15 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    xsi_vlog_signed_less(t15, 48, t4, 48, t5, 48);
    t11 = (t15 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 3136);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memset(t14, 0, 8);
    t17 = (t14 + 4);
    t18 = (t16 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t18);
    t10 = (t9 >> 31);
    t22 = (t10 & 1);
    *((unsigned int *)t17) = t22;
    xsi_vlog_mul_concat(t13, 16, 1, t5, 1U, t14, 1);
    xsi_vlogtype_concat(t15, 48, 48, 2U, t13, 16, t4, 32);
    t19 = (t0 + 472);
    t20 = *((char **)t19);
    xsi_vlog_unsigned_arith_rshift(t25, 48, t15, 48, t20, 32);
    t19 = (t0 + 3616);
    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    xsi_vlog_unsigned_add(t26, 48, t25, 48, t23, 48);
    t24 = (t0 + 3456);
    t28 = (t24 + 56U);
    t29 = *((char **)t28);
    t31 = ((char*)((ng3)));
    t32 = (t0 + 3456);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t35, 0, 8);
    t36 = (t35 + 4);
    t37 = (t34 + 4);
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 31);
    t40 = (t39 & 1);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 31);
    t43 = (t42 & 1);
    *((unsigned int *)t36) = t43;
    xsi_vlog_mul_concat(t30, 16, 1, t31, 1U, t35, 1);
    xsi_vlogtype_concat(t27, 48, 48, 2U, t30, 16, t29, 32);
    t44 = (t0 + 472);
    t45 = *((char **)t44);
    xsi_vlog_unsigned_arith_rshift(t46, 48, t27, 48, t45, 32);
    xsi_vlog_unsigned_add(t47, 48, t26, 48, t46, 48);
    t44 = (t0 + 3776);
    xsi_vlogvar_wait_assign_value(t44, t47, 0, 0, 48, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    xsi_vlog_signed_greater(t15, 48, t4, 48, t5, 48);
    t11 = (t15 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    xsi_vlog_signed_unary_minus(t15, 48, t5, 48);
    xsi_vlog_signed_less(t25, 48, t4, 48, t15, 48);
    t11 = (t25 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t25);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 65535U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 65535U);
    t12 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 16, 0LL);

LAB26:
LAB23:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 3936);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = xsi_vlog_time(t15, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1936U);
    t4 = *((char **)t3);
    t3 = (t0 + 3136);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 472);
    t16 = *((char **)t12);
    memset(t13, 0, 8);
    xsi_vlog_signed_arith_rshift(t13, 32, t11, 32, t16, 32);
    t12 = (t0 + 3296);
    t17 = (t12 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 472);
    t20 = *((char **)t19);
    memset(t14, 0, 8);
    xsi_vlog_signed_arith_rshift(t14, 32, t18, 32, t20, 32);
    t19 = (t0 + 3456);
    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    t24 = (t0 + 472);
    t28 = *((char **)t24);
    memset(t30, 0, 8);
    xsi_vlog_signed_arith_rshift(t30, 32, t23, 32, t28, 32);
    t24 = (t0 + 2976);
    t29 = (t24 + 56U);
    t31 = *((char **)t29);
    xsi_vlogfile_write(1, 0, 0, ng11, 7, t0, (char)118, t15, 64, (char)119, t4, 16, (char)119, t13, 32, (char)119, t14, 32, (char)119, t30, 32, (char)119, t31, 16);
    goto LAB13;

LAB15:    xsi_set_current_line(46, ng0);
    t12 = ((char*)((ng4)));
    t16 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t16, t12, 0, 0, 48, 0LL);
    goto LAB17;

LAB18:    xsi_set_current_line(47, ng0);
    t12 = ((char*)((ng5)));
    t16 = (t0 + 3616);
    xsi_vlogvar_wait_assign_value(t16, t12, 0, 0, 48, 0LL);
    goto LAB20;

LAB21:    xsi_set_current_line(54, ng0);
    t12 = ((char*)((ng7)));
    t16 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t16, t12, 0, 0, 16, 0LL);
    goto LAB23;

LAB24:    xsi_set_current_line(56, ng0);
    t12 = ((char*)((ng9)));
    memset(t13, 0, 8);
    xsi_vlog_signed_unary_minus(t13, 16, t12, 16);
    t16 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t16, t13, 0, 0, 16, 0LL);
    goto LAB26;

}


extern void work_m_16771988091155457121_3354936842_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_16771988091155457121_3354936842", "isim/ao_tb_isim_beh.exe.sim/work/m_16771988091155457121_3354936842.didat");
	xsi_register_executes(pe);
}
