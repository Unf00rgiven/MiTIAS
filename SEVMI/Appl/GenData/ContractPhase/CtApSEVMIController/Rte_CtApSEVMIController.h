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
 *        Config:  C:/nit-au-03/AUTOSAR_Exercises/AFS/MyECU.dpa
 *     SW-C Type:  CtApSEVMIController
 *  Generated at:  Sat Feb 10 20:02:08 2024
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtApSEVMIController> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTAPSEVMICONTROLLER_H
# define _RTE_CTAPSEVMICONTROLLER_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CtApSEVMIController_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtApSEVMIController
{
  /* PIM Handles section */
  P2VAR(IdtLock, TYPEDEF, RTE_VAR_DEFAULT_RTE_PIM_GROUP) Pim_SnNvMPimDoorLock_MirrorBlock; /* PRQA S 0850 */ /* MD_MSR_19.8 */
  /* Vendor specific section */
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtApSEVMIController, RTE_CONST, RTE_CONST) Rte_Inst_CtApSEVMIController; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtApSEVMIController, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_PpBatteryStatus_DeBatteryStatus (70U)
# define Rte_InitValue_PpCharging_DeCharging (FALSE)
# define Rte_InitValue_PpIgnition_DeIgnition (FALSE)
# define Rte_InitValue_PpLock_DeLock (FALSE)
# define Rte_InitValue_PpSpeedLimit_DeSpeedLimit (180U)
# define Rte_InitValue_PpSunlight_DeSunlight (70U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApSEVMIController_PpCharging_DeCharging(P2VAR(IdtCharging, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApSEVMIController_PpIgnition_DeIgnition(P2VAR(IdtIgnition, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApSEVMIController_PpLock_DeLock(P2VAR(IdtLock, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApSEVMIController_PpSunlight_DeSunlight(P2VAR(IdtSunlight, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus(IdtBatteryStatus data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending(boolean data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit(IdtSpeedLimit data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Mode_CtApSEVMIController_PpBatteryMode_BatteryModes(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Mode_CtApSEVMIController_PpComMCurrentModeSEVMIController_currentMode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode(ComM_ModeType ComMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) ErrorStatus); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock(dtRef_const_VOID SrcPtr); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApSEVMIController_PpSpeed_ReadChannel(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(IdtLock, RTE_CODE) Rte_IrvRead_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_IrvWrite_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld(IdtLock data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

