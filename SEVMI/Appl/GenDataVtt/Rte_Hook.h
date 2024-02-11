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
 *          File:  Rte_Hook.h
 *        Config:  MyECU.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Header file containing definitions for VFB tracing
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Names of available VFB-Trace-Hooks
 **********************************************************************************************************************
 *
 *  Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Return
 *  Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Start
 *  Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Return
 *  Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Start
 *  Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Return
 *  Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Start
 *  Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Return
 *  Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Start
 *  Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Return
 *  Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Start
 *  Rte_ComHook_sig_BatteryStatus_Out_SigTx
 *  Rte_ComHook_sig_Ignition_In_SigRx
 *  Rte_ComHook_sig_Locking_In_SigRx
 *  Rte_ComHook_sig_SolarPanelSwitch_In_SigRx
 *  Rte_ComHook_sig_SpeedLimit_Out_SigTx
 *  Rte_ComHook_sig_SunlightPresence_In_SigRx
 *  Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Return
 *  Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Start
 *  Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Return
 *  Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Start
 *  Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return
 *  Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start
 *  Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return
 *  Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start
 *  Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return
 *  Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start
 *  Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return
 *  Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start
 *  Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return
 *  Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start
 *  Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return
 *  Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start
 *  Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Return
 *  Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Start
 *  Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Return
 *  Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Start
 *  Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Return
 *  Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Start
 *  Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Return
 *  Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Start
 *  Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Return
 *  Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Start
 *  Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Return
 *  Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Start
 *  Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Return
 *  Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Start
 *  Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Return
 *  Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Start
 *  Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Return
 *  Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Start
 *  Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Return
 *  Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Start
 *  Rte_Runnable_BswM_BswM_MainFunction_Return
 *  Rte_Runnable_BswM_BswM_MainFunction_Start
 *  Rte_Runnable_ComM_ComM_MainFunction_0_Return
 *  Rte_Runnable_ComM_ComM_MainFunction_0_Start
 *  Rte_Runnable_ComM_GetCurrentComMode_Return
 *  Rte_Runnable_ComM_GetCurrentComMode_Start
 *  Rte_Runnable_ComM_GetInhibitionStatus_Return
 *  Rte_Runnable_ComM_GetInhibitionStatus_Start
 *  Rte_Runnable_ComM_GetMaxComMode_Return
 *  Rte_Runnable_ComM_GetMaxComMode_Start
 *  Rte_Runnable_ComM_GetRequestedComMode_Return
 *  Rte_Runnable_ComM_GetRequestedComMode_Start
 *  Rte_Runnable_ComM_LimitChannelToNoComMode_Return
 *  Rte_Runnable_ComM_LimitChannelToNoComMode_Start
 *  Rte_Runnable_ComM_LimitECUToNoComMode_Return
 *  Rte_Runnable_ComM_LimitECUToNoComMode_Start
 *  Rte_Runnable_ComM_PreventWakeUp_Return
 *  Rte_Runnable_ComM_PreventWakeUp_Start
 *  Rte_Runnable_ComM_ReadInhibitCounter_Return
 *  Rte_Runnable_ComM_ReadInhibitCounter_Start
 *  Rte_Runnable_ComM_RequestComMode_Return
 *  Rte_Runnable_ComM_RequestComMode_Start
 *  Rte_Runnable_ComM_ResetInhibitCounter_Return
 *  Rte_Runnable_ComM_ResetInhibitCounter_Start
 *  Rte_Runnable_ComM_SetECUGroupClassification_Return
 *  Rte_Runnable_ComM_SetECUGroupClassification_Start
 *  Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Return
 *  Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Start
 *  Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Return
 *  Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Start
 *  Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Return
 *  Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Start
 *  Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Return
 *  Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Start
 *  Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Return
 *  Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Start
 *  Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Return
 *  Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Start
 *  Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Return
 *  Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Start
 *  Rte_Runnable_CtSaEngineControl_RIgnition_Return
 *  Rte_Runnable_CtSaEngineControl_RIgnition_Start
 *  Rte_Runnable_CtSaLockControl_RLock_Return
 *  Rte_Runnable_CtSaLockControl_RLock_Start
 *  Rte_Runnable_CtSaSolarPanelControl_RCharging_Return
 *  Rte_Runnable_CtSaSolarPanelControl_RCharging_Start
 *  Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Return
 *  Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Start
 *  Rte_Runnable_CtSaSunlightPresence_RSunlight_Return
 *  Rte_Runnable_CtSaSunlightPresence_RSunlight_Start
 *  Rte_Runnable_Dcm_Dcm_MainFunction_Return
 *  Rte_Runnable_Dcm_Dcm_MainFunction_Start
 *  Rte_Runnable_Dcm_GetActiveProtocol_Return
 *  Rte_Runnable_Dcm_GetActiveProtocol_Start
 *  Rte_Runnable_Dcm_GetSecurityLevel_Return
 *  Rte_Runnable_Dcm_GetSecurityLevel_Start
 *  Rte_Runnable_Dcm_GetSesCtrlType_Return
 *  Rte_Runnable_Dcm_GetSesCtrlType_Start
 *  Rte_Runnable_Dcm_ResetToDefaultSession_Return
 *  Rte_Runnable_Dcm_ResetToDefaultSession_Start
 *  Rte_Runnable_Dcm_SetActiveDiagnostic_Return
 *  Rte_Runnable_Dcm_SetActiveDiagnostic_Start
 *  Rte_Runnable_Dem_ClearDTC_Return
 *  Rte_Runnable_Dem_ClearDTC_Start
 *  Rte_Runnable_Dem_DcmClearDTC_Return
 *  Rte_Runnable_Dem_DcmClearDTC_Start
 *  Rte_Runnable_Dem_DcmEnableDTCSetting_Return
 *  Rte_Runnable_Dem_DcmEnableDTCSetting_Start
 *  Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return
 *  Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start
 *  Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return
 *  Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start
 *  Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return
 *  Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start
 *  Rte_Runnable_Dem_Dem_MainFunction_Return
 *  Rte_Runnable_Dem_Dem_MainFunction_Start
 *  Rte_Runnable_Dem_GetDTCOfEvent_Return
 *  Rte_Runnable_Dem_GetDTCOfEvent_Start
 *  Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return
 *  Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start
 *  Rte_Runnable_Dem_GetDebouncingOfEvent_Return
 *  Rte_Runnable_Dem_GetDebouncingOfEvent_Start
 *  Rte_Runnable_Dem_GetEventEnableCondition_Return
 *  Rte_Runnable_Dem_GetEventEnableCondition_Start
 *  Rte_Runnable_Dem_GetEventExtendedDataRecord_Return
 *  Rte_Runnable_Dem_GetEventExtendedDataRecord_Start
 *  Rte_Runnable_Dem_GetEventFailed_Return
 *  Rte_Runnable_Dem_GetEventFailed_Start
 *  Rte_Runnable_Dem_GetEventFreezeFrameData_Return
 *  Rte_Runnable_Dem_GetEventFreezeFrameData_Start
 *  Rte_Runnable_Dem_GetEventMemoryOverflow_Return
 *  Rte_Runnable_Dem_GetEventMemoryOverflow_Start
 *  Rte_Runnable_Dem_GetEventStatus_Return
 *  Rte_Runnable_Dem_GetEventStatus_Start
 *  Rte_Runnable_Dem_GetEventTested_Return
 *  Rte_Runnable_Dem_GetEventTested_Start
 *  Rte_Runnable_Dem_GetFaultDetectionCounter_Return
 *  Rte_Runnable_Dem_GetFaultDetectionCounter_Start
 *  Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return
 *  Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start
 *  Rte_Runnable_Dem_PostRunRequested_Return
 *  Rte_Runnable_Dem_PostRunRequested_Start
 *  Rte_Runnable_Dem_ResetEventDebounceStatus_Return
 *  Rte_Runnable_Dem_ResetEventDebounceStatus_Start
 *  Rte_Runnable_Dem_ResetEventStatus_Return
 *  Rte_Runnable_Dem_ResetEventStatus_Start
 *  Rte_Runnable_Dem_SetEventStatus_Return
 *  Rte_Runnable_Dem_SetEventStatus_Start
 *  Rte_Runnable_Dem_SetOperationCycleState_Return
 *  Rte_Runnable_Dem_SetOperationCycleState_Start
 *  Rte_Runnable_EcuM_EcuM_MainFunction_Return
 *  Rte_Runnable_EcuM_EcuM_MainFunction_Start
 *  Rte_Runnable_EcuM_GetBootTarget_Return
 *  Rte_Runnable_EcuM_GetBootTarget_Start
 *  Rte_Runnable_EcuM_GetLastShutdownTarget_Return
 *  Rte_Runnable_EcuM_GetLastShutdownTarget_Start
 *  Rte_Runnable_EcuM_GetShutdownCause_Return
 *  Rte_Runnable_EcuM_GetShutdownCause_Start
 *  Rte_Runnable_EcuM_GetShutdownTarget_Return
 *  Rte_Runnable_EcuM_GetShutdownTarget_Start
 *  Rte_Runnable_EcuM_SelectBootTarget_Return
 *  Rte_Runnable_EcuM_SelectBootTarget_Start
 *  Rte_Runnable_EcuM_SelectShutdownCause_Return
 *  Rte_Runnable_EcuM_SelectShutdownCause_Start
 *  Rte_Runnable_EcuM_SelectShutdownTarget_Return
 *  Rte_Runnable_EcuM_SelectShutdownTarget_Start
 *  Rte_Runnable_NvM_EraseBlock_Return
 *  Rte_Runnable_NvM_EraseBlock_Start
 *  Rte_Runnable_NvM_GetErrorStatus_Return
 *  Rte_Runnable_NvM_GetErrorStatus_Start
 *  Rte_Runnable_NvM_InvalidateNvBlock_Return
 *  Rte_Runnable_NvM_InvalidateNvBlock_Start
 *  Rte_Runnable_NvM_NvM_MainFunction_Return
 *  Rte_Runnable_NvM_NvM_MainFunction_Start
 *  Rte_Runnable_NvM_ReadBlock_Return
 *  Rte_Runnable_NvM_ReadBlock_Start
 *  Rte_Runnable_NvM_SetBlockProtection_Return
 *  Rte_Runnable_NvM_SetBlockProtection_Start
 *  Rte_Runnable_NvM_SetRamBlockStatus_Return
 *  Rte_Runnable_NvM_SetRamBlockStatus_Start
 *  Rte_Runnable_NvM_WriteBlock_Return
 *  Rte_Runnable_NvM_WriteBlock_Start
 *  Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return
 *  Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start
 *  Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return
 *  Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start
 *  Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return
 *  Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start
 *  Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Return
 *  Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Start
 *  Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Return
 *  Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Start
 *  Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return
 *  Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start
 *  Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return
 *  Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start
 *  Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return
 *  Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start
 *  Rte_Task_Activate
 *  Rte_Task_Dispatch
 *  Rte_Task_SetEvent
 *  Rte_Task_WaitEvent
 *  Rte_Task_WaitEventRet
 *  Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Return
 *  Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Start
 *  Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Return
 *  Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Start
 *  Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Return
 *  Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Start
 *  Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Return
 *  Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Start
 *  Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Return
 *  Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Start
 *  Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Return
 *  Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Start
 *  Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Return
 *  Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Start
 *  Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Return
 *  Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Start
 *  Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Return
 *  Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Start
 *
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HOOK_H
# define _RTE_HOOK_H

