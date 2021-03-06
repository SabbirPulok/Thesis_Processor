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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000000066057776_0450250084_init();
    work_m_00000000000312343964_1026473365_init();
    work_m_00000000002722829439_2531829270_init();
    work_m_00000000001092261032_1733832700_init();
    work_m_00000000002496466649_0621066737_init();
    work_m_00000000003439418311_0886308060_init();
    work_m_00000000000094700375_0369356374_init();
    work_m_00000000003886303512_4066630463_init();
    work_m_00000000002990987991_3368762849_init();
    work_m_00000000001182228835_1870471821_init();
    work_m_00000000001143617997_0120319455_init();
    work_m_00000000001509547834_1163904914_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001509547834_1163904914");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
