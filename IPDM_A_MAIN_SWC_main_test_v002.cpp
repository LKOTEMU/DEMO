/*#include "pch.h"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}
*/

/*******************************************************************************************/
/**
*  This file has been generated via GenMockScript.py script
*  @file    as_iscc_s_sbsp_test_template.cpp
*
*  @brief   This file contains unit test cases for as_iscc_s_sbsp.c unit testing.
*
********************************************************************************************/

/*Google test header*/
#include "gtest/gtest.h"
/*Document header*/
#include <unit_doc.h>
/*Mock Header*/
#include "IPDM_A_MAIN_SWC_mock_v01.h"
using namespace testing;


/*Pointer to class as_iscc_s_sbsp_mock*/
IPDM_A_MAIN_SWC_mock* pIPDM_A_MAIN_SWC_mock;


#ifdef __cplusplus
extern "C" {
#endif

    //#include "IPDM_A_MAIN_SWC.h"
#include "IPDM_A_MAIN_SWC_mock_v01.h"

    /*Declaring pointer to avoid unresolved external symbol Rte_Inst_IPDM_A_MAIN_A6 */
    const Rte_CDS_IPDM_A_MAIN_A6* Rte_Inst_IPDM_A_MAIN_A6;

    Rte_CDS_IPDM_A_MAIN_A6 objRte_Inst_IPDM_A_MAIN_A6;

    /*Declaring the object to avoid null pointer exceptions*/
    Rte_DE_REC_EnergyMgmt_SG_7gfvmgxwv1gpmw8c3khdl41nw  objIPDM_A_MAIN_SWC_main_P_IPDA_ATG01_SG_EnergyMgmt_EnergyMgmt_SG;
    Rte_DE_c08_NoMet_Met_Err_Sna   objIPDM_A_MAIN_SWC_main_P_IPDM_A_ShorePower_CritMet_IPDM_A_ShorePower_CritMet;
    Rte_DE_uint8   objIPDM_A_MAIN_SWC_main_P_IPDM_KeepAwake_Request_IPDM_KeepAwake_Request;
    Rte_DE_c04_Shore_Pwr   objIPDM_A_MAIN_SWC_main_P_LVA_Shore_Pwr_Supply_LVA_Shore_Pwr_Supply;
    Rte_DE_uint8   objIPDM_A_MAIN_SWC_main_P_MainSwitchCloseDisallow_MainSwitchCloseDisallow;
    Rte_DE_REC_SG_IPDA_ATG02_euk2owpx15avykqntci714wbp  objIPDM_A_MAIN_SWC_main_P_SG_IPDA_ATG02_SG_IPDA_ATG02;
    Rte_DE_REC_SG_IPDA_ATG03_2_ednqef5xiht6lvtipf4ne4e5c  objIPDM_A_MAIN_SWC_main_P_SG_IPDA_ATG03_2_SG_IPDA_ATG03_2;
    Rte_DE_REC_SG_IPDA_ATG04_71njeubj9ico1p8v4pmslfcno  objIPDM_A_MAIN_SWC_main_P_SG_IPDA_ATG04_SG_IPDA_ATG04;
    Rte_DE_uint8   objIPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning;
    Rte_DE_c16_V_0_69d9_0d1_SNA   objIPDM_A_MAIN_SWC_main_P_aDCA_Cmd_HS_Volt_IPDA_aDCA_Cmd_HS_Volt_IPDA;
    Rte_DE_c08_A_0_250_RES_ERR_SNA  objIPDM_A_MAIN_SWC_main_P_aDCA_Cmd_LS_Curr_IPDA_aDCA_Cmd_LS_Curr_IPDA;
    Rte_DE_c02_NotChrgRq_ChrgRq_Res   objIPDM_A_MAIN_SWC_main_P_aIPDA_OI_Bat_Rq_aIPDA_OI_Bat_Rq;
    Rte_DE_c16_D_0_34d9_0d1_SNA  objIPDM_A_MAIN_SWC_main_P_aIPDMA_DeviceTemp_Cval_aIPDMA_DeviceTemp_Cval;
    Rte_DE_c04_SOH_CAL_READY_NOT_READY  objIPDM_A_MAIN_SWC_main_P_aLVA_SoH_Check_Status_aLVA_SoH_Check_Status;
    Rte_DES_c02_NotActv_Act_Err   objIPDM_A_MAIN_SWC_main_R_EngCrk_Stat_EngCrk_Stat;
    Rte_DES_c02_Inact_Act_Err   objIPDM_A_MAIN_SWC_main_R_IPDMA_BattHeat_Stat_IPDM_BattHeat_Stat;
    Rte_DES_c08_NoMet_Met_Err_Sna  objIPDM_A_MAIN_SWC_main_R_IPDM_B_ShorePower_CritMet_IPDM_B_ShorePower_CritMet;
    Rte_DES_c08_NoMet_Met_Err_Sna  objIPDM_A_MAIN_SWC_main_R_IPDM_C_ShorePower_CritMet_IPDM_C_ShorePower_CritMet;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Current;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Voltage;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Current;
    Rte_DES_uint8  objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Stat;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Voltage;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_Current;
    Rte_DES_uint8   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_SwStat;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_Voltage;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_Current;
    Rte_DES_uint8   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_SwStat;
    Rte_DES_uint32  objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_Voltage;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_Current;
    Rte_DES_uint8   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_SwStat;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_Voltage;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_Current;
    Rte_DES_uint8   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_SwStat;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_Voltage;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_Current;
    Rte_DES_uint8   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_SwStat;
    Rte_DES_uint32   objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_Voltage;
    Rte_DES_c04_IgnSw_Stat   objIPDM_A_MAIN_SWC_main_R_IgnSw_Stat_SCA_IgnSw_Stat_SCA;
    Rte_DES_REC_SG_ALT_ATG01_euk2owpx15avykqntci714wbp  objIPDM_A_MAIN_SWC_main_R_SG_ALT_ATG01_SG_ALT_ATG01;
    Rte_DES_REC_SG_ALT_ATG02_cp6wyrd9cg7ec7y2w3khz1gyt  objIPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02;
    Rte_DES_REC_SG_ALT_ATG03_cp6wyrd9cg7ec7y2w3khz1gyt  objIPDM_A_MAIN_SWC_main_R_SG_ALT_ATG03_SG_ALT_ATG03;
    Rte_DES_REC_SG_ALT_ATG04_8lfca1ogj8ln2sf2qdp9ox4ea  objIPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04;
    Rte_DES_REC_SG_DCA_ATG01_ednqef5xiht6lvtipf4ne4e5c   objIPDM_A_MAIN_SWC_main_R_SG_DCA_ATG01_SG_DCA_ATG01;
    Rte_DES_REC_SG_DCB_ATG01_ednqef5xiht6lvtipf4ne4e5c   objIPDM_A_MAIN_SWC_main_R_SG_DCB_ATG01_SG_DCB_ATG01;
    Rte_DES_REC_SG_DCB_ATG04_71njeubj9ico1p8v4pmslfcno  objIPDM_A_MAIN_SWC_main_R_SG_DCB_ATG04_SG_DCB_ATG04;
    Rte_DES_REC_SG_DCC_ATG01_ednqef5xiht6lvtipf4ne4e5c  objIPDM_A_MAIN_SWC_main_R_SG_DCC_ATG01_SG_DCC_ATG01;
    Rte_DES_REC_SG_DCC_ATG04_71njeubj9ico1p8v4pmslfcno  objIPDM_A_MAIN_SWC_main_R_SG_DCC_ATG04_SG_DCC_ATG04;
    Rte_DES_REC_SG_EEC1_CPC3_6v3sj55wsjghho72slblc9pby  objIPDM_A_MAIN_SWC_main_R_SG_EEC1_CPC3_SG_EEC1_CPC3;
    Rte_DES_REC_SG_IPDM_RealTime_euk2owpx15avykqntci714wbp  objIPDM_A_MAIN_SWC_main_R_SG_IPDM_SecureTime_SG_IPDM_SecureTime;
    Rte_DES_uint8   objIPDM_A_MAIN_SWC_main_R_SWC_NM_Status_NM_Status;
    Rte_DES_uint8   objIPDM_A_MAIN_SWC_main_R_SWC_POST_Status_POST_Status;
    Rte_DES_c02_OK_ERR_RES  objIPDM_A_MAIN_SWC_main_R_aDCA_LossOfSetpoint_Stat_aDCA_LossOfSetpoint_Stat;
    Rte_DES_c02_OK_ERR_RES   objIPDM_A_MAIN_SWC_main_R_aDCA_ModeErr_Stat_aDCA_ModeErr_Stat;
    Rte_DES_c02_OK_ERR_RES   objIPDM_A_MAIN_SWC_main_R_aDCA_MsgCorrupt_Stat_aDCA_MsgCorrupt_Stat;
    Rte_DES_c02_OK_ERR_RES   objIPDM_A_MAIN_SWC_main_R_aDCA_MsgDelay_Stat_aDCA_MsgDelay_Stat;
    Rte_DES_c02_OK_ERR_RES  objIPDM_A_MAIN_SWC_main_R_aDCA_Setpoint_OutOfRange_Stat_aDCA_Setpoint_OutOfRange_Stat;
    Rte_DES_c02_NotChrgRq_ChrgRq_Res   objIPDM_A_MAIN_SWC_main_R_aIPDB_OI_Bat_Rq_aIPDB_OI_Bat_Rq;
    Rte_DES_c02_NotChrgRq_ChrgRq_Res   objIPDM_A_MAIN_SWC_main_R_aIPDC_OI_Bat_Rq_aIPDC_OI_Bat_Rq;



#ifdef __cplusplus
}
#endif
/* Test class as_iscc_s_sbsp_Test */
class IPDM_A_MAIN_SWC_main_Test : public ::testing::Test
{
public:
    /*as_iscc_s_sbsp_mock class object*/
    NiceMock < IPDM_A_MAIN_SWC_mock > objIPDM_A_MAIN_SWC_mock;

protected:
    virtual void SetUp() {
        /*Assign the address of as_iscc_s_sbsp_mock class object to pas_iscc_s_sbsp_mock*/
        IPDM_A_MAIN_SWC_init();
        pIPDM_A_MAIN_SWC_mock = &objIPDM_A_MAIN_SWC_mock;
    }

    virtual void TearDown() {
    }
};

void set_rte_instances() {
    /*creating the object to avoid null pointer exeption errors*/
    objRte_Inst_IPDM_A_MAIN_A6 = { 0 };
    Rte_Inst_IPDM_A_MAIN_A6 = &objRte_Inst_IPDM_A_MAIN_A6;

    objIPDM_A_MAIN_SWC_main_P_IPDA_ATG01_SG_EnergyMgmt_EnergyMgmt_SG.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_IPDA_ATG01_SG_EnergyMgmt_EnergyMgmt_SG = &objIPDM_A_MAIN_SWC_main_P_IPDA_ATG01_SG_EnergyMgmt_EnergyMgmt_SG;


    objIPDM_A_MAIN_SWC_main_P_IPDM_A_ShorePower_CritMet_IPDM_A_ShorePower_CritMet.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_IPDM_A_ShorePower_CritMet_IPDM_A_ShorePower_CritMet = &objIPDM_A_MAIN_SWC_main_P_IPDM_A_ShorePower_CritMet_IPDM_A_ShorePower_CritMet;


    objIPDM_A_MAIN_SWC_main_P_IPDM_KeepAwake_Request_IPDM_KeepAwake_Request.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_IPDM_KeepAwake_Request_IPDM_KeepAwake_Request = &objIPDM_A_MAIN_SWC_main_P_IPDM_KeepAwake_Request_IPDM_KeepAwake_Request;


    objIPDM_A_MAIN_SWC_main_P_LVA_Shore_Pwr_Supply_LVA_Shore_Pwr_Supply.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_LVA_Shore_Pwr_Supply_LVA_Shore_Pwr_Supply = &objIPDM_A_MAIN_SWC_main_P_LVA_Shore_Pwr_Supply_LVA_Shore_Pwr_Supply;

    objIPDM_A_MAIN_SWC_main_P_MainSwitchCloseDisallow_MainSwitchCloseDisallow.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_MainSwitchCloseDisallow_MainSwitchCloseDisallow = &objIPDM_A_MAIN_SWC_main_P_MainSwitchCloseDisallow_MainSwitchCloseDisallow;



    objIPDM_A_MAIN_SWC_main_P_SG_IPDA_ATG02_SG_IPDA_ATG02.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_SG_IPDA_ATG02_SG_IPDA_ATG02 = &objIPDM_A_MAIN_SWC_main_P_SG_IPDA_ATG02_SG_IPDA_ATG02;


    objIPDM_A_MAIN_SWC_main_P_SG_IPDA_ATG03_2_SG_IPDA_ATG03_2.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_SG_IPDA_ATG03_2_SG_IPDA_ATG03_2 = &objIPDM_A_MAIN_SWC_main_P_SG_IPDA_ATG03_2_SG_IPDA_ATG03_2;


    objIPDM_A_MAIN_SWC_main_P_SG_IPDA_ATG04_SG_IPDA_ATG04.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_SG_IPDA_ATG04_SG_IPDA_ATG04 = &objIPDM_A_MAIN_SWC_main_P_SG_IPDA_ATG04_SG_IPDA_ATG04;


    objIPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning = &objIPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning;

    objIPDM_A_MAIN_SWC_main_P_aDCA_Cmd_HS_Volt_IPDA_aDCA_Cmd_HS_Volt_IPDA.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_aDCA_Cmd_HS_Volt_IPDA_aDCA_Cmd_HS_Volt_IPDA = &objIPDM_A_MAIN_SWC_main_P_aDCA_Cmd_HS_Volt_IPDA_aDCA_Cmd_HS_Volt_IPDA;



    objIPDM_A_MAIN_SWC_main_P_aDCA_Cmd_LS_Curr_IPDA_aDCA_Cmd_LS_Curr_IPDA.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_aDCA_Cmd_LS_Curr_IPDA_aDCA_Cmd_LS_Curr_IPDA = &objIPDM_A_MAIN_SWC_main_P_aDCA_Cmd_LS_Curr_IPDA_aDCA_Cmd_LS_Curr_IPDA;


    objIPDM_A_MAIN_SWC_main_P_aIPDA_OI_Bat_Rq_aIPDA_OI_Bat_Rq.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_aIPDA_OI_Bat_Rq_aIPDA_OI_Bat_Rq = &objIPDM_A_MAIN_SWC_main_P_aIPDA_OI_Bat_Rq_aIPDA_OI_Bat_Rq;

    objIPDM_A_MAIN_SWC_main_P_aIPDMA_DeviceTemp_Cval_aIPDMA_DeviceTemp_Cval.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_aIPDMA_DeviceTemp_Cval_aIPDMA_DeviceTemp_Cval = &objIPDM_A_MAIN_SWC_main_P_aIPDMA_DeviceTemp_Cval_aIPDMA_DeviceTemp_Cval;



    objIPDM_A_MAIN_SWC_main_P_aLVA_SoH_Check_Status_aLVA_SoH_Check_Status.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_P_aLVA_SoH_Check_Status_aLVA_SoH_Check_Status = &objIPDM_A_MAIN_SWC_main_P_aLVA_SoH_Check_Status_aLVA_SoH_Check_Status;


    objIPDM_A_MAIN_SWC_main_R_EngCrk_Stat_EngCrk_Stat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_EngCrk_Stat_EngCrk_Stat = &objIPDM_A_MAIN_SWC_main_R_EngCrk_Stat_EngCrk_Stat;


    objIPDM_A_MAIN_SWC_main_R_IPDMA_BattHeat_Stat_IPDM_BattHeat_Stat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDMA_BattHeat_Stat_IPDM_BattHeat_Stat = &objIPDM_A_MAIN_SWC_main_R_IPDMA_BattHeat_Stat_IPDM_BattHeat_Stat;


    objIPDM_A_MAIN_SWC_main_R_IPDM_B_ShorePower_CritMet_IPDM_B_ShorePower_CritMet.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_B_ShorePower_CritMet_IPDM_B_ShorePower_CritMet = &objIPDM_A_MAIN_SWC_main_R_IPDM_B_ShorePower_CritMet_IPDM_B_ShorePower_CritMet;


    objIPDM_A_MAIN_SWC_main_R_IPDM_C_ShorePower_CritMet_IPDM_C_ShorePower_CritMet.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_C_ShorePower_CritMet_IPDM_C_ShorePower_CritMet = &objIPDM_A_MAIN_SWC_main_R_IPDM_C_ShorePower_CritMet_IPDM_C_ShorePower_CritMet;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Current.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Current = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Current;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Voltage.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Voltage = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Voltage;

    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Current.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Current = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Current;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Stat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Stat = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Stat;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Voltage.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Voltage = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Voltage;

    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_Current.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_Current = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_Current;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_SwStat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_SwStat = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_SwStat;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_Voltage.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_Voltage = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_Voltage;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_Current.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_Current = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_Current;

    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_SwStat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_SwStat = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_SwStat;

    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_Voltage.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_Voltage = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_Voltage;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_Current.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_Current = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_Current;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_SwStat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_SwStat = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_SwStat;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_Voltage.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_Voltage = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_Voltage;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_Current.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_Current = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_Current;

    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_SwStat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_SwStat = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_SwStat;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_Voltage.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_Voltage = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_Voltage;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_Current.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_Current = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_Current;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_SwStat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_SwStat = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_SwStat;


    objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_Voltage.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_Voltage = &objIPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_Voltage;

    objIPDM_A_MAIN_SWC_main_R_IgnSw_Stat_SCA_IgnSw_Stat_SCA.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_IgnSw_Stat_SCA_IgnSw_Stat_SCA = &objIPDM_A_MAIN_SWC_main_R_IgnSw_Stat_SCA_IgnSw_Stat_SCA;


    objIPDM_A_MAIN_SWC_main_R_SG_ALT_ATG01_SG_ALT_ATG01.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG01_SG_ALT_ATG01 = &objIPDM_A_MAIN_SWC_main_R_SG_ALT_ATG01_SG_ALT_ATG01;

    objIPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02 = &objIPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02;

    objIPDM_A_MAIN_SWC_main_R_SG_ALT_ATG03_SG_ALT_ATG03.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG03_SG_ALT_ATG03 = &objIPDM_A_MAIN_SWC_main_R_SG_ALT_ATG03_SG_ALT_ATG03;


    objIPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04 = &objIPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04;


    objIPDM_A_MAIN_SWC_main_R_SG_DCA_ATG01_SG_DCA_ATG01.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SG_DCA_ATG01_SG_DCA_ATG01 = &objIPDM_A_MAIN_SWC_main_R_SG_DCA_ATG01_SG_DCA_ATG01;

    objIPDM_A_MAIN_SWC_main_R_SG_DCB_ATG01_SG_DCB_ATG01.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SG_DCB_ATG01_SG_DCB_ATG01 = &objIPDM_A_MAIN_SWC_main_R_SG_DCB_ATG01_SG_DCB_ATG01;

    objIPDM_A_MAIN_SWC_main_R_SG_DCB_ATG04_SG_DCB_ATG04.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SG_DCB_ATG04_SG_DCB_ATG04 = &objIPDM_A_MAIN_SWC_main_R_SG_DCB_ATG04_SG_DCB_ATG04;



    objIPDM_A_MAIN_SWC_main_R_SG_DCC_ATG01_SG_DCC_ATG01.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SG_DCC_ATG01_SG_DCC_ATG01 = &objIPDM_A_MAIN_SWC_main_R_SG_DCC_ATG01_SG_DCC_ATG01;



    objIPDM_A_MAIN_SWC_main_R_SG_DCC_ATG04_SG_DCC_ATG04.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SG_DCC_ATG04_SG_DCC_ATG04 = &objIPDM_A_MAIN_SWC_main_R_SG_DCC_ATG04_SG_DCC_ATG04;


    objIPDM_A_MAIN_SWC_main_R_SG_EEC1_CPC3_SG_EEC1_CPC3.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SG_EEC1_CPC3_SG_EEC1_CPC3 = &objIPDM_A_MAIN_SWC_main_R_SG_EEC1_CPC3_SG_EEC1_CPC3;



    objIPDM_A_MAIN_SWC_main_R_SG_IPDM_SecureTime_SG_IPDM_SecureTime.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SG_IPDM_SecureTime_SG_IPDM_SecureTime = &objIPDM_A_MAIN_SWC_main_R_SG_IPDM_SecureTime_SG_IPDM_SecureTime;


    objIPDM_A_MAIN_SWC_main_R_SWC_NM_Status_NM_Status.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SWC_NM_Status_NM_Status = &objIPDM_A_MAIN_SWC_main_R_SWC_NM_Status_NM_Status;


    objIPDM_A_MAIN_SWC_main_R_SWC_POST_Status_POST_Status.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_SWC_POST_Status_POST_Status = &objIPDM_A_MAIN_SWC_main_R_SWC_POST_Status_POST_Status;


    objIPDM_A_MAIN_SWC_main_R_aDCA_LossOfSetpoint_Stat_aDCA_LossOfSetpoint_Stat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_aDCA_LossOfSetpoint_Stat_aDCA_LossOfSetpoint_Stat = &objIPDM_A_MAIN_SWC_main_R_aDCA_LossOfSetpoint_Stat_aDCA_LossOfSetpoint_Stat;

    objIPDM_A_MAIN_SWC_main_R_aDCA_ModeErr_Stat_aDCA_ModeErr_Stat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_aDCA_ModeErr_Stat_aDCA_ModeErr_Stat = &objIPDM_A_MAIN_SWC_main_R_aDCA_ModeErr_Stat_aDCA_ModeErr_Stat;

    objIPDM_A_MAIN_SWC_main_R_aDCA_MsgCorrupt_Stat_aDCA_MsgCorrupt_Stat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_aDCA_MsgCorrupt_Stat_aDCA_MsgCorrupt_Stat = &objIPDM_A_MAIN_SWC_main_R_aDCA_MsgCorrupt_Stat_aDCA_MsgCorrupt_Stat;


    objIPDM_A_MAIN_SWC_main_R_aDCA_MsgDelay_Stat_aDCA_MsgDelay_Stat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_aDCA_MsgDelay_Stat_aDCA_MsgDelay_Stat = &objIPDM_A_MAIN_SWC_main_R_aDCA_MsgDelay_Stat_aDCA_MsgDelay_Stat;


    objIPDM_A_MAIN_SWC_main_R_aDCA_Setpoint_OutOfRange_Stat_aDCA_Setpoint_OutOfRange_Stat.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_aDCA_Setpoint_OutOfRange_Stat_aDCA_Setpoint_OutOfRange_Stat = &objIPDM_A_MAIN_SWC_main_R_aDCA_Setpoint_OutOfRange_Stat_aDCA_Setpoint_OutOfRange_Stat;


    objIPDM_A_MAIN_SWC_main_R_aIPDB_OI_Bat_Rq_aIPDB_OI_Bat_Rq.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_aIPDB_OI_Bat_Rq_aIPDB_OI_Bat_Rq = &objIPDM_A_MAIN_SWC_main_R_aIPDB_OI_Bat_Rq_aIPDB_OI_Bat_Rq;



    objIPDM_A_MAIN_SWC_main_R_aIPDC_OI_Bat_Rq_aIPDC_OI_Bat_Rq.value = { 0 };
    objRte_Inst_IPDM_A_MAIN_A6.IPDM_A_MAIN_SWC_main_R_aIPDC_OI_Bat_Rq_aIPDC_OI_Bat_Rq = &objIPDM_A_MAIN_SWC_main_R_aIPDC_OI_Bat_Rq_aIPDC_OI_Bat_Rq;
}