FUNC(void, RTE_CODE) Rte_Enter_CtApSEVMIController_ExBatteryStatus(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(void, RTE_CODE) Rte_Exit_CtApSEVMIController_ExBatteryStatus(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_PpCharging_DeCharging Rte_Read_CtApSEVMIController_PpCharging_DeCharging
# define Rte_Read_PpIgnition_DeIgnition Rte_Read_CtApSEVMIController_PpIgnition_DeIgnition
# define Rte_Read_PpLock_DeLock Rte_Read_CtApSEVMIController_PpLock_DeLock
# define Rte_Read_PpSunlight_DeSunlight Rte_Read_CtApSEVMIController_PpSunlight_DeSunlight


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PpBatteryStatus_DeBatteryStatus Rte_Write_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus
# define Rte_Write_PpDisplayState_DeLockingWriteRequestPending Rte_Write_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending
# define Rte_Write_PpSpeedLimit_DeSpeedLimit Rte_Write_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_PpBatteryMode_BatteryModes Rte_Mode_CtApSEVMIController_PpBatteryMode_BatteryModes
# define Rte_Mode_PpComMCurrentModeSEVMIController_currentMode Rte_Mode_CtApSEVMIController_PpComMCurrentModeSEVMIController_currentMode


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_PpComMUserRequestCtApSEVMIController_RequestComMode Rte_Call_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode
# define Rte_Call_PpNvMLockingCtApMySwc_GetErrorStatus Rte_Call_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus
# define Rte_Call_PpNvMLockingCtApMySwc_WriteBlock Rte_Call_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock
# define Rte_Call_PpSpeed_ReadChannel Rte_Call_CtApSEVMIController_PpSpeed_ReadChannel


/**********************************************************************************************************************
 * Exclusive Areas
 *********************************************************************************************************************/

# define Rte_Enter_ExBatteryStatus Rte_Enter_CtApSEVMIController_ExBatteryStatus
# define Rte_Exit_ExBatteryStatus Rte_Exit_CtApSEVMIController_ExBatteryStatus


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvRead_RCtApSEVMI_IrvLockStateOld() \
  Rte_IrvRead_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld()
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
# define Rte_IrvWrite_RCtApSEVMI_IrvLockStateOld(data) \
  Rte_IrvWrite_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld(data)
/* PRQA L:L1 */


/**********************************************************************************************************************
 * Per-Instance Memory User Types
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte_Pim (Per-Instance Memory)
 *********************************************************************************************************************/

# define Rte_Pim_SnNvMPimDoorLock_MirrorBlock() (Rte_Inst_CtApSEVMIController->Pim_SnNvMPimDoorLock_MirrorBlock) /* PRQA S 3453 */ /* MD_MSR_19.7 */




/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   IdtLock *Rte_Pim_SnNvMPimDoorLock_MirrorBlock(void)
 *
 *********************************************************************************************************************/


# define CtApSEVMIController_START_SEC_CODE
# include "CtApSEVMIController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <JobFinished> of PortPrototype <NvMNotifyJobFinished_SnNvMPimDoorLock>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpDisplayState_DeLockingWriteRequestPending(boolean data)
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished
FUNC(void, CtApSEVMIController_CODE) PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApMySwc_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpLock_DeLock(IdtLock *data)
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExBatteryStatus(void)
 *   void Rte_Exit_ExBatteryStatus(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApMySwc_Init RCtApMySwc_Init
FUNC(void, CtApSEVMIController_CODE) RCtApMySwc_Init(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApSEVMI
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 200ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpCharging_DeCharging(IdtCharging *data)
 *   Std_ReturnType Rte_Read_PpIgnition_DeIgnition(IdtIgnition *data)
 *   Std_ReturnType Rte_Read_PpLock_DeLock(IdtLock *data)
 *   Std_ReturnType Rte_Read_PpSunlight_DeSunlight(IdtSunlight *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpBatteryStatus_DeBatteryStatus(IdtBatteryStatus data)
 *   Std_ReturnType Rte_Write_PpSpeedLimit_DeSpeedLimit(IdtSpeedLimit data)
 *
 * Mode Interfaces:
 * ================
 *   uint8 Rte_Mode_PpBatteryMode_BatteryModes(void)
 *   Modes of Rte_ModeType_MdgBatteryMode:
 *   - RTE_MODE_MdgBatteryMode_ECO
 *   - RTE_MODE_MdgBatteryMode_NORMAL
 *   - RTE_TRANSITION_MdgBatteryMode
 *   uint8 Rte_Mode_PpComMCurrentModeSEVMIController_currentMode(void)
 *   Modes of Rte_ModeType_ComMMode:
 *   - RTE_MODE_ComMMode_COMM_FULL_COMMUNICATION
 *   - RTE_MODE_ComMMode_COMM_NO_COMMUNICATION
 *   - RTE_MODE_ComMMode_COMM_SILENT_COMMUNICATION
 *   - RTE_TRANSITION_ComMMode
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   IdtLock Rte_IrvRead_RCtApSEVMI_IrvLockStateOld(void)
 *
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_RCtApSEVMI_IrvLockStateOld(IdtLock data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_PpSpeed_ReadChannel(IdtDioValueType *value)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_PpComMUserRequestCtApSEVMIController_RequestComMode(ComM_ModeType ComMode)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_ComM_UserRequest_E_MODE_LIMITATION, RTE_E_ComM_UserRequest_E_NOT_OK
 *   Std_ReturnType Rte_Call_PpNvMLockingCtApMySwc_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_PpNvMLockingCtApMySwc_WriteBlock(dtRef_const_VOID SrcPtr)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 * Exclusive Area Access:
 * ======================
 *   void Rte_Enter_ExBatteryStatus(void)
 *   void Rte_Exit_ExBatteryStatus(void)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApSEVMI RCtApSEVMI
FUNC(void, CtApSEVMIController_CODE) RCtApSEVMI(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtBatteryMode
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on entering of Mode <NORMAL> of ModeDeclarationGroupPrototype <BatteryModes> of PortPrototype <PpBatteryMode>
 *
 **********************************************************************************************************************
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpBatteryStatus_DeBatteryStatus(IdtBatteryStatus data)
 *   Std_ReturnType Rte_Write_PpSpeedLimit_DeSpeedLimit(IdtSpeedLimit data)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtBatteryMode RCtBatteryMode
FUNC(void, CtApSEVMIController_CODE) RCtBatteryMode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtApSEVMIController_STOP_SEC_CODE
# include "CtApSEVMIController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

# define RTE_E_ComM_UserRequest_E_MODE_LIMITATION (2U)

# define RTE_E_ComM_UserRequest_E_NOT_OK (1U)

# define RTE_E_NvMService_AC3_SRBS_E_NOT_OK (1U)

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTAPSEVMICONTROLLER_H */
