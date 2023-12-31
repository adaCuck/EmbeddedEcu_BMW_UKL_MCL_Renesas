/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2006-2014 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_HwTq5Meas.h
 *     SW-C Type:  HwTq5Meas
 *  Generated at:  Mon Jun 13 11:50:44 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  Application header file for SW-C <HwTq5Meas> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HWTQ5MEAS_H
# define _RTE_HWTQ5MEAS_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# define RTE_PTR2ARRAYBASETYPE_PASSING

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_HwTq5Meas_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_HwTq5Meas
{
  /* PIM Handles section */
  P2VAR(HwTqOffsRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq5Offs_MirrorBlock; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq5PrevHwTq5; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq5PrevRollgCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(float32, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq5RawFastAdcBuf; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(uint8, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq5RawFastAdcIdxCntr; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  P2VAR(AnHwTqScaFacRec1, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_HwTq5Sca_MirrorBlock; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_HwTq5Meas, RTE_CONST, RTE_CONST) Rte_Inst_HwTq5Meas; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_HwTq5Meas, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_HwTq5_Val (0.0F)
# define Rte_InitValue_HwTq5FastAdcBuf_Val (0.0F)
# define Rte_InitValue_HwTq5Polarity_Val (1)
# define Rte_InitValue_HwTq5Qlfr_Val (0U)
# define Rte_InitValue_HwTq5RawAdc_Val (0.0F)
# define Rte_InitValue_HwTq5RawAdcAdcFaild_Logl (FALSE)
# define Rte_InitValue_HwTq5RawFastAdcAdcFaild_Logl (FALSE)
# define Rte_InitValue_HwTq5RollgCntr_Val (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTq5Meas_HwTq5FastAdcBuf_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQ5MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTq5Meas_HwTq5Polarity_Val(P2VAR(sint8, AUTOMATIC, RTE_HWTQ5MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTq5Meas_HwTq5RawAdc_Val(P2VAR(float32, AUTOMATIC, RTE_HWTQ5MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTq5Meas_HwTq5RawAdcAdcFaild_Logl(P2VAR(boolean, AUTOMATIC, RTE_HWTQ5MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_HwTq5Meas_HwTq5RawFastAdcAdcFaild_Logl(P2VAR(boolean, AUTOMATIC, RTE_HWTQ5MEAS_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTq5Meas_HwTq5_Val(float32 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTq5Meas_HwTq5Qlfr_Val(SigQlfr1 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_HwTq5Meas_HwTq5RollgCntr_Val(uint8 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq5Meas_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, P2VAR(SigQlfr1, AUTOMATIC, RTE_HWTQ5MEAS_APPL_VAR) NtcQlfr_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_HwTq5Meas_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTq5Meas_HwTq5MeasHwTqRngHiLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(float32, RTE_CODE) Rte_Prm_HwTq5Meas_HwTq5MeasHwTqRngLoLim_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwTq5Meas_HwTq5MeasHwTq5PrtclFltFailStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint16, RTE_CODE) Rte_Prm_HwTq5Meas_HwTq5MeasHwTq5PrtclFltPassStep_Val(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(boolean, RTE_CODE) Rte_Prm_HwTq5Meas_HwTq5MeasMovgAvrgFilEna_Logl(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_HwTq5FastAdcBuf_Val Rte_Read_HwTq5Meas_HwTq5FastAdcBuf_Val
# define Rte_Read_HwTq5Polarity_Val Rte_Read_HwTq5Meas_HwTq5Polarity_Val
# define Rte_Read_HwTq5RawAdc_Val Rte_Read_HwTq5Meas_HwTq5RawAdc_Val
# define Rte_Read_HwTq5RawAdcAdcFaild_Logl Rte_Read_HwTq5Meas_HwTq5RawAdcAdcFaild_Logl
# define Rte_Read_HwTq5RawFastAdcAdcFaild_Logl Rte_Read_HwTq5Meas_HwTq5RawFastAdcAdcFaild_Logl


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_HwTq5_Val Rte_Write_HwTq5Meas_HwTq5_Val
# define Rte_Write_HwTq5Qlfr_Val Rte_Write_HwTq5Meas_HwTq5Qlfr_Val
# define Rte_Write_HwTq5RollgCntr_Val Rte_Write_HwTq5Meas_HwTq5RollgCntr_Val


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_GetNtcQlfrSts_Oper Rte_Call_HwTq5Meas_GetNtcQlfrSts_Oper
# define Rte_Call_SetNtcSts_Oper Rte_Call_HwTq5Meas_SetNtcSts_Oper


/**********************************************************************************************************************
 * Rte_Prm (Calibration component calibration parameters)
 *********************************************************************************************************************/

# define Rte_Prm_HwTq5MeasHwTqRngHiLim_Val Rte_Prm_HwTq5Meas_HwTq5MeasHwTqRngHiLim_Val

# define Rte_Prm_HwTq5MeasHwTqRngLoLim_Val Rte_Prm_HwTq5Meas_HwTq5MeasHwTqRngLoLim_Val

# define Rte_Prm_HwTq5MeasHwTq5PrtclFltFailStep_Val Rte_Prm_HwTq5Meas_HwTq5MeasHwTq5PrtclFltFailStep_Val

# define Rte_Prm_HwTq5MeasHwTq5PrtclFltPassStep_Val Rte_Prm_HwTq5Meas_HwTq5MeasHwTq5PrtclFltPassStep_Val

# define Rte_Prm_HwTq5MeasMovgAvrgFilEna_Logl Rte_Prm_HwTq5Meas_HwTq5MeasMovgAvrgFilEna_Logl

/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_HwTq5PrevHwTq5() (Rte_Inst_HwTq5Meas->Pim_HwTq5PrevHwTq5) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq5RawFastAdcBuf() (Rte_Inst_HwTq5Meas->Pim_HwTq5RawFastAdcBuf) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq5PrevRollgCntr() (Rte_Inst_HwTq5Meas->Pim_HwTq5PrevRollgCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq5RawFastAdcIdxCntr() (Rte_Inst_HwTq5Meas->Pim_HwTq5RawFastAdcIdxCntr) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq5Offs_MirrorBlock() (Rte_Inst_HwTq5Meas->Pim_HwTq5Offs_MirrorBlock) /* PRQA S 3453 */ /* MD_MSR_19.7 */

# define Rte_Pim_HwTq5Sca_MirrorBlock() (Rte_Inst_HwTq5Meas->Pim_HwTq5Sca_MirrorBlock) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_HwTq5PrevHwTq5(void)
 *   float32 *Rte_Pim_HwTq5RawFastAdcBuf(void)
 *   uint8 *Rte_Pim_HwTq5PrevRollgCntr(void)
 *   uint8 *Rte_Pim_HwTq5RawFastAdcIdxCntr(void)
 *   HwTqOffsRec1 *Rte_Pim_HwTq5Offs_MirrorBlock(void)
 *   AnHwTqScaFacRec1 *Rte_Pim_HwTq5Sca_MirrorBlock(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_HwTq5MeasHwTqRngHiLim_Val(void)
 *   float32 Rte_Prm_HwTq5MeasHwTqRngLoLim_Val(void)
 *   uint16 Rte_Prm_HwTq5MeasHwTq5PrtclFltFailStep_Val(void)
 *   uint16 Rte_Prm_HwTq5MeasHwTq5PrtclFltPassStep_Val(void)
 *   boolean Rte_Prm_HwTq5MeasMovgAvrgFilEna_Logl(void)
 *
 *********************************************************************************************************************/


# define HwTq5Meas_START_SEC_CODE
# include "HwTq5Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq5AutTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq5AutTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq5AutTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq5AutTrim_Oper HwTq5AutTrim_Oper
FUNC(void, HwTq5Meas_CODE) HwTq5AutTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq5ClrSnsrSca_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq5ClrSnsrSca>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq5ClrSnsrSca_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq5ClrSnsrSca_Oper HwTq5ClrSnsrSca_Oper
FUNC(void, HwTq5Meas_CODE) HwTq5ClrSnsrSca_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq5ClrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq5ClrTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq5ClrTrim_Oper(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq5ClrTrim_Oper HwTq5ClrTrim_Oper
FUNC(void, HwTq5Meas_CODE) HwTq5ClrTrim_Oper(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq5MeasInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq5MeasInit1 HwTq5MeasInit1
FUNC(void, HwTq5Meas_CODE) HwTq5MeasInit1(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq5MeasPer2
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 2ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_HwTq5FastAdcBuf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq5Polarity_Val(sint8 *data)
 *   Std_ReturnType Rte_Read_HwTq5RawAdc_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq5RawAdcAdcFaild_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_HwTq5RawFastAdcAdcFaild_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_HwTq5_Val(float32 data)
 *   Std_ReturnType Rte_Write_HwTq5Qlfr_Val(SigQlfr1 data)
 *   Std_ReturnType Rte_Write_HwTq5RollgCntr_Val(uint8 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq5MeasPer2 HwTq5MeasPer2
FUNC(void, HwTq5Meas_CODE) HwTq5MeasPer2(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq5MeasPer3
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq5MeasPer3 HwTq5MeasPer3
FUNC(void, HwTq5Meas_CODE) HwTq5MeasPer3(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq5MeasPer4
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_SetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcSts_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq5MeasPer4 HwTq5MeasPer4
FUNC(void, HwTq5Meas_CODE) HwTq5MeasPer4(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq5ReadSnsrSca_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq5ReadSnsrSca>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq5ReadSnsrSca_Oper(float32 *HwTqReadScaData_Arg, boolean *HwTqScaPrfmdStsData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq5ReadSnsrSca_Oper HwTq5ReadSnsrSca_Oper
FUNC(void, HwTq5Meas_CODE) HwTq5ReadSnsrSca_Oper(P2VAR(float32, AUTOMATIC, RTE_HWTQ5MEAS_APPL_VAR) HwTqReadScaData_Arg, P2VAR(boolean, AUTOMATIC, RTE_HWTQ5MEAS_APPL_VAR) HwTqScaPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq5ReadTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq5ReadTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq5ReadTrim_Oper(float32 *HwTqReadTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq5ReadTrim_Oper HwTq5ReadTrim_Oper
FUNC(void, HwTq5Meas_CODE) HwTq5ReadTrim_Oper(P2VAR(float32, AUTOMATIC, RTE_HWTQ5MEAS_APPL_VAR) HwTqReadTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq5TrimPrfmdSts_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq5TrimPrfmdSts>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq5TrimPrfmdSts_Oper(boolean *HwTqOffsTrimPrfmdStsData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq5TrimPrfmdSts_Oper HwTq5TrimPrfmdSts_Oper
FUNC(void, HwTq5Meas_CODE) HwTq5TrimPrfmdSts_Oper(P2VAR(boolean, AUTOMATIC, RTE_HWTQ5MEAS_APPL_VAR) HwTqOffsTrimPrfmdStsData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq5WrSnsrSca_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq5WrSnsrSca>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq5WrSnsrSca_Oper(float32 HwTqScaVal_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq5WrSnsrSca_Oper HwTq5WrSnsrSca_Oper
FUNC(void, HwTq5Meas_CODE) HwTq5WrSnsrSca_Oper(float32 HwTqScaVal_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: HwTq5WrTrim_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <HwTq5WrTrim>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void HwTq5WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_HwTq5WrTrim_Oper HwTq5WrTrim_Oper
FUNC(void, HwTq5Meas_CODE) HwTq5WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define HwTq5Meas_STOP_SEC_CODE
# include "HwTq5Meas_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK (1U)

# define RTE_E_SetNtcSts_PortIf1_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 1465828393
#    error "The magic number of the generated file <C:/Component/ES221A_HwTq5Meas_Impl/tools/contract/Rte_HwTq5Meas.h> is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 1465828393
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* _RTE_HWTQ5MEAS_H */

#include "Rte_Stubs.h"