void init_parameters(void) {
    uint16 K_IPDMA_Alt_ModeGen_MaxCurrLim_A = 7000;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModeGen_MaxCurrLim_A).WillRepeatedly(Return(K_IPDMA_Alt_ModeGen_MaxCurrLim_A));

    uint16 K_IPDMA_Alt_ModeGen_MaxVoltLim_V = 540;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModeGen_MaxVoltLim_V).WillRepeatedly(Return(K_IPDMA_Alt_ModeGen_MaxVoltLim_V));

    uint16 K_IPDMA_Alt_ModeGen_MinCurrLim_A = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModeGen_MinCurrLim_A).WillRepeatedly(Return(K_IPDMA_Alt_ModeGen_MinCurrLim_A));

    uint16 K_IPDMA_Alt_ModeGen_MinVoltLim_V = 380;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModeGen_MinVoltLim_V).WillRepeatedly(Return(K_IPDMA_Alt_ModeGen_MinVoltLim_V));

    uint8 K_IPDMA_Alt_ModeGen_OperMdDes_enm = 3;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModeGen_OperMdDes_enm).WillRepeatedly(Return(K_IPDMA_Alt_ModeGen_OperMdDes_enm));

    uint16 K_IPDMA_Alt_ModeGen_TqDes_Nm = 2000;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModeGen_TqDes_Nm).WillRepeatedly(Return(K_IPDMA_Alt_ModeGen_TqDes_Nm));

    uint16 K_IPDMA_Alt_ModeGen_TqMax_Nm = 4000;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModeGen_TqMax_Nm).WillRepeatedly(Return(K_IPDMA_Alt_ModeGen_TqMax_Nm));

    uint16 K_IPDMA_Alt_ModeGen_TqMin_Nm = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModeGen_TqMin_Nm).WillRepeatedly(Return(K_IPDMA_Alt_ModeGen_TqMin_Nm));

    uint16 K_IPDMA_Alt_ModePreChrg_DesVolt_V = 480;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModePreChrg_DesVolt_V).WillRepeatedly(Return(K_IPDMA_Alt_ModePreChrg_DesVolt_V));

    uint16 K_IPDMA_Alt_ModePreChrg_MaxCurrLim_A = 7000;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModePreChrg_MaxCurrLim_A).WillRepeatedly(Return(K_IPDMA_Alt_ModePreChrg_MaxCurrLim_A));

    uint16 K_IPDMA_Alt_ModePreChrg_MaxVoltLim_V = 540;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModePreChrg_MaxVoltLim_V).WillRepeatedly(Return(K_IPDMA_Alt_ModePreChrg_MaxVoltLim_V));

    uint16 K_IPDMA_Alt_ModePreChrg_MinCurrLim_A = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModePreChrg_MinCurrLim_A).WillRepeatedly(Return(K_IPDMA_Alt_ModePreChrg_MinCurrLim_A));

    uint16 K_IPDMA_Alt_ModePreChrg_MinVoltLim_V = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModePreChrg_MinVoltLim_V).WillRepeatedly(Return(K_IPDMA_Alt_ModePreChrg_MinVoltLim_V));

    uint8 K_IPDMA_Alt_ModePreChrg_OperMdDes_enm = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModePreChrg_OperMdDes_enm).WillRepeatedly(Return(K_IPDMA_Alt_ModePreChrg_OperMdDes_enm));

    uint16 K_IPDMA_Alt_ModePreChrg_TqDes_Nm = 2000;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModePreChrg_TqDes_Nm).WillRepeatedly(Return(K_IPDMA_Alt_ModePreChrg_TqDes_Nm));

    uint16 K_IPDMA_Alt_ModePreChrg_TqMax_Nm = 4000;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModePreChrg_TqMax_Nm).WillRepeatedly(Return(K_IPDMA_Alt_ModePreChrg_TqMax_Nm));

    uint16 K_IPDMA_Alt_ModePreChrg_TqMin_Nm = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_Alt_ModePreChrg_TqMin_Nm).WillRepeatedly(Return(K_IPDMA_Alt_ModePreChrg_TqMin_Nm));

    uint16 K_IPDMA_AltSpeedEngRunningThresholdHigh_RPM = 3000;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_AltSpeedEngRunningThresholdHigh_RPM).WillRepeatedly(Return(K_IPDMA_AltSpeedEngRunningThresholdHigh_RPM));

    uint16 K_IPDMA_AltSpeedEngRunningThresholdLow_RPM = 1500;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_AltSpeedEngRunningThresholdLow_RPM).WillRepeatedly(Return(K_IPDMA_AltSpeedEngRunningThresholdLow_RPM));

    uint16 K_IPDMA_MSCD_MainSwHealThreshold_mV = 14000;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_MSCD_MainSwHealThreshold_mV).WillRepeatedly(Return(K_IPDMA_MSCD_MainSwHealThreshold_mV));

    uint16 K_IPDMA_MSCD_MainSwFaultThreshold_mV = 13000;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_MSCD_MainSwFaultThreshold_mV).WillRepeatedly(Return(K_IPDMA_MSCD_MainSwFaultThreshold_mV));
    
    uint8 K_IPDMA_DCA_CurrLim_RampingEnabled = 1;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCA_CurrLim_RampingEnabled).WillRepeatedly(Return(K_IPDMA_DCA_CurrLim_RampingEnabled));

    uint8 K_IPDMA_DCA_CurrLim_SlewRate_AmpPerSec = 10;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCA_CurrLim_SlewRate_AmpPerSec).WillRepeatedly(Return(K_IPDMA_DCA_CurrLim_SlewRate_AmpPerSec));

    uint16 K_IPDMA_DCA_ModeBuck_CmdHSV_V = 480;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCA_ModeBuck_CmdHSV_V).WillRepeatedly(Return(K_IPDMA_DCA_ModeBuck_CmdHSV_V));

    uint16 K_IPDMA_DCA_ModeBuck_CmdLSCurr_A = 850;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCA_ModeBuck_CmdLSCurr_A).WillRepeatedly(Return(K_IPDMA_DCA_ModeBuck_CmdLSCurr_A));

    uint16 K_IPDMA_DCA_ModeBuck_CmdLSV_V = 142;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCA_ModeBuck_CmdLSV_V).WillRepeatedly(Return(K_IPDMA_DCA_ModeBuck_CmdLSV_V));

    uint16 K_IPDMA_DCA_ModeChangeRunDelay_msec = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCA_ModeChangeRunDelay_msec).WillRepeatedly(Return(K_IPDMA_DCA_ModeChangeRunDelay_msec));

    uint16 K_IPDMA_DCA_ModePreChrg_CmdHSV_V = 480;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCA_ModePreChrg_CmdHSV_V).WillRepeatedly(Return(K_IPDMA_DCA_ModePreChrg_CmdHSV_V));

    uint16 K_IPDMA_DCA_ModePreChrg_CmdLSCurr_A = 50;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCA_ModePreChrg_CmdLSCurr_A).WillRepeatedly(Return(K_IPDMA_DCA_ModePreChrg_CmdLSCurr_A));

    uint16 K_IPDMA_DCA_ModePreChrg_CmdLSV_V = 142;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCA_ModePreChrg_CmdLSV_V).WillRepeatedly(Return(K_IPDMA_DCA_ModePreChrg_CmdLSV_V));

    uint16 K_IPDMA_DCA_ModeShorePwr_CmdHSV_V = 480;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCA_ModeShorePwr_CmdHSV_V).WillRepeatedly(Return(K_IPDMA_DCA_ModeShorePwr_CmdHSV_V));

    uint16 K_IPDMA_DCA_ModeShorePwr_CmdLSCurr_A = 500;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCA_ModeShorePwr_CmdLSCurr_A).WillRepeatedly(Return(K_IPDMA_DCA_ModeShorePwr_CmdLSCurr_A));

    uint16 K_IPDMA_DCA_ModeShorePwr_CmdLSV_V = 142;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCA_ModeShorePwr_CmdLSV_V).WillRepeatedly(Return(K_IPDMA_DCA_ModeShorePwr_CmdLSV_V));

    uint16 K_IPDMA_DCAPrechargeVerified_minHS_V = 30;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCAPrechargeVerified_minHS_V).WillRepeatedly(Return(K_IPDMA_DCAPrechargeVerified_minHS_V));

    uint16 K_IPDMA_DCDC_ShorePwrCritMet_HS_V_High = 520;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCDC_ShorePwrCritMet_HS_V_High).WillRepeatedly(Return(K_IPDMA_DCDC_ShorePwrCritMet_HS_V_High));

    uint16 K_IPDMA_DCDC_ShorePwrCritMet_HS_V_Low = 360;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCDC_ShorePwrCritMet_HS_V_Low).WillRepeatedly(Return(K_IPDMA_DCDC_ShorePwrCritMet_HS_V_Low));

    uint16 K_IPDMA_DCDC_ShorePwrCritMet_minTime_msec = 2000;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_DCDC_ShorePwrCritMet_minTime_msec).WillRepeatedly(Return(K_IPDMA_DCDC_ShorePwrCritMet_minTime_msec));

    uint16 K_IPDMA_EngineRunningThresholdHigh_RPM = 600;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_EngineRunningThresholdHigh_RPM).WillRepeatedly(Return(K_IPDMA_EngineRunningThresholdHigh_RPM));

    
    uint16 K_IPDMA_EngRunning_False_minTime_msec = 750;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_EngRunning_False_minTime_msec).WillRepeatedly(Return(K_IPDMA_EngRunning_False_minTime_msec));

    uint16 K_IPDMA_EngRunning_True_minTime_msec = 750;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_EngRunning_True_minTime_msec).WillRepeatedly(Return(K_IPDMA_EngRunning_True_minTime_msec));

    uint8 K_IPDMA_EngSpeedForEngRunnCalc_enabled = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_EngSpeedForEngRunnCalc_enabled).WillRepeatedly(Return(K_IPDMA_EngSpeedForEngRunnCalc_enabled));

    uint16 K_IPDMA_FaultMonitoringStartupDelay_msec = 2500;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_FaultMonitoringStartupDelay_msec).WillRepeatedly(Return(K_IPDMA_FaultMonitoringStartupDelay_msec));

    /*
    uint16 K_IPDMA_RunningVerified_DCA_minLS_V = 131;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_RunningVerified_DCA_minLS_V).WillRepeatedly(Return(K_IPDMA_RunningVerified_DCA_minLS_V));
    */

    uint16 K_IPDMA_ShorePowerVerified_DCA_minLS_V = 129;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_ShorePowerVerified_DCA_minLS_V).WillRepeatedly(Return(K_IPDMA_ShorePowerVerified_DCA_minLS_V));

    uint16 K_IPDMA_SysMode_MinInitTime_msec = 200;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_SysMode_MinInitTime_msec).WillRepeatedly(Return(K_IPDMA_SysMode_MinInitTime_msec));

    uint16 K_IPDMA_SysMode_MinPrechargeTime_msec = 4000;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_SysMode_MinPrechargeTime_msec).WillRepeatedly(Return(K_IPDMA_SysMode_MinPrechargeTime_msec));

    uint16 K_IPDMA_SysMode_PrechargeMaxAttempt_Count = 5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_SysMode_PrechargeMaxAttempt_Count).WillRepeatedly(Return(K_IPDMA_SysMode_PrechargeMaxAttempt_Count));

    uint16 K_IPDMA_SysMode_PrechargeTimeout_msec = 7500;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_SysMode_PrechargeTimeout_msec).WillRepeatedly(Return(K_IPDMA_SysMode_PrechargeTimeout_msec));

}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_PowerNet_System_Monitering_Reactions_01) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*Initializing the parameters*/
    init_parameters();

    /*Mode Switch Disallow is enabled by the parameter K_IPDMA_074 = 1*/

    DETAILS("Test for function PowerNet system monitoring  and reaction to set MainSwitchCloseDisallow");
    REALIZES("53909:TC_iPDMA_FuSa_SWR_PowerNet_System_Monitering_Reactions_01");


    TESTSTEP("1", "Setting the Alternator mode and DCDC mode to running verified ,assigning the signals aAlt_Edrv_ActlRun_Stat = E_C04_PRERUN_RUN_STDBY_SHUT_RUN , aAlt_ActlOperMod_Stat = E_C04_IDLE_VOLTAGE_VOLTAGE_WITHOUT_BATTERY\
                 aDCA_Run_Status = E_C02_BUCK_BOOST_PRECHARGE_SNA_BUCK , aDCA_DXN_Status = E_C02_STOP_RUN_RES_SNA_RUN to set altModeCmd and dcaModeCmd to running verified");
    EXPECTED("1", "Enum values of altModeCmd and dcaModeCmd should be 6");

    /*Alternator and DCA running verified*/
    /*Setting the alternator edrive run status*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02->value.aAlt_Edrv_ActlRun_Stat = E_C04_PRERUN_RUN_STDBY_SHUT_RUN;

    /*Settng the alternator operating mode*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02->value.aAlt_ActlOperMod_Stat = E_C04_IDLE_VOLTAGE_VOLTAGE_WITHOUT_BATTERY;

    /*Setting DCA run status and direction*/
    REC_SG_DCA_ATG02_AR2_5l78ok150rfj1o1ym2g6wr553 in_SG_DCA_ATG02_AR2;
    Rte_TransformerError in_transformerError_b;
    /*
    in_SG_DCA_ATG02_AR2.aDCA_Run_Status = E_C02_STOP_RUN_RES_SNA_RUN;
    in_SG_DCA_ATG02_AR2.aDCA_DXN_Status = E_C02_BUCK_BOOST_PRECHARGE_SNA_BUCK;
    */
    in_SG_DCA_ATG02_AR2.aDCA_Run_Status = E_C02_BUCK_BOOST_PRECHARGE_SNA_BUCK;
    in_SG_DCA_ATG02_AR2.aDCA_DXN_Status = E_C02_STOP_RUN_RES_SNA_RUN;
    in_transformerError_b.errorCode = 0;
    in_transformerError_b.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_DCA_ATG02_AR2_SG_DCA_ATG02_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_DCA_ATG02_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_b),
        Return(
            RTE_E_OK)));

    EXPECT_EQ_LOG("aAlt_Edrv_ActlRun_Stat", E_C04_PRERUN_RUN_STDBY_SHUT_RUN, 2)
    EXPECT_EQ_LOG("aAlt_ActlOperMod_Stat", E_C04_IDLE_VOLTAGE_VOLTAGE_WITHOUT_BATTERY, 8)
    EXPECT_EQ_LOG("aDCA_Run_Status", E_C02_BUCK_BOOST_PRECHARGE_SNA_BUCK, 0)
    EXPECT_EQ_LOG("aDCA_DXN_Status", E_C02_STOP_RUN_RES_SNA_RUN, 1)


        TESTSTEP("2", "Setting the IPDM main switch voltage greater than 13 volts");
    EXPECTED("2", "The value of the signal IPDM_Switch_Stat_IPDM_MainSw_Voltage>13V");

    /*Set IPDM Main switch voltage above threshold value 13V*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Voltage->value = 15;

    /*the software shall store in a variable the latest Bat_Ah_Cntr_ASIL value for each battery
    --> Requirment is unclear here. Which variable needs to be tested ? */

    TESTSTEP("3", "Setting all Batteries ampere hour to 103");
    EXPECTED("3", "The value of the signal Bat_Ah_Cntr_ASIL = 103Ahr");

    /*Set the Batt Ah for batt1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;
    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*Set the Batt Ah for batt2*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;
    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*Set the Batt Ah for batt3*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;
    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*Set the Batt Ah for batt4*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;
    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Executing the main fuction (IPDM_A_MAIN_SWC_main()) for five iterations ");
    EXPECTED("4", "The value of the MainSwitchCloseDisallow equal to zero");

    /*Running the main progrma*/
    for (int i = 0; i < 5; i++) {
        /*Calling the main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Expecting the main switch disallow to be false*/
    EXPECT_EQ(Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_MainSwitchCloseDisallow_MainSwitchCloseDisallow->value, 0);

    EXPECT_EQ_LOG("MainSwitchCloseDisallow", objIPDM_A_MAIN_SWC_main_P_MainSwitchCloseDisallow_MainSwitchCloseDisallow.value, 0);

        TESTSTEP("5", "Setting the Battery ampere hour less than 87Ahr (if Bat_Ah_Cntr_ASIL has decreased in any battery by more than 15 Ahr)");
    EXPECTED("5", "The value of the signal Bat_Ah_Cntr_ASIL < 87Ahr");

    /*Set IPDM Main switch voltage below threshold value 13V*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Voltage->value = 12;

    /*Set the Batt Ah for batt1*/
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 70;
    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));


    TESTSTEP("6", "Executing the main fuction (IPDM_A_MAIN_SWC_main()) for five iterations ");
    EXPECTED("6", "The value of the MainSwitchCloseDisallow equal to one");

    /*Running the main progrma*/
    for (int i = 0; i < 5; i++) {
        /*Calling the main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Expecting the main switch disallow to be false*/
    EXPECT_EQ(Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_MainSwitchCloseDisallow_MainSwitchCloseDisallow->value, 1);

    EXPECT_EQ_LOG("MainSwitchCloseDisallow", objIPDM_A_MAIN_SWC_main_P_MainSwitchCloseDisallow_MainSwitchCloseDisallow.value, 1)
}


TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_PowerNet_System_Monitering_and_reaction_02) {
    /*Setting the RTE instances*/
    set_rte_instances();

    /*Initializing the parameters*/
    init_parameters();

    DETAILS("Test the loss of Ignition switch status shall not cause the IPDM to change the the active system Mode command to power gen or charging states when the IPDM\
system Mode command is equal to RUNNING_VERIFIED or SHORE_PWR_VERIFIED");
    REALIZES("53917:TC_iPDMA_FuSa_SWR_PowerNet_System_Monitering_Reactions_02");


    TESTSTEP("1", "Setting the Alternator run status and operating mode to RUN and IDLE_VOLTAGE respectively");
    EXPECTED("1", "The value of the signals aAlt_ActlOperMod_Stat and aAlt_Edrv_ActlRun_Stat is equal to 8 and 2 respectively");

    /*Set Alt status and mode status */
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02->value.aAlt_ActlOperMod_Stat = 8;
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02->value.aAlt_Edrv_ActlRun_Stat = 2;

    EXPECT_EQ_LOG("Alternator operating mode signal", Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02->value.aAlt_ActlOperMod_Stat, E_C04_IDLE_VOLTAGE_VOLTAGE_WITHOUT_BATTERY)
        EXPECT_EQ_LOG("Alternator run status signal", Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02->value.aAlt_Edrv_ActlRun_Stat, E_C04_PRERUN_RUN_STDBY_SHUT_RUN)

        /*Set the ignition switch status*/
        REC_SG_IgnSw_E2E_SAM_Stat_Pkt_ednqef5xiht6lvtipf4ne4e5c in_SG_IgnSw_E2E_SAM_Stat_Pkt;


    in_SG_IgnSw_E2E_SAM_Stat_Pkt.IgnSw_Stat_E2E_SAM = 15;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IgnSw_E2E_SAM_Stat_Pkt_SG_IgnSw_E2E_SAM_Stat_Pkt).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IgnSw_E2E_SAM_Stat_Pkt),
        Return(
            RTE_E_OK)));

    /*Expect CALL for Rte_Write function*/
    REC_SG_IPDA_ATG09_AR5_r9cuozm1n9x522jz743obnx test_SG_IPDA_ATG09_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG09_AR5_SG_IPDA_ATG09_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG09_AR5),
        Return(
            RTE_E_OK)));

    /*Calling the main function*/
    IPDM_A_MAIN_SWC_main();

    TESTSTEP("2", "Checking the System mode command");
    EXPECTED("2", "The value of the signal aIPDMA_ControlMode_IPDA should equal to 6");

    /*Check for system mode equal to RUNNING_VERIFIED*/
    EXPECT_EQ(test_SG_IPDA_ATG09_AR5.aIPDMA_ControlMode_IPDA, E_SYS_MODE_RUNNING_VERIFIED);

    EXPECT_EQ_LOG("System mode command", test_SG_IPDA_ATG09_AR5.aIPDMA_ControlMode_IPDA, E_SYS_MODE_RUNNING_VERIFIED)

        TESTSTEP("3", "Setting the ignition switch status to SNA");
    EXPECTED("3", "The value of the signal IgnSw_Stat_E2E_SAM equal to 15");

    /*Making the ignition switch status unavailable*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IgnSw_Stat_SCA_IgnSw_Stat_SCA->value = 15;

    EXPECT_EQ_LOG("Ignition Switch status", Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IgnSw_Stat_SCA_IgnSw_Stat_SCA->value, 15)

        /*Expect CALL for Rte_Write function*/
        //REC_SG_IPDA_ATG09_AR5_r9cuozm1n9x522jz743obnx test_SG_IPDA_ATG09_AR5;
        EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG09_AR5_SG_IPDA_ATG09_AR5).WillRepeatedly(DoAll(
            SaveArgPointee
            < 0 >
            (
                &test_SG_IPDA_ATG09_AR5),
            Return(
                RTE_E_OK)));

    /*Calling the main function*/
    IPDM_A_MAIN_SWC_main();

    TESTSTEP("4", "Checking the System mode command after loosing the ignition switch status");
    EXPECTED("4", "The value of the signal aIPDMA_ControlMode_IPDA should be equal to 6");

    /*Check for system mode setting remains in RUNNING_VERIFIED*/
    EXPECT_EQ(test_SG_IPDA_ATG09_AR5.aIPDMA_ControlMode_IPDA, E_SYS_MODE_RUNNING_VERIFIED);

    EXPECT_EQ_LOG("System mode command", test_SG_IPDA_ATG09_AR5.aIPDMA_ControlMode_IPDA, E_SYS_MODE_RUNNING_VERIFIED)

}


TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Wiring_Harness_Diagnostics_01_pack1) {

    /*Setting the RTE instances*/
    set_rte_instances();

    /*Initializing the parameters*/
    init_parameters();

    DETAILS("Verify and validating the battery pack 1 and 2 node resistance, whether the softaware setting it's vlaue by Ohm's law (R=V/I) ");
    REALIZES("58283:TC_iPDMC_FuSa_SWR_Wiring_Harness_Diagnostics_01");


    /*Declartion of Batt1 First Frames*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;

    TESTSTEP("1", "Setting the value for battery pack 1 current and voltage signals Batt frame 1");
    EXPECTED("1", "The signals Bat_Volt_Cval_ASIL=14 and Bat_Curr_Cval_ASIL=10 of battery frame1 ");

    /*Assining current, voltage and Sequence to Batt1 frames*/
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 10;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 14;
    in_SG_IBS_LV_Frm1_AR2.SQC_SG_IBS_LV_Frm1_AR2 = 1;

    /*Declaration of Batt2 Second Frame*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;

    TESTSTEP("2", "Setting the value for battery pack 2 current and voltage signals Batt frame 2");
    EXPECTED("2", "The signals Bat_Volt_Cval_ASIL=14 and Bat_Curr_Cval_ASIL=10 of battery frame2 ");

    /*Assigning current, voltage and sequence to Batt2 frames*/
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 10;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 14;
    in_SG_IBS_LV_Frm1_AR2_a.SQC_SG_IBS_LV_Frm1_AR2 = 1;

    /*Assigning Batt1 frames RTE Read*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        Return(
            RTE_E_OK)));

    /*Assigning Batt2 frames to RTE Read*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    IPDM_A_MAIN_SWC_main();

    /*Checking the expected resistance*/
    /*Could not able to test the internal local variables*/

    /*DETAILS("Could not able to validate the battery pack 1 and 2 node resistance since it is a internal local variable");*/

}


TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Wiring_Harness_Diagnostics_01_pack2) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*Initializing the Parameters*/
    init_parameters();

    DETAILS("Verify and validating the battery pack 3 and 4 node resistance, whether the softaware setting it's vlaue by Ohm's law (R=V/I) ");
    REALIZES("58283:TC_iPDMC_FuSa_SWR_Wiring_Harness_Diagnostics_01");

    /*Declartion of Batt1 First Frames*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;

    TESTSTEP("1", "Setting the value for battery pack 3 current and voltage signals Batt frame 1");
    EXPECTED("1", "The signals Bat_Volt_Cval_ASIL=14 and Bat_Curr_Cval_ASIL=10 of battery frame1 ");

    /*Assining current, voltage and Sequence to Batt1 frames*/
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 10;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 14;
    in_SG_IBS_LV_Frm1_AR2_b.SQC_SG_IBS_LV_Frm1_AR2 = 1;

    /*Declaration of Batt2 Second Frame*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;

    TESTSTEP("2", "Setting the value for battery pack 4 current and voltage signals Batt frame 2");
    EXPECTED("2", "The signals Bat_Volt_Cval_ASIL=14 and Bat_Curr_Cval_ASIL=10 of battery frame 2 ");

    /*Assigning current, voltage and sequence to Batt2 frames*/
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 10;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 14;
    in_SG_IBS_LV_Frm1_AR2_c.SQC_SG_IBS_LV_Frm1_AR2 = 1;

    /*Assigning Batt1 frames RTE Read*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        Return(
            RTE_E_OK)));

    /*Assigning Batt2 frames to RTE Read*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    IPDM_A_MAIN_SWC_main();

    /*Checking the expected resistance*/
    /*Could not able to test the internal local variables*/

    /*DETAILS("Could not able to validate the battery pack 3 and 4 node resistance since it is a internal local variable");*/
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Wiring_Harness_Diagnostics_02) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Verify and validating the IPDM main switch node resistance, whether the softaware setting it's vlaue by Ohm's law (R=V/I) ");
    REALIZES("58285:TC_iPDMC_FuSa_SWR_Wiring_Harness_Diagnostics_02");

    /*Set the ignition switch status*/
    REC_SG_IgnSw_E2E_SAM_Stat_Pkt_ednqef5xiht6lvtipf4ne4e5c in_SG_IgnSw_E2E_SAM_Stat_Pkt;

    TESTSTEP("1", "Setting the ignition switch status");
    EXPECTED("1", "The value of the signal IgnSw_Stat_E2E_SAM equal to 2");

    in_SG_IgnSw_E2E_SAM_Stat_Pkt.IgnSw_Stat_E2E_SAM = 2;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IgnSw_E2E_SAM_Stat_Pkt_SG_IgnSw_E2E_SAM_Stat_Pkt).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IgnSw_E2E_SAM_Stat_Pkt),
        Return(
            RTE_E_OK)));

    TESTSTEP("2", "Setting the value for IPDM main switch current and voltage signals");
    EXPECTED("2", "The signals IPDM_Switch_Stat_IPDM_MainSw_Current=10 and IPDM_Switch_Stat_IPDM_MainSw_Voltage =12");

    /*Setting the ipdm main switch voltage and current*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Voltage->value = 12;
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Current->value = 10;

    /*Calling main function*/
    IPDM_A_MAIN_SWC_main();

    /*Checking the expected node resistance*/
    /*Could not able to test internal local variable*/

    /*DETAILS("Could not able to validate the IPDM main switch node resistance since it is a internal local variable");*/
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Wiring_Harness_Diagnostics_04) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*Initializing the parameters*/
    init_parameters();

    DETAILS("Testing the evaluation of the each battery pack wiring nominal resistance value of the wiring harness using material resistance formula");
    REALIZES("58287:TC_iPDM_FuSa_SWR_Wiring_Harness_Diagnostics_04");

    /*Set the ignition switch status*/
    REC_SG_IgnSw_E2E_SAM_Stat_Pkt_ednqef5xiht6lvtipf4ne4e5c in_SG_IgnSw_E2E_SAM_Stat_Pkt;

    TESTSTEP("1", "Setting the ignition switch status");
    EXPECTED("1", "The value of the signal IgnSw_Stat_E2E_SAM equal to 2");

    in_SG_IgnSw_E2E_SAM_Stat_Pkt.IgnSw_Stat_E2E_SAM = 2;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IgnSw_E2E_SAM_Stat_Pkt_SG_IgnSw_E2E_SAM_Stat_Pkt).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IgnSw_E2E_SAM_Stat_Pkt),
        Return(
            RTE_E_OK)));

    /*Set the battery temperature*/
    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;

    TESTSTEP("2", "Setting the battery pack (1 & 2) temperature in terms of degree celcius ");
    EXPECTED("2", "The value of the signal Bat_Temp_Cval is equal to 30");

    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 30;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 30;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        Return(
            RTE_E_OK)));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    IPDM_A_MAIN_SWC_main();

    /*Check for the wire resistance*/
    /*DETAILS("Checking the battery pack wiring resistance value");*/
}


TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Wiring_Harness_Diagnostics_03_pack2) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Testing the following in battery pack 3 and 4 :If the diffrence between IPDM main switch node resistance and sum of (wiring resistance, \
Battery pack node resistance) is greater than 8m ohm then IPDM shall set DTC_PowerNet_Faulated to ACTIVE");
    REALIZES("58289:TC_iPDM_FuSa_SWR_Wiring_Harness_Diagnostics_03");

    /*Setting the battery sequence*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;

    TESTSTEP("1", "Enable the signal SQC_SG_IBS_LV_Frm1_AR2 of battery pack 3 and 4 to test the node resistance and assign voltage and current \
values for current and voltage signals of battery pack 3 and 4 ");
    EXPECTED("1", "The signals SQC_SG_IBS_LV_Frm1_AR2=1,Bat_Curr_Cval_ASIL =10 and Bat_Volt_Cval_ASIL=14 for both battery pack 3 and 4");

    in_SG_IBS_LV_Frm1_AR2_b.SQC_SG_IBS_LV_Frm1_AR2 = 1;
    in_SG_IBS_LV_Frm1_AR2_c.SQC_SG_IBS_LV_Frm1_AR2 = 1;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 10;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 14;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 10;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 14;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        Return(
            RTE_E_OK)));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        Return(
            RTE_E_OK)));


    /*Set the ignition switch status to RUN along with transformer error code and class to value 0*/
    REC_SG_IgnSw_E2E_SAM_Stat_Pkt_ednqef5xiht6lvtipf4ne4e5c in_SG_IgnSw_E2E_SAM_Stat_Pkt;
    Rte_TransformerError in_transformerError_oa;

    TESTSTEP("2", "Setting the ignition switch status");
    EXPECTED("2", "The value of the signal IgnSw_Stat_E2E_SAM equal to 2");

    in_SG_IgnSw_E2E_SAM_Stat_Pkt.IgnSw_Stat_E2E_SAM = 2;
    in_transformerError_oa.errorCode = 0;
    in_transformerError_oa.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IgnSw_E2E_SAM_Stat_Pkt_SG_IgnSw_E2E_SAM_Stat_Pkt).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IgnSw_E2E_SAM_Stat_Pkt),
        SetArgPointee
        < 1 >
        (
            in_transformerError_oa),

        Return(
            RTE_E_OK)));

    /*Set the battery temperature*/
    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;

    TESTSTEP("3", "Setting the battery pack (3 & 4) temperature in terms of degree celcius ");
    EXPECTED("3", "The value of the signal Bat_Temp_Cval is equal to 30");

    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 30;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 30;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        Return(
            RTE_E_OK)));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the value for IPDM main switch current and voltage signals");
    EXPECTED("4", "The signals IPDM_Switch_Stat_IPDM_MainSw_Current=10 and IPDM_Switch_Stat_IPDM_MainSw_Voltage =12");

    /*Setting the ipdm main switch voltage and current*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Voltage->value = 12;
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Current->value = 10;

    /*Set the PNet_Sys_Wire_Fault, GetEvent Status signal to 1*/
    Dem_EventStatusExtendedType in_EventStatus_cb = 1;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Call_DTC_PowerNet_SystemFaulted_GetEventStatus).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_EventStatus_cb),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Executing the main fuction (IPDM_A_MAIN_SWC_main()) for ten iterations ");
    EXPECTED("4", "The DTC_PowerNet_SystemFaulted_SetEventStatus = 1 (ACTIVE)");

    /*Calling main function*/
    for (int i = 0; i < 10; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    /*Expect call for RTE Write function, SetEventStatus signal*/
    Dem_EventStatusType test_EventStatus = 1;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Call_DTC_PowerNet_SystemFaulted_SetEventStatus(test_EventStatus)).WillRepeatedly(Return(RTE_E_OK));

    EXPECT_EQ_LOG("DTC_PowerNet_SystemFaulted_SetEventStatus", Rte_Call_DTC_PowerNet_SystemFaulted_SetEventStatus(test_EventStatus), 1)

        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();

}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Wiring_Harness_Diagnostics_03_pack1) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the Parameters*/
    init_parameters();


    DETAILS("Testing the following in battery pack 1 and 2 :If the diffrence between IPDM main switch node resistance and sum of (wiring resistance, \
Battery pack node resistance) is greater than 8m ohm then IPDM shall set DTC_PowerNet_Faulated to ACTIVE");
    REALIZES("58289:TC_iPDM_FuSa_SWR_Wiring_Harness_Diagnostics_03");

    /*Setting the battery sequence*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;

    TESTSTEP("1", "Enable the signal SQC_SG_IBS_LV_Frm1_AR2 of battery pack 1 and 2 to test the node resistance and assign voltage and current \
values for current and voltage signals of battery pack 1 and 2 ");
    EXPECTED("1", "The signals SQC_SG_IBS_LV_Frm1_AR2=1,Bat_Curr_Cval_ASIL =10 and Bat_Volt_Cval_ASIL=14 for both battery pack 1 and 2");

    in_SG_IBS_LV_Frm1_AR2.SQC_SG_IBS_LV_Frm1_AR2 = 1;
    in_SG_IBS_LV_Frm1_AR2_a.SQC_SG_IBS_LV_Frm1_AR2 = 1;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 10;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 14;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 10;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 14;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        Return(
            RTE_E_OK)));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        Return(
            RTE_E_OK)));


    /*Set the ignition switch status to RUN along with transformer error code and class to value 0*/
    REC_SG_IgnSw_E2E_SAM_Stat_Pkt_ednqef5xiht6lvtipf4ne4e5c in_SG_IgnSw_E2E_SAM_Stat_Pkt;
    Rte_TransformerError in_transformerError_oa;

    TESTSTEP("2", "Setting the ignition switch status");
    EXPECTED("2", "The value of the signal IgnSw_Stat_E2E_SAM equal to 2");

    in_SG_IgnSw_E2E_SAM_Stat_Pkt.IgnSw_Stat_E2E_SAM = 2;
    in_transformerError_oa.errorCode = 0;
    in_transformerError_oa.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IgnSw_E2E_SAM_Stat_Pkt_SG_IgnSw_E2E_SAM_Stat_Pkt).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IgnSw_E2E_SAM_Stat_Pkt),
        SetArgPointee
        < 1 >
        (
            in_transformerError_oa),

        Return(
            RTE_E_OK)));

    /*Set the battery temperature*/
    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;

    TESTSTEP("3", "Setting the battery pack (1 & 2) temperature in terms of degree celcius ");
    EXPECTED("3", "The value of the signal Bat_Temp_Cval is equal to 30");

    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 30;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 30;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        Return(
            RTE_E_OK)));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        Return(
            RTE_E_OK)));

    /*Setting the ipdm main switch voltage and current*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Voltage->value = 12;
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_BattCharge_Current->value = 10;

    /*Set the PNet_Sys_Wire_Fault, GetEvent Status signal to 1*/
    Dem_EventStatusExtendedType in_EventStatus_cb = 1;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Call_DTC_PowerNet_SystemFaulted_GetEventStatus).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_EventStatus_cb),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Executing the main fuction (IPDM_A_MAIN_SWC_main()) for ten iterations ");
    EXPECTED("4", "The DTC_PowerNet_SystemFaulted_SetEventStatus = 1 (ACTIVE)");

    /*Calling main function*/
    int i = 0;
    while (i < 10) {
        IPDM_A_MAIN_SWC_main();
        i++;
    }

    /*Expect call for RTE Write function, SetEventStatus signal*/
    Dem_EventStatusType test_EventStatus = 1;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Call_DTC_PowerNet_SystemFaulted_SetEventStatus(test_EventStatus)).WillRepeatedly(Return(RTE_E_OK));

    EXPECT_EQ_LOG("DTC_PowerNet_SystemFaulted_SetEventStatus", Rte_Call_DTC_PowerNet_SystemFaulted_SetEventStatus(test_EventStatus), 1)

        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();

}


TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_01_MAIN_SW_OV) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Test case to check Powernet status is OK or NOK");

    TESTSTEP("1", "Setting the PowerNet status to OK by making all the battery parameters values should be under normal oprating range");
    EXPECTED("1", "Assigning the current , voltage , internal resistance , SOH ,SOC , AmpHr etc ... values between normal operating range");

    TESTSTEP("2", "Setting the frame 1 battery parameters");
    EXPECTED("2", "Under frame 1 assigning Current,Voltage and Ampere-Hour values ");

    /*BATTERY 1 FRAME 1*/

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;

    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;

    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Setting the frame 2 battery parameters");
    EXPECTED("3", "Under frame 2 assigning Current and Internal resistance values ");

    /*BATTERY 1 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    Rte_TransformerError in_transformerError_m;

    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_a;
    Rte_TransformerError in_transformerError_n;

    in_transformerError_n.errorCode = 0;
    in_transformerError_n.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_n),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_b;
    Rte_TransformerError in_transformerError_o;

    in_transformerError_o.errorCode = 0;
    in_transformerError_o.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_o),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_c;
    Rte_TransformerError in_transformerError_p;

    in_transformerError_p.errorCode = 0;
    in_transformerError_p.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_p),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the frame 3 battery parameters");
    EXPECTED("4", "Under frame 3 assigning Current and Voltage values ");

    /*BATTERY 1 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    Rte_TransformerError in_transformerError_q;

    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2_a;
    Rte_TransformerError in_transformerError_r;

    in_transformerError_r.errorCode = 0;
    in_transformerError_r.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_r),
        Return(
            RTE_E_OK)));

    TESTSTEP("5", "Setting the frame 4 battery parameters");
    EXPECTED("5", "Under frame 4 assigning Current,SOC,SOH and SOC tolerence values ");

    /*BATTERY 1 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    Rte_TransformerError in_transformerError_u;

    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_a;
    Rte_TransformerError in_transformerError_v;

    in_transformerError_v.errorCode = 0;
    in_transformerError_v.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_v),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_b;
    Rte_TransformerError in_transformerError_w;

    in_transformerError_w.errorCode = 0;
    in_transformerError_w.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_w),
        Return(
            RTE_E_OK)));
    /*BATTERY 4 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_c;
    Rte_TransformerError in_transformerError_x;

    in_transformerError_x.errorCode = 0;
    in_transformerError_x.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_x),
        Return(
            RTE_E_OK)));

    TESTSTEP("6", "Setting the frame 5 battery parameters");
    EXPECTED("6", "Under frame 5 assigning Current,Voltage and Bat_temparature values ");

    /*BATTERY 1 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    Rte_TransformerError in_transformerError_y;

    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    Rte_TransformerError in_transformerError_z;

    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    Rte_TransformerError in_transformerError_aa;

    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    Rte_TransformerError in_transformerError_ba;

    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Setting the frame 6 battery parameters");
    EXPECTED("7", "Under frame 6 assigning Current,Bat_Discnctn,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err values ");

    /*BATTERY 1 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;

    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;

    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));

    TESTSTEP("8", "Setting all the battery frames Updated signal to TRUE");
    EXPECTED("8", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm#_AR2_B$_SG_IBS_LV_Frm#_AR2 signal to TRUE (#(Frames) - 1,2,3,4,5,6 ),($(Battery) - 1,2,3,4");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("9", "Calling the Main function");
    EXPECTED("9", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_OK (0)");

    /*Check for the PowerNet Status OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)

    TESTSTEP("11", "Setting the Main switch status signal to OVERVOLTAGE FAILURE");
    EXPECTED("11", "Main switch status signal value equal to 2 (enum value of OVERVOLTAGE FAILURE )");


    /*IPDM Outuput Switch 1 OVERVOLTAGE_FAILURE and checking PowerNet Status NOK*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Stat->value = 2;

    /*Saving the rte write function*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("12", "Calling the Main function");
    EXPECTED("12", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Calling main function*/
    for (int i = 0; i < 15; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("13", "Checking the Powernet status");
    EXPECTED("13", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_NOK (1)");

    /*Check for the PowerNet Status NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_01_MAIN_SW_OC) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Test case to check Powernet status is OK or NOK");

    TESTSTEP("1", "Setting the PowerNet status to OK by making all the battery parameters values should be under normal oprating range");
    EXPECTED("1", "Assigning the current , voltage , internal resistance , SOH ,SOC , AmpHr etc ... values between normal operating range");

    TESTSTEP("2", "Setting the frame 1 battery parameters");
    EXPECTED("2", "Under frame 1 assigning Current,Voltage and Ampere-Hour values ");

    /*BATTERY 1 FRAME 1*/

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;

    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;

    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Setting the frame 2 battery parameters");
    EXPECTED("3", "Under frame 2 assigning Current and Internal resistance values ");

    /*BATTERY 1 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    Rte_TransformerError in_transformerError_m;

    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_a;
    Rte_TransformerError in_transformerError_n;

    in_transformerError_n.errorCode = 0;
    in_transformerError_n.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_n),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_b;
    Rte_TransformerError in_transformerError_o;

    in_transformerError_o.errorCode = 0;
    in_transformerError_o.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_o),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_c;
    Rte_TransformerError in_transformerError_p;

    in_transformerError_p.errorCode = 0;
    in_transformerError_p.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_p),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the frame 3 battery parameters");
    EXPECTED("4", "Under frame 3 assigning Current and Voltage values ");

    /*BATTERY 1 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    Rte_TransformerError in_transformerError_q;

    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2_a;
    Rte_TransformerError in_transformerError_r;

    in_transformerError_r.errorCode = 0;
    in_transformerError_r.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_r),
        Return(
            RTE_E_OK)));

    TESTSTEP("5", "Setting the frame 4 battery parameters");
    EXPECTED("5", "Under frame 4 assigning Current,SOC,SOH and SOC tolerence values ");

    /*BATTERY 1 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    Rte_TransformerError in_transformerError_u;

    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_a;
    Rte_TransformerError in_transformerError_v;

    in_transformerError_v.errorCode = 0;
    in_transformerError_v.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_v),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_b;
    Rte_TransformerError in_transformerError_w;

    in_transformerError_w.errorCode = 0;
    in_transformerError_w.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_w),
        Return(
            RTE_E_OK)));
    /*BATTERY 4 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_c;
    Rte_TransformerError in_transformerError_x;

    in_transformerError_x.errorCode = 0;
    in_transformerError_x.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_x),
        Return(
            RTE_E_OK)));

    TESTSTEP("6", "Setting the frame 5 battery parameters");
    EXPECTED("6", "Under frame 5 assigning Current,Voltage and Bat_temparature values ");

    /*BATTERY 1 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    Rte_TransformerError in_transformerError_y;

    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    Rte_TransformerError in_transformerError_z;

    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    Rte_TransformerError in_transformerError_aa;

    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    Rte_TransformerError in_transformerError_ba;

    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Setting the frame 6 battery parameters");
    EXPECTED("7", "Under frame 6 assigning Current,Bat_Discnctn,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err values ");

    /*BATTERY 1 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;

    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;

    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));

    TESTSTEP("8", "Setting all the battery frames Updated signal to TRUE");
    EXPECTED("8", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm#_AR2_B$_SG_IBS_LV_Frm#_AR2 signal to TRUE (#(Frames) - 1,2,3,4,5,6 ),($(Battery) - 1,2,3,4");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("9", "Calling the Main function");
    EXPECTED("9", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_OK (0)");

    /*Check for the PowerNet Status OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)

    TESTSTEP("11", "Setting the Main switch status signal to OVERCURRENT FAILURE");
    EXPECTED("11", "Main switch status signal value equal to 5 (enum value of OVERCURRENT FAILURE )");


    /*IPDM Outuput Switch 1 OVERVOLTAGE_FAILURE and checking PowerNet Status NOK*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Stat->value = 5;

    /*Saving the rte write function*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("12", "Calling the Main function");
    EXPECTED("12", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Calling main function*/
    for (int i = 0; i < 15; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("13", "Checking the Powernet status");
    EXPECTED("13", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_NOK (1)");

    /*Check for the PowerNet Status NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_01_OutSw1_OV) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Test case to check Powernet status is OK or NOK");

    TESTSTEP("1", "Setting the PowerNet status to OK by making all the battery parameters values should be under normal oprating range");
    EXPECTED("1", "Assigning the current , voltage , internal resistance , SOH ,SOC , AmpHr etc ... values between normal operating range");

    TESTSTEP("2", "Setting the frame 1 battery parameters");
    EXPECTED("2", "Under frame 1 assigning Current,Voltage and Ampere-Hour values ");

    /*BATTERY 1 FRAME 1*/

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;

    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;

    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Setting the frame 2 battery parameters");
    EXPECTED("3", "Under frame 2 assigning Current and Internal resistance values ");

    
    /*BATTERY 1 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    Rte_TransformerError in_transformerError_m;

    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_a;
    Rte_TransformerError in_transformerError_n;

    in_transformerError_n.errorCode = 0;
    in_transformerError_n.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_n),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_b;
    Rte_TransformerError in_transformerError_o;

    in_transformerError_o.errorCode = 0;
    in_transformerError_o.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_o),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_c;
    Rte_TransformerError in_transformerError_p;

    in_transformerError_p.errorCode = 0;
    in_transformerError_p.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_p),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the frame 3 battery parameters");
    EXPECTED("4", "Under frame 3 assigning Current and Voltage values ");

    /*BATTERY 1 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    Rte_TransformerError in_transformerError_q;

    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2_a;
    Rte_TransformerError in_transformerError_r;

    in_transformerError_r.errorCode = 0;
    in_transformerError_r.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_r),
        Return(
            RTE_E_OK)));


    TESTSTEP("5", "Setting the frame 4 battery parameters");
    EXPECTED("5", "Under frame 4 assigning Current,SOC,SOH and SOC tolerence values ");

    /*BATTERY 1 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    Rte_TransformerError in_transformerError_u;

    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_a;
    Rte_TransformerError in_transformerError_v;

    in_transformerError_v.errorCode = 0;
    in_transformerError_v.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_v),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_b;
    Rte_TransformerError in_transformerError_w;

    in_transformerError_w.errorCode = 0;
    in_transformerError_w.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_w),
        Return(
            RTE_E_OK)));
    /*BATTERY 4 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_c;
    Rte_TransformerError in_transformerError_x;

    in_transformerError_x.errorCode = 0;
    in_transformerError_x.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_x),
        Return(
            RTE_E_OK)));


    TESTSTEP("6", "Setting the frame 5 battery parameters");
    EXPECTED("6", "Under frame 5 assigning Current,Voltage and Bat_temparature values ");

    /*BATTERY 1 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    Rte_TransformerError in_transformerError_y;

    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    Rte_TransformerError in_transformerError_z;

    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    Rte_TransformerError in_transformerError_aa;

    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    Rte_TransformerError in_transformerError_ba;

    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Setting the frame 6 battery parameters");
    EXPECTED("7", "Under frame 6 assigning Current,Bat_Discnctn,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err values ");

    /*BATTERY 1 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;

    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;

    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));

    TESTSTEP("8", "Setting all the battery frames Updated signal to TRUE");
    EXPECTED("8", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm#_AR2_B$_SG_IBS_LV_Frm#_AR2 signal to TRUE (#(Frames) - 1,2,3,4,5,6 ),($(Battery) - 1,2,3,4");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("9", "Calling the Main function");
    EXPECTED("9", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_OK (0)");

    /*Check for the PowerNet Status OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)


    TESTSTEP("11", "Setting the Output1_Switch status signal to OVERVOLTAGE FAILURE");
    EXPECTED("11", "Output1_Switch status signal value equal to 2 (enum value of OVERVOLTAGE FAILURE )"); 

    /*IPDM Outuput Switch 1 OVERVOLTAGE_FAILURE and checking PowerNet Status NOK*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_SwStat->value = 2;

    /*Saving the rte write function*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("12", "Calling the Main function");
    EXPECTED("12", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Calling main function*/
    for (int i = 0; i < 15; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("13", "Checking the Powernet status");
    EXPECTED("13", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_NOK (1)");

    /*Check for the PowerNet Status NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_01_OutSw1_OC) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Test case to check Powernet status is OK or NOK");

    TESTSTEP("1", "Setting the PowerNet status to OK by making all the battery parameters values should be under normal oprating range");
    EXPECTED("1", "Assigning the current , voltage , internal resistance , SOH ,SOC , AmpHr etc ... values between normal operating range");

    TESTSTEP("2", "Setting the frame 1 battery parameters");
    EXPECTED("2", "Under frame 1 assigning Current,Voltage and Ampere-Hour values ");

    /*BATTERY 1 FRAME 1*/

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;

    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;

    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Setting the frame 2 battery parameters");
    EXPECTED("3", "Under frame 2 assigning Current and Internal resistance values ");


    /*BATTERY 1 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    Rte_TransformerError in_transformerError_m;

    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_a;
    Rte_TransformerError in_transformerError_n;

    in_transformerError_n.errorCode = 0;
    in_transformerError_n.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_n),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_b;
    Rte_TransformerError in_transformerError_o;

    in_transformerError_o.errorCode = 0;
    in_transformerError_o.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_o),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_c;
    Rte_TransformerError in_transformerError_p;

    in_transformerError_p.errorCode = 0;
    in_transformerError_p.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_p),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the frame 3 battery parameters");
    EXPECTED("4", "Under frame 3 assigning Current and Voltage values ");

    /*BATTERY 1 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    Rte_TransformerError in_transformerError_q;

    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2_a;
    Rte_TransformerError in_transformerError_r;

    in_transformerError_r.errorCode = 0;
    in_transformerError_r.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_r),
        Return(
            RTE_E_OK)));


    TESTSTEP("5", "Setting the frame 4 battery parameters");
    EXPECTED("5", "Under frame 4 assigning Current,SOC,SOH and SOC tolerence values ");

    /*BATTERY 1 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    Rte_TransformerError in_transformerError_u;

    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_a;
    Rte_TransformerError in_transformerError_v;

    in_transformerError_v.errorCode = 0;
    in_transformerError_v.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_v),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_b;
    Rte_TransformerError in_transformerError_w;

    in_transformerError_w.errorCode = 0;
    in_transformerError_w.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_w),
        Return(
            RTE_E_OK)));
    /*BATTERY 4 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_c;
    Rte_TransformerError in_transformerError_x;

    in_transformerError_x.errorCode = 0;
    in_transformerError_x.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_x),
        Return(
            RTE_E_OK)));


    TESTSTEP("6", "Setting the frame 5 battery parameters");
    EXPECTED("6", "Under frame 5 assigning Current,Voltage and Bat_temparature values ");

    /*BATTERY 1 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    Rte_TransformerError in_transformerError_y;

    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    Rte_TransformerError in_transformerError_z;

    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    Rte_TransformerError in_transformerError_aa;

    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    Rte_TransformerError in_transformerError_ba;

    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Setting the frame 6 battery parameters");
    EXPECTED("7", "Under frame 6 assigning Current,Bat_Discnctn,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err values ");

    /*BATTERY 1 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;

    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;

    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));

    TESTSTEP("8", "Setting all the battery frames Updated signal to TRUE");
    EXPECTED("8", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm#_AR2_B$_SG_IBS_LV_Frm#_AR2 signal to TRUE (#(Frames) - 1,2,3,4,5,6 ),($(Battery) - 1,2,3,4");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("9", "Calling the Main function");
    EXPECTED("9", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_OK (0)");

    /*Check for the PowerNet Status OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)


        TESTSTEP("11", "Setting the Output1_Switch status signal to OVERCURRENT FAILURE");
    EXPECTED("11", "Output1_Switch status signal value equal to 5 (enum value of OVERCURRENT FAILURE )");

    /*IPDM Outuput Switch 1 OVERVOLTAGE_FAILURE and checking PowerNet Status NOK*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output1_SwStat->value = 5;

    /*Saving the rte write function*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("12", "Calling the Main function");
    EXPECTED("12", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Calling main function*/
    for (int i = 0; i < 15; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("13", "Checking the Powernet status");
    EXPECTED("13", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_NOK (1)");

    /*Check for the PowerNet Status NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_01_OutSw2_OV) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Test case to check Powernet status is OK or NOK");

    TESTSTEP("1", "Setting the PowerNet status to OK by making all the battery parameters values should be under normal oprating range");
    EXPECTED("1", "Assigning the current , voltage , internal resistance , SOH ,SOC , AmpHr etc ... values between normal operating range");

    TESTSTEP("2", "Setting the frame 1 battery parameters");
    EXPECTED("2", "Under frame 1 assigning Current,Voltage and Ampere-Hour values ");

    /*BATTERY 1 FRAME 1*/

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;

    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;

    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Setting the frame 2 battery parameters");
    EXPECTED("3", "Under frame 2 assigning Current and Internal resistance values ");


    /*BATTERY 1 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    Rte_TransformerError in_transformerError_m;

    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_a;
    Rte_TransformerError in_transformerError_n;

    in_transformerError_n.errorCode = 0;
    in_transformerError_n.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_n),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_b;
    Rte_TransformerError in_transformerError_o;

    in_transformerError_o.errorCode = 0;
    in_transformerError_o.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_o),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_c;
    Rte_TransformerError in_transformerError_p;

    in_transformerError_p.errorCode = 0;
    in_transformerError_p.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_p),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the frame 3 battery parameters");
    EXPECTED("4", "Under frame 3 assigning Current and Voltage values ");

    /*BATTERY 1 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    Rte_TransformerError in_transformerError_q;

    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2_a;
    Rte_TransformerError in_transformerError_r;

    in_transformerError_r.errorCode = 0;
    in_transformerError_r.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_r),
        Return(
            RTE_E_OK)));


    TESTSTEP("5", "Setting the frame 4 battery parameters");
    EXPECTED("5", "Under frame 4 assigning Current,SOC,SOH and SOC tolerence values ");

    /*BATTERY 1 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    Rte_TransformerError in_transformerError_u;

    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_a;
    Rte_TransformerError in_transformerError_v;

    in_transformerError_v.errorCode = 0;
    in_transformerError_v.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_v),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_b;
    Rte_TransformerError in_transformerError_w;

    in_transformerError_w.errorCode = 0;
    in_transformerError_w.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_w),
        Return(
            RTE_E_OK)));
    /*BATTERY 4 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_c;
    Rte_TransformerError in_transformerError_x;

    in_transformerError_x.errorCode = 0;
    in_transformerError_x.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_x),
        Return(
            RTE_E_OK)));


    TESTSTEP("6", "Setting the frame 5 battery parameters");
    EXPECTED("6", "Under frame 5 assigning Current,Voltage and Bat_temparature values ");

    /*BATTERY 1 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    Rte_TransformerError in_transformerError_y;

    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    Rte_TransformerError in_transformerError_z;

    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    Rte_TransformerError in_transformerError_aa;

    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    Rte_TransformerError in_transformerError_ba;

    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Setting the frame 6 battery parameters");
    EXPECTED("7", "Under frame 6 assigning Current,Bat_Discnctn,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err values ");

    /*BATTERY 1 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;

    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;

    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));

    TESTSTEP("8", "Setting all the battery frames Updated signal to TRUE");
    EXPECTED("8", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm#_AR2_B$_SG_IBS_LV_Frm#_AR2 signal to TRUE (#(Frames) - 1,2,3,4,5,6 ),($(Battery) - 1,2,3,4");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("9", "Calling the Main function");
    EXPECTED("9", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_OK (0)");

    /*Check for the PowerNet Status OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)


        TESTSTEP("11", "Setting the Output2_Switch status signal to OVERVOLTAGE FAILURE");
    EXPECTED("11", "Output2_Switch status signal value equal to 2 (enum value of OVERVOLTAGE FAILURE )");

    /*IPDM Outuput Switch 1 OVERVOLTAGE_FAILURE and checking PowerNet Status NOK*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_SwStat->value = 2;

    /*Saving the rte write function*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("12", "Calling the Main function");
    EXPECTED("12", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Calling main function*/
    for (int i = 0; i < 15; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("13", "Checking the Powernet status");
    EXPECTED("13", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_NOK (1)");

    /*Check for the PowerNet Status NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_01_OutSw2_OC) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Test case to check Powernet status is OK or NOK");

    TESTSTEP("1", "Setting the PowerNet status to OK by making all the battery parameters values should be under normal oprating range");
    EXPECTED("1", "Assigning the current , voltage , internal resistance , SOH ,SOC , AmpHr etc ... values between normal operating range");

    TESTSTEP("2", "Setting the frame 1 battery parameters");
    EXPECTED("2", "Under frame 1 assigning Current,Voltage and Ampere-Hour values ");

    /*BATTERY 1 FRAME 1*/

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;

    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;

    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Setting the frame 2 battery parameters");
    EXPECTED("3", "Under frame 2 assigning Current and Internal resistance values ");


    /*BATTERY 1 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    Rte_TransformerError in_transformerError_m;

    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_a;
    Rte_TransformerError in_transformerError_n;

    in_transformerError_n.errorCode = 0;
    in_transformerError_n.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_n),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_b;
    Rte_TransformerError in_transformerError_o;

    in_transformerError_o.errorCode = 0;
    in_transformerError_o.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_o),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_c;
    Rte_TransformerError in_transformerError_p;

    in_transformerError_p.errorCode = 0;
    in_transformerError_p.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_p),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the frame 3 battery parameters");
    EXPECTED("4", "Under frame 3 assigning Current and Voltage values ");

    /*BATTERY 1 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    Rte_TransformerError in_transformerError_q;

    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2_a;
    Rte_TransformerError in_transformerError_r;

    in_transformerError_r.errorCode = 0;
    in_transformerError_r.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_r),
        Return(
            RTE_E_OK)));


    TESTSTEP("5", "Setting the frame 4 battery parameters");
    EXPECTED("5", "Under frame 4 assigning Current,SOC,SOH and SOC tolerence values ");

    /*BATTERY 1 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    Rte_TransformerError in_transformerError_u;

    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_a;
    Rte_TransformerError in_transformerError_v;

    in_transformerError_v.errorCode = 0;
    in_transformerError_v.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_v),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_b;
    Rte_TransformerError in_transformerError_w;

    in_transformerError_w.errorCode = 0;
    in_transformerError_w.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_w),
        Return(
            RTE_E_OK)));
    /*BATTERY 4 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_c;
    Rte_TransformerError in_transformerError_x;

    in_transformerError_x.errorCode = 0;
    in_transformerError_x.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_x),
        Return(
            RTE_E_OK)));


    TESTSTEP("6", "Setting the frame 5 battery parameters");
    EXPECTED("6", "Under frame 5 assigning Current,Voltage and Bat_temparature values ");

    /*BATTERY 1 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    Rte_TransformerError in_transformerError_y;

    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    Rte_TransformerError in_transformerError_z;

    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    Rte_TransformerError in_transformerError_aa;

    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    Rte_TransformerError in_transformerError_ba;

    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Setting the frame 6 battery parameters");
    EXPECTED("7", "Under frame 6 assigning Current,Bat_Discnctn,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err values ");

    /*BATTERY 1 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;

    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;

    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));

    TESTSTEP("8", "Setting all the battery frames Updated signal to TRUE");
    EXPECTED("8", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm#_AR2_B$_SG_IBS_LV_Frm#_AR2 signal to TRUE (#(Frames) - 1,2,3,4,5,6 ),($(Battery) - 1,2,3,4");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("9", "Calling the Main function");
    EXPECTED("9", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_OK (0)");

    /*Check for the PowerNet Status OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)


    TESTSTEP("11", "Setting the Output2_Switch status signal to OVERCURRENT FAILURE");
    EXPECTED("11", "Output2_Switch status signal value equal to 2 (enum value of OVERCURRENT FAILURE )");

    /*IPDM Outuput Switch 1 OVERVOLTAGE_FAILURE and checking PowerNet Status NOK*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output2_SwStat->value = 5;

    /*Saving the rte write function*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("12", "Calling the Main function");
    EXPECTED("12", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Calling main function*/
    for (int i = 0; i < 15; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("13", "Checking the Powernet status");
    EXPECTED("13", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_NOK (1)");

    /*Check for the PowerNet Status NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_01_OutSw3_OV) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Test case to check Powernet status is OK or NOK");

    TESTSTEP("1", "Setting the PowerNet status to OK by making all the battery parameters values should be under normal oprating range");
    EXPECTED("1", "Assigning the current , voltage , internal resistance , SOH ,SOC , AmpHr etc ... values between normal operating range");

    TESTSTEP("2", "Setting the frame 1 battery parameters");
    EXPECTED("2", "Under frame 1 assigning Current,Voltage and Ampere-Hour values ");

    /*BATTERY 1 FRAME 1*/

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;

    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;

    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Setting the frame 2 battery parameters");
    EXPECTED("3", "Under frame 2 assigning Current and Internal resistance values ");


    /*BATTERY 1 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    Rte_TransformerError in_transformerError_m;

    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_a;
    Rte_TransformerError in_transformerError_n;

    in_transformerError_n.errorCode = 0;
    in_transformerError_n.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_n),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_b;
    Rte_TransformerError in_transformerError_o;

    in_transformerError_o.errorCode = 0;
    in_transformerError_o.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_o),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_c;
    Rte_TransformerError in_transformerError_p;

    in_transformerError_p.errorCode = 0;
    in_transformerError_p.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_p),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the frame 3 battery parameters");
    EXPECTED("4", "Under frame 3 assigning Current and Voltage values ");

    /*BATTERY 1 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    Rte_TransformerError in_transformerError_q;

    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2_a;
    Rte_TransformerError in_transformerError_r;

    in_transformerError_r.errorCode = 0;
    in_transformerError_r.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_r),
        Return(
            RTE_E_OK)));


    TESTSTEP("5", "Setting the frame 4 battery parameters");
    EXPECTED("5", "Under frame 4 assigning Current,SOC,SOH and SOC tolerence values ");

    /*BATTERY 1 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    Rte_TransformerError in_transformerError_u;

    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_a;
    Rte_TransformerError in_transformerError_v;

    in_transformerError_v.errorCode = 0;
    in_transformerError_v.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_v),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_b;
    Rte_TransformerError in_transformerError_w;

    in_transformerError_w.errorCode = 0;
    in_transformerError_w.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_w),
        Return(
            RTE_E_OK)));
    /*BATTERY 4 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_c;
    Rte_TransformerError in_transformerError_x;

    in_transformerError_x.errorCode = 0;
    in_transformerError_x.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_x),
        Return(
            RTE_E_OK)));


    TESTSTEP("6", "Setting the frame 5 battery parameters");
    EXPECTED("6", "Under frame 5 assigning Current,Voltage and Bat_temparature values ");

    /*BATTERY 1 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    Rte_TransformerError in_transformerError_y;

    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    Rte_TransformerError in_transformerError_z;

    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    Rte_TransformerError in_transformerError_aa;

    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    Rte_TransformerError in_transformerError_ba;

    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Setting the frame 6 battery parameters");
    EXPECTED("7", "Under frame 6 assigning Current,Bat_Discnctn,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err values ");

    /*BATTERY 1 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;

    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;

    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));

    TESTSTEP("8", "Setting all the battery frames Updated signal to TRUE");
    EXPECTED("8", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm#_AR2_B$_SG_IBS_LV_Frm#_AR2 signal to TRUE (#(Frames) - 1,2,3,4,5,6 ),($(Battery) - 1,2,3,4");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("9", "Calling the Main function");
    EXPECTED("9", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_OK (0)");

    /*Check for the PowerNet Status OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)


        TESTSTEP("11", "Setting the Output3_Switch status signal to OVERVOLTAGE FAILURE");
    EXPECTED("11", "Output3_Switch status signal value equal to 2 (enum value of OVERVOLTAGE FAILURE )");

    /*IPDM Outuput Switch 1 OVERVOLTAGE_FAILURE and checking PowerNet Status NOK*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_SwStat->value = 2;

    /*Saving the rte write function*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("12", "Calling the Main function");
    EXPECTED("12", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Calling main function*/
    for (int i = 0; i < 15; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("13", "Checking the Powernet status");
    EXPECTED("13", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_NOK (1)");

    /*Check for the PowerNet Status NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_01_OutSw3_OC) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Test case to check Powernet status is OK or NOK");

    TESTSTEP("1", "Setting the PowerNet status to OK by making all the battery parameters values should be under normal oprating range");
    EXPECTED("1", "Assigning the current , voltage , internal resistance , SOH ,SOC , AmpHr etc ... values between normal operating range");

    TESTSTEP("2", "Setting the frame 1 battery parameters");
    EXPECTED("2", "Under frame 1 assigning Current,Voltage and Ampere-Hour values ");

    /*BATTERY 1 FRAME 1*/

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;

    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;

    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Setting the frame 2 battery parameters");
    EXPECTED("3", "Under frame 2 assigning Current and Internal resistance values ");


    /*BATTERY 1 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    Rte_TransformerError in_transformerError_m;

    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_a;
    Rte_TransformerError in_transformerError_n;

    in_transformerError_n.errorCode = 0;
    in_transformerError_n.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_n),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_b;
    Rte_TransformerError in_transformerError_o;

    in_transformerError_o.errorCode = 0;
    in_transformerError_o.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_o),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_c;
    Rte_TransformerError in_transformerError_p;

    in_transformerError_p.errorCode = 0;
    in_transformerError_p.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_p),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the frame 3 battery parameters");
    EXPECTED("4", "Under frame 3 assigning Current and Voltage values ");

    /*BATTERY 1 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    Rte_TransformerError in_transformerError_q;

    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2_a;
    Rte_TransformerError in_transformerError_r;

    in_transformerError_r.errorCode = 0;
    in_transformerError_r.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_r),
        Return(
            RTE_E_OK)));


    TESTSTEP("5", "Setting the frame 4 battery parameters");
    EXPECTED("5", "Under frame 4 assigning Current,SOC,SOH and SOC tolerence values ");

    /*BATTERY 1 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    Rte_TransformerError in_transformerError_u;

    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_a;
    Rte_TransformerError in_transformerError_v;

    in_transformerError_v.errorCode = 0;
    in_transformerError_v.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_v),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_b;
    Rte_TransformerError in_transformerError_w;

    in_transformerError_w.errorCode = 0;
    in_transformerError_w.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_w),
        Return(
            RTE_E_OK)));
    /*BATTERY 4 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_c;
    Rte_TransformerError in_transformerError_x;

    in_transformerError_x.errorCode = 0;
    in_transformerError_x.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_x),
        Return(
            RTE_E_OK)));


    TESTSTEP("6", "Setting the frame 5 battery parameters");
    EXPECTED("6", "Under frame 5 assigning Current,Voltage and Bat_temparature values ");

    /*BATTERY 1 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    Rte_TransformerError in_transformerError_y;

    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    Rte_TransformerError in_transformerError_z;

    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    Rte_TransformerError in_transformerError_aa;

    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    Rte_TransformerError in_transformerError_ba;

    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Setting the frame 6 battery parameters");
    EXPECTED("7", "Under frame 6 assigning Current,Bat_Discnctn,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err values ");

    /*BATTERY 1 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;

    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;

    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));

    TESTSTEP("8", "Setting all the battery frames Updated signal to TRUE");
    EXPECTED("8", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm#_AR2_B$_SG_IBS_LV_Frm#_AR2 signal to TRUE (#(Frames) - 1,2,3,4,5,6 ),($(Battery) - 1,2,3,4");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("9", "Calling the Main function");
    EXPECTED("9", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_OK (0)");

    /*Check for the PowerNet Status OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)


        TESTSTEP("11", "Setting the Output3_Switch status signal to OVERCURRENT FAILURE");
    EXPECTED("11", "Output3_Switch status signal value equal to 2 (enum value of OVERCURRENT FAILURE )");

    /*IPDM Outuput Switch 1 OVERVOLTAGE_FAILURE and checking PowerNet Status NOK*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output3_SwStat->value = 5;

    /*Saving the rte write function*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("12", "Calling the Main function");
    EXPECTED("12", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Calling main function*/
    for (int i = 0; i < 15; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("13", "Checking the Powernet status");
    EXPECTED("13", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_NOK (1)");

    /*Check for the PowerNet Status NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_01_OutSw4_OV) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Test case to check Powernet status is OK or NOK");

    TESTSTEP("1", "Setting the PowerNet status to OK by making all the battery parameters values should be under normal oprating range");
    EXPECTED("1", "Assigning the current , voltage , internal resistance , SOH ,SOC , AmpHr etc ... values between normal operating range");

    TESTSTEP("2", "Setting the frame 1 battery parameters");
    EXPECTED("2", "Under frame 1 assigning Current,Voltage and Ampere-Hour values ");

    /*BATTERY 1 FRAME 1*/

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;

    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;

    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Setting the frame 2 battery parameters");
    EXPECTED("3", "Under frame 2 assigning Current and Internal resistance values ");


    /*BATTERY 1 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    Rte_TransformerError in_transformerError_m;

    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_a;
    Rte_TransformerError in_transformerError_n;

    in_transformerError_n.errorCode = 0;
    in_transformerError_n.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_n),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_b;
    Rte_TransformerError in_transformerError_o;

    in_transformerError_o.errorCode = 0;
    in_transformerError_o.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_o),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_c;
    Rte_TransformerError in_transformerError_p;

    in_transformerError_p.errorCode = 0;
    in_transformerError_p.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_p),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the frame 3 battery parameters");
    EXPECTED("4", "Under frame 3 assigning Current and Voltage values ");

    /*BATTERY 1 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    Rte_TransformerError in_transformerError_q;

    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2_a;
    Rte_TransformerError in_transformerError_r;

    in_transformerError_r.errorCode = 0;
    in_transformerError_r.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_r),
        Return(
            RTE_E_OK)));


    TESTSTEP("5", "Setting the frame 4 battery parameters");
    EXPECTED("5", "Under frame 4 assigning Current,SOC,SOH and SOC tolerence values ");

    /*BATTERY 1 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    Rte_TransformerError in_transformerError_u;

    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_a;
    Rte_TransformerError in_transformerError_v;

    in_transformerError_v.errorCode = 0;
    in_transformerError_v.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_v),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_b;
    Rte_TransformerError in_transformerError_w;

    in_transformerError_w.errorCode = 0;
    in_transformerError_w.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_w),
        Return(
            RTE_E_OK)));
    /*BATTERY 4 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_c;
    Rte_TransformerError in_transformerError_x;

    in_transformerError_x.errorCode = 0;
    in_transformerError_x.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_x),
        Return(
            RTE_E_OK)));


    TESTSTEP("6", "Setting the frame 5 battery parameters");
    EXPECTED("6", "Under frame 5 assigning Current,Voltage and Bat_temparature values ");

    /*BATTERY 1 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    Rte_TransformerError in_transformerError_y;

    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    Rte_TransformerError in_transformerError_z;

    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    Rte_TransformerError in_transformerError_aa;

    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    Rte_TransformerError in_transformerError_ba;

    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Setting the frame 6 battery parameters");
    EXPECTED("7", "Under frame 6 assigning Current,Bat_Discnctn,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err values ");

    /*BATTERY 1 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;

    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;

    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));

    TESTSTEP("8", "Setting all the battery frames Updated signal to TRUE");
    EXPECTED("8", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm#_AR2_B$_SG_IBS_LV_Frm#_AR2 signal to TRUE (#(Frames) - 1,2,3,4,5,6 ),($(Battery) - 1,2,3,4");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("9", "Calling the Main function");
    EXPECTED("9", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_OK (0)");

    /*Check for the PowerNet Status OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)


        TESTSTEP("11", "Setting the Output4_Switch status signal to OVERVOLTAGE FAILURE");
    EXPECTED("11", "Output4_Switch status signal value equal to 2 (enum value of OVERVOLTAGE FAILURE )");

    /*IPDM Outuput Switch 1 OVERVOLTAGE_FAILURE and checking PowerNet Status NOK*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_SwStat->value = 2;

    /*Saving the rte write function*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("12", "Calling the Main function");
    EXPECTED("12", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Calling main function*/
    for (int i = 0; i < 15; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("13", "Checking the Powernet status");
    EXPECTED("13", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_NOK (1)");

    /*Check for the PowerNet Status NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_01_OutSw4_OC) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Test case to check Powernet status is OK or NOK");

    TESTSTEP("1", "Setting the PowerNet status to OK by making all the battery parameters values should be under normal oprating range");
    EXPECTED("1", "Assigning the current , voltage , internal resistance , SOH ,SOC , AmpHr etc ... values between normal operating range");

    TESTSTEP("2", "Setting the frame 1 battery parameters");
    EXPECTED("2", "Under frame 1 assigning Current,Voltage and Ampere-Hour values ");

    /*BATTERY 1 FRAME 1*/

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;

    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;

    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Setting the frame 2 battery parameters");
    EXPECTED("3", "Under frame 2 assigning Current and Internal resistance values ");


    /*BATTERY 1 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    Rte_TransformerError in_transformerError_m;

    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_a;
    Rte_TransformerError in_transformerError_n;

    in_transformerError_n.errorCode = 0;
    in_transformerError_n.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_n),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_b;
    Rte_TransformerError in_transformerError_o;

    in_transformerError_o.errorCode = 0;
    in_transformerError_o.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_o),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_c;
    Rte_TransformerError in_transformerError_p;

    in_transformerError_p.errorCode = 0;
    in_transformerError_p.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_p),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the frame 3 battery parameters");
    EXPECTED("4", "Under frame 3 assigning Current and Voltage values ");

    /*BATTERY 1 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    Rte_TransformerError in_transformerError_q;

    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2_a;
    Rte_TransformerError in_transformerError_r;

    in_transformerError_r.errorCode = 0;
    in_transformerError_r.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_r),
        Return(
            RTE_E_OK)));


    TESTSTEP("5", "Setting the frame 4 battery parameters");
    EXPECTED("5", "Under frame 4 assigning Current,SOC,SOH and SOC tolerence values ");

    /*BATTERY 1 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    Rte_TransformerError in_transformerError_u;

    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_a;
    Rte_TransformerError in_transformerError_v;

    in_transformerError_v.errorCode = 0;
    in_transformerError_v.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_v),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_b;
    Rte_TransformerError in_transformerError_w;

    in_transformerError_w.errorCode = 0;
    in_transformerError_w.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_w),
        Return(
            RTE_E_OK)));
    /*BATTERY 4 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_c;
    Rte_TransformerError in_transformerError_x;

    in_transformerError_x.errorCode = 0;
    in_transformerError_x.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_x),
        Return(
            RTE_E_OK)));


    TESTSTEP("6", "Setting the frame 5 battery parameters");
    EXPECTED("6", "Under frame 5 assigning Current,Voltage and Bat_temparature values ");

    /*BATTERY 1 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    Rte_TransformerError in_transformerError_y;

    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    Rte_TransformerError in_transformerError_z;

    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    Rte_TransformerError in_transformerError_aa;

    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    Rte_TransformerError in_transformerError_ba;

    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Setting the frame 6 battery parameters");
    EXPECTED("7", "Under frame 6 assigning Current,Bat_Discnctn,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err values ");

    /*BATTERY 1 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;

    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;

    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));

    TESTSTEP("8", "Setting all the battery frames Updated signal to TRUE");
    EXPECTED("8", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm#_AR2_B$_SG_IBS_LV_Frm#_AR2 signal to TRUE (#(Frames) - 1,2,3,4,5,6 ),($(Battery) - 1,2,3,4");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("9", "Calling the Main function");
    EXPECTED("9", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_OK (0)");

    /*Check for the PowerNet Status OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)


        TESTSTEP("11", "Setting the Output4_Switch status signal to OVERCURRENT FAILURE");
    EXPECTED("11", "Output4_Switch status signal value equal to 5 (enum value of OVERCURRENT FAILURE )");

    /*IPDM Outuput Switch 1 OVERVOLTAGE_FAILURE and checking PowerNet Status NOK*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output4_SwStat->value = 5;

    /*Saving the rte write function*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("12", "Calling the Main function");
    EXPECTED("12", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Calling main function*/
    for (int i = 0; i < 15; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("13", "Checking the Powernet status");
    EXPECTED("13", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_NOK (1)");

    /*Check for the PowerNet Status NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_01_OutSw5_OV) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Test case to check Powernet status is OK or NOK");

    TESTSTEP("1", "Setting the PowerNet status to OK by making all the battery parameters values should be under normal oprating range");
    EXPECTED("1", "Assigning the current , voltage , internal resistance , SOH ,SOC , AmpHr etc ... values between normal operating range");

    TESTSTEP("2", "Setting the frame 1 battery parameters");
    EXPECTED("2", "Under frame 1 assigning Current,Voltage and Ampere-Hour values ");

    /*BATTERY 1 FRAME 1*/

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;

    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;

    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Setting the frame 2 battery parameters");
    EXPECTED("3", "Under frame 2 assigning Current and Internal resistance values ");


    /*BATTERY 1 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    Rte_TransformerError in_transformerError_m;

    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_a;
    Rte_TransformerError in_transformerError_n;

    in_transformerError_n.errorCode = 0;
    in_transformerError_n.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_n),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_b;
    Rte_TransformerError in_transformerError_o;

    in_transformerError_o.errorCode = 0;
    in_transformerError_o.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_o),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_c;
    Rte_TransformerError in_transformerError_p;

    in_transformerError_p.errorCode = 0;
    in_transformerError_p.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_p),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the frame 3 battery parameters");
    EXPECTED("4", "Under frame 3 assigning Current and Voltage values ");

    /*BATTERY 1 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    Rte_TransformerError in_transformerError_q;

    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2_a;
    Rte_TransformerError in_transformerError_r;

    in_transformerError_r.errorCode = 0;
    in_transformerError_r.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_r),
        Return(
            RTE_E_OK)));


    TESTSTEP("5", "Setting the frame 4 battery parameters");
    EXPECTED("5", "Under frame 4 assigning Current,SOC,SOH and SOC tolerence values ");

    /*BATTERY 1 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    Rte_TransformerError in_transformerError_u;

    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_a;
    Rte_TransformerError in_transformerError_v;

    in_transformerError_v.errorCode = 0;
    in_transformerError_v.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_v),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_b;
    Rte_TransformerError in_transformerError_w;

    in_transformerError_w.errorCode = 0;
    in_transformerError_w.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_w),
        Return(
            RTE_E_OK)));
    /*BATTERY 4 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_c;
    Rte_TransformerError in_transformerError_x;

    in_transformerError_x.errorCode = 0;
    in_transformerError_x.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_x),
        Return(
            RTE_E_OK)));


    TESTSTEP("6", "Setting the frame 5 battery parameters");
    EXPECTED("6", "Under frame 5 assigning Current,Voltage and Bat_temparature values ");

    /*BATTERY 1 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    Rte_TransformerError in_transformerError_y;

    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    Rte_TransformerError in_transformerError_z;

    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    Rte_TransformerError in_transformerError_aa;

    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    Rte_TransformerError in_transformerError_ba;

    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Setting the frame 6 battery parameters");
    EXPECTED("7", "Under frame 6 assigning Current,Bat_Discnctn,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err values ");

    /*BATTERY 1 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;

    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;

    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));

    TESTSTEP("8", "Setting all the battery frames Updated signal to TRUE");
    EXPECTED("8", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm#_AR2_B$_SG_IBS_LV_Frm#_AR2 signal to TRUE (#(Frames) - 1,2,3,4,5,6 ),($(Battery) - 1,2,3,4");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("9", "Calling the Main function");
    EXPECTED("9", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_OK (0)");

    /*Check for the PowerNet Status OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)


        TESTSTEP("11", "Setting the Output5_Switch status signal to OVERVOLTAGE FAILURE");
    EXPECTED("11", "Output5_Switch status signal value equal to 5 (enum value of OVERVOLTAGE FAILURE )");

    /*IPDM Outuput Switch 1 OVERVOLTAGE_FAILURE and checking PowerNet Status NOK*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_SwStat->value = 2;

    /*Saving the rte write function*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("12", "Calling the Main function");
    EXPECTED("12", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Calling main function*/
    for (int i = 0; i < 15; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("13", "Checking the Powernet status");
    EXPECTED("13", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_NOK (1)");

    /*Check for the PowerNet Status NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_01_OutSw5_OC) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Test case to check Powernet status is OK or NOK");

    TESTSTEP("1", "Setting the PowerNet status to OK by making all the battery parameters values should be under normal oprating range");
    EXPECTED("1", "Assigning the current , voltage , internal resistance , SOH ,SOC , AmpHr etc ... values between normal operating range");

    TESTSTEP("2", "Setting the frame 1 battery parameters");
    EXPECTED("2", "Under frame 1 assigning Current,Voltage and Ampere-Hour values ");

    /*BATTERY 1 FRAME 1*/

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;

    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_b.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 1*/
    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;

    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm1_AR2_c.Bat_Ah_Cntr_ASIL = 103;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Setting the frame 2 battery parameters");
    EXPECTED("3", "Under frame 2 assigning Current and Internal resistance values ");


    /*BATTERY 1 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    Rte_TransformerError in_transformerError_m;

    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_a;
    Rte_TransformerError in_transformerError_n;

    in_transformerError_n.errorCode = 0;
    in_transformerError_n.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_a.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_n),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_b;
    Rte_TransformerError in_transformerError_o;

    in_transformerError_o.errorCode = 0;
    in_transformerError_o.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_b.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_o),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 2*/

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2_c;
    Rte_TransformerError in_transformerError_p;

    in_transformerError_p.errorCode = 0;
    in_transformerError_p.transformerClass = 0;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm2_AR2_c.Bat_Int_Resist_Cval_ASIL = 5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_p),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the frame 3 battery parameters");
    EXPECTED("4", "Under frame 3 assigning Current and Voltage values ");

    /*BATTERY 1 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    Rte_TransformerError in_transformerError_q;

    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 3*/

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2_a;
    Rte_TransformerError in_transformerError_r;

    in_transformerError_r.errorCode = 0;
    in_transformerError_r.transformerClass = 0;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm3_AR2_a.Bat_Volt_Cval_ASIL = 13;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_r),
        Return(
            RTE_E_OK)));


    TESTSTEP("5", "Setting the frame 4 battery parameters");
    EXPECTED("5", "Under frame 4 assigning Current,SOC,SOH and SOC tolerence values ");

    /*BATTERY 1 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    Rte_TransformerError in_transformerError_u;

    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_a;
    Rte_TransformerError in_transformerError_v;

    in_transformerError_v.errorCode = 0;
    in_transformerError_v.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_a.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_v),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_b;
    Rte_TransformerError in_transformerError_w;

    in_transformerError_w.errorCode = 0;
    in_transformerError_w.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_b.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_w),
        Return(
            RTE_E_OK)));
    /*BATTERY 4 FRAME 4*/

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2_c;
    Rte_TransformerError in_transformerError_x;

    in_transformerError_x.errorCode = 0;
    in_transformerError_x.transformerClass = 0;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOH_Cval = 90;
    in_SG_IBS_LV_Frm4_AR2_c.Bat_SOC_Tlrnc = 2;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_x),
        Return(
            RTE_E_OK)));


    TESTSTEP("6", "Setting the frame 5 battery parameters");
    EXPECTED("6", "Under frame 5 assigning Current,Voltage and Bat_temparature values ");

    /*BATTERY 1 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    Rte_TransformerError in_transformerError_y;

    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    Rte_TransformerError in_transformerError_z;

    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    Rte_TransformerError in_transformerError_aa;

    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*BATTERY 4 FRAME 5*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    Rte_TransformerError in_transformerError_ba;

    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Volt_Cval_ASIL = 13;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Setting the frame 6 battery parameters");
    EXPECTED("7", "Under frame 6 assigning Current,Bat_Discnctn,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err values ");

    /*BATTERY 1 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));


    /*BATTERY 2 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;

    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    /*BATTERY 3 FRAME 6*/

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;

    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Curr_Cval_ASIL = 25000;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));

    TESTSTEP("8", "Setting all the battery frames Updated signal to TRUE");
    EXPECTED("8", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm#_AR2_B$_SG_IBS_LV_Frm#_AR2 signal to TRUE (#(Frames) - 1,2,3,4,5,6 ),($(Battery) - 1,2,3,4");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("9", "Calling the Main function");
    EXPECTED("9", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");


    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_OK (0)");

    /*Check for the PowerNet Status OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)


        TESTSTEP("11", "Setting the Output5_Switch status signal to OVERCURRENT FAILURE");
    EXPECTED("11", "Output5_Switch status signal value equal to 5 (enum value of OVERCURRENT FAILURE )");

    /*IPDM Outuput Switch 1 OVERVOLTAGE_FAILURE and checking PowerNet Status NOK*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_Output5_SwStat->value = 5;

    /*Saving the rte write function*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("12", "Calling the Main function");
    EXPECTED("12", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Calling main function*/
    for (int i = 0; i < 15; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("13", "Checking the Powernet status");
    EXPECTED("13", "The signal aLVA_PowerNet_Status_IPDA should be equal to E_C02_OK_NOTOK_ERR_NOK (1)");

    /*Check for the PowerNet Status NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)
}


TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_IPDM_Output_Monitoring_Reactions_02) {

    /*calling the initial instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Checking the deviation between the voltages of IPDM main switch and DCDC low side , if the difference is 1 volt between those two voltage for more than \
five seconds then software shall set DTC_IPDM_DC_LS_Volt_Mismatch to Active");
    REALIZES("58293:TC_iPDMC_FuSa_SWR_IPDM_Output_Monitoring_Reactions_02");

    TESTSTEP("1", "Enabling the frame 2 sequence of battery pack 1 to make the DCDC command is not equal to BUCK RIPPLE");
    EXPECTED("1", "The signals SQC_SG_IBS_LV_Frm2_AR2 = 1,Bat_Int_Resist_TSL_Calc_ASIL = 0");

    /*Enabling the frame 2 sequence of battery pack 1*/
    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    in_SG_IBS_LV_Frm2_AR2.SQC_SG_IBS_LV_Frm2_AR2 = 1;
    in_SG_IBS_LV_Frm2_AR2.Bat_Int_Resist_TSL_Calc_ASIL = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        Return(
            RTE_E_OK)));

    TESTSTEP("2", "To set the system mode command to RUNNING VERIFIED");
    EXPECTED("2", "Set the signals aAlt_ActlOperMod_Stat and aAlt_Edrv_ActlRun_Stat to E_C04_PRERUN_RUN_STDBY_SHUT_RUN and E_C04_IDLE_VOLTAGE_VOLTAGE_WITHOUT_BATTERY respectivly");

    /*Setting the alternator edrive sataus and operation mode*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02->value.aAlt_ActlOperMod_Stat = 8;
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02->value.aAlt_Edrv_ActlRun_Stat = 2;


    TESTSTEP("3", "To make the aDCA_Cmd_IPDA equal to BUCK");
    EXPECTED("3", "Setting the signal aDCC_DXN_Status = 0");
    /*Setting DCA Direction to 0*/
    REC_SG_DCA_ATG02_AR2_5l78ok150rfj1o1ym2g6wr553 in_SG_DCA_ATG02_AR2;
    in_SG_DCA_ATG02_AR2.aDCA_DXN_Status = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_DCA_ATG02_AR2_SG_DCA_ATG02_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_DCA_ATG02_AR2),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Setting the ignition switch status to enable faultEnableAfterStatupDelay");
    EXPECTED("4", "The value of the signal IgnSw_Stat_E2E_SAM equal to 2");

    /*Set the ignition switch status*/
    REC_SG_IgnSw_E2E_SAM_Stat_Pkt_ednqef5xiht6lvtipf4ne4e5c in_SG_IgnSw_E2E_SAM_Stat_Pkt;
    in_SG_IgnSw_E2E_SAM_Stat_Pkt.IgnSw_Stat_E2E_SAM = 2;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IgnSw_E2E_SAM_Stat_Pkt_SG_IgnSw_E2E_SAM_Stat_Pkt).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IgnSw_E2E_SAM_Stat_Pkt),
        Return(
            RTE_E_OK)));

    TESTSTEP("5", "Setting the IPDMA main switch voltage and DCDC low side voltage");
    EXPECTED("5", "Set the signals aDCA_LS_Volt_Cval = 14 and IPDM_Switch_Stat_IPDM_MainSw_Voltage = 12");

    /*Setting low side DCA voltage*/
    REC_SG_DCA_ATG05_AR2_cp6wyrd9cg7ec7y2w3khz1gyt in_SG_DCA_ATG05_AR2;
    in_SG_DCA_ATG05_AR2.aDCA_LS_Volt_Cval = 14;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_DCA_ATG05_AR2_SG_DCA_ATG05_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_DCA_ATG05_AR2),
        Return(
            RTE_E_OK)));

    /*Setting up the ipdm main switch voltage*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Voltage->value = 12;

    /*Enabling DTC_IPDM_DC_LS_Mismatch_ESt Eventstatus */


    /*Calling main function*/
    IPDM_A_MAIN_SWC_main();

    /*Check for DTC signal*/
    TESTSTEP("6", "Checking the DTC status");
    EXPECTED("6", "The DTC signal DTC_IPDM_DC_LS_Volt_Mismatch should be equal to 1(ACTIVE)");


}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Alternator_Monitoring_Reactions_03) {

    /*calling the initial instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the alternator status equal to GEN_PROTEC or any alternator protection flags set to true then aLVA_powernet_status should equal to NOK");
    REALIZES("54163:TC_iPDMA_FuSa_SWR_Alternator_Monitoring_Reactions_03");

    TESTSTEP("1", "Setting the Alternator status to GEN_PROECT(2)");
    EXPECTED("1", "The signal aAlt_Stat equal to enum value 2");

    /*Set the alternator status to 2*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02->value.aAlt_Stat = 2;

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r  test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    IPDM_A_MAIN_SWC_main();

    TESTSTEP("2", "Checking the Powernet Status");
    EXPECTED("2", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

        TESTSTEP("3", "Setting the Alternator status otherthan GEN_PROECT(2)");
    EXPECTED("3", "The signal aAlt_Stat equal to enum value 1");

    /*Set the alternator status to 1*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG02_SG_ALT_ATG02->value.aAlt_Stat = 1;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("4", "Checking the Powernet Status");
    EXPECTED("4", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 0)

        /*****************Start of Alternator Rotr Position Sensor Falut **************************/

        TESTSTEP("5", "Setting the Alternator rotor postion sensor fault");
    EXPECTED("5", "The signal aAlt_RotorPosSnsrFlt equal to enum value 1");

    /*Setting up the alternator rotor postion sensor fault*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_RotorPosSnsrFlt = 1;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("6", "Checking the Powernet Status");
    EXPECTED("6", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

        TESTSTEP("7", "Setting the Alternator rotor postion sensor fault back to 0");
    EXPECTED("7", "The signal aAlt_RotorPosSnsrFlt equal to enum value 0");

    /*Setting up the alternator rotor postion sensor fault back to 0*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_RotorPosSnsrFlt = 0;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("8", "Checking the Powernet Status");
    EXPECTED("8", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 0)

        /*****************End of Alternator Rotr Position Sensor Falutl **************************/


        /*****************End of Alternator Phase Current Sensor Falut **************************/

        TESTSTEP("9", "Setting the Alternator phase current sensor fault");
    EXPECTED("9", "The signal aAlt_PhasCurrSnsrFlt equal to enum value 1");

    /*setting up the phase current sensor fault*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_PhasCurrSnsrFlt = 1;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("10", "Checking the Powernet Status");
    EXPECTED("10", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

        TESTSTEP("11", "Setting the Alternator phase current sensor fault back to 0");
    EXPECTED("11", "The signal aAlt_PhasCurrSnsrFlt equal to enum value 0");

    /*Setting up the alternator rotor postion sensor fault back to 0*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_PhasCurrSnsrFlt = 0;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("12", "Checking the Powernet Status");
    EXPECTED("12", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 0)

        /*****************End of Alternator Phase Current Sensor Falut **************************/

        /*****************Start of Alternator Phase Air Temperature Falut **************************/

        TESTSTEP("13", "Setting the Alternator temperature sensor fault");
    EXPECTED("13", "The signal aAlt_PhaseAirTempSnsrFlt equal to enum value 1");

    /*setting up the alternator temperature sensor fault*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_PhaseAirTempSnsrFlt = 1;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("14", "Checking the Powernet Status");
    EXPECTED("14", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

        TESTSTEP("15", "Setting the Alternator temperature sensor fault back to 0");
    EXPECTED("15", "The signal aAlt_PhaseAirTempSnsrFlt equal to enum value 0");

    /*Setting up the alternator rotor postion sensor fault back to 0*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_PhaseAirTempSnsrFlt = 0;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("16", "Checking the Powernet Status");
    EXPECTED("16", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 0)

        /*****************End of Alternator Phase Air Temperature Falut **************************/


         /*****************Start of Alternator Supply Voltage Sensor Falut **************************/

        TESTSTEP("17", "Setting the Alternator supply voltage sensor fault");
    EXPECTED("17", "The signal aAlt_SupplyVoltSnsrFlt equal to enum value 1");

    /*setting alternator supply voltage sensor fault*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_SupplyVoltSnsrFlt = 1;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("18", "Checking the Powernet Status");
    EXPECTED("18", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

        TESTSTEP("19", "Setting the Alternator supply voltage sensor fault back to 0");
    EXPECTED("19", "The signal aAlt_SupplyVoltSnsrFlt equal to enum value 0");

    /*Setting up the alternator rotor postion sensor fault back to 0*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_SupplyVoltSnsrFlt = 0;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("20", "Checking the Powernet Status");
    EXPECTED("20", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 0)

        /*****************End of Alternator Supply Voltage Sensor Falut **************************/

        /*****************Start of Alternator Load Dump Falut **************************/

        TESTSTEP("21", "Setting the Alternator load dump fault");
    EXPECTED("21", "The signal aAlt_LoadDumpFlt equal to enum value 1");

    /*setting up the alternator load dump fault*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_LoadDumpFlt = 1;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("22", "Checking the Powernet Status");
    EXPECTED("22", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

        TESTSTEP("23", "Setting the Alternator load dump fault back to 0");
    EXPECTED("23", "The signal aAlt_LoadDumpFlt equal to enum value 0");

    /*Setting up the alternator rotor postion sensor fault back to 0*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_LoadDumpFlt = 0;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("24", "Checking the Powernet Status");
    EXPECTED("24", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 0)

        /*****************End of Alternator Load Dump Falut **************************/

        /*****************Start of Alternator Bridge Drive Fault **************************/

        TESTSTEP("25", "Setting the Alternator Bridge Drive Fault");
    EXPECTED("25", "The signal aAlt_BridgDriverFlt equal to enum value 1");

    /*setting up the alternator bridge drive fault*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_BridgDriverFlt = 1;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("26", "Checking the Powernet Status");
    EXPECTED("26", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

        TESTSTEP("27", "Setting the Alternator Bridge Drive Fault back to 0");
    EXPECTED("27", "The signal aAlt_BridgDriverFlt equal to enum value 0");

    /*Setting up the alternator rotor postion sensor fault back to 0*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_BridgDriverFlt = 0;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("28", "Checking the Powernet Status");
    EXPECTED("28", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 0)

        /*****************End of Alternator Bridge Drive Fault **************************/

        /*****************End of Alternator Memory Fault **************************/

        TESTSTEP("29", "Setting the Alternator Memory Fault");
    EXPECTED("29", "The signal aAlt_MemFlt equal to enum value 1");

    /*setting up the alternator alternator memory fault*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_MemFlt = 1;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("30", "Checking the Powernet Status");
    EXPECTED("30", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

        TESTSTEP("31", "Setting the Alternator Memory Fault back to 0");
    EXPECTED("31", "The signal aAlt_MemFlt equal to enum value 0");

    /*Setting up the alternator rotor postion sensor fault back to 0*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_MemFlt = 0;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("32", "Checking the Powernet Status");
    EXPECTED("32", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 0)

        /*****************End of Alternator Memory Fault **************************/

        /*****************Start of Alternator Software Fault **************************/

        TESTSTEP("33", "Setting the Alternator software fault");
    EXPECTED("33", "The signal aAlt_SoftwareFlt equal to enum value 1");

    /*setting up the alternator software fault*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_SoftwareFlt = 1;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("34", "Checking the Powernet Status");
    EXPECTED("34", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

        TESTSTEP("35", "Setting the Alternator software fault back to 0");
    EXPECTED("35", "The signal aAlt_SoftwareFlt equal to enum value 0");

    /*Setting up the alternator rotor postion sensor fault back to 0*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_MemFlt = 0;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("36", "Checking the Powernet Status");
    EXPECTED("36", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 0)

        /*****************End of Alternator Software Fault **************************/

        /*****************Start of Alternator Safety Fault **************************/

        TESTSTEP("37", "Setting the Alternator safety fault");
    EXPECTED("37", "The signal aAlt_SafetyFlt equal to enum value 1");

    /*setting up the alternator safety fault*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_SafetyFlt = 1;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("38", "Checking the Powernet Status");
    EXPECTED("38", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

        TESTSTEP("39", "Setting the Alternator safety fault back to 0");
    EXPECTED("39", "The signal aAlt_SafetyFlt equal to enum value 0");

    /*Setting up the alternator rotor postion sensor fault back to 0*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_SafetyFlt = 0;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("40", "Checking the Powernet Status");
    EXPECTED("40", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 0)

        /*****************End of Alternator Safety Fault **************************/


        /*****************Start of Alternator System Fault **************************/

        TESTSTEP("41", "Setting the Alternator system fault");
    EXPECTED("41", "The signal aAlt_SysFlt equal to enum value 1");

    /*setting up the alternator system fault*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_SysFlt = 1;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("42", "Checking the Powernet Status");
    EXPECTED("42", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

        TESTSTEP("43", "Setting the Alternator system fault back to 0");
    EXPECTED("43", "The signal aAlt_SysFlt equal to enum value 0");

    /*Setting up the alternator rotor postion sensor fault back to 0*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_SysFlt = 0;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("44", "Checking the Powernet Status");
    EXPECTED("44", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 0)

        /*****************End of Alternator System Fault **************************/

        /*****************Start of Alternator communication loss Fault **************************/

        TESTSTEP("45", "Setting the Alternator communication loss fault");
    EXPECTED("45", "The signal aAlt_CommLossFlt equal to enum value 1");

    /*setting up the alternator communication loss fault*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_CommLossFlt = 1;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("46", "Checking the Powernet Status");
    EXPECTED("46", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

        TESTSTEP("47", "Setting the Alternator communication loss fault back to 0");
    EXPECTED("47", "The signal aAlt_CommLossFlt equal to enum value 0");

    /*Setting up the alternator rotor postion sensor fault back to 0*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG04_SG_ALT_ATG04->value.aAlt_CommLossFlt = 0;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("48", "Checking the Powernet Status");
    EXPECTED("48", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 0)

        /*****************End of Alternator communication loss Fault **************************/


}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Alternator_Monitoring_Reactions_01) {

    /*calling the initial instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Checking the deviation between the voltages of Alternator output and DCDC high side , if the difference is 6 volt between those two voltage for more than \
five seconds then software shall set DTC_Alt_DC_HS_Volt_mismatch to Active and set the affected aLVA_PowerNet_Status to NOT OK");
    REALIZES("53930:TC_iPDM_FuSa_SWR_Alternator_Monitoring_Reactions_01");

    TESTSTEP("1", "To test the DTC mismatch faults we should enable some blocks (WHD_Enable, faultEnableAfterStatupDelay)");
    EXPECTED("1", "Setting the ignition switch status not equal to OFF to enable above mentioned blocks");

    /*Set the ignition switch status to ON along with error code and Transformer Class to value 0*/
    REC_SG_IgnSw_E2E_SAM_Stat_Pkt_ednqef5xiht6lvtipf4ne4e5c in_SG_IgnSw_E2E_SAM_Stat_Pkt;
    Rte_TransformerError in_transformerError_oa;
    in_SG_IgnSw_E2E_SAM_Stat_Pkt.IgnSw_Stat_E2E_SAM = 2;
    in_transformerError_oa.errorCode = 0;
    in_transformerError_oa.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IgnSw_E2E_SAM_Stat_Pkt_SG_IgnSw_E2E_SAM_Stat_Pkt).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IgnSw_E2E_SAM_Stat_Pkt),
        SetArgPointee
        < 1 >
        (
            in_transformerError_oa),
        Return(
            RTE_E_OK)));

    TESTSTEP("2", "Setting the voltage values of Alternator output and DCDC high side");
    EXPECTED("2", "The signals aAlt_Volt_Cval and aDCA_HS_Volt_Cval equal to non zero values");

    /*Alternator voltage*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG01_SG_ALT_ATG01->value.aAlt_Volt_Cval = 1000;

    /*DCA High side voltage*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_DCA_ATG01_SG_DCA_ATG01->value.aDCA_HS_Volt_Cval = 40;

    TESTSTEP("3", "Checking the DTC whether it is ACTIVE or not");
    EXPECTED("3", "The DTC DTC_ALT_DCA_HS_V_Mismatch should be ACTIVE");

    /*Setting the DTC mismatch GetEvent enable*/
    Dem_EventStatusExtendedType in_EventStatus_va = 1;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Call_DTC_ALT_DCA_HS_V_Mismatch_GetEventStatus).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_EventStatus_va),
        Return(
            RTE_E_OK)));

    /*Run for 4 iterations */
    for (int i = 0; i < 4; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("4", "Checking the PowerNet status signal");
    EXPECTED("4", "The status signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Expect call for RTE Write function, SetEventStatus signal*/
    Dem_EventStatusType test_EventStatus = 1;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Call_DTC_ALT_DCA_HS_V_Mismatch_SetEventStatus(test_EventStatus)).WillRepeatedly(Return(RTE_E_OK));

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    IPDM_A_MAIN_SWC_main();

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, 1)

}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Alternator_Monitoring_Reactions_02) {

    /*calling the initial instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Checking the deviation between the averaged alternator currents and averaged DCDC high side currents, if the difference is 20 amps between those two avg currents for more than \
five seconds then software shall set DTC_Alt_DC_HS_Curr to Active");
    REALIZES("53931:TC_iPDM_FuSa_SWR_Alternator_Monitoring_Reactions_02");

    TESTSTEP("1", "To test the DTC mismatch faults we should enable some blocks (WHD_Enable, faultEnableAfterStatupDelay)");
    EXPECTED("1", "Setting the ignition switch status not equal to OFF to enable above mentioned blocks");

    /*Set the ignition switch status*/
    REC_SG_IgnSw_E2E_SAM_Stat_Pkt_ednqef5xiht6lvtipf4ne4e5c in_SG_IgnSw_E2E_SAM_Stat_Pkt;
    Rte_TransformerError in_transformerError_oa;
    in_SG_IgnSw_E2E_SAM_Stat_Pkt.IgnSw_Stat_E2E_SAM = 2;
    in_transformerError_oa.errorCode = 0;
    in_transformerError_oa.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IgnSw_E2E_SAM_Stat_Pkt_SG_IgnSw_E2E_SAM_Stat_Pkt).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IgnSw_E2E_SAM_Stat_Pkt),
        SetArgPointee
        < 1 >
        (
            in_transformerError_oa),
        Return(
            RTE_E_OK)));

    TESTSTEP("2", "Assigning the current values to alternator and DCDC high side");
    EXPECTED("2", "The signals aAlt_Curr_Cval, aDC#_HS_Curr_Cval(#-->A,B,C) equal to non zero values");

    /*Alternator current*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_ALT_ATG01_SG_ALT_ATG01->value.aAlt_Curr_Cval = 85;

    /*DCDC High side currents*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_DCA_ATG01_SG_DCA_ATG01->value.aDCA_HS_Curr_Cval = 60;
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_DCB_ATG01_SG_DCB_ATG01->value .aDCB_HS_Curr_Cval= 60;
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_SG_DCC_ATG01_SG_DCC_ATG01->value.aDCC_HS_Curr_Cval = 60;

    /*Run for 4 iterations */
    for (int i = 0; i < 4; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("3", "Checking the DTC whether it is ACTIVE or not");
    EXPECTED("3", "The DTC DTC_ALT_DCA_HS_I_Mismatch should be ACTIVE");

    /*Setting the DTC mismatch GetEvent enable*/
    Dem_EventStatusExtendedType in_EventStatus_va = 1;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Call_DTC_ALT_DCA_HS_I_Mismatch_GetEventStatus).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_EventStatus_va),
        Return(
            RTE_E_OK)));

    /*Expect call for RTE Write function, SetEventStatus signal*/
    Dem_EventStatusType test_EventStatus = 1;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Call_DTC_ALT_DCA_HS_I_Mismatch_SetEventStatus(test_EventStatus)).WillRepeatedly(Return(RTE_E_OK));

    /*Calling main function*/
    IPDM_A_MAIN_SWC_main();

}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_DCDC_Setpoint_Command_Feedback_02) {
    /*calling the initial instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Checking the DTC_IPDM#_DC#_LS_V_Mismatch is equal to ACTIVE if the voltage diffrence between the signals aDC#_LS_Volt_Setpoint_FB and aDC#_LS_Volt_Setpoint_FB\
        is greater than 0.1 volt for more than 5 seconds");
    REALIZES("53977:TC_iPDMA_FuSa_SWR_DCDC_Setpoint_Command_Feedback_02");

    TESTSTEP("1", "Setting the ignition switch status ");
    EXPECTED("1", "The value of the signal IgnSw_Stat_E2E_SAM equal to 1");

    /*Set the ignition switch status*/
    REC_SG_IgnSw_E2E_SAM_Stat_Pkt_ednqef5xiht6lvtipf4ne4e5c in_SG_IgnSw_E2E_SAM_Stat_Pkt;
    Rte_TransformerError in_transformerError_oa;
    in_SG_IgnSw_E2E_SAM_Stat_Pkt.IgnSw_Stat_E2E_SAM = 1;
    in_transformerError_oa.errorCode = 0;
    in_transformerError_oa.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IgnSw_E2E_SAM_Stat_Pkt_SG_IgnSw_E2E_SAM_Stat_Pkt).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IgnSw_E2E_SAM_Stat_Pkt),
        SetArgPointee
        < 1 >
        (
            in_transformerError_oa),
        Return(
            RTE_E_OK)));

    TESTSTEP("2", "Setting the DCDCA low side voltage set point FB");
    EXPECTED("2", "The value of the signal aDCA_LS_Volt_Setpoint_FB equal to 14.2 volt");

    /*setting up the dca ls voltage set point FB*/
    REC_SG_DCA_ATG04_euk2owpx15avykqntci714wbp in_SG_DCA_ATG04;
    in_SG_DCA_ATG04.aDCA_LS_Volt_Setpoint_FB = 142;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_DCA_ATG04_SG_DCA_ATG04).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_DCA_ATG04),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Executing the main fuction (IPDM_A_MAIN_SWC_main()) for 250 iterations ");
    EXPECTED("3", "The minimum time criteria should met");

    /*Run for 250 iterations since minimum time met criteria is 2500 ms */
    for (int i = 0; i <= 250; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("4", "Setting the DCDCA low side voltage set point FB");
    EXPECTED("4", "The value of the signal aDCA_LS_Volt_Setpoint_FB equal to 12.0 volt");

    /********************Checking the DTC set to 1************************/
    /*setting up the dca ls voltage set point FB*/
    in_SG_DCA_ATG04.aDCA_LS_Volt_Setpoint_FB = 120;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_DCA_ATG04_SG_DCA_ATG04).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_DCA_ATG04),
        Return(
            RTE_E_OK)));

    /*enable the dtc DTC_IPDM_DC_LS_V_SetpointMismatch_Est*/
    /*Setting the DTC mismatch GetEvent enable*/
    Dem_EventStatusExtendedType in_EventStatus_va = 1;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Call_DTC_IPDMA_DCA_LS_V_SetpointMismatch_GetEventStatus).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_EventStatus_va),
        Return(
            RTE_E_OK)));

    TESTSTEP("5", "Executing the main fuction (IPDM_A_MAIN_SWC_main()) for 500 iterations ");
    EXPECTED("5", "The DTC DTC_IPDMA_DCA_LS_V_SetpointMismatch should be ACTIVE");

    /*Run for 500 iterations */
    for (int i = 0; i <= 500; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Expect call for RTE Write function, SetEventStatus signal*/
    Dem_EventStatusType test_EventStatus = 1;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Call_DTC_IPDMA_DCA_LS_V_SetpointMismatch_SetEventStatus(test_EventStatus)).WillRepeatedly(Return(RTE_E_OK));

    /*Calling main function*/
    IPDM_A_MAIN_SWC_main();

}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_DCDC_Setpoint_Command_Feedback_03) {
    /*calling the initial instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("Checking the PowerNet status signal aLVA_PowerNet_Status_IPDA set to NOK if the difference between aDC#_Cmd_LS_Volt_IPD# and aIPDM#_MS_Volt_Cval is \
greater than 0.1V for 5 seconds");
    REALIZES("54193:TC_iPDM_FuSa_SWR_DCDC_Setpoint_Command_Feedback_03");

    TESTSTEP("1", "Assign the voltage of 12 volt to IPDMA main switch voltage");
    EXPECTED("1", "The signal IPDM_Switch_Stat_IPDM_MainSw_Voltage value equal to 12 volt");

    /*Setting up the ipdm main sw voltage*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Voltage->value = 12;

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r test_SG_IPDA_ATG10_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    IPDM_A_MAIN_SWC_main();


    TESTSTEP("2", "Checking the Powernet Status");
    EXPECTED("2", "The signal aLVA_PowerNet_Status_IPDA equal to NOK");

    /*Checking for PowernNet Status to NOK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_NOK)

        TESTSTEP("3", "Assign the voltage of 14 volt to IPDMA main switch voltage");
    EXPECTED("3", "The signal IPDM_Switch_Stat_IPDM_MainSw_Voltage value equal to 14 volt");

    /*Setting up the ipdm main sw voltage*/
    Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_R_IPDM_Switch_Stat_IPDM_MainSw_Voltage->value = 14;

    /*Saving the rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG10_AR5),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    for (int i = 0; i < 2; i++) {
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("4", "Checking the Powernet Status");
    EXPECTED("4", "The signal aLVA_PowerNet_Status_IPDA equal to OK");

    /*Checking for PowernNet Status to OK*/
    EXPECT_EQ(test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK);

    EXPECT_EQ_LOG("aLVA_PowerNet_Status_IPDA", test_SG_IPDA_ATG10_AR5.aLVA_PowerNet_Status_IPDA, E_C02_OK_NOTOK_ERR_OK)
}


TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_DCDC_Setpoint_Command_Feedback_05_a) {
    /*calling the initial instances*/
    set_rte_instances();

    /*initializing the parameter*/
    init_parameters();

    DETAILS("If the IPDM is derating power for Energy Management, the aDC#_Cmd_LS_Volt shall be greater than 13V and less than 14.2V");
    REALIZES("53979:TC_iPDMA_FuSa_SWR_DCDC_Setpoint_Command_Feedback_05(a)");

    TESTSTEP("1", "Setting the ignition switch status ");
    EXPECTED("1", "The value of the signal IgnSw_Stat_E2E_SAM equal to 3");

    /*Set the ignition switch status*/
    REC_SG_IgnSw_E2E_SAM_Stat_Pkt_ednqef5xiht6lvtipf4ne4e5c in_SG_IgnSw_E2E_SAM_Stat_Pkt;
    Rte_TransformerError in_transformerError_oa;
    in_SG_IgnSw_E2E_SAM_Stat_Pkt.IgnSw_Stat_E2E_SAM = 3;
    in_transformerError_oa.errorCode = 0;
    in_transformerError_oa.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IgnSw_E2E_SAM_Stat_Pkt_SG_IgnSw_E2E_SAM_Stat_Pkt).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IgnSw_E2E_SAM_Stat_Pkt),
        SetArgPointee
        < 1 >
        (
            in_transformerError_oa),
        Return(
            RTE_E_OK)));


    TESTSTEP("2", "Executing the main fuction (IPDM_A_MAIN_SWC_main()) for 250 iterations ");
    EXPECTED("2", "The minimum time criteria should met");

    /*Calling main function for minimum time met criteria 2500ms*/
    for (int i = 0; i < 250; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*EXPECT_CALL for Rte write function*/
    REC_SG_IPDA_ATG08_AR2_e0z8qpxhhe9d1ls5177zaegi8 test_SG_IPDA_ATG08_AR2;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG08_AR2_SG_IPDA_ATG08_AR2).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG08_AR2),
        Return(
            RTE_E_OK)));

    /*Calling main function*/
    IPDM_A_MAIN_SWC_main();

    TESTSTEP("3", "Checking the value of the signal aDCA_Cmd_LS_Volt_IPDA greater than 13V when derate is active ");
    EXPECTED("3", "aDCA_Cmd_LS_Volt_IPDA greater than 13V when derate is active");

    /*Need to check SG_IPDA_ATG08_AR2.aDCA_Cmd_LS_Volt_IPDA greater than 13V when derate is active*/
    EXPECT_GT(test_SG_IPDA_ATG08_AR2.aDCA_Cmd_LS_Volt_IPDA, 130);

    EXPECT_GT_LOG("aDCA_Cmd_LS_Volt_IPDA", test_SG_IPDA_ATG08_AR2.aDCA_Cmd_LS_Volt_IPDA, 130)
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_07) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the enigne RPM is greater than K_IPDMA_EngineRunningThresholdHigh_RPM(600) then  IPDM software should set EngineRunnning to TRUE ");

    TESTSTEP("1", "Setting the engine RPM greater than 600");
    EXPECTED("1", "The value of the signal aEngRPM_Cval_CPC > 600");

    /*Setting the engnie RPM*/
    REC_SG_CPC_ATG01_AR5_bakqhg6dwk921vsfhcl5m6kh in_SG_CPC_ATG01_AR5;
    in_SG_CPC_ATG01_AR5.aEngRPM_Cval_CPC = 700;
    Rte_TransformerError in_transformerError_a;
    in_transformerError_a.errorCode = 0;
    in_transformerError_a.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_EngSpeedForEngRunnCalc_enabled).WillRepeatedly(Return(1));

    /*Run for 15 iterations */
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_CPC_ATG01_AR5_SG_CPC_ATG01_AR5).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_CPC_ATG01_AR5),
        SetArgPointee
        < 1 >
        (
            in_transformerError_a),
        Return(
            RTE_E_OK)));

    TESTSTEP("2", "Executing the main fuction (IPDM_A_MAIN_SWC_main()) for 250 iterations ");
    EXPECTED("2", "The minPrecharge time criteria should met");

    /*Run for 250 iterations */
    for (int i = 0; i < 250; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }
    EXPECT_EQ(Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, true);

    EXPECT_EQ_LOG("Engine_running", Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, true);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_08) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the enigne RPM is lesser than K_IPDMA_EngineRunningThresholdHigh_RPM(600) then  IPDM software should set EngineRunnning to FALSE ");

    TESTSTEP("1", "Setting the engine RPM lesser than 600");
    EXPECTED("1", "The value of the signal aEngRPM_Cval_CPC < 600");

    /*Setting the engnie RPM*/
    REC_SG_CPC_ATG01_AR5_bakqhg6dwk921vsfhcl5m6kh in1_SG_CPC_ATG01_AR5;
    in1_SG_CPC_ATG01_AR5.aEngRPM_Cval_CPC = 400;
    Rte_TransformerError in1_transformerError_a;
    in1_transformerError_a.errorCode = 0;
    in1_transformerError_a.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Prm_R_parameters_K_IPDMA_EngSpeedForEngRunnCalc_enabled).WillRepeatedly(Return(0));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_CPC_ATG01_AR5_SG_CPC_ATG01_AR5).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in1_SG_CPC_ATG01_AR5),
        SetArgPointee
        < 1 >
        (
            in1_transformerError_a),
        Return(
            RTE_E_OK)));

    TESTSTEP("2", "Executing the main fuction (IPDM_A_MAIN_SWC_main()) for 5 iterations ");
    EXPECTED("2", "Calling MAIN function");

    /*Run for 5 iterations */
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }
    EXPECT_EQ(Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, false);

    EXPECT_EQ_LOG("Engine_running", Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, false);
}


TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_09) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the enigne RPM is lesser than K_IPDMA_EngineRunningThresholdLow_RPM(600) then  IPDM software should set EngineRunnning to FALSE ");

    TESTSTEP("1", "Setting the engine RPM greater than 600 to make engine_running to True ");
    EXPECTED("1", "The value of the signal aEngRPM_Cval_CPC > 600");

    /*Setting the engnie RPM*/
    REC_SG_CPC_ATG01_AR5_bakqhg6dwk921vsfhcl5m6kh in_SG_CPC_ATG01_AR5;
    in_SG_CPC_ATG01_AR5.aEngRPM_Cval_CPC = 700;
    Rte_TransformerError in_transformerError_a;
    in_transformerError_a.errorCode = 0;
    in_transformerError_a.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_CPC_ATG01_AR5_SG_CPC_ATG01_AR5).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_CPC_ATG01_AR5),
        SetArgPointee
        < 1 >
        (
            in_transformerError_a),
        Return(
            RTE_E_OK)));

    TESTSTEP("2", "Executing the main fuction (IPDM_A_MAIN_SWC_main()) for 250 iterations ");
    EXPECTED("2", "The minPrecharge time criteria should met");


    /*Run for 250 iterations */
    for (int i = 0; i < 250; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }
    EXPECT_EQ(Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, true);

    EXPECT_EQ_LOG("Engine_running", Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, true);

    TESTSTEP("3", "Setting the engine RPM lesser than 600 to make engine_running to False ");
    EXPECTED("3", "The value of the signal aEngRPM_Cval_CPC < 600");

    /*Setting the engnie RPM*/
    in_SG_CPC_ATG01_AR5.aEngRPM_Cval_CPC = 400;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_CPC_ATG01_AR5_SG_CPC_ATG01_AR5).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_CPC_ATG01_AR5),
        SetArgPointee
        < 1 >
        (
            in_transformerError_a),
        Return(
            RTE_E_OK)));

    TESTSTEP("4", "Executing the main fuction (IPDM_A_MAIN_SWC_main()) for 5 iterations ");
    EXPECTED("4", "Calling MAIN function");

    /*Run for 5 iterations */
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }
    EXPECT_EQ(Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, false);

    EXPECT_EQ_LOG("Engine_running", Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, false);

}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_19) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the Engine running is TRUE for K_IPDMA_EngRunning_True_minTime_msec then IPDM software should set Engine_running as TRUE");

    TESTSTEP("1", "Setting the Engine_running as TRUE by assigning the value greater than K_IPDMA_EngineRunningThresholdHigh_RPM(600) into aEngRPM_Cval_CPC signal");
    EXPECTED("1", "The value of the signal aEngRPM_Cval_CPC>600");

    /*Setting the engnie RPM*/
    REC_SG_CPC_ATG01_AR5_bakqhg6dwk921vsfhcl5m6kh in_SG_CPC_ATG01_AR5;
    in_SG_CPC_ATG01_AR5.aEngRPM_Cval_CPC = 700;
    Rte_TransformerError in_transformerError_a;
    in_transformerError_a.errorCode = 0;
    in_transformerError_a.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_CPC_ATG01_AR5_SG_CPC_ATG01_AR5).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_CPC_ATG01_AR5),
        SetArgPointee
        < 1 >
        (
            in_transformerError_a),
        Return(
            RTE_E_OK)));

    TESTSTEP("2", "Calling the MAIN function");
    EXPECTED("2", "Call the MAIN function for 250 iterations");

    /*Run for 250 iterations */
    for (int i = 0; i < 250; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, true);

    EXPECT_EQ_LOG("Engine_running", Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, true);

    TESTSTEP("3", "Checking enigne_running should be TRUE if it is TRUE for K_IPDMA_EngRunning_True_minTime_msec previously");
    EXPECTED("3", "Engine_running should be TRUE after 750 msec ");

    /*Run for 75 iterations */
    for (int i = 0; i < 75; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }
    EXPECT_EQ(Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, true);

    EXPECT_EQ_LOG("Engine_running", Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, true);

}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_20) {
    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the Engine running is FALSE for K_IPDMA_EngRunning_False_minTime_msec then IPDM software should set Engine_running as FALSE");

    TESTSTEP("1", "Setting the Engine_running as FALSE by assigning the value lesser than K_IPDMA_EngineRunningThresholdLow_RPM(600) into aEngRPM_Cval_CPC signal");
    EXPECTED("1", "The value of the signal aEngRPM_Cval_CPC < 600");

    /*Setting the engnie RPM*/
    REC_SG_CPC_ATG01_AR5_bakqhg6dwk921vsfhcl5m6kh in_SG_CPC_ATG01_AR5;
    in_SG_CPC_ATG01_AR5.aEngRPM_Cval_CPC = 400;
    Rte_TransformerError in_transformerError_a;
    in_transformerError_a.errorCode = 0;
    in_transformerError_a.transformerClass = 0;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_CPC_ATG01_AR5_SG_CPC_ATG01_AR5).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_CPC_ATG01_AR5),
        SetArgPointee
        < 1 >
        (
            in_transformerError_a),
        Return(
            RTE_E_OK)));

    TESTSTEP("2", "Calling the MAIN function");
    EXPECTED("2", "Call the MAIN function for 5 iterations");

    /*Run for 5 iterations */
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, false);

    EXPECT_EQ_LOG("Engine_running", Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, false);

    TESTSTEP("3", "Checking enigne_running should be FALSE if it is FALSE for K_IPDMA_EngRunning_False_minTime_msec previously");
    EXPECTED("3", "Engine_running should be FALSE after 750 msec ");

    /*Run for 75 iterations */
    for (int i = 0; i < 75; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }
    EXPECT_EQ(Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, false);

    EXPECT_EQ_LOG("Engine_running", Rte_Inst_IPDM_A_MAIN_A6->IPDM_A_MAIN_SWC_main_P_SWC_EngineRunning_EngineRunning->value, false);

}


TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Thermal_Mngt_Test_case_01) {

    /*Setting the RTE instances*/
    set_rte_instances();

    /*Initializing the parameters*/
    init_parameters();

    DETAILS("Testing the pack1HeaterRequestActive signal setting to TRUE if the battery 1 signal heaterRequestActive is equal to TRUE");

    TESTSTEP("1", "Setting the heaterDisallow to FALSE to make heaterRequestActive is equal to TRUE");
    EXPECTED("1", "From setting Battery temp signal(Bat_Temp_Cval) to less than K_IPDMA_BTM_TempThresholdDisallow_C");

    /* Setting the Battery PACK 1 heater request active to TRUE*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 25;
    Rte_TransformerError in_transformerError_y;
    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Setting the heaterRequestActive is equal to TRUE");
    EXPECTED("2", "From setting Battery temp signal(Bat_Temp_Cval) to less than K_IPDMA_BTM_TempThresholdLow_C ");


    in_SG_IBS_LV_Frm5_AR2.Bat_Temp_Cval = 2;
    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("4", "Verifying the signal pack1HeaterRequestActive is TRUE or not ");
    EXPECTED("4", "The IPDM A software should set signal pack1HeaterRequestActive to TRUE");

    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    /* EXPECT_CALL for Rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));


    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_Pack1_Heater_Stat, true);

    EXPECT_EQ_LOG("pack1HeaterRequestActive", test_SG_IPDA_ATG11_AR5.aBSA_Pack1_Heater_Stat, true);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Thermal_Mngt_Test_case_02) {

    /*Setting the RTE instances*/
    set_rte_instances();

    /*Initializing the parameters*/
    init_parameters();

    DETAILS("Testing the pack1HeaterRequestActive signal setting to TRUE if the battery 2 signal heaterRequestActive is equal to TRUE");

    TESTSTEP("1", "Setting the heaterDisallow to FALSE to make heaterRequestActive is equal to TRUE");
    EXPECTED("1", "From setting Battery temp signal(Bat_Temp_Cval) to less than K_IPDMA_BTM_TempThresholdDisallow_C");

    /* Setting the Battery PACK 2 heater request active to TRUE*/

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_a;
    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 25;
    Rte_TransformerError in_transformerError_z;
    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Setting the heaterRequestActive is equal to TRUE");
    EXPECTED("2", "From setting Battery temp signal(Bat_Temp_Cval) to less than K_IPDMA_BTM_TempThresholdLow_C ");

    in_SG_IBS_LV_Frm5_AR2_a.Bat_Temp_Cval = 2;
    in_transformerError_z.errorCode = 0;
    in_transformerError_z.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_z),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("4", "Verifying the signal pack1HeaterRequestActive is TRUE or not ");
    EXPECTED("4", "The IPDM A software should set signal pack1HeaterRequestActive to TRUE");

    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    /* EXPECT_CALL for Rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_Pack1_Heater_Stat, true);

    EXPECT_EQ_LOG("pack1HeaterRequestActive", test_SG_IPDA_ATG11_AR5.aBSA_Pack1_Heater_Stat, true);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Thermal_Mngt_Test_case_03) {

    /*Setting the RTE instances*/
    set_rte_instances();

    /*Initializing the parameters*/
    init_parameters();

    DETAILS("Testing the pack2HeaterRequestActive signal setting to TRUE if the battery 3 signal heaterRequestActive is equal to TRUE");

    TESTSTEP("1", "Setting the heaterDisallow to FALSE to make heaterRequestActive is equal to TRUE");
    EXPECTED("1", "From setting Battery temp signal(Bat_Temp_Cval) to less than K_IPDMA_BTM_TempThresholdDisallow_C");

    /* Setting the Battery PACK 3 heater request active to TRUE*/


    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_b;
    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 25;
    Rte_TransformerError in_transformerError_aa;
    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Setting the heaterRequestActive is equal to TRUE");
    EXPECTED("2", "From setting Battery temp signal(Bat_Temp_Cval) to less than K_IPDMA_BTM_TempThresholdLow_C ");

    in_SG_IBS_LV_Frm5_AR2_b.Bat_Temp_Cval = 2;
    in_transformerError_aa.errorCode = 0;
    in_transformerError_aa.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_aa),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("4", "Verifying the signal pack2HeaterRequestActive is TRUE or not ");
    EXPECTED("4", "The IPDM A software should set signal pack2HeaterRequestActive to TRUE");

    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    /* EXPECT_CALL for Rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_Pack2_Heater_Stat, true);

    EXPECT_EQ_LOG("pack1HeaterRequestActive", test_SG_IPDA_ATG11_AR5.aBSA_Pack2_Heater_Stat, true);

}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_Thermal_Mngt_Test_case_04) {

    /*Setting the RTE instances*/
    set_rte_instances();

    /*Initializing the parameters*/
    init_parameters();

    DETAILS("Testing the pack2HeaterRequestActive signal setting to TRUE if the battery 4 signal heaterRequestActive is equal to TRUE");

    TESTSTEP("1", "Setting the heaterDisallow to FALSE to make heaterRequestActive is equal to TRUE");
    EXPECTED("1", "From setting Battery temp signal(Bat_Temp_Cval) to less than K_IPDMA_BTM_TempThresholdDisallow_C");

    /* Setting the Battery PACK 4 heater request active to TRUE*/


    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2_c;
    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 25;
    Rte_TransformerError in_transformerError_ba;
    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Setting the heaterRequestActive is equal to TRUE");
    EXPECTED("2", "From setting Battery temp signal(Bat_Temp_Cval) to less than K_IPDMA_BTM_TempThresholdLow_C ");

    in_SG_IBS_LV_Frm5_AR2_c.Bat_Temp_Cval = 2;
    in_transformerError_ba.errorCode = 0;
    in_transformerError_ba.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ba),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("4", "Verifying the signal pack2HeaterRequestActive is TRUE or not ");
    EXPECTED("4", "The IPDM A software should set signal pack2HeaterRequestActive to TRUE");

    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    /* EXPECT_CALL for Rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_Pack2_Heater_Stat, true);

    EXPECT_EQ_LOG("pack1HeaterRequestActive", test_SG_IPDA_ATG11_AR5.aBSA_Pack2_Heater_Stat, true);

}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_System_Monitering_Batt_pack_status_determination_Test_case_01) {

    /*Setting the RTE instances*/
    set_rte_instances();

    /*Initializing the parameters*/
    init_parameters();

    DETAILS("The LV-A pack 1 voltage determination shall be calculated using batt 1 frame 1 voltage signal and batt 2 farme 1 voltage signal");

    TESTSTEP("1", "To validate the LV-A pack 1 voltage signal we should intialize B1_fail_bus(as per model) to zero");
    EXPECTED("1", "Battery 1 fail bus signals Bat_Discnctn_ASIL , Bat_Sens_Gen_Fail , RsErr_Bat_Sens_LIN_Err equal to zero");

    /*To validate this requirement*/
    /*Initialising B1 Fail bus siganls (as per model) to zero*/
    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;
    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;

    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));

    TESTSTEP("2", "To validate the LV-A pack 1 voltage signal we should intialize B2_fail_bus(as per model) to zero");
    EXPECTED("2", "Battery 2 fail bus signals Bat_Discnctn_ASIL , Bat_Sens_Gen_Fail , RsErr_Bat_Sens_LIN_Err equal to zero");

    /*Initialising B2 Fail bus siganls (as per model) to zero*/
    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;
    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;

    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;
    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;

    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 1200;

    INPUT("Battery 1 frame 1 voltage siganl", in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL, 1200);

    TESTSTEP("3", "Setting the battery 1 voltage signal to some value ");
    EXPECTED("3", "Assiging 12 to batt 1 voltage signal Bat_Volt_Cval_ASIL");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));


    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;
    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;

    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 1200;

    INPUT("Battery 1 frame 1 voltage siganl", in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL, 1200);

    TESTSTEP("4", "Setting the battery 2 voltage signal to some value ");
    EXPECTED("4", "Assiging 12 to batt 2 voltage signal Bat_Volt_Cval_ASIL");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("5", "Verifying LV-A battery pack 1 voltage ");
    EXPECTED("5", "LV-A battery pack 1 voltage should be calculated by using formula (Batt1_volt + Batt2_volt)/2");

    REC_SG_IPDA_ATG06_AR5_ah8rspuhrniggq8ye17oc84th test_SG_IPDA_ATG06_AR5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG06_AR5_SG_IPDA_ATG06_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG06_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("6", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("6", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG06_AR5.aBSA_Pack1_ChrgVolt_Cval, 1200);

    EXPECT_EQ_LOG("LV-A battery pack 1 voltage", test_SG_IPDA_ATG06_AR5.aBSA_Pack1_ChrgVolt_Cval, 1200);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_System_Monitering_Batt_pack_status_determination_Test_case_02) {

    /*Setting the RTE instances*/
    set_rte_instances();

    /*Initializing the parameters*/
    init_parameters();

    DETAILS("The LV-A pack 2 voltage determination shall be calculated using batt 1 frame 1 voltage signal and batt 2 farme 1 voltage signal");

    TESTSTEP("1", "To validate the LV-A pack 2 voltage signal we should intialize B1_fail_bus(as per model) to zero");
    EXPECTED("1", "Battery 1 fail bus signals Bat_Discnctn_ASIL , Bat_Sens_Gen_Fail , RsErr_Bat_Sens_LIN_Err equal to zero");

    /*To validate this requirement*/
   /*Initialising B1 Fail bus siganls (as per model) to zero*/
    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_b;
    Rte_TransformerError in_transformerError_ea;
    in_transformerError_ea.errorCode = 0;
    in_transformerError_ea.transformerClass = 0;

    in_SG_IBS_LV_Frm6_AR2_b.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_b.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_b.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ea),
        Return(
            RTE_E_OK)));

    TESTSTEP("2", "To validate the LV-A pack 2 voltage signal we should intialize B2_fail_bus(as per model) to zero");
    EXPECTED("2", "Battery 2 fail bus signals Bat_Discnctn_ASIL , Bat_Sens_Gen_Fail , RsErr_Bat_Sens_LIN_Err equal to zero");

    /*Initialising B2 Fail bus siganls (as per model) to zero*/
    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_c;
    Rte_TransformerError in_transformerError_fa;
    in_transformerError_fa.errorCode = 0;
    in_transformerError_fa.transformerClass = 0;

    in_SG_IBS_LV_Frm6_AR2_c.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_c.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_c.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_fa),
        Return(
            RTE_E_OK)));


    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_b;
    Rte_TransformerError in_transformerError_k;
    in_transformerError_k.errorCode = 0;
    in_transformerError_k.transformerClass = 0;

    in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL = 1200;

    INPUT("Battery 1 frame 1 voltage siganl", in_SG_IBS_LV_Frm1_AR2_b.Bat_Volt_Cval_ASIL, 1200);

    TESTSTEP("3", "Setting the battery 1 voltage signal to some value ");
    EXPECTED("3", "Assiging 12 to batt 1 voltage signal Bat_Volt_Cval_ASIL");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_b),
        SetArgPointee
        < 1 >
        (
            in_transformerError_k),
        Return(
            RTE_E_OK)));


    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_c;
    Rte_TransformerError in_transformerError_l;
    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;

    in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL = 1200;

    INPUT("Battery 1 frame 1 voltage siganl", in_SG_IBS_LV_Frm1_AR2_c.Bat_Volt_Cval_ASIL, 1200);

    TESTSTEP("4", "Setting the battery 2 voltage signal to some value ");
    EXPECTED("4", "Assiging 12 to batt 2 voltage signal Bat_Volt_Cval_ASIL");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_c),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("5", "Verifying LV-A battery pack 2 voltage ");
    EXPECTED("5", "LV-A battery pack 2 voltage should be calculated by using formula (Batt1_volt + Batt2_volt)/2");

    REC_SG_IPDA_ATG09_AR5_r9cuozm1n9x522jz743obnx test_SG_IPDA_ATG09_AR5;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG09_AR5_SG_IPDA_ATG09_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG09_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("6", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("6", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG09_AR5.aBSA_Pack2_BatChrgVolt_Cval, 1200);

    EXPECT_EQ_LOG("LV-A battery pack 1 voltage", test_SG_IPDA_ATG09_AR5.aBSA_Pack2_BatChrgVolt_Cval, 1200);

}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_23_V02) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the Update signal SG_IBS_LV_Frm1_AR2_isUpd of battery frame 1 is TRUE then battery 1 current signal Bat1_Curr_Cval_ASIL_Mrg equal to Bat_Curr_Cval_ASIL_Frm1");

    TESTSTEP("1", "Making the Update signal SG_IBS_LV_Frm1_AR2_isUpd of battery frame 1 into FALSE ");
    EXPECTED("1", "The signal SG_IBS_LV_Frm1_AR2_isUpd equal to 0");

    /*Setting battery frame 1 SG_IBS_LV_Frm1_AR2_isUpd  to False*/


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(FALSE));

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    in_SG_IBS_LV_Frm1_AR2.SQC_SG_IBS_LV_Frm1_AR2 = 1;
    Rte_TransformerError in_transformerError_i;
    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;

    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));



    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Making the Update signal SG_IBS_LV_Frm1_AR2_isUpd of battery frame 1 into TRUE and assigning the value to the battery current signal");
    EXPECTED("2", "The signal SG_IBS_LV_Frm1_AR2_isUpd equal to 1 and Bat_Curr_Cval_ASIL equal to 10");

    /*Assining current, voltage and Sequence to Batt1 frames and Setting battery frame 1 SG_IBS_LV_Frm1_AR2_isUpd  to TRUE*/
  
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    in_SG_IBS_LV_Frm1_AR2.Bat_Curr_Cval_ASIL = 10;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    /*EXPECT_CALL for Rte write function*/
    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);

    EXPECT_EQ_LOG("Bat1_Curr_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_24_V02) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the Update signal SG_IBS_LV_Frm2_AR2_isUpd of battery frame 2 is TRUE then battery 1 current signal Bat1_Curr_Cval_ASIL_Mrg equal to Bat_Curr_Cval_ASIL_Frm2");

    TESTSTEP("1", "Making the Update signal SG_IBS_LV_Frm2_AR2_isUpd of battery frame 2 into FALSE ");
    EXPECTED("1", "The signal SG_IBS_LV_Frm2_AR2_isUpd equal to 0");

    /*Setting battery frame 1 SG_IBS_LV_Frm2_AR2_isUpd  to False*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(FALSE));

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    in_SG_IBS_LV_Frm2_AR2.SQC_SG_IBS_LV_Frm2_AR2 = 1;
    Rte_TransformerError in_transformerError_m;
    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Making the Update signal SG_IBS_LV_Frm2_AR2_isUpd of battery frame 2 into TRUE and assigning the value to the battery current signal");
    EXPECTED("2", "The signal SG_IBS_LV_Frm2_AR2_isUpd equal to 1 and Bat_Curr_Cval_ASIL equal to 10");

    /*Assining current and Sequence to Batt1 frames and Setting battery frame 2 SG_IBS_LV_Frm2_AR2_isUpd  to TRUE*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));

    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 10;


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    /*EXPECT_CALL for Rte write function*/
    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);

    EXPECT_EQ_LOG("Bat1_Curr_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_25_V02) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the Update signal SG_IBS_LV_Frm3_AR2_isUpd of battery frame 3 is TRUE then battery 1 current signal Bat1_Curr_Cval_ASIL_Mrg equal to Bat_Curr_Cval_ASIL_Frm3");

    TESTSTEP("1", "Making the Update signal SG_IBS_LV_Frm3_AR2_isUpd of battery frame 3 into FALSE ");
    EXPECTED("1", "The signal SG_IBS_LV_Frm3_AR2_isUpd equal to 0");

    /*Setting battery frame 3 SG_IBS_LV_Frm3_AR2_isUpd  to False*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(Return(FALSE));

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    in_SG_IBS_LV_Frm3_AR2.SQC_SG_IBS_LV_Frm3_AR2 = 1;
    Rte_TransformerError in_transformerError_q;
    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Making the Update signal SG_IBS_LV_Frm3_AR2_isUpd of battery frame 3 into TRUE and assigning the value to the battery current signal");
    EXPECTED("2", "The signal SG_IBS_LV_Frm3_AR2_isUpd equal to 1 and Bat_Curr_Cval_ASIL equal to 10");

    /*Assining current and Sequence to Batt1 frames and Setting battery frame 3 SG_IBS_LV_Frm2_AR2_isUpd  to TRUE*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(Return(TRUE));

    in_SG_IBS_LV_Frm3_AR2.Bat_Curr_Cval_ASIL = 10;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    /*EXPECT_CALL for Rte write function*/
    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);

    EXPECT_EQ_LOG("Bat1_Curr_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_26_V02) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the Update signal SG_IBS_LV_Frm4_AR2_isUpd of battery frame 4 is TRUE then battery 1 current signal Bat1_Curr_Cval_ASIL_Mrg equal to Bat_Curr_Cval_ASIL_Frm4");

    TESTSTEP("1", "Making the Update signal SG_IBS_LV_Frm4_AR2_isUpd of battery frame 4 into FALSE ");
    EXPECTED("1", "The signal SG_IBS_LV_Frm4_AR2_isUpd equal to 0");

    /*Setting battery frame 1 SG_IBS_LV_Frm4_AR2_isUpd  to False*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(FALSE));

    REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv in_SG_IBS_LV_Frm4_AR2;
    in_SG_IBS_LV_Frm4_AR2.SQC_SG_IBS_LV_Frm4_AR2 = 1;
    Rte_TransformerError in_transformerError_u;
    in_transformerError_u.errorCode = 0;
    in_transformerError_u.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Making the Update signal SG_IBS_LV_Frm4_AR2_isUpd of battery frame 4 into TRUE and assigning the value to the battery current signal");
    EXPECTED("2", "The signal SG_IBS_LV_Frm4_AR2_isUpd equal to 0 and Bat_Curr_Cval_ASIL equal to 10");

    /*Assining current and Sequence to Batt1 frames and Setting battery frame 4 SG_IBS_LV_Frm2_AR2_isUpd  to TRUE*/
   
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(TRUE));

    in_SG_IBS_LV_Frm4_AR2.Bat_Curr_Cval_ASIL = 10;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm4_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_u),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    /*EXPECT_CALL for Rte write function*/
    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));


    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);

    EXPECT_EQ_LOG("Bat1_Curr_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);

}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_27_V02) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the Update signal SG_IBS_LV_Frm5_AR2_isUpd of battery frame 5 is TRUE then battery 1 current signal Bat1_Curr_Cval_ASIL_Mrg equal to Bat_Curr_Cval_ASIL_Frm5");

    TESTSTEP("1", "Making the Update signal SG_IBS_LV_Frm5_AR2_isUpd of battery frame 5 into FALSE ");
    EXPECTED("1", "The signal SG_IBS_LV_Frm5_AR2_isUpd equal to 0");

    /*Setting battery frame 1 SG_IBS_LV_Frm5_AR2_isUpd  to False*/


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(FALSE));

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    in_SG_IBS_LV_Frm5_AR2.SQC_SG_IBS_LV_Frm5_AR2 = 1;
    Rte_TransformerError in_transformerError_y;
    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Making the Update signal SG_IBS_LV_Frm5_AR2_isUpd of battery frame 5 into TRUE and assigning the value to the battery current signal");
    EXPECTED("2", "The signal SG_IBS_LV_Frm5_AR2_isUpd equal to 0 and Bat_Curr_Cval_ASIL equal to 10");

    /*Assining current and Sequence to Batt1 frames and Setting battery frame 5 SG_IBS_LV_Frm2_AR2_isUpd  to TRUE*/


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));

    in_SG_IBS_LV_Frm5_AR2.Bat_Curr_Cval_ASIL = 10;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    /*EXPECT_CALL for Rte write function*/
    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);

    EXPECT_EQ_LOG("Bat1_Curr_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);

}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_28_V02) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the Update signal SG_IBS_LV_Frm6_AR2_isUpd of battery frame 6 is TRUE then battery 1 current signal Bat1_Curr_Cval_ASIL_Mrg equal to Bat_Curr_Cval_ASIL_Frm6");

    TESTSTEP("1", "Making the Update signal SG_IBS_LV_Frm6_AR2_isUpd of battery frame 6 into FALSE ");
    EXPECTED("1", "The signal SG_IBS_LV_Frm6_AR2_isUpd equal to 0");


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(FALSE));
    /*Setting battery frame 1 SG_IBS_LV_Frm6_AR2_isUpd  to False*/
    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    in_SG_IBS_LV_Frm6_AR2.SQC_SG_IBS_LV_Frm6_AR2 = 1;
    Rte_TransformerError in_transformerError_ca;
    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Making the Update signal SG_IBS_LV_Frm6_AR2_isUpd of battery frame 6 into TRUE and assigning the value to the battery current signal");
    EXPECTED("2", "The signal SG_IBS_LV_Frm6_AR2_isUpd equal to 1 and Bat_Curr_Cval_ASIL equal to 10");

    /*Assining current and Sequence to Batt1 frames and Setting battery frame 6 SG_IBS_LV_Frm2_AR2_isUpd  to TRUE*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    in_SG_IBS_LV_Frm6_AR2.Bat_Curr_Cval_ASIL = 10;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    /*EXPECT_CALL for Rte write function*/
    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);

    EXPECT_EQ_LOG("Bat1_Curr_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_29_V02) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If all frame Upd signals are equal to FALSE then battery current signal merge(Bat1_Curr_Cval_ASIL_Mrg) is assigned by same signal with previous value (Bat1_Curr_Cval_ASIL_Mrg)z-1");

    TESTSTEP("1", "Making the Update signal SG_IBS_LV_Frm2_AR2_isUpd of battery frame 2 into FALSE ");
    EXPECTED("1", "The signal SG_IBS_LV_Frm2_AR2_isUpd equal to 0");

    /*Setting battery frame 2 SG_IBS_LV_Frm2_AR2_isUpd  to False*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(FALSE));

    REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm2_AR2;
    in_SG_IBS_LV_Frm2_AR2.SQC_SG_IBS_LV_Frm2_AR2 = 1;
    Rte_TransformerError in_transformerError_m;
    in_transformerError_m.errorCode = 0;
    in_transformerError_m.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Making the Update signal SG_IBS_LV_Frm2_AR2_isUpd of battery frame 2 into TRUE and assigning the value to the battery current signal");
    EXPECTED("2", "The signal SG_IBS_LV_Frm2_AR2_isUpd equal to 1 and Bat_Curr_Cval_ASIL equal to 10");

    /*Setting battery frame 2 SG_IBS_LV_Frm2_AR2_isUpd  to TRUE*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(TRUE));
    in_SG_IBS_LV_Frm2_AR2.Bat_Curr_Cval_ASIL = 10;


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm2_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_m),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*EXPECT_CALL for Rte write function*/
    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);

    EXPECT_EQ_LOG("Bat1_Curr_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);

    /*Setting battery frame 1 to frame 6  to FALSE*/

    TESTSTEP("4", "Setting all frame Upd signals are equal to FALSE ");

    TESTSTEP("5", "Making the Update signal SG_IBS_LV_Frm1_AR2_isUpd of battery frame 1 into FALSE ");
    EXPECTED("5", "The signal SG_IBS_LV_Frm1_AR2_isUpd equal to 0");

    /*Setting battery frame 1 SG_IBS_LV_Frm1_AR2_isUpd  to FALSE*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(FALSE));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2).WillRepeatedly(Return(FALSE));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(Return(FALSE));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2).WillRepeatedly(Return(FALSE));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(FALSE));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(FALSE));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*EXPECT_CALL for Rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("11", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("11", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);

    EXPECT_EQ_LOG("Bat1_Curr_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_I_shunt, 10);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_37_V02) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the Update signal SG_IBS_LV_Frm1_AR2_isUpd of battery frame 1 is TRUE then battery 1 voltage signal Bat1_Volt_Cval_ASIL_Mrg is equal to Bat_Volt_Cval_ASIL_Frm1");

    TESTSTEP("1", "Making the Update signal SG_IBS_LV_Frm1_AR2_isUpd of battery frame 1 into FALSE ");
    EXPECTED("1", "The signal SG_IBS_LV_Frm1_AR2_isUpd equal to 0");

    /*Setting battery frame 1 SG_IBS_LV_Frm1_AR2_isUpd  to False*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(FALSE));

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    in_SG_IBS_LV_Frm1_AR2.SQC_SG_IBS_LV_Frm1_AR2 = 1;
    Rte_TransformerError in_transformerError_l;
    in_transformerError_l.errorCode = 0;
    in_transformerError_l.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Making the Update signal SG_IBS_LV_Frm1_AR2_isUpd of battery frame 1 into TRUE and assigning the value to the battery voltage signal");
    EXPECTED("2", "The signal SG_IBS_LV_Frm1_AR2_isUpd equal to 1 and Bat_Volt_Cval_ASIL equal to 14");

    /*Assining  voltage and Sequence to Batt1 frames and Setting battery frame 1 SG_IBS_LV_Frm1_AR2_isUpd  to TRUE*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 14;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_l),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    /*EXPECT_CALL for Rte write function*/
    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_U_batt, 14);

    EXPECT_EQ_LOG("Bat1_Volt_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_U_batt, 14);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_38_V02) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the Update signal SG_IBS_LV_Frm3_AR2_isUpd of battery frame 3 is TRUE then battery 1 voltage signal Bat1_Volt_Cval_ASIL_Mrg is equal to Bat_Volt_Cval_ASIL_Frm1");

    TESTSTEP("1", "Making the Update signal SG_IBS_LV_Frm3_AR2_isUpd of battery frame 3 into FALSE ");
    EXPECTED("1", "The signal SG_IBS_LV_Frm3_AR2_isUpd equal to 0");

    /*Setting battery frame 3 SG_IBS_LV_Frm3_AR2_isUpd  to False*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(Return(FALSE));

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    in_SG_IBS_LV_Frm3_AR2.SQC_SG_IBS_LV_Frm3_AR2 = 1;
    Rte_TransformerError in_transformerError_q;
    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Making the Update signal SG_IBS_LV_Frm3_AR2_isUpd of battery frame 3 into TRUE and assigning the value to the battery voltage signal");
    EXPECTED("2", "The signal SG_IBS_LV_Frm3_AR2_isUpd equal to 1 and Bat_Volt_Cval_ASIL equal to 14");

    /*Assining current and Sequence to Batt1 frames and Setting battery frame 3 SG_IBS_LV_Frm2_AR2_isUpd  to TRUE*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(Return(TRUE));
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 14;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    /*EXPECT_CALL for Rte write function*/
    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");


    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_U_batt, 14);

    EXPECT_EQ_LOG("Bat1_Volt_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_U_batt, 14);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_39_V02) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the Update signal SG_IBS_LV_Frm5_AR2_isUpd of battery frame 5 is TRUE then battery 1 voltage signal Bat1_Volt_Cval_ASIL_Mrg is equal to Bat_Volt_Cval_ASIL_Frm1");

    TESTSTEP("1", "Making the Update signal SG_IBS_LV_Frm5_AR2_isUpd of battery frame 5 into FALSE ");
    EXPECTED("1", "The signal SG_IBS_LV_Frm5_AR2_isUpd equal to 0");

    /*Setting battery frame 1 SG_IBS_LV_Frm5_AR2_isUpd  to False*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(FALSE));

    REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm5_AR2;
    in_SG_IBS_LV_Frm5_AR2.SQC_SG_IBS_LV_Frm5_AR2 = 1;
    Rte_TransformerError in_transformerError_y;
    in_transformerError_y.errorCode = 0;
    in_transformerError_y.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Making the Update signal SG_IBS_LV_Frm5_AR2_isUpd of battery frame 5 into TRUE and assigning the value to the battery voltage signal");
    EXPECTED("2", "The signal SG_IBS_LV_Frm5_AR2_isUpd equal to 1 and Bat_Volt_Cval_ASIL equal to 14");

    /*Assining current and Sequence to Batt1 frames and Setting battery frame 5 SG_IBS_LV_Frm2_AR2_isUpd  to TRUE*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(TRUE));
    in_SG_IBS_LV_Frm5_AR2.Bat_Volt_Cval_ASIL = 14;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm5_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_y),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    /*EXPECT_CALL for Rte write function*/
    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_U_batt, 14);

    EXPECT_EQ_LOG("Bat1_Volt_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_U_batt, 14);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_input_procesing_40_V02) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("If the frame 1 ,3 and 5 Upd signals are equal to FALSE then battery voltage signal merge(Bat1_Volt_Cval_ASIL_Mrg) is assigned by same signal with previous value (Bat1_Volt_Cval_ASIL_Mrg)z-1");

    TESTSTEP("1", "Making the Update signal SG_IBS_LV_Frm3_AR2_isUpd of battery frame 3 into FALSE ");
    EXPECTED("1", "The signal SG_IBS_LV_Frm3_AR2_isUpd equal to 0");

    /*Setting battery frame 1 SG_IBS_LV_Frm3_AR2_isUpd  to False*/

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(Return(FALSE));

    REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl in_SG_IBS_LV_Frm3_AR2;
    in_SG_IBS_LV_Frm3_AR2.SQC_SG_IBS_LV_Frm3_AR2 = 1;
    Rte_TransformerError in_transformerError_q;
    in_transformerError_q.errorCode = 0;
    in_transformerError_q.transformerClass = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    TESTSTEP("2", "Making the Update signal SG_IBS_LV_Frm3_AR2_isUpd of battery frame 3 into TRUE and assigning the value to the battery voltage signal");
    EXPECTED("2", "The signal SG_IBS_LV_Frm3_AR2_isUpd equal to 1 and Bat_Volt_Cval_ASIL equal to 14");

    /*Assining voltage and Sequence to Batt1 frames and Setting battery frame 3 SG_IBS_LV_Frm3_AR2_isUpd  to TRUE*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(Return(TRUE));
    in_SG_IBS_LV_Frm3_AR2.Bat_Volt_Cval_ASIL = 14;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm3_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_q),
        Return(
            RTE_E_OK)));

    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    /*EXPECT_CALL for Rte write function*/
    REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y test_SG_IPDA_ATG11_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("3", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_U_batt, 14);

    EXPECT_EQ_LOG("Bat1_Volt_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_U_batt, 14);

    /*Setting battery frame 1,3 and 5 Upd to FALSE*/

    TESTSTEP("4", "Making the Update signal SG_IBS_LV_Frm1_AR2_isUpd of battery frame 1 into FALSE ");
    EXPECTED("4", "The signal SG_IBS_LV_Frm1_AR2_isUpd equal to 0");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(FALSE));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2).WillRepeatedly(Return(FALSE));

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2).WillRepeatedly(Return(FALSE));
    /*calling main function*/
    for (int i = 0; i < 5; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*EXPECT_CALL for Rte write function*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG11_AR5),
        Return(
            RTE_E_OK)));

    TESTSTEP("7", "Calling the main function for 15 iterations to met minimum time cretiria");
    EXPECTED("7", "Calling the fuc() IPDM_A_MAIN_SWC_main()");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    EXPECT_EQ(test_SG_IPDA_ATG11_AR5.aBSA_B1_U_batt, 14);

    EXPECT_EQ_LOG("Bat1_Volt_Cval_ASIL_Mrg", test_SG_IPDA_ATG11_AR5.aBSA_B1_U_batt, 14);
}

