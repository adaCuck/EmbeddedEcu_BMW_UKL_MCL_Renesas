/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  TSC_DiagcMgrProxyAppl8.h
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Header of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/


/** Sender receiver - explicit read services */
Std_ReturnType TSC_DiagcMgrProxyAppl8_Rte_Read_ClrDiagcFlgProxy_Val(uint8 *data);

/** Client server interfaces */
Std_ReturnType TSC_DiagcMgrProxyAppl8_Rte_Call_DiagcMgrIninCore_Oper(uint8 ApplIdx_Arg, uint8 NtcInfoArySize_Arg, NtcInfoRec4 *NtcInfoAry_Arg, DiagcDataRec2 *DiagcData_Arg, DiagcDataRec2 *ProxySetNtcData_Arg);
Std_ReturnType TSC_DiagcMgrProxyAppl8_Rte_Call_GetNtcActvCore_Oper(NtcNr1 NtcNr_Arg, boolean *NtcActv_Arg);
Std_ReturnType TSC_DiagcMgrProxyAppl8_Rte_Call_GetNtcQlfrStsCore_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg);
Std_ReturnType TSC_DiagcMgrProxyAppl8_Rte_Call_GetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg);
Std_ReturnType TSC_DiagcMgrProxyAppl8_Rte_Call_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 *DiagcData_Arg, DiagcDataRec2 *ProxySetNtcData_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg);
Std_ReturnType TSC_DiagcMgrProxyAppl8_Rte_Call_SetNtcStsCore_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, DiagcDataRec2 *DiagcData_Arg, DiagcDataRec2 *ProxySetNtcData_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *NtcInfoDebCntr_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg, boolean SpclSnpshtDataPrsnt_Arg);

/** Calibration Component Calibration Parameters */
Ary1D_u16_512 * TSC_DiagcMgrProxyAppl8_Rte_Prm_DiagcMgrFltResp_Ary1D(void);

/** Exclusive Areas */
void TSC_DiagcMgrProxyAppl8_Rte_Enter_DiagcMgrProxyAppl8(void);
void TSC_DiagcMgrProxyAppl8_Rte_Exit_DiagcMgrProxyAppl8(void);

/** Per Instance Memories */
uint8 *TSC_DiagcMgrProxyAppl8_Rte_Pim_PrevClrNtcFlg8(void);
NtcInfoRec4 *TSC_DiagcMgrProxyAppl8_Rte_Pim_DiagcMgrNtcInfo8Ary(void);
sint16 *TSC_DiagcMgrProxyAppl8_Rte_Pim_DiagcMgrNtcInfo8DebCntrAry(void);
DiagcDataRec2 *TSC_DiagcMgrProxyAppl8_Rte_Pim_DiagcData8(void);
DiagcDataRec2 *TSC_DiagcMgrProxyAppl8_Rte_Pim_ProxySetNtcData8(void);



