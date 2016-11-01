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
    work_m_00000000001950183576_4149947660_init();
    work_m_00000000000381222398_2320720518_init();
    work_m_00000000002449144731_0733047987_init();
    work_m_00000000002449144731_4245357609_init();
    work_m_00000000000089063817_2815503972_init();
    work_m_00000000003463126027_3044065118_init();
    work_m_00000000001587566507_1006203786_init();
    work_m_00000000004047756873_3249327452_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000004047756873_3249327452");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