TEST_F(IPDM_A_MAIN_SWC_main_Test, TC_iPDM_FuSa_SWR_system_Monitering_Bat_Pack_St_Det_01) {

    /*Setting up the RTE instances*/
    set_rte_instances();

    /*initializing the parameters*/
    init_parameters();

    DETAILS("The LV-A pack 1 voltage determination shall be calculated using Batt1_U_Batt and Batt2_U_Batt {aBSA_Pack1_ChrgVolt_Cval = (Batt1_U_Batt + Batt2_U_Batt)/2}");


    TESTSTEP("1", "Setting all the battery frame 6 Updated signal to TRUE");
    EXPECTED("1", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B$_SG_IBS_LV_Frm6_AR2 signal to TRUE (($(Battery) - 1,2");

    /*Setting Frame 6 updated signal to TRUE*/
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(Return(TRUE));

    /*Set Bat1_Fail and Bat2_Fail to zero*/

    TESTSTEP("2", "Making battery 1 fail to Set zero");
    EXPECTED("2", "The signals Bat_Discnctn_ASIL,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err should not equal to 1");

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2;
    Rte_TransformerError in_transformerError_ca;

    in_transformerError_ca.errorCode = 0;
    in_transformerError_ca.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2.SQC_SG_IBS_LV_Frm6_AR2 = 1;
    in_SG_IBS_LV_Frm6_AR2.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_ca),
        Return(
            RTE_E_OK)));

    TESTSTEP("3", "Making battery 2 fail to Set zero");
    EXPECTED("3", "The signals Bat_Discnctn_ASIL,Bat_Sens_Gen_Fail and RsErr_Bat_Sens_LIN_Err should not equal to 1");

    REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd in_SG_IBS_LV_Frm6_AR2_a;
    Rte_TransformerError in_transformerError_da;

    in_transformerError_da.errorCode = 0;
    in_transformerError_da.transformerClass = 0;
    in_SG_IBS_LV_Frm6_AR2_a.SQC_SG_IBS_LV_Frm6_AR2 = 1;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Discnctn_ASIL = 0;
    in_SG_IBS_LV_Frm6_AR2_a.Bat_Sens_Gen_Fail = 0;
    in_SG_IBS_LV_Frm6_AR2_a.RsErr_Bat_Sens_LIN_Err = 0;

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm6_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_da),
        Return(
            RTE_E_OK)));

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }

    /*Setting Frame 1 updated signal to TRUE*/

    TESTSTEP("4", "Setting all the battery frame 1 Updated signal to TRUE");
    EXPECTED("4", "Setting Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B$_SG_IBS_LV_Frm1_AR2 signal to TRUE (($(Battery) - 1,2");

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(Return(TRUE));

    /*BATTERY 1 FRAME 1*/

    TESTSTEP("5", "Setting the bat 1 voltage sugnal to non zero");
    EXPECTED("5", "The signal Bat_Volt_Cval_ASIL equal to 13 volts");

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2;
    Rte_TransformerError in_transformerError_i;

    in_transformerError_i.errorCode = 0;
    in_transformerError_i.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2.Bat_Volt_Cval_ASIL = 13;
  

    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2),
        SetArgPointee
        < 1 >
        (
            in_transformerError_i),
        Return(
            RTE_E_OK)));

    /*BATTERY 2 FRAME 1*/

    TESTSTEP("6", "Setting the bat 2 voltage sugnal to non zero");
    EXPECTED("6", "The signal Bat_Volt_Cval_ASIL equal to 13 volts");

    REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw in_SG_IBS_LV_Frm1_AR2_a;
    Rte_TransformerError in_transformerError_j;

    in_transformerError_j.errorCode = 0;
    in_transformerError_j.transformerClass = 0;
    in_SG_IBS_LV_Frm1_AR2_a.Bat_Volt_Cval_ASIL = 13;


    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Read_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2).WillRepeatedly(DoAll(
        SetArgPointee
        < 0 >
        (
            in_SG_IBS_LV_Frm1_AR2_a),
        SetArgPointee
        < 1 >
        (
            in_transformerError_j),
        Return(
            RTE_E_OK)));

    /*Saving the rte write function*/
    REC_SG_IPDA_ATG06_AR5_ah8rspuhrniggq8ye17oc84th test_SG_IPDA_ATG06_AR5;
    EXPECT_CALL(*pIPDM_A_MAIN_SWC_mock, Rte_Write_P_SG_IPDA_ATG06_AR5_SG_IPDA_ATG06_AR5).WillRepeatedly(DoAll(
        SaveArgPointee
        < 0 >
        (
            &test_SG_IPDA_ATG06_AR5),
        Return(
            RTE_E_OK)));


    TESTSTEP("7", "Calling the Main function");
    EXPECTED("7", "Calling the Main function IPDM_A_MAIN_SWC_main() for 15 times to satisfy minimum time met criteria");

    /*Run for more than 10 iterations to met minimum time met cretiria*/
    for (int i = 0; i < 15; i++) {
        /*Calling main function*/
        IPDM_A_MAIN_SWC_main();
    }


    TESTSTEP("8", "Checking the Battery pack 1 Charge voltage signal");
    EXPECTED("8", "The signal aBSA_Pack1_ChrgVolt_Cval should be equal to {(13+13)/2} = 13");

    EXPECT_EQ(test_SG_IPDA_ATG06_AR5.aBSA_Pack1_ChrgVolt_Cval, 13);

    EXPECT_EQ_LOG("aBSA_Pack1_ChrgVolt_Cval", test_SG_IPDA_ATG06_AR5.aBSA_Pack1_ChrgVolt_Cval, 13);
}