# include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */

# include "Rte_Type.h"
# include "Rte_Cfg.h"

# ifndef RTE_VFB_TRACE
#  define RTE_VFB_TRACE (0)
# endif

# define RTE_START_SEC_APPL_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# if defined (Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Return)
#  undef Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Return(ComM_ModeType ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Return */

# if defined (Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Start)
#  undef Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Start(ComM_ModeType ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApSEVMIController_PpComMUserRequestCtApSEVMIController_RequestComMode_Start */

# if defined (Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Return)
#  undef Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Return(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) ErrorStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Return */

# if defined (Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Start)
#  undef Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Start(P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) ErrorStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_GetErrorStatus_Start */

# if defined (Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Return)
#  undef Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Return(dtRef_const_VOID SrcPtr); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Return */

# if defined (Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Start)
#  undef Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Start(dtRef_const_VOID SrcPtr); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApSEVMIController_PpNvMLockingCtApMySwc_WriteBlock_Start */

# if defined (Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Return)
#  undef Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Return(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Return */

# if defined (Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Start)
#  undef Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Start(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_CtApSEVMIController_PpSpeed_ReadChannel_Start */

# if defined (Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Return)
#  undef Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Return(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Return */

# if defined (Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Start)
#  undef Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Start(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_CallHook_NvM_NvM_RpNotifyJobEnd_CpApSEVMIControllerSnNvMPimDoorLock_JobFinished_Start */

# if defined (Rte_ComHook_sig_BatteryStatus_Out_SigTx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_BatteryStatus_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_BatteryStatus_Out_SigTx)
#  undef Rte_ComHook_sig_BatteryStatus_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_BatteryStatus_Out_SigTx(P2CONST(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_BatteryStatus_Out_SigTx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_BatteryStatus_Out_SigTx */

# if defined (Rte_ComHook_sig_Ignition_In_SigRx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_Ignition_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_Ignition_In_SigRx)
#  undef Rte_ComHook_sig_Ignition_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_Ignition_In_SigRx(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_Ignition_In_SigRx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_Ignition_In_SigRx */

# if defined (Rte_ComHook_sig_Locking_In_SigRx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_Locking_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_Locking_In_SigRx)
#  undef Rte_ComHook_sig_Locking_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_Locking_In_SigRx(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_Locking_In_SigRx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_Locking_In_SigRx */

# if defined (Rte_ComHook_sig_SolarPanelSwitch_In_SigRx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_SolarPanelSwitch_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_SolarPanelSwitch_In_SigRx)
#  undef Rte_ComHook_sig_SolarPanelSwitch_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_SolarPanelSwitch_In_SigRx(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_SolarPanelSwitch_In_SigRx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_SolarPanelSwitch_In_SigRx */

# if defined (Rte_ComHook_sig_SpeedLimit_Out_SigTx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_SpeedLimit_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_SpeedLimit_Out_SigTx)
#  undef Rte_ComHook_sig_SpeedLimit_Out_SigTx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_SpeedLimit_Out_SigTx(P2CONST(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_SpeedLimit_Out_SigTx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_SpeedLimit_Out_SigTx */

# if defined (Rte_ComHook_sig_SunlightPresence_In_SigRx) && (RTE_VFB_TRACE == 0)
#  undef Rte_ComHook_sig_SunlightPresence_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ComHook_sig_SunlightPresence_In_SigRx)
#  undef Rte_ComHook_sig_SunlightPresence_In_SigRx /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ComHook_sig_SunlightPresence_In_SigRx(P2VAR(void, AUTOMATIC, RTE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ComHook_sig_SunlightPresence_In_SigRx(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ComHook_sig_SunlightPresence_In_SigRx */

# if defined (Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Return)
#  undef Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Return */

# if defined (Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Start)
#  undef Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_EnterHook_CtApSEVMIController_ExBatteryStatus_Start */

# if defined (Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Return)
#  undef Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Return */

# if defined (Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Start)
#  undef Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ExitHook_CtApSEVMIController_ExBatteryStatus_Start */

# if defined (Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return)
#  undef Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return */

# if defined (Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start)
#  undef Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_IrvReadHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start */

# if defined (Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return)
#  undef Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return(IdtLock data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Return */

# if defined (Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start)
#  undef Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start(IdtLock data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_IrvWriteHook_CtApSEVMIController_RCtApSEVMI_IrvLockStateOld_Start */

# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Return */

# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_PostRunRequest_0_requestedMode_Start */

# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Return */

# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start)
#  undef Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_PostRunRequest_1_requestedMode_Start */

# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Return */

# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_RunRequest_0_requestedMode_Start */

# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Return */

# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start)
#  undef Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start(P2VAR(BswM_ESH_RunRequest, AUTOMATIC, RTE_BSWM_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_BswM_Request_ESH_RunRequest_1_requestedMode_Start */

# if defined (Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Return)
#  undef Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Return(P2VAR(IdtCharging, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Return */

# if defined (Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Start)
#  undef Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Start(P2VAR(IdtCharging, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApSEVMIController_PpCharging_DeCharging_Start */

# if defined (Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Return)
#  undef Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Return(P2VAR(IdtIgnition, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Return */

# if defined (Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Start)
#  undef Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Start(P2VAR(IdtIgnition, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApSEVMIController_PpIgnition_DeIgnition_Start */

# if defined (Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Return)
#  undef Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Return(P2VAR(IdtLock, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Return */

# if defined (Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Start)
#  undef Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Start(P2VAR(IdtLock, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApSEVMIController_PpLock_DeLock_Start */

# if defined (Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Return)
#  undef Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Return(P2VAR(IdtSunlight, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Return */

# if defined (Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Start)
#  undef Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Start(P2VAR(IdtSunlight, AUTOMATIC, RTE_CTAPSEVMICONTROLLER_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtApSEVMIController_PpSunlight_DeSunlight_Start */

# if defined (Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Return)
#  undef Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Return(P2VAR(IdtBatteryStatus, AUTOMATIC, RTE_CTSABATTERYMANAGEMENT_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Return */

# if defined (Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Start)
#  undef Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Start(P2VAR(IdtBatteryStatus, AUTOMATIC, RTE_CTSABATTERYMANAGEMENT_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaBatteryManagement_PpBatteryStatus_DeBatteryStatus_Start */

