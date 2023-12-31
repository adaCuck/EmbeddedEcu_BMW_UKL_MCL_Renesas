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
 *          File:  TSC_Rmh.c
 *        Config:  EPS.dpa
 *   ECU-Project:  EPS
 *
 *     Generator:  MICROSAR RTE Generator Version 4.16.0
 *                 RTE Core Version 1.16.0
 *       License:  Unlimited license CBD1700369 for Nexteer Automotive Corporation
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_Rmh.h"
#include "TSC_Rmh.h"








Std_ReturnType TSC_Rmh_Rte_Read_RxRequestedMsgID_requestedMsgID(uint16 *data)
{
  return Rte_Read_RxRequestedMsgID_requestedMsgID(data);
}








     /* Client Server Interfaces: */
Std_ReturnType TSC_Rmh_Rte_Call_TriggerIPDUSend_Rmh_TriggerComIPDUSend(uint16 messageId)
{
  return Rte_Call_TriggerIPDUSend_Rmh_TriggerComIPDUSend(messageId);
}


     /* Service calls */


     /* Mode Interfaces */




     /* Inter-Runnable variables */







     /* Rmh */
      /* Rmh */



