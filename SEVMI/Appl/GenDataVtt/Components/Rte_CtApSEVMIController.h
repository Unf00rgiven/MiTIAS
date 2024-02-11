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
 *          File:  Rte_CtApSEVMIController.h
 *        Config:  MyECU.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtApSEVMIController>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTAPSEVMICONTROLLER_H
# define _RTE_CTAPSEVMICONTROLLER_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CtApSEVMIController_Type.h"
# include "Rte_DataHandleType.h"

# include "Rte_Hook.h"

# ifndef RTE_CORE

/**********************************************************************************************************************
 * extern declaration of RTE buffers for optimized macro implementation
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(IdtCharging, RTE_VAR_NOINIT) Rte_CpSaSolarPanelControl_PpCharging_DeCharging; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(IdtIgnition, RTE_VAR_NOINIT) Rte_CpSaEngineControl_PpIgnition_DeIgnition; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(IdtLock, RTE_VAR_NOINIT) Rte_CpSaLockControl_PpLock_DeLock; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(IdtSunlight, RTE_VAR_NOINIT) Rte_CpSaSunlightPresence_PpSunlight_DeSunlight; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_PpBatteryStatus_DeBatteryStatus (70U)
#  define Rte_InitValue_PpCharging_DeCharging (FALSE)
#  define Rte_InitValue_PpIgnition_DeIgnition (FALSE)
#  define Rte_InitValue_PpLock_DeLock (FALSE)
#  define Rte_InitValue_PpSpeedLimit_DeSpeedLimit (180U)
#  define Rte_InitValue_PpSunlight_DeSunlight (70U)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for Mode Management
 *********************************************************************************************************************/
#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint8, RTE_VAR_NOINIT) Rte_ModeMachine_CtSaBatteryModeManager_PpBatteryMode_BatteryModes; /* PRQA S 0850 */ /* MD_MSR_19.8 */
extern VAR(uint8, RTE_VAR_NOINIT) Rte_ModeMachine_ComM_UM_USR_CHNL_CAN00_currentMode; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */



# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(IdtLock, RTE_VAR_NOINIT) Rte_Irv_CpApSEVMIController_IrvLockStateOld; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus(IdtBatteryStatus data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit(IdtSpeedLimit data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApSEVMIController_PpSpeed_ReadChannel(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */


# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_PpCharging_DeCharging Rte_Read_CtApSEVMIController_PpCharging_DeCharging
#  define Rte_Read_CtApSEVMIController_PpCharging_DeCharging(data) (*(data) = Rte_CpSaSolarPanelControl_PpCharging_DeCharging, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PpIgnition_DeIgnition Rte_Read_CtApSEVMIController_PpIgnition_DeIgnition
#  define Rte_Read_CtApSEVMIController_PpIgnition_DeIgnition(data) (*(data) = Rte_CpSaEngineControl_PpIgnition_DeIgnition, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PpLock_DeLock Rte_Read_CtApSEVMIController_PpLock_DeLock
#  define Rte_Read_CtApSEVMIController_PpLock_DeLock(data) (*(data) = Rte_CpSaLockControl_PpLock_DeLock, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Read_PpSunlight_DeSunlight Rte_Read_CtApSEVMIController_PpSunlight_DeSunlight
#  define Rte_Read_CtApSEVMIController_PpSunlight_DeSunlight(data) (*(data) = Rte_CpSaSunlightPresence_PpSunlight_DeSunlight, ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_PpBatteryStatus_DeBatteryStatus Rte_Write_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus
#  define Rte_Write_PpDisplayState_DeLockingWriteRequestPending Rte_Write_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending
#  define Rte_Write_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending(data) (RTE_E_OK) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Write_PpSpeedLimit_DeSpeedLimit Rte_Write_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Mode_PpBatteryMode_BatteryModes() (Rte_ModeMachine_CtSaBatteryModeManager_PpBatteryMode_BatteryModes) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define Rte_Mode_PpComMCurrentModeSEVMIController_currentMode() (Rte_ModeMachine_ComM_UM_USR_CHNL_CAN00_currentMode) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (mapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_PpSpeed_ReadChannel Rte_Call_CtApSEVMIController_PpSpeed_ReadChannel


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_COMM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_COMM_APPL_CODE) ComM_RequestComMode(ComM_UserHandleType parg0, ComM_ModeType ComMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_COMM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PpComMUserRequestCtApSEVMIController_RequestComMode(arg1) (ComM_RequestComMode((ComM_UserHandleType)0, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_GetErrorStatus(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVM_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PpNvMLockingCtApMySwc_GetErrorStatus(arg1) (NvM_GetErrorStatus((NvM_BlockIdType)3, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
#  define RTE_START_SEC_NVM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(Std_ReturnType, RTE_NVM_APPL_CODE) NvM_WriteBlock(NvM_BlockIdType parg0, dtRef_const_VOID SrcPtr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_NVM_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PpNvMLockingCtApMySwc_WriteBlock(arg1) (NvM_WriteBlock((NvM_BlockIdType)3, arg1)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

/* PRQA S 3458 L1 */ /* MD_MSR_19.4 */
#  define Rte_Enter_ExBatteryStatus() \
  { \
  }
/* PRQA L:L1 */

/* PRQA S 3458 L1 */ /* MD_MSR_19.4 */
#  define Rte_Exit_ExBatteryStatus() \
  { \
  }
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_RCtApSEVMI_IrvLockStateOld() \
  Rte_Irv_CpApSEVMIController_IrvLockStateOld
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_RCtApSEVMI_IrvLockStateOld(data) \
  (Rte_Irv_CpApSEVMIController_IrvLockStateOld = (data))
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

#  ifndef RTE_MICROSAR_PIM_EXPORT
#   define RTE_START_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(IdtLock, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Rte_CpApSEVMIController_SnNvMPimDoorLock_MirrorBlock; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#   define RTE_STOP_SEC_VAR_DEFAULT_RTE_PIM_GROUP_UNSPECIFIED
#   include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  endif

#  define Rte_Pim_SnNvMPimDoorLock_MirrorBlock() \
  (&Rte_CpApSEVMIController_SnNvMPimDoorLock_MirrorBlock) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CtApSEVMIController_START_SEC_CODE
# include "CtApSEVMIController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished
#  define RTE_RUNNABLE_RCtApMySwc_Init RCtApMySwc_Init
#  define RTE_RUNNABLE_RCtApSEVMI RCtApSEVMI
#  define RTE_RUNNABLE_RCtBatteryMode RCtBatteryMode
# endif

FUNC(void, CtApSEVMIController_CODE) PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, CtApSEVMIController_CODE) RCtApMySwc_Init(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CtApSEVMIController_CODE) RCtApSEVMI(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CtApSEVMIController_CODE) RCtBatteryMode(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CtApSEVMIController_STOP_SEC_CODE
# include "CtApSEVMIController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_ComM_UserRequest_E_MODE_LIMITATION (2U)

#  define RTE_E_ComM_UserRequest_E_NOT_OK (1U)

#  define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTAPSEVMICONTROLLER_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