# if defined (Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Return)
#  undef Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Return(P2VAR(IdtIgnition, AUTOMATIC, RTE_CTSAENGINECONTROL_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Return */

# if defined (Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Start)
#  undef Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Start(P2VAR(IdtIgnition, AUTOMATIC, RTE_CTSAENGINECONTROL_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaEngineControl_PpIgnitionIn_DeIgnition_Start */

# if defined (Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Return)
#  undef Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Return(P2VAR(IdtLock, AUTOMATIC, RTE_CTSALOCKCONTROL_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Return */

# if defined (Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Start)
#  undef Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Start(P2VAR(IdtLock, AUTOMATIC, RTE_CTSALOCKCONTROL_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaLockControl_PpLockIn_DeLock_Start */

# if defined (Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Return)
#  undef Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Return(P2VAR(IdtCharging, AUTOMATIC, RTE_CTSASOLARPANELCONTROL_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Return */

# if defined (Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Start)
#  undef Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Start(P2VAR(IdtCharging, AUTOMATIC, RTE_CTSASOLARPANELCONTROL_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaSolarPanelControl_PpChargingIn_DeCharging_Start */

# if defined (Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Return)
#  undef Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Return(P2VAR(IdtSpeedLimit, AUTOMATIC, RTE_CTSASPEEDLIMIT_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Return */

# if defined (Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Start)
#  undef Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Start(P2VAR(IdtSpeedLimit, AUTOMATIC, RTE_CTSASPEEDLIMIT_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaSpeedLimit_PpSpeedLimit_DeSpeedLimit_Start */

# if defined (Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Return)
#  undef Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Return(P2VAR(IdtSunlight, AUTOMATIC, RTE_CTSASUNLIGHTPRESENCE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Return */

# if defined (Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Start)
#  undef Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Start(P2VAR(IdtSunlight, AUTOMATIC, RTE_CTSASUNLIGHTPRESENCE_APPL_VAR) data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_ReadHook_CtSaSunlightPresence_PpSunlightIn_DeSunlight_Start */

# if defined (Rte_Runnable_BswM_BswM_MainFunction_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_BswM_BswM_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_BswM_BswM_MainFunction_Return)
#  undef Rte_Runnable_BswM_BswM_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_BswM_BswM_MainFunction_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_BswM_BswM_MainFunction_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_BswM_BswM_MainFunction_Return */

# if defined (Rte_Runnable_BswM_BswM_MainFunction_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_BswM_BswM_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_BswM_BswM_MainFunction_Start)
#  undef Rte_Runnable_BswM_BswM_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_BswM_BswM_MainFunction_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_BswM_BswM_MainFunction_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_BswM_BswM_MainFunction_Start */

# if defined (Rte_Runnable_ComM_ComM_MainFunction_0_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_ComM_MainFunction_0_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_ComM_MainFunction_0_Return)
#  undef Rte_Runnable_ComM_ComM_MainFunction_0_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_ComM_MainFunction_0_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_ComM_MainFunction_0_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_ComM_MainFunction_0_Return */

# if defined (Rte_Runnable_ComM_ComM_MainFunction_0_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_ComM_MainFunction_0_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_ComM_MainFunction_0_Start)
#  undef Rte_Runnable_ComM_ComM_MainFunction_0_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_ComM_MainFunction_0_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_ComM_MainFunction_0_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_ComM_MainFunction_0_Start */

# if defined (Rte_Runnable_ComM_GetCurrentComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetCurrentComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetCurrentComMode_Return)
#  undef Rte_Runnable_ComM_GetCurrentComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetCurrentComMode_Return(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetCurrentComMode_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetCurrentComMode_Return */

# if defined (Rte_Runnable_ComM_GetCurrentComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetCurrentComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetCurrentComMode_Start)
#  undef Rte_Runnable_ComM_GetCurrentComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetCurrentComMode_Start(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetCurrentComMode_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetCurrentComMode_Start */

# if defined (Rte_Runnable_ComM_GetInhibitionStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetInhibitionStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetInhibitionStatus_Return)
#  undef Rte_Runnable_ComM_GetInhibitionStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetInhibitionStatus_Return(NetworkHandleType parg0, P2VAR(ComM_InhibitionStatusType, AUTOMATIC, RTE_COMM_APPL_VAR) Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetInhibitionStatus_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetInhibitionStatus_Return */

# if defined (Rte_Runnable_ComM_GetInhibitionStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetInhibitionStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetInhibitionStatus_Start)
#  undef Rte_Runnable_ComM_GetInhibitionStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetInhibitionStatus_Start(NetworkHandleType parg0, P2VAR(ComM_InhibitionStatusType, AUTOMATIC, RTE_COMM_APPL_VAR) Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetInhibitionStatus_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetInhibitionStatus_Start */

# if defined (Rte_Runnable_ComM_GetMaxComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetMaxComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetMaxComMode_Return)
#  undef Rte_Runnable_ComM_GetMaxComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetMaxComMode_Return(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetMaxComMode_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetMaxComMode_Return */

# if defined (Rte_Runnable_ComM_GetMaxComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetMaxComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetMaxComMode_Start)
#  undef Rte_Runnable_ComM_GetMaxComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetMaxComMode_Start(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetMaxComMode_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetMaxComMode_Start */

# if defined (Rte_Runnable_ComM_GetRequestedComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetRequestedComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetRequestedComMode_Return)
#  undef Rte_Runnable_ComM_GetRequestedComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetRequestedComMode_Return(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetRequestedComMode_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetRequestedComMode_Return */

# if defined (Rte_Runnable_ComM_GetRequestedComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_GetRequestedComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_GetRequestedComMode_Start)
#  undef Rte_Runnable_ComM_GetRequestedComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_GetRequestedComMode_Start(ComM_UserHandleType parg0, P2VAR(ComM_ModeType, AUTOMATIC, RTE_COMM_APPL_VAR) ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_GetRequestedComMode_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_GetRequestedComMode_Start */

# if defined (Rte_Runnable_ComM_LimitChannelToNoComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_LimitChannelToNoComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_LimitChannelToNoComMode_Return)
#  undef Rte_Runnable_ComM_LimitChannelToNoComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_LimitChannelToNoComMode_Return(NetworkHandleType parg0, boolean Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_LimitChannelToNoComMode_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_LimitChannelToNoComMode_Return */

# if defined (Rte_Runnable_ComM_LimitChannelToNoComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_LimitChannelToNoComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_LimitChannelToNoComMode_Start)
#  undef Rte_Runnable_ComM_LimitChannelToNoComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_LimitChannelToNoComMode_Start(NetworkHandleType parg0, boolean Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_LimitChannelToNoComMode_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_LimitChannelToNoComMode_Start */

# if defined (Rte_Runnable_ComM_LimitECUToNoComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_LimitECUToNoComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_LimitECUToNoComMode_Return)
#  undef Rte_Runnable_ComM_LimitECUToNoComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_LimitECUToNoComMode_Return(boolean Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_LimitECUToNoComMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_LimitECUToNoComMode_Return */

# if defined (Rte_Runnable_ComM_LimitECUToNoComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_LimitECUToNoComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_LimitECUToNoComMode_Start)
#  undef Rte_Runnable_ComM_LimitECUToNoComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_LimitECUToNoComMode_Start(boolean Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_LimitECUToNoComMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_LimitECUToNoComMode_Start */

# if defined (Rte_Runnable_ComM_PreventWakeUp_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_PreventWakeUp_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_PreventWakeUp_Return)
#  undef Rte_Runnable_ComM_PreventWakeUp_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_PreventWakeUp_Return(NetworkHandleType parg0, boolean Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_PreventWakeUp_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_PreventWakeUp_Return */

# if defined (Rte_Runnable_ComM_PreventWakeUp_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_PreventWakeUp_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_PreventWakeUp_Start)
#  undef Rte_Runnable_ComM_PreventWakeUp_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_PreventWakeUp_Start(NetworkHandleType parg0, boolean Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_PreventWakeUp_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_PreventWakeUp_Start */

# if defined (Rte_Runnable_ComM_ReadInhibitCounter_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_ReadInhibitCounter_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_ReadInhibitCounter_Return)
#  undef Rte_Runnable_ComM_ReadInhibitCounter_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_ReadInhibitCounter_Return(P2VAR(uint16, AUTOMATIC, RTE_COMM_APPL_VAR) CounterValue); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_ReadInhibitCounter_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_ReadInhibitCounter_Return */

