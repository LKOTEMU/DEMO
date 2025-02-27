
/*******************************************************************************************/
/**
 *  This file has been generated via GenMockScript.py script
 *  @file    AS_LS_Gen_mock.h
 *
 *  @brief   This file contains mock class header required for AS_LS_Gen.c unit testing.
 *
********************************************************************************************/
#pragma once
/*GMock Header*/
#include "gmock/gmock.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "IPDM_A_MAIN_A6_f.h"
#include "Rte_IPDM_A_MAIN_A6.h"

#ifdef __cplusplus
}
#endif


/*Class containing functions that needs to be mocked for AS_LS_Gen.c file*/
class IPDM_A_MAIN_SWC_mock {
public:
	virtual ~IPDM_A_MAIN_SWC_mock() {
	};

	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_WHD_ResAssertThreshold_Ohm, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_AltEnergyMgmtEnabled, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_WHDFaults_Enable, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_AltPowerLimitHysteresis_W, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_SysMode_PrechargeTimeout_msec, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_AltPowerLimitMargin_W, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_SysMode_PrechargeMaxAttempt_Count, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_AltSpeedEngRunningThresholdHigh_RPM, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_SysMode_MinPrechargeTime_msec, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_AltSpeedEngRunningThresholdLow_RPM, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_SysMode_MinInitTime_msec, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_ShorePower_LV1_ThreshUpper_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModeGen_DesVolt_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_ShorePower_LV1_ThreshLower_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModeGen_MaxCurrLim_A, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_ShorePower_LV1_Current_Lim_A, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModeGen_MaxVoltLim_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_ShorePowerVerified_DCA_minLS_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModeGen_MinCurrLim_A, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_RunningVerified_DCA_minLS_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModeGen_MinVoltLim_V, ());
	MOCK_METHOD(uint8, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModeGen_OperMdDes_enm, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModeGen_TqDes_Nm, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModeGen_TqMax_Nm, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModeGen_TqMin_Nm, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModePreChrg_DesVolt_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModePreChrg_MaxCurrLim_A, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModePreChrg_MaxVoltLim_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModePreChrg_MinCurrLim_A, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModePreChrg_MinVoltLim_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_MismatchFaults_Enable, ());
	MOCK_METHOD(uint8, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModePreChrg_OperMdDes_enm, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_MSCD_MainSwHealThreshold_mV, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModePreChrg_TqDes_Nm, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_MSCD_MainSwFaultThreshold_mV, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModePreChrg_TqMax_Nm, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_MSCD_EnableMainSwitchClosedDisallow, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Alt_ModePreChrg_TqMin_Nm, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_MSCD_BatAllowableDischargeLimit_Ah, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BIRE_BuckRippleCMDMaxTime_S, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BIRE_BuckRippleCMDRestTime_S, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_FaultMonitoringStartupDelay_msec, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BIRE_EnableBatIntResisEval, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BIRE_MaxAllowTimeSinceLastCalc_S, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EngineRunningThresholdHigh_RPM, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BTM_EnableBatThermMngmt, ());
	MOCK_METHOD(uint8, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EngSpeedForEngRunnCalc_enabled, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BTM_TempThresholdDisallow_C, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EngRunning_True_minTime_msec, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BTM_TempThresholdHigh_C, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EngRunning_False_minTime_msec, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BTM_TempThresholdLow_C, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EnergyMgmtEnabled, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BT_ChrgActvSOCThresh_percent, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EM_VMaintainTime_msec, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BT_ChrgInactvSOCThresh_percent, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EM_StartupDelayTime_msec, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BT_EnableBatteryTending, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EM_PwrLimMinTime_msec, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BatteryFaults_Enable, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EM_EngSpdMaxAltPwrX5_W, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EM_EngSpdMaxAltPwrX4_W, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EM_EngSpdMaxAltPwrX3_W, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EM_EngSpdMaxAltPwrX2_W, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BatterySOH_FullChargeDet_Current_Lim_A, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EM_EngSpdMaxAltPwrX1_W, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BatterySOH_FullChargeDet_MinVolt_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EM_DcdcVSlewRate_mVpSec, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_EM_DcdcMinVSetpoint_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_E2E_LIN_IP_Enable, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BatterySOH_ReplacementTiming_days, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_E2E_CAN_IP_Enable, ());
	MOCK_METHOD(uint8, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BatterySOH_TempViol_ThreshHigh_C, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_E2EFaults_Enable, ());
	MOCK_METHOD(uint8, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_BatterySOH_TempViol_ThreshLow_C, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCDC_ShorePwrCritMet_minTime_msec, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_001, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCDC_ShorePwrCritMet_HS_V_Low, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_002, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCDC_ShorePwrCritMet_HS_V_High, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_003, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCDCPowerLimitMargin_W, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCDCPowerLimitHysteresis_W, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_005, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCDCEnergyMgmtEnabled, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_006, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCA_ModeShorePwr_CmdLSV_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_007, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCA_ModeShorePwr_CmdLSCurr_A, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_008, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCA_ModeShorePwr_CmdHSV_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_009, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCA_ModePreChrg_CmdLSV_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_010, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCA_ModePreChrg_CmdLSCurr_A, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCA_ModePreChrg_CmdHSV_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCA_ModeChangeRunDelay_msec, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_013, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCA_ModeBuck_CmdLSV_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_014, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCA_ModeBuck_CmdLSCurr_A, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_015, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCA_ModeBuck_CmdHSV_V, ());
	MOCK_METHOD(uint8, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCA_CurrLim_SlewRate_AmpPerSec, ());
	MOCK_METHOD(uint8, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCA_CurrLim_RampingEnabled, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_DCAPrechargeVerified_minHS_V, ());
	MOCK_METHOD(uint16, Rte_Prm_IPDM_A_MAIN_A6_R_parameters_K_IPDMA_Cal_020, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_CPC_ATG01_AR5_SG_CPC_ATG01_AR5, (REC_SG_CPC_ATG01_AR5_bakqhg6dwk921vsfhcl5m6kh
		* SG_CPC_ATG01_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_CPC_ATG01_AR5_SG_CPC_ATG01_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_DCA_ATG02_AR2_SG_DCA_ATG02_AR2, (REC_SG_DCA_ATG02_AR2_5l78ok150rfj1o1ym2g6wr553
		* SG_DCA_ATG02_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_DCA_ATG02_AR2_SG_DCA_ATG02_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_DCA_ATG03_AR2_SG_DCA_ATG03_AR2, (REC_SG_DCA_ATG03_AR2_6y60zfq3ac6xgnje84dubo5xz
		* SG_DCA_ATG03_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_DCA_ATG03_AR2_SG_DCA_ATG03_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_DCA_ATG04_SG_DCA_ATG04, (REC_SG_DCA_ATG04_euk2owpx15avykqntci714wbp*
		SG_DCA_ATG04));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_DCA_ATG04_SG_DCA_ATG04, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_DCA_ATG05_AR2_SG_DCA_ATG05_AR2, (REC_SG_DCA_ATG05_AR2_cp6wyrd9cg7ec7y2w3khz1gyt
		* SG_DCA_ATG05_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_DCA_ATG05_AR2_SG_DCA_ATG05_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_DCB_ATG03_AR2_SG_DCB_ATG03_AR2, (REC_SG_DCB_ATG03_AR2_1hpstplriukdblrgry0860d7o
		* SG_DCB_ATG03_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_DCB_ATG03_AR2_SG_DCB_ATG03_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_DCB_ATG05_AR2_SG_DCB_ATG05_AR2, (REC_SG_DCB_ATG05_AR2_cp6wyrd9cg7ec7y2w3khz1gyt
		* SG_DCB_ATG05_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_DCB_ATG05_AR2_SG_DCB_ATG05_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_DCC_ATG03_AR2_SG_DCC_ATG03_AR2, (REC_SG_DCC_ATG03_AR2_1hpstplriukdblrgry0860d7o
		* SG_DCC_ATG03_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_DCC_ATG03_AR2_SG_DCC_ATG03_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_DCC_ATG05_AR2_SG_DCC_ATG05_AR2, (REC_SG_DCC_ATG05_AR2_cp6wyrd9cg7ec7y2w3khz1gyt
		* SG_DCC_ATG05_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_DCC_ATG05_AR2_SG_DCC_ATG05_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2, (REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw
		* SG_IBS_LV_Frm1_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B1_SG_IBS_LV_Frm1_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2, (REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw
		* SG_IBS_LV_Frm1_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B2_SG_IBS_LV_Frm1_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2, (REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw
		* SG_IBS_LV_Frm1_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B3_SG_IBS_LV_Frm1_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2, (REC_SG_IBS_LV_Frm1_AR2_7gfvmgxwv1gpmw8c3khdl41nw
		* SG_IBS_LV_Frm1_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm1_AR2_B4_SG_IBS_LV_Frm1_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2, (REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl
		* SG_IBS_LV_Frm2_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B1_SG_IBS_LV_Frm2_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2, (REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl
		* SG_IBS_LV_Frm2_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B2_SG_IBS_LV_Frm2_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2, (REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl
		* SG_IBS_LV_Frm2_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B3_SG_IBS_LV_Frm2_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2, (REC_SG_IBS_LV_Frm2_AR2_5ella88r9jsc72fnnq5iugtsl
		* SG_IBS_LV_Frm2_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm2_AR2_B4_SG_IBS_LV_Frm2_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2, (REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl
		* SG_IBS_LV_Frm3_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B1_SG_IBS_LV_Frm3_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2, (REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl
		* SG_IBS_LV_Frm3_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B2_SG_IBS_LV_Frm3_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B3_SG_IBS_LV_Frm3_AR2, (REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl
		* SG_IBS_LV_Frm3_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B3_SG_IBS_LV_Frm3_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B4_SG_IBS_LV_Frm3_AR2, (REC_SG_IBS_LV_Frm3_AR2_5ella88r9jsc72fnnq5iugtsl
		* SG_IBS_LV_Frm3_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm3_AR2_B4_SG_IBS_LV_Frm3_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2, (REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv
		* SG_IBS_LV_Frm4_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B1_SG_IBS_LV_Frm4_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2, (REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv
		* SG_IBS_LV_Frm4_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B2_SG_IBS_LV_Frm4_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2, (REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv
		* SG_IBS_LV_Frm4_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B3_SG_IBS_LV_Frm4_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2, (REC_SG_IBS_LV_Frm4_AR2_dgfi1nrxtb0voy6rb7ybeonmv
		* SG_IBS_LV_Frm4_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm4_AR2_B4_SG_IBS_LV_Frm4_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2, (REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl
		* SG_IBS_LV_Frm5_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B1_SG_IBS_LV_Frm5_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2, (REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl
		* SG_IBS_LV_Frm5_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B2_SG_IBS_LV_Frm5_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2, (REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl
		* SG_IBS_LV_Frm5_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B3_SG_IBS_LV_Frm5_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2, (REC_SG_IBS_LV_Frm5_AR2_5ella88r9jsc72fnnq5iugtsl
		* SG_IBS_LV_Frm5_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm5_AR2_B4_SG_IBS_LV_Frm5_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2, (REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd
		* SG_IBS_LV_Frm6_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B1_SG_IBS_LV_Frm6_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2, (REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd
		* SG_IBS_LV_Frm6_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B2_SG_IBS_LV_Frm6_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2, (REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd
		* SG_IBS_LV_Frm6_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B3_SG_IBS_LV_Frm6_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2, (REC_SG_IBS_LV_Frm6_AR2_1lbtoaaebi5n2qvdq20f1phhd
		* SG_IBS_LV_Frm6_AR2, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IBS_LV_Frm6_AR2_B4_SG_IBS_LV_Frm6_AR2, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IPDB_ATG03_AR5_SG_IPDB_ATG03_AR5, (REC_SG_IPDB_ATG03_AR5_cdbcv2e4fln785cu9k2ifiyom
		* SG_IPDB_ATG03_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IPDB_ATG03_AR5_SG_IPDB_ATG03_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IPDB_ATG04_AR5_SG_IPDB_ATG04_AR5, (REC_SG_IPDB_ATG04_AR5_17ph8uz6z6d82ixhbz9b7t01i
		* SG_IPDB_ATG04_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IPDB_ATG04_AR5_SG_IPDB_ATG04_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IPDB_ATG06_AR5_SG_IPDB_ATG06_AR5, (REC_SG_IPDB_ATG06_AR5_25ol1s1r6xzthcn8w4nysvwjk
		* SG_IPDB_ATG06_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IPDB_ATG06_AR5_SG_IPDB_ATG06_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IPDB_ATG07_AR5_SG_IPDB_ATG07_AR5, (REC_SG_IPDB_ATG07_AR5_71qitcgx3ou4tfzd7u41inyto
		* SG_IPDB_ATG07_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IPDB_ATG07_AR5_SG_IPDB_ATG07_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IPDB_ATG11_AR5_SG_IPDB_ATG11_AR5, (REC_SG_IPDB_ATG11_AR5_a0o8mb736i8o801okk3otz127
		* SG_IPDB_ATG11_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IPDB_ATG11_AR5_SG_IPDB_ATG11_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IPDB_ATG12_AR5_SG_IPDB_ATG12_AR5, (REC_SG_IPDB_ATG12_AR5_bc2bvmrobs2ta8bbnxjl4k8hf
		* SG_IPDB_ATG12_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IPDB_ATG12_AR5_SG_IPDB_ATG12_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IPDC_ATG02_AR5_SG_IPDC_ATG02_AR5, (REC_SG_IPDC_ATG02_AR5_5tmgeuu1b5h4pccbgbuehgngq
		* SG_IPDC_ATG02_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IPDC_ATG02_AR5_SG_IPDC_ATG02_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IPDC_ATG04_AR5_SG_IPDC_ATG04_AR5, (REC_SG_IPDC_ATG04_AR5_10a07bjjaosv67twmvyz31gzn
		* SG_IPDC_ATG04_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IPDC_ATG04_AR5_SG_IPDC_ATG04_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IPDC_ATG05_AR5_SG_IPDC_ATG05_AR5, (REC_SG_IPDC_ATG05_AR5_1kv2r7s7skdf23kgfwpfc78ar
		* SG_IPDC_ATG05_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IPDC_ATG05_AR5_SG_IPDC_ATG05_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_IgnSw_E2E_SAM_Stat_Pkt_SG_IgnSw_E2E_SAM_Stat_Pkt, (REC_SG_IgnSw_E2E_SAM_Stat_Pkt_ednqef5xiht6lvtipf4ne4e5c
		* SG_IgnSw_E2E_SAM_Stat_Pkt, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_IgnSw_E2E_SAM_Stat_Pkt_SG_IgnSw_E2E_SAM_Stat_Pkt, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_SATP_ATG01_AR5_SG_SATP_ATG01_AR5, (REC_SG_SATP_ATG01_AR5_4sw5kcn9x0okqqd3k0f43iiul
		* SG_SATP_ATG01_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_SATP_ATG01_AR5_SG_SATP_ATG01_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_SBSPr_ATG01_AR5_SG_SBSPr_ATG01_AR5, (REC_SG_SBSPr_ATG01_AR5_9nsfccyq0pr9qovx7uuc3cml
		* SG_SBSPr_ATG01_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_SBSPr_ATG01_AR5_SG_SBSPr_ATG01_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_SDS_ATG16_SG_SDS_ATG16_AR5, (REC_SG_SDS_ATG16_AR5_gu3u4jh3bytmkbxs4uuulymt
		* SG_SDS_ATG16_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_SDS_ATG16_SG_SDS_ATG16_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Read_IPDM_A_MAIN_A6_R_SG_aSBSP_C04_AR5_SG_aSBSP_C04_AR5, (REC_SG_aSBSP_C04_AR5_7s98213aes7obk2lpmo2ya1hl
		* SG_aSBSP_C04_AR5, Std_TransformerError* transformerError));
	MOCK_METHOD(boolean, Rte_IsUpdated_IPDM_A_MAIN_A6_R_SG_aSBSP_C04_AR5_SG_aSBSP_C04_AR5, ());
	MOCK_METHOD(Std_ReturnType, Rte_Write_IPDM_A_MAIN_A6_P_SG_IPDA_ATG00_AR5_SG_IPDA_ATG00_AR5, (const
		REC_SG_IPDA_ATG00_AR5_7ao8ijlw29pusdy5w2qg1i91v* SG_IPDA_ATG00_AR5));
	MOCK_METHOD(Std_ReturnType, Rte_Write_IPDM_A_MAIN_A6_P_SG_IPDA_ATG06_AR5_SG_IPDA_ATG06_AR5, (const
		REC_SG_IPDA_ATG06_AR5_ah8rspuhrniggq8ye17oc84th* SG_IPDA_ATG06_AR5));
	MOCK_METHOD(Std_ReturnType, Rte_Write_IPDM_A_MAIN_A6_P_SG_IPDA_ATG07_AR5_SG_IPDA_ATG07_AR5, (const
		REC_SG_IPDA_ATG07_AR5_715oq4d3c0w2i5edhdwez9llu* SG_IPDA_ATG07_AR5));
	MOCK_METHOD(Std_ReturnType, Rte_Write_IPDM_A_MAIN_A6_P_SG_IPDA_ATG08_AR2_SG_IPDA_ATG08_AR2, (const
		REC_SG_IPDA_ATG08_AR2_e0z8qpxhhe9d1ls5177zaegi8* SG_IPDA_ATG08_AR2));
	MOCK_METHOD(Std_ReturnType, Rte_Write_IPDM_A_MAIN_A6_P_SG_IPDA_ATG09_AR5_SG_IPDA_ATG09_AR5, (const
		REC_SG_IPDA_ATG09_AR5_r9cuozm1n9x522jz743obnx* SG_IPDA_ATG09_AR5));
	MOCK_METHOD(Std_ReturnType, Rte_Write_IPDM_A_MAIN_A6_P_SG_IPDA_ATG10_AR5_SG_IPDA_ATG10_AR5, (const
		REC_SG_IPDA_ATG10_AR5_5iwzkjz6hgvlrvtielgxmpe5r* SG_IPDA_ATG10_AR5));
	MOCK_METHOD(Std_ReturnType, Rte_Write_IPDM_A_MAIN_A6_P_SG_IPDA_ATG11_AR5_SG_IPDA_ATG11_AR5, (const
		REC_SG_IPDA_ATG11_AR5_a9hi2nc7m8rvtj68l8fs2k26y* SG_IPDA_ATG11_AR5));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_ALT_DCA_HS_I_Mismatch_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_ALT_DCA_HS_I_Mismatch_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_ALT_DCA_HS_V_Mismatch_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_ALT_DCA_HS_V_Mismatch_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_Alt_Eng_RPM_Mismatch_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_Alt_Eng_RPM_Mismatch_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_Batt1_SOH_Low_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_Batt1_SOH_Low_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_Batt2_SOH_Low_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_Batt2_SOH_Low_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_Batt3_SOH_Low_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_Batt3_SOH_Low_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_Batt4_SOH_Low_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_Batt4_SOH_Low_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_Batt_Pack_Temp_Mismatch_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_Batt_Pack_Temp_Mismatch_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_CPC_ATG01_AR5_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_CPC_ATG01_AR5_E2E_Err_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCA_ATG02_AR2_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCA_ATG02_AR2_E2E_Err_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCA_ATG03_AR2_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCA_ATG03_AR2_E2E_Err_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCA_ATG05_AR2_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCA_ATG05_AR2_E2E_Err_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCA_DCB_HS_V_Mismatch_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCA_DCB_HS_V_Mismatch_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCA_DCC_HS_V_Mismatch_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCA_DCC_HS_V_Mismatch_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCA_LVABattPack2_V_Mismatch_GetEventStatus, (Dem_EventStatusExtendedType
		* EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCA_LVABattPack2_V_Mismatch_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCB_ATG03_AR2_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCB_ATG03_AR2_E2E_Err_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCB_ATG05_AR2_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCB_ATG05_AR2_E2E_Err_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCC_ATG03_AR2_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCC_ATG03_AR2_E2E_Err_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCC_ATG05_AR2_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_DCC_ATG05_AR2_E2E_Err_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS1_AR2_ERR_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS1_AR2_ERR_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS1_Disconnect_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS1_Disconnect_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS1_General_Fail_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS1_General_Fail_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS1_LIN_ERR_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS1_LIN_ERR_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS1_UIT_ERR_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS1_UIT_ERR_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS2_AR2_ERR_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS2_AR2_ERR_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS2_Disconnect_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS2_Disconnect_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS2_General_Fail_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS2_General_Fail_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS2_LIN_ERR_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS2_LIN_ERR_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS2_UIT_ERR_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS2_UIT_ERR_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS3_AR2_ERR_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS3_AR2_ERR_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS3_Disconnect_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS3_Disconnect_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS3_General_Fail_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS3_General_Fail_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS3_LIN_ERR_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS3_LIN_ERR_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS3_UIT_ERR_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS3_UIT_ERR_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS4_AR2_ERR_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS4_AR2_ERR_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS4_Disconnect_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS4_Disconnect_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS4_General_Fail_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS4_General_Fail_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS4_LIN_ERR_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS4_LIN_ERR_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS4_UIT_ERR_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IBS4_UIT_ERR_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDB_ATG03_AR5_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDB_ATG03_AR5_E2E_Err_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDB_ATG04_AR5_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDB_ATG04_AR5_E2E_Err_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDB_ATG07_AR5_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDB_ATG07_AR5_E2E_Err_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDB_ATG11_AR5_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDB_ATG11_AR5_E2E_Err_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDB_ATG12_AR5_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDB_ATG12_AR5_E2E_Err_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDC_ATG02_AR5_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDC_ATG02_AR5_E2E_Err_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDC_ATG04_AR5_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDC_ATG04_AR5_E2E_Err_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDC_ATG05_AR5_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDC_ATG05_AR5_E2E_Err_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDMA_DCA_HS_V_SetpointMismatch_GetEventStatus, (Dem_EventStatusExtendedType
		* EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDMA_DCA_HS_V_SetpointMismatch_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDMA_DCA_LS_V_SetpointMismatch_GetEventStatus, (Dem_EventStatusExtendedType
		* EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDMA_DCA_LS_V_SetpointMismatch_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDM_AB_SysMode_Mismatch_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDM_AB_SysMode_Mismatch_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDM_AC_SysMode_Mismatch_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IPDM_AC_SysMode_Mismatch_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IgnSw_E2E_SAM_Stat_Pkt_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType
		* EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_IgnSw_E2E_SAM_Stat_Pkt_E2E_Err_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_LVA_CritBatt_LowVolt_Warning_GetEventStatus, (Dem_EventStatusExtendedType
		* EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_LVA_CritBatt_LowVolt_Warning_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_LVA_SDSBatt_LowVolt_Warning_GetEventStatus, (Dem_EventStatusExtendedType
		* EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_LVA_SDSBatt_LowVolt_Warning_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_PowerNet_SystemFaulted_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_PowerNet_SystemFaulted_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_SATP_ATG01_AR5_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_SATP_ATG01_AR5_E2E_Err_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_SBSPr_ATG01_AR5_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_SBSPr_ATG01_AR5_E2E_Err_SetEventStatus, (Dem_EventStatusType
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_SDS_ATG16_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_SDS_ATG16_E2E_Err_SetEventStatus, (Dem_EventStatusType EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_aSBSP_C04_AR5_E2E_Err_GetEventStatus, (Dem_EventStatusExtendedType*
		EventStatus));
	MOCK_METHOD(Std_ReturnType, Rte_Call_IPDM_A_MAIN_A6_DTC_aSBSP_C04_AR5_E2E_Err_SetEventStatus, (Dem_EventStatusType EventStatus));
};