# if defined (Rte_Runnable_ComM_ReadInhibitCounter_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_ReadInhibitCounter_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_ReadInhibitCounter_Start)
#  undef Rte_Runnable_ComM_ReadInhibitCounter_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_ReadInhibitCounter_Start(P2VAR(uint16, AUTOMATIC, RTE_COMM_APPL_VAR) CounterValue); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_ReadInhibitCounter_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_ReadInhibitCounter_Start */

# if defined (Rte_Runnable_ComM_RequestComMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_RequestComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_RequestComMode_Return)
#  undef Rte_Runnable_ComM_RequestComMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RequestComMode_Return(ComM_UserHandleType parg0, ComM_ModeType ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_RequestComMode_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_RequestComMode_Return */

# if defined (Rte_Runnable_ComM_RequestComMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_RequestComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_RequestComMode_Start)
#  undef Rte_Runnable_ComM_RequestComMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_RequestComMode_Start(ComM_UserHandleType parg0, ComM_ModeType ComMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_RequestComMode_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_RequestComMode_Start */

# if defined (Rte_Runnable_ComM_ResetInhibitCounter_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_ResetInhibitCounter_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_ResetInhibitCounter_Return)
#  undef Rte_Runnable_ComM_ResetInhibitCounter_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_ResetInhibitCounter_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_ResetInhibitCounter_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_ResetInhibitCounter_Return */

# if defined (Rte_Runnable_ComM_ResetInhibitCounter_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_ResetInhibitCounter_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_ResetInhibitCounter_Start)
#  undef Rte_Runnable_ComM_ResetInhibitCounter_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_ResetInhibitCounter_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_ResetInhibitCounter_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_ResetInhibitCounter_Start */

# if defined (Rte_Runnable_ComM_SetECUGroupClassification_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_SetECUGroupClassification_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_SetECUGroupClassification_Return)
#  undef Rte_Runnable_ComM_SetECUGroupClassification_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_SetECUGroupClassification_Return(ComM_InhibitionStatusType Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_SetECUGroupClassification_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_SetECUGroupClassification_Return */

# if defined (Rte_Runnable_ComM_SetECUGroupClassification_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_ComM_SetECUGroupClassification_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_ComM_SetECUGroupClassification_Start)
#  undef Rte_Runnable_ComM_SetECUGroupClassification_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_ComM_SetECUGroupClassification_Start(ComM_InhibitionStatusType Status); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_ComM_SetECUGroupClassification_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_ComM_SetECUGroupClassification_Start */

# if defined (Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Return)
#  undef Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Return(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Return */

# if defined (Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Start)
#  undef Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Start(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApSEVMIController_PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_Start */

# if defined (Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Return)
#  undef Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Return */

# if defined (Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Start)
#  undef Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApSEVMIController_RCtApMySwc_Init_Start */

# if defined (Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Return)
#  undef Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Return */

# if defined (Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Start)
#  undef Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApSEVMIController_RCtApSEVMI_Start */

# if defined (Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Return)
#  undef Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Return */

# if defined (Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Start)
#  undef Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtApSEVMIController_RCtBatteryMode_Start */

# if defined (Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Return)
#  undef Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Return(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTIOHWAB_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Return */

# if defined (Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Start)
#  undef Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Start(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTIOHWAB_APPL_VAR) value); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtIoHwAb_PpSpeed_ReadChannelHwAb_Start */

# if defined (Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Return)
#  undef Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Return */

# if defined (Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Start)
#  undef Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaBatteryManagement_RBatteryStatus_Start */

# if defined (Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Return)
#  undef Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Return */

# if defined (Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Start)
#  undef Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaBatteryModeManager_RCtApBatteryManager_WriteMode_Start */

# if defined (Rte_Runnable_CtSaEngineControl_RIgnition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaEngineControl_RIgnition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaEngineControl_RIgnition_Return)
#  undef Rte_Runnable_CtSaEngineControl_RIgnition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaEngineControl_RIgnition_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaEngineControl_RIgnition_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaEngineControl_RIgnition_Return */

# if defined (Rte_Runnable_CtSaEngineControl_RIgnition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaEngineControl_RIgnition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaEngineControl_RIgnition_Start)
#  undef Rte_Runnable_CtSaEngineControl_RIgnition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaEngineControl_RIgnition_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaEngineControl_RIgnition_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaEngineControl_RIgnition_Start */

# if defined (Rte_Runnable_CtSaLockControl_RLock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaLockControl_RLock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaLockControl_RLock_Return)
#  undef Rte_Runnable_CtSaLockControl_RLock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaLockControl_RLock_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaLockControl_RLock_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaLockControl_RLock_Return */

# if defined (Rte_Runnable_CtSaLockControl_RLock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaLockControl_RLock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaLockControl_RLock_Start)
#  undef Rte_Runnable_CtSaLockControl_RLock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaLockControl_RLock_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaLockControl_RLock_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaLockControl_RLock_Start */

# if defined (Rte_Runnable_CtSaSolarPanelControl_RCharging_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaSolarPanelControl_RCharging_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaSolarPanelControl_RCharging_Return)
#  undef Rte_Runnable_CtSaSolarPanelControl_RCharging_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaSolarPanelControl_RCharging_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaSolarPanelControl_RCharging_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaSolarPanelControl_RCharging_Return */

# if defined (Rte_Runnable_CtSaSolarPanelControl_RCharging_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaSolarPanelControl_RCharging_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaSolarPanelControl_RCharging_Start)
#  undef Rte_Runnable_CtSaSolarPanelControl_RCharging_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaSolarPanelControl_RCharging_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaSolarPanelControl_RCharging_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaSolarPanelControl_RCharging_Start */

# if defined (Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Return)
#  undef Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Return */

# if defined (Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Start)
#  undef Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaSpeedLimit_RSpeedLimit_Start */

# if defined (Rte_Runnable_CtSaSunlightPresence_RSunlight_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaSunlightPresence_RSunlight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaSunlightPresence_RSunlight_Return)
#  undef Rte_Runnable_CtSaSunlightPresence_RSunlight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaSunlightPresence_RSunlight_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaSunlightPresence_RSunlight_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaSunlightPresence_RSunlight_Return */

# if defined (Rte_Runnable_CtSaSunlightPresence_RSunlight_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_CtSaSunlightPresence_RSunlight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_CtSaSunlightPresence_RSunlight_Start)
#  undef Rte_Runnable_CtSaSunlightPresence_RSunlight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_CtSaSunlightPresence_RSunlight_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_CtSaSunlightPresence_RSunlight_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_CtSaSunlightPresence_RSunlight_Start */

# if defined (Rte_Runnable_Dcm_Dcm_MainFunction_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_Dcm_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_Dcm_MainFunction_Return)
#  undef Rte_Runnable_Dcm_Dcm_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_Dcm_MainFunction_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_Dcm_MainFunction_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_Dcm_MainFunction_Return */

# if defined (Rte_Runnable_Dcm_Dcm_MainFunction_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_Dcm_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_Dcm_MainFunction_Start)
#  undef Rte_Runnable_Dcm_Dcm_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_Dcm_MainFunction_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_Dcm_MainFunction_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_Dcm_MainFunction_Start */

# if defined (Rte_Runnable_Dcm_GetActiveProtocol_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_GetActiveProtocol_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_GetActiveProtocol_Return)
#  undef Rte_Runnable_Dcm_GetActiveProtocol_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_GetActiveProtocol_Return(P2VAR(Dcm_ProtocolType, AUTOMATIC, RTE_DCM_APPL_VAR) ActiveProtocol); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_GetActiveProtocol_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_GetActiveProtocol_Return */

# if defined (Rte_Runnable_Dcm_GetActiveProtocol_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_GetActiveProtocol_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_GetActiveProtocol_Start)
#  undef Rte_Runnable_Dcm_GetActiveProtocol_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_GetActiveProtocol_Start(P2VAR(Dcm_ProtocolType, AUTOMATIC, RTE_DCM_APPL_VAR) ActiveProtocol); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_GetActiveProtocol_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_GetActiveProtocol_Start */

# if defined (Rte_Runnable_Dcm_GetSecurityLevel_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_GetSecurityLevel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_GetSecurityLevel_Return)
#  undef Rte_Runnable_Dcm_GetSecurityLevel_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_GetSecurityLevel_Return(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_DCM_APPL_VAR) SecLevel); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_GetSecurityLevel_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_GetSecurityLevel_Return */

# if defined (Rte_Runnable_Dcm_GetSecurityLevel_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_GetSecurityLevel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_GetSecurityLevel_Start)
#  undef Rte_Runnable_Dcm_GetSecurityLevel_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_GetSecurityLevel_Start(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_DCM_APPL_VAR) SecLevel); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_GetSecurityLevel_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_GetSecurityLevel_Start */

# if defined (Rte_Runnable_Dcm_GetSesCtrlType_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_GetSesCtrlType_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_GetSesCtrlType_Return)
#  undef Rte_Runnable_Dcm_GetSesCtrlType_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_GetSesCtrlType_Return(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_DCM_APPL_VAR) SesCtrlType); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_GetSesCtrlType_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_GetSesCtrlType_Return */

# if defined (Rte_Runnable_Dcm_GetSesCtrlType_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_GetSesCtrlType_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_GetSesCtrlType_Start)
#  undef Rte_Runnable_Dcm_GetSesCtrlType_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_GetSesCtrlType_Start(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_DCM_APPL_VAR) SesCtrlType); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_GetSesCtrlType_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_GetSesCtrlType_Start */

# if defined (Rte_Runnable_Dcm_ResetToDefaultSession_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_ResetToDefaultSession_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_ResetToDefaultSession_Return)
#  undef Rte_Runnable_Dcm_ResetToDefaultSession_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_ResetToDefaultSession_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_ResetToDefaultSession_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_ResetToDefaultSession_Return */

# if defined (Rte_Runnable_Dcm_ResetToDefaultSession_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_ResetToDefaultSession_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_ResetToDefaultSession_Start)
#  undef Rte_Runnable_Dcm_ResetToDefaultSession_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_ResetToDefaultSession_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_ResetToDefaultSession_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_ResetToDefaultSession_Start */

# if defined (Rte_Runnable_Dcm_SetActiveDiagnostic_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_SetActiveDiagnostic_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_SetActiveDiagnostic_Return)
#  undef Rte_Runnable_Dcm_SetActiveDiagnostic_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_SetActiveDiagnostic_Return(boolean active); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_SetActiveDiagnostic_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_SetActiveDiagnostic_Return */

# if defined (Rte_Runnable_Dcm_SetActiveDiagnostic_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dcm_SetActiveDiagnostic_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dcm_SetActiveDiagnostic_Start)
#  undef Rte_Runnable_Dcm_SetActiveDiagnostic_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dcm_SetActiveDiagnostic_Start(boolean active); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dcm_SetActiveDiagnostic_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dcm_SetActiveDiagnostic_Start */

# if defined (Rte_Runnable_Dem_ClearDTC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_ClearDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_ClearDTC_Return)
#  undef Rte_Runnable_Dem_ClearDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_ClearDTC_Return(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_ClearDTC_Return(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_ClearDTC_Return */

# if defined (Rte_Runnable_Dem_ClearDTC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_ClearDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_ClearDTC_Start)
#  undef Rte_Runnable_Dem_ClearDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_ClearDTC_Start(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_ClearDTC_Start(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_ClearDTC_Start */

# if defined (Rte_Runnable_Dem_DcmClearDTC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmClearDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmClearDTC_Return)
#  undef Rte_Runnable_Dem_DcmClearDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmClearDTC_Return(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmClearDTC_Return(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmClearDTC_Return */

# if defined (Rte_Runnable_Dem_DcmClearDTC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmClearDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmClearDTC_Start)
#  undef Rte_Runnable_Dem_DcmClearDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmClearDTC_Start(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmClearDTC_Start(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmClearDTC_Start */

# if defined (Rte_Runnable_Dem_DcmEnableDTCSetting_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmEnableDTCSetting_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmEnableDTCSetting_Return)
#  undef Rte_Runnable_Dem_DcmEnableDTCSetting_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmEnableDTCSetting_Return(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmEnableDTCSetting_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmEnableDTCSetting_Return */

# if defined (Rte_Runnable_Dem_DcmEnableDTCSetting_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmEnableDTCSetting_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmEnableDTCSetting_Start)
#  undef Rte_Runnable_Dem_DcmEnableDTCSetting_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmEnableDTCSetting_Start(Dem_DTCGroupType DTCGroup, Dem_DTCKindType DTCKind); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmEnableDTCSetting_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmEnableDTCSetting_Start */

# if defined (Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return)
#  undef Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEM_APPL_VAR) BufSize); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Return */

# if defined (Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start)
#  undef Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEM_APPL_VAR) BufSize); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmGetExtendedDataRecordByDTC_Start */

# if defined (Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return)
#  undef Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEM_APPL_VAR) BufSize); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Return */

# if defined (Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start)
#  undef Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEM_APPL_VAR) BufSize); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmGetFreezeFrameDataByDTC_Start */

# if defined (Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return)
#  undef Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return(P2VAR(uint32, AUTOMATIC, RTE_DEM_APPL_VAR) DTC, P2VAR(sint8, AUTOMATIC, RTE_DEM_APPL_VAR) DTCFaultDetectionCounter); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Return */

# if defined (Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start)
#  undef Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start(P2VAR(uint32, AUTOMATIC, RTE_DEM_APPL_VAR) DTC, P2VAR(sint8, AUTOMATIC, RTE_DEM_APPL_VAR) DTCFaultDetectionCounter); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_DcmGetNextFilteredDTCAndFDC_Start */

# if defined (Rte_Runnable_Dem_Dem_MainFunction_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_Dem_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_Dem_MainFunction_Return)
#  undef Rte_Runnable_Dem_Dem_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_Dem_MainFunction_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_Dem_MainFunction_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_Dem_MainFunction_Return */

# if defined (Rte_Runnable_Dem_Dem_MainFunction_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_Dem_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_Dem_MainFunction_Start)
#  undef Rte_Runnable_Dem_Dem_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_Dem_MainFunction_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_Dem_MainFunction_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_Dem_MainFunction_Start */

# if defined (Rte_Runnable_Dem_GetDTCOfEvent_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetDTCOfEvent_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetDTCOfEvent_Return)
#  undef Rte_Runnable_Dem_GetDTCOfEvent_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetDTCOfEvent_Return(Dem_EventIdType parg0, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEM_APPL_VAR) DTCOfEvent); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetDTCOfEvent_Return(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetDTCOfEvent_Return */

# if defined (Rte_Runnable_Dem_GetDTCOfEvent_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetDTCOfEvent_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetDTCOfEvent_Start)
#  undef Rte_Runnable_Dem_GetDTCOfEvent_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetDTCOfEvent_Start(Dem_EventIdType parg0, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEM_APPL_VAR) DTCOfEvent); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetDTCOfEvent_Start(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetDTCOfEvent_Start */

# if defined (Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return)
#  undef Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return(P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DTCStatusMask); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Return */

# if defined (Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start)
#  undef Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start(P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) DTCStatusMask); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetDTCStatusAvailabilityMask_Start */

# if defined (Rte_Runnable_Dem_GetDebouncingOfEvent_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetDebouncingOfEvent_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetDebouncingOfEvent_Return)
#  undef Rte_Runnable_Dem_GetDebouncingOfEvent_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetDebouncingOfEvent_Return(Dem_EventIdType parg0, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_DEM_APPL_VAR) DebouncingState); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetDebouncingOfEvent_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetDebouncingOfEvent_Return */

# if defined (Rte_Runnable_Dem_GetDebouncingOfEvent_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetDebouncingOfEvent_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetDebouncingOfEvent_Start)
#  undef Rte_Runnable_Dem_GetDebouncingOfEvent_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetDebouncingOfEvent_Start(Dem_EventIdType parg0, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_DEM_APPL_VAR) DebouncingState); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetDebouncingOfEvent_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetDebouncingOfEvent_Start */

# if defined (Rte_Runnable_Dem_GetEventEnableCondition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventEnableCondition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventEnableCondition_Return)
#  undef Rte_Runnable_Dem_GetEventEnableCondition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventEnableCondition_Return(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) ConditionFullfilled); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventEnableCondition_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventEnableCondition_Return */

# if defined (Rte_Runnable_Dem_GetEventEnableCondition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventEnableCondition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventEnableCondition_Start)
#  undef Rte_Runnable_Dem_GetEventEnableCondition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventEnableCondition_Start(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) ConditionFullfilled); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventEnableCondition_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventEnableCondition_Start */

# if defined (Rte_Runnable_Dem_GetEventExtendedDataRecord_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventExtendedDataRecord_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventExtendedDataRecord_Return)
#  undef Rte_Runnable_Dem_GetEventExtendedDataRecord_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventExtendedDataRecord_Return(Dem_EventIdType parg0, uint8 RecordNumber, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventExtendedDataRecord_Return(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventExtendedDataRecord_Return */

# if defined (Rte_Runnable_Dem_GetEventExtendedDataRecord_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventExtendedDataRecord_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventExtendedDataRecord_Start)
#  undef Rte_Runnable_Dem_GetEventExtendedDataRecord_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventExtendedDataRecord_Start(Dem_EventIdType parg0, uint8 RecordNumber, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventExtendedDataRecord_Start(arg1, arg2, arg3) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventExtendedDataRecord_Start */

# if defined (Rte_Runnable_Dem_GetEventFailed_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventFailed_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventFailed_Return)
#  undef Rte_Runnable_Dem_GetEventFailed_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventFailed_Return(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) EventFailed); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventFailed_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventFailed_Return */

# if defined (Rte_Runnable_Dem_GetEventFailed_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventFailed_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventFailed_Start)
#  undef Rte_Runnable_Dem_GetEventFailed_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventFailed_Start(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) EventFailed); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventFailed_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventFailed_Start */

# if defined (Rte_Runnable_Dem_GetEventFreezeFrameData_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventFreezeFrameData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventFreezeFrameData_Return)
#  undef Rte_Runnable_Dem_GetEventFreezeFrameData_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventFreezeFrameData_Return(Dem_EventIdType parg0, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventFreezeFrameData_Return(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventFreezeFrameData_Return */

# if defined (Rte_Runnable_Dem_GetEventFreezeFrameData_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventFreezeFrameData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventFreezeFrameData_Start)
#  undef Rte_Runnable_Dem_GetEventFreezeFrameData_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventFreezeFrameData_Start(Dem_EventIdType parg0, uint8 RecordNumber, boolean ReportTotalRecord, uint16 DataId, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEM_APPL_VAR) DestBuffer); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventFreezeFrameData_Start(arg1, arg2, arg3, arg4, arg5) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventFreezeFrameData_Start */

# if defined (Rte_Runnable_Dem_GetEventMemoryOverflow_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventMemoryOverflow_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventMemoryOverflow_Return)
#  undef Rte_Runnable_Dem_GetEventMemoryOverflow_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventMemoryOverflow_Return(Dem_DTCOriginType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) OverflowIndication); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventMemoryOverflow_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventMemoryOverflow_Return */

# if defined (Rte_Runnable_Dem_GetEventMemoryOverflow_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventMemoryOverflow_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventMemoryOverflow_Start)
#  undef Rte_Runnable_Dem_GetEventMemoryOverflow_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventMemoryOverflow_Start(Dem_DTCOriginType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) OverflowIndication); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventMemoryOverflow_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventMemoryOverflow_Start */

# if defined (Rte_Runnable_Dem_GetEventStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventStatus_Return)
#  undef Rte_Runnable_Dem_GetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventStatus_Return(Dem_EventIdType parg0, P2VAR(Dem_EventStatusExtendedType, AUTOMATIC, RTE_DEM_APPL_VAR) EventStatusExtended); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventStatus_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventStatus_Return */

# if defined (Rte_Runnable_Dem_GetEventStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventStatus_Start)
#  undef Rte_Runnable_Dem_GetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventStatus_Start(Dem_EventIdType parg0, P2VAR(Dem_EventStatusExtendedType, AUTOMATIC, RTE_DEM_APPL_VAR) EventStatusExtended); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventStatus_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventStatus_Start */

# if defined (Rte_Runnable_Dem_GetEventTested_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventTested_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventTested_Return)
#  undef Rte_Runnable_Dem_GetEventTested_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventTested_Return(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) EventTested); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventTested_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventTested_Return */

# if defined (Rte_Runnable_Dem_GetEventTested_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetEventTested_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetEventTested_Start)
#  undef Rte_Runnable_Dem_GetEventTested_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetEventTested_Start(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) EventTested); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetEventTested_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetEventTested_Start */

# if defined (Rte_Runnable_Dem_GetFaultDetectionCounter_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetFaultDetectionCounter_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetFaultDetectionCounter_Return)
#  undef Rte_Runnable_Dem_GetFaultDetectionCounter_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetFaultDetectionCounter_Return(Dem_EventIdType parg0, P2VAR(sint8, AUTOMATIC, RTE_DEM_APPL_VAR) FaultDetectionCounter); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetFaultDetectionCounter_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetFaultDetectionCounter_Return */

# if defined (Rte_Runnable_Dem_GetFaultDetectionCounter_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetFaultDetectionCounter_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetFaultDetectionCounter_Start)
#  undef Rte_Runnable_Dem_GetFaultDetectionCounter_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetFaultDetectionCounter_Start(Dem_EventIdType parg0, P2VAR(sint8, AUTOMATIC, RTE_DEM_APPL_VAR) FaultDetectionCounter); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetFaultDetectionCounter_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetFaultDetectionCounter_Start */

# if defined (Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return)
#  undef Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return(Dem_DTCOriginType parg0, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) NumberOfEventMemoryEntries); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Return */

# if defined (Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start)
#  undef Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start(Dem_DTCOriginType parg0, P2VAR(uint8, AUTOMATIC, RTE_DEM_APPL_VAR) NumberOfEventMemoryEntries); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_GetNumberOfEventMemoryEntries_Start */

# if defined (Rte_Runnable_Dem_PostRunRequested_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_PostRunRequested_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_PostRunRequested_Return)
#  undef Rte_Runnable_Dem_PostRunRequested_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_PostRunRequested_Return(P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) IsRequested); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_PostRunRequested_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_PostRunRequested_Return */

# if defined (Rte_Runnable_Dem_PostRunRequested_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_PostRunRequested_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_PostRunRequested_Start)
#  undef Rte_Runnable_Dem_PostRunRequested_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_PostRunRequested_Start(P2VAR(boolean, AUTOMATIC, RTE_DEM_APPL_VAR) IsRequested); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_PostRunRequested_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_PostRunRequested_Start */

# if defined (Rte_Runnable_Dem_ResetEventDebounceStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_ResetEventDebounceStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_ResetEventDebounceStatus_Return)
#  undef Rte_Runnable_Dem_ResetEventDebounceStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_ResetEventDebounceStatus_Return(Dem_EventIdType parg0, Dem_DebounceResetStatusType DebounceResetStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_ResetEventDebounceStatus_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_ResetEventDebounceStatus_Return */

# if defined (Rte_Runnable_Dem_ResetEventDebounceStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_ResetEventDebounceStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_ResetEventDebounceStatus_Start)
#  undef Rte_Runnable_Dem_ResetEventDebounceStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_ResetEventDebounceStatus_Start(Dem_EventIdType parg0, Dem_DebounceResetStatusType DebounceResetStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_ResetEventDebounceStatus_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_ResetEventDebounceStatus_Start */

# if defined (Rte_Runnable_Dem_ResetEventStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_ResetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_ResetEventStatus_Return)
#  undef Rte_Runnable_Dem_ResetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_ResetEventStatus_Return(Dem_EventIdType parg0); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_ResetEventStatus_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_ResetEventStatus_Return */

# if defined (Rte_Runnable_Dem_ResetEventStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_ResetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_ResetEventStatus_Start)
#  undef Rte_Runnable_Dem_ResetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_ResetEventStatus_Start(Dem_EventIdType parg0); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_ResetEventStatus_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_ResetEventStatus_Start */

# if defined (Rte_Runnable_Dem_SetEventStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_SetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_SetEventStatus_Return)
#  undef Rte_Runnable_Dem_SetEventStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_SetEventStatus_Return(Dem_EventIdType parg0, Dem_EventStatusType EventStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_SetEventStatus_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_SetEventStatus_Return */

# if defined (Rte_Runnable_Dem_SetEventStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_SetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_SetEventStatus_Start)
#  undef Rte_Runnable_Dem_SetEventStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_SetEventStatus_Start(Dem_EventIdType parg0, Dem_EventStatusType EventStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_SetEventStatus_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_SetEventStatus_Start */

# if defined (Rte_Runnable_Dem_SetOperationCycleState_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_SetOperationCycleState_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_SetOperationCycleState_Return)
#  undef Rte_Runnable_Dem_SetOperationCycleState_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_SetOperationCycleState_Return(Dem_OperationCycleIdType parg0, Dem_OperationCycleStateType CycleState); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_SetOperationCycleState_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_SetOperationCycleState_Return */

# if defined (Rte_Runnable_Dem_SetOperationCycleState_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_Dem_SetOperationCycleState_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_Dem_SetOperationCycleState_Start)
#  undef Rte_Runnable_Dem_SetOperationCycleState_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_Dem_SetOperationCycleState_Start(Dem_OperationCycleIdType parg0, Dem_OperationCycleStateType CycleState); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_Dem_SetOperationCycleState_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_Dem_SetOperationCycleState_Start */

# if defined (Rte_Runnable_EcuM_EcuM_MainFunction_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_EcuM_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_EcuM_MainFunction_Return)
#  undef Rte_Runnable_EcuM_EcuM_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_EcuM_MainFunction_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_EcuM_MainFunction_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_EcuM_MainFunction_Return */

# if defined (Rte_Runnable_EcuM_EcuM_MainFunction_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_EcuM_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_EcuM_MainFunction_Start)
#  undef Rte_Runnable_EcuM_EcuM_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_EcuM_MainFunction_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_EcuM_MainFunction_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_EcuM_MainFunction_Start */

# if defined (Rte_Runnable_EcuM_GetBootTarget_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetBootTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetBootTarget_Return)
#  undef Rte_Runnable_EcuM_GetBootTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetBootTarget_Return(P2VAR(EcuM_BootTargetType, AUTOMATIC, RTE_ECUM_APPL_VAR) BootTarget); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetBootTarget_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetBootTarget_Return */

# if defined (Rte_Runnable_EcuM_GetBootTarget_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetBootTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetBootTarget_Start)
#  undef Rte_Runnable_EcuM_GetBootTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetBootTarget_Start(P2VAR(EcuM_BootTargetType, AUTOMATIC, RTE_ECUM_APPL_VAR) BootTarget); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetBootTarget_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetBootTarget_Start */

# if defined (Rte_Runnable_EcuM_GetLastShutdownTarget_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetLastShutdownTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetLastShutdownTarget_Return)
#  undef Rte_Runnable_EcuM_GetLastShutdownTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetLastShutdownTarget_Return(P2VAR(EcuM_StateType, AUTOMATIC, RTE_ECUM_APPL_VAR) target, P2VAR(EcuM_ModeType, AUTOMATIC, RTE_ECUM_APPL_VAR) resetSleepMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetLastShutdownTarget_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetLastShutdownTarget_Return */

# if defined (Rte_Runnable_EcuM_GetLastShutdownTarget_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetLastShutdownTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetLastShutdownTarget_Start)
#  undef Rte_Runnable_EcuM_GetLastShutdownTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetLastShutdownTarget_Start(P2VAR(EcuM_StateType, AUTOMATIC, RTE_ECUM_APPL_VAR) target, P2VAR(EcuM_ModeType, AUTOMATIC, RTE_ECUM_APPL_VAR) resetSleepMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetLastShutdownTarget_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetLastShutdownTarget_Start */

# if defined (Rte_Runnable_EcuM_GetShutdownCause_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetShutdownCause_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetShutdownCause_Return)
#  undef Rte_Runnable_EcuM_GetShutdownCause_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetShutdownCause_Return(P2VAR(EcuM_ShutdownCauseType, AUTOMATIC, RTE_ECUM_APPL_VAR) shutdownCause); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetShutdownCause_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetShutdownCause_Return */

# if defined (Rte_Runnable_EcuM_GetShutdownCause_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetShutdownCause_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetShutdownCause_Start)
#  undef Rte_Runnable_EcuM_GetShutdownCause_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetShutdownCause_Start(P2VAR(EcuM_ShutdownCauseType, AUTOMATIC, RTE_ECUM_APPL_VAR) shutdownCause); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetShutdownCause_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetShutdownCause_Start */

# if defined (Rte_Runnable_EcuM_GetShutdownTarget_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetShutdownTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetShutdownTarget_Return)
#  undef Rte_Runnable_EcuM_GetShutdownTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetShutdownTarget_Return(P2VAR(EcuM_StateType, AUTOMATIC, RTE_ECUM_APPL_VAR) target, P2VAR(EcuM_ModeType, AUTOMATIC, RTE_ECUM_APPL_VAR) resetSleepMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetShutdownTarget_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetShutdownTarget_Return */

# if defined (Rte_Runnable_EcuM_GetShutdownTarget_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_GetShutdownTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_GetShutdownTarget_Start)
#  undef Rte_Runnable_EcuM_GetShutdownTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_GetShutdownTarget_Start(P2VAR(EcuM_StateType, AUTOMATIC, RTE_ECUM_APPL_VAR) target, P2VAR(EcuM_ModeType, AUTOMATIC, RTE_ECUM_APPL_VAR) resetSleepMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_GetShutdownTarget_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_GetShutdownTarget_Start */

# if defined (Rte_Runnable_EcuM_SelectBootTarget_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_SelectBootTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_SelectBootTarget_Return)
#  undef Rte_Runnable_EcuM_SelectBootTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_SelectBootTarget_Return(EcuM_BootTargetType BootTarget); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_SelectBootTarget_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_SelectBootTarget_Return */

# if defined (Rte_Runnable_EcuM_SelectBootTarget_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_SelectBootTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_SelectBootTarget_Start)
#  undef Rte_Runnable_EcuM_SelectBootTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_SelectBootTarget_Start(EcuM_BootTargetType BootTarget); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_SelectBootTarget_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_SelectBootTarget_Start */

# if defined (Rte_Runnable_EcuM_SelectShutdownCause_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_SelectShutdownCause_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_SelectShutdownCause_Return)
#  undef Rte_Runnable_EcuM_SelectShutdownCause_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_SelectShutdownCause_Return(EcuM_ShutdownCauseType shutdownCause); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_SelectShutdownCause_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_SelectShutdownCause_Return */

# if defined (Rte_Runnable_EcuM_SelectShutdownCause_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_SelectShutdownCause_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_SelectShutdownCause_Start)
#  undef Rte_Runnable_EcuM_SelectShutdownCause_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_SelectShutdownCause_Start(EcuM_ShutdownCauseType shutdownCause); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_SelectShutdownCause_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_SelectShutdownCause_Start */

# if defined (Rte_Runnable_EcuM_SelectShutdownTarget_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_SelectShutdownTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_SelectShutdownTarget_Return)
#  undef Rte_Runnable_EcuM_SelectShutdownTarget_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_SelectShutdownTarget_Return(EcuM_StateType targetState, EcuM_ModeType resetSleepMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_SelectShutdownTarget_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_SelectShutdownTarget_Return */

# if defined (Rte_Runnable_EcuM_SelectShutdownTarget_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_EcuM_SelectShutdownTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_EcuM_SelectShutdownTarget_Start)
#  undef Rte_Runnable_EcuM_SelectShutdownTarget_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_EcuM_SelectShutdownTarget_Start(EcuM_StateType targetState, EcuM_ModeType resetSleepMode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_EcuM_SelectShutdownTarget_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_EcuM_SelectShutdownTarget_Start */

# if defined (Rte_Runnable_NvM_EraseBlock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_EraseBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_EraseBlock_Return)
#  undef Rte_Runnable_NvM_EraseBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_EraseBlock_Return(NvM_BlockIdType parg0); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_EraseBlock_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_EraseBlock_Return */

# if defined (Rte_Runnable_NvM_EraseBlock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_EraseBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_EraseBlock_Start)
#  undef Rte_Runnable_NvM_EraseBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_EraseBlock_Start(NvM_BlockIdType parg0); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_EraseBlock_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_EraseBlock_Start */

# if defined (Rte_Runnable_NvM_GetErrorStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_GetErrorStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_GetErrorStatus_Return)
#  undef Rte_Runnable_NvM_GetErrorStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_GetErrorStatus_Return(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVM_APPL_VAR) ErrorStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_GetErrorStatus_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_GetErrorStatus_Return */

# if defined (Rte_Runnable_NvM_GetErrorStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_GetErrorStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_GetErrorStatus_Start)
#  undef Rte_Runnable_NvM_GetErrorStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_GetErrorStatus_Start(NvM_BlockIdType parg0, P2VAR(NvM_RequestResultType, AUTOMATIC, RTE_NVM_APPL_VAR) ErrorStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_GetErrorStatus_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_GetErrorStatus_Start */

# if defined (Rte_Runnable_NvM_InvalidateNvBlock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_InvalidateNvBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_InvalidateNvBlock_Return)
#  undef Rte_Runnable_NvM_InvalidateNvBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_InvalidateNvBlock_Return(NvM_BlockIdType parg0); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_InvalidateNvBlock_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_InvalidateNvBlock_Return */

# if defined (Rte_Runnable_NvM_InvalidateNvBlock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_InvalidateNvBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_InvalidateNvBlock_Start)
#  undef Rte_Runnable_NvM_InvalidateNvBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_InvalidateNvBlock_Start(NvM_BlockIdType parg0); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_InvalidateNvBlock_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_InvalidateNvBlock_Start */

# if defined (Rte_Runnable_NvM_NvM_MainFunction_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_NvM_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_NvM_MainFunction_Return)
#  undef Rte_Runnable_NvM_NvM_MainFunction_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_NvM_MainFunction_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_NvM_MainFunction_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_NvM_MainFunction_Return */

# if defined (Rte_Runnable_NvM_NvM_MainFunction_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_NvM_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_NvM_MainFunction_Start)
#  undef Rte_Runnable_NvM_NvM_MainFunction_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_NvM_MainFunction_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_NvM_MainFunction_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_NvM_MainFunction_Start */

# if defined (Rte_Runnable_NvM_ReadBlock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_ReadBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_ReadBlock_Return)
#  undef Rte_Runnable_NvM_ReadBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_ReadBlock_Return(NvM_BlockIdType parg0, dtRef_VOID DstPtr); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_ReadBlock_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_ReadBlock_Return */

# if defined (Rte_Runnable_NvM_ReadBlock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_ReadBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_ReadBlock_Start)
#  undef Rte_Runnable_NvM_ReadBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_ReadBlock_Start(NvM_BlockIdType parg0, dtRef_VOID DstPtr); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_ReadBlock_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_ReadBlock_Start */

# if defined (Rte_Runnable_NvM_SetBlockProtection_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_SetBlockProtection_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_SetBlockProtection_Return)
#  undef Rte_Runnable_NvM_SetBlockProtection_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_SetBlockProtection_Return(NvM_BlockIdType parg0, boolean ProtectionEnabled); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_SetBlockProtection_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_SetBlockProtection_Return */

# if defined (Rte_Runnable_NvM_SetBlockProtection_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_SetBlockProtection_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_SetBlockProtection_Start)
#  undef Rte_Runnable_NvM_SetBlockProtection_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_SetBlockProtection_Start(NvM_BlockIdType parg0, boolean ProtectionEnabled); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_SetBlockProtection_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_SetBlockProtection_Start */

# if defined (Rte_Runnable_NvM_SetRamBlockStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_SetRamBlockStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_SetRamBlockStatus_Return)
#  undef Rte_Runnable_NvM_SetRamBlockStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_SetRamBlockStatus_Return(NvM_BlockIdType parg0, boolean RamBlockStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_SetRamBlockStatus_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_SetRamBlockStatus_Return */

# if defined (Rte_Runnable_NvM_SetRamBlockStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_SetRamBlockStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_SetRamBlockStatus_Start)
#  undef Rte_Runnable_NvM_SetRamBlockStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_SetRamBlockStatus_Start(NvM_BlockIdType parg0, boolean RamBlockStatus); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_SetRamBlockStatus_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_SetRamBlockStatus_Start */

# if defined (Rte_Runnable_NvM_WriteBlock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_WriteBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_WriteBlock_Return)
#  undef Rte_Runnable_NvM_WriteBlock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_WriteBlock_Return(NvM_BlockIdType parg0, dtRef_const_VOID SrcPtr); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_WriteBlock_Return(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_WriteBlock_Return */

# if defined (Rte_Runnable_NvM_WriteBlock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_Runnable_NvM_WriteBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Runnable_NvM_WriteBlock_Start)
#  undef Rte_Runnable_NvM_WriteBlock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Runnable_NvM_WriteBlock_Start(NvM_BlockIdType parg0, dtRef_const_VOID SrcPtr); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Runnable_NvM_WriteBlock_Start(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Runnable_NvM_WriteBlock_Start */

# if defined (Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return)
#  undef Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Return */

# if defined (Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start)
#  undef Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start(void); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start() ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchAckHook_Dcm_DcmEcuReset_DcmEcuReset_Start */

# if defined (Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return)
#  undef Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Return */

# if defined (Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start)
#  undef Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_BswM_Switch_ESH_ModeSwitch_BswM_MDGP_ESH_Mode_Start */

# if defined (Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return)
#  undef Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Return */

# if defined (Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start)
#  undef Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_ComM_UM_USR_CHNL_CAN00_currentMode_Start */

# if defined (Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Return)
#  undef Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Return */

# if defined (Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Start)
#  undef Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_CtSaBatteryModeManager_PpBatteryMode_BatteryModes_Start */

# if defined (Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Return)
#  undef Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Return */

# if defined (Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Start)
#  undef Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes_Start */

# if defined (Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return)
#  undef Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Return */

# if defined (Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start)
#  undef Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_Dcm_DcmControlDtcSetting_DcmControlDtcSetting_Start */

# if defined (Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return)
#  undef Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return */

# if defined (Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start)
#  undef Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start */

# if defined (Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return)
#  undef Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Return */

# if defined (Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start)
#  undef Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start(uint8 mode); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_SwitchHook_Dcm_DcmEcuReset_DcmEcuReset_Start */

# if defined (Rte_Task_Activate) && (RTE_VFB_TRACE == 0)
#  undef Rte_Task_Activate /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Task_Activate)
#  undef Rte_Task_Activate /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Task_Activate(TaskType task); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Task_Activate(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Task_Activate */

# if defined (Rte_Task_Dispatch) && (RTE_VFB_TRACE == 0)
#  undef Rte_Task_Dispatch /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Task_Dispatch)
#  undef Rte_Task_Dispatch /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Task_Dispatch(TaskType task); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Task_Dispatch(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Task_Dispatch */

# if defined (Rte_Task_SetEvent) && (RTE_VFB_TRACE == 0)
#  undef Rte_Task_SetEvent /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Task_SetEvent)
#  undef Rte_Task_SetEvent /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Task_SetEvent(TaskType task, EventMaskType ev); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Task_SetEvent(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Task_SetEvent */

# if defined (Rte_Task_WaitEvent) && (RTE_VFB_TRACE == 0)
#  undef Rte_Task_WaitEvent /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Task_WaitEvent)
#  undef Rte_Task_WaitEvent /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Task_WaitEvent(TaskType task, EventMaskType ev); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Task_WaitEvent(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Task_WaitEvent */

# if defined (Rte_Task_WaitEventRet) && (RTE_VFB_TRACE == 0)
#  undef Rte_Task_WaitEventRet /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_Task_WaitEventRet)
#  undef Rte_Task_WaitEventRet /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_Task_WaitEventRet(TaskType task, EventMaskType ev); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_Task_WaitEventRet(arg1, arg2) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_Task_WaitEventRet */

# if defined (Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Return)
#  undef Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Return(IdtBatteryStatus data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Return */

# if defined (Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Start)
#  undef Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Start(IdtBatteryStatus data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApSEVMIController_PpBatteryStatus_DeBatteryStatus_Start */

# if defined (Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Return)
#  undef Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Return(boolean data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Return */

# if defined (Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Start)
#  undef Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Start(boolean data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApSEVMIController_PpDisplayState_DeLockingWriteRequestPending_Start */

# if defined (Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Return)
#  undef Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Return(IdtSpeedLimit data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Return */

# if defined (Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Start)
#  undef Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Start(IdtSpeedLimit data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtApSEVMIController_PpSpeedLimit_DeSpeedLimit_Start */

# if defined (Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Return)
#  undef Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Return(IdtBatteryStatus data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Return */

# if defined (Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Start)
#  undef Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Start(IdtBatteryStatus data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaBatteryManagement_PpBatteryStatusOut_DeBatteryStatus_Start */

# if defined (Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Return)
#  undef Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Return(IdtIgnition data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Return */

# if defined (Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Start)
#  undef Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Start(IdtIgnition data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaEngineControl_PpIgnition_DeIgnition_Start */

# if defined (Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Return)
#  undef Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Return(IdtLock data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Return */

# if defined (Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Start)
#  undef Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Start(IdtLock data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaLockControl_PpLock_DeLock_Start */

# if defined (Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Return)
#  undef Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Return(IdtCharging data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Return */

# if defined (Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Start)
#  undef Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Start(IdtCharging data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaSolarPanelControl_PpCharging_DeCharging_Start */

# if defined (Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Return)
#  undef Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Return(IdtSpeedLimit data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Return */

# if defined (Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Start)
#  undef Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Start(IdtSpeedLimit data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaSpeedLimit_PpSpeedLimitOut_DeSpeedLimit_Start */

# if defined (Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Return) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Return)
#  undef Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Return /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Return(IdtSunlight data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Return(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Return */

# if defined (Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Start) && (RTE_VFB_TRACE == 0)
#  undef Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
# endif
# if defined (Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Start)
#  undef Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Start /* PRQA S 0841 */ /* MD_MSR_19.6 */
FUNC(void, RTE_APPL_CODE) Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Start(IdtSunlight data); /* PRQA S 0850, 0777 */ /* MD_MSR_19.8, MD_Rte_0777 */
# else
#  define Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Start(arg1) ((void)(0)) /* PRQA S 3453 */ /* MD_MSR_19.7 */
# endif /* Rte_WriteHook_CtSaSunlightPresence_PpSunlight_DeSunlight_Start */

# define RTE_STOP_SEC_APPL_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif /* _RTE_HOOK_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0777:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
