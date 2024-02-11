/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CtApSEVMIController.c
 *        Config:  C:/nit-au-03/AUTOSAR_Exercises/AFS/MyECU.dpa
 *     SW-C Type:  CtApSEVMIController
 *  Generated at:  Sat Feb 10 20:02:08 2024
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  C-Code implementation template for SW-C <CtApSEVMIController>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_Rte_0777, MD_Rte_0779 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * ComM_ModeType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * IdtBatteryStatus
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * IdtCharging
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * IdtDioValueType
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * IdtIgnition
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * IdtLock
 *   boolean has the value space required to support the mathematical concept of 
 *      binary-valued logic: {true, false}.
 *
 * IdtSpeedLimit
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * IdtSunlight
 *   uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
 *      The order-relation on uint16 is: x < y if y - x is positive.
 *      uint16 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 1267, +10000.
 *
 * NvM_RequestResultType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * NvM_ServiceIdType
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 *********************************************************************************************************************/

#include "Rte_CtApSEVMIController.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * IdtBatteryStatus: Integer in interval [0...65535]
 * IdtCharging: Boolean
 * IdtDioValueType: Integer in interval [0...65535]
 * IdtIgnition: Boolean
 * IdtLock: Boolean
 * IdtSpeedLimit: Integer in interval [0...65535]
 * IdtSunlight: Integer in interval [0...65535]
 * boolean: Boolean (standard type)
 * dtRef_const_VOID: DataReference
 * uint16: Integer in interval [0...65535] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ComM_ModeType: Enumeration of integer in interval [0...255] with enumerators
 *   COMM_NO_COMMUNICATION (0U)
 *   COMM_SILENT_COMMUNICATION (1U)
 *   COMM_FULL_COMMUNICATION (2U)
 * NvM_RequestResultType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_REQ_OK (0U)
 *   NVM_REQ_NOT_OK (1U)
 *   NVM_REQ_PENDING (2U)
 *   NVM_REQ_INTEGRITY_FAILED (3U)
 *   NVM_REQ_BLOCK_SKIPPED (4U)
 *   NVM_REQ_NV_INVALIDATED (5U)
 *   NVM_REQ_CANCELED (6U)
 *   NVM_REQ_REDUNDANCY_FAILED (7U)
 *   NVM_REQ_RESTORED_FROM_ROM (8U)
 * NvM_ServiceIdType: Enumeration of integer in interval [0...255] with enumerators
 *   NVM_READ_BLOCK (6U)
 *   NVM_WRITE_BLOCK (7U)
 *   NVM_RESTORE_BLOCK_DEFAULTS (8U)
 *   NVM_ERASE_BLOCK (9U)
 *   NVM_INVALIDATE_NV_BLOCK (11U)
 *   NVM_READ_ALL (12U)
 *
 *********************************************************************************************************************/


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


#define CtApSEVMIController_START_SEC_CODE
#include "CtApSEVMIController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApSEVMIController_CODE) PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished(NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: PpNvMNotifyJobFinishedLockingrCtApMySwc_JobFinished
 *********************************************************************************************************************/
    if (JobResult == NVM_REQ_OK) {
        (void)Rte_Write_PpDisplayState_DeLockingWriteRequestPending(CWriteReqNotPending);
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApMySwc_Init_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApSEVMIController_CODE) RCtApMySwc_Init(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApMySwc_Init
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApSEVMI_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApSEVMIController_CODE) RCtApSEVMI(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtApSEVMI
 *********************************************************************************************************************/

    boolean isCharging;
    boolean ignition;
    boolean isLocked;
    uint16 sunlightPresence;
    uint16 currentSpeed;
    static float batteryStatus = 175;
    uint16 speedLimit;
    uint16 speed0 = 0;
    uint16 speed60 = 60;
    uint16 speed120 = 120;
    uint16 speed180 = 180;
    NvM_RequestResultType NvBlockErrorStatus;
    Std_ReturnType localret;


    (void)Rte_Call_PpSpeed_ReadChannel(&currentSpeed);
    (void)Rte_Read_PpLock_DeLock(&isLocked);
    (void)Rte_Read_PpIgnition_DeIgnition(&ignition);
    (void)Rte_Read_PpCharging_DeCharging(&isCharging);
    (void)Rte_Read_PpSunlight_DeSunlight(&sunlightPresence);

    // Charging battery
    if (isCharging)
    {
        if (sunlightPresence < 1) {
            batteryStatus += 0;
        }
        else if (sunlightPresence >= 1 && sunlightPresence < 76 && batteryStatus <= 254.4) {
            batteryStatus += (float)0.6;
        }
        else if (sunlightPresence >= 76 && sunlightPresence < 178 && batteryStatus <= 253.8) {
            batteryStatus += (float)1.2;
        }
        else if (batteryStatus <= 252.5) {
            batteryStatus += (float)2.5;
        }
    }

    // Speeding, lose of battery
    if (ignition && isLocked)
    {
        if (currentSpeed < 1) {
            batteryStatus += 0;
        }
        else if (currentSpeed >= 1 && currentSpeed < 76 && batteryStatus >= 0.3) {
            batteryStatus -= (float)0.3;
        }
        else if (currentSpeed >= 76 && currentSpeed < 178 && batteryStatus >= 0.6) {
            batteryStatus -= (float)0.6;
        }
        else if (batteryStatus >= 1.2) {
            batteryStatus -= (float)1.2;
        }
    }
   
    // Speed limit
    if (batteryStatus < 1) {
        Rte_Write_PpSpeedLimit_DeSpeedLimit(speed0);
    }
    else if (batteryStatus >= 1 && batteryStatus < 76) {
        if (currentSpeed > speed60) {
            Rte_Write_PpSpeedLimit_DeSpeedLimit(speed60);
        }
        else {
            Rte_Write_PpSpeedLimit_DeSpeedLimit(currentSpeed);
        }
    }
    else if (batteryStatus >= 76 && batteryStatus < 178) {
        if (currentSpeed > speed120) {
            Rte_Write_PpSpeedLimit_DeSpeedLimit(speed120);
        }
        else {
            Rte_Write_PpSpeedLimit_DeSpeedLimit(currentSpeed);
        }
    }
    else {
        if (currentSpeed > speed180) {
            Rte_Write_PpSpeedLimit_DeSpeedLimit(speed180);
        }
        else {
            Rte_Write_PpSpeedLimit_DeSpeedLimit(currentSpeed);
        }
    }
    
    Rte_Write_PpBatteryStatus_DeBatteryStatus(batteryStatus);

    // Memory
    (void)Rte_Call_PpNvMLockingCtApMySwc_GetErrorStatus(&NvBlockErrorStatus);
    if (NVM_REQ_PENDING != NvBlockErrorStatus) {
        localret = Rte_Call_PpNvMLockingCtApMySwc_WriteBlock(NULL_PTR);
        if (localret != E_OK) {
            CANoeAPI_WriteString("Write block not accepted!");
        }
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

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
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtBatteryMode_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CtApSEVMIController_CODE) RCtBatteryMode(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: RCtBatteryMode
 *********************************************************************************************************************/




    uint8 batteryMode;

    Rte_Mode_PpComMCurrentModeSEVMIController_currentMode(&batteryMode);

    if (Rte_Mode_PpComMCurrentModeSEVMIController_currentMode(RTE_MODE_MdgBatteryMode_ECO))
    {
        Rte_Write_PpSpeedLimit_DeSpeedLimit(100);
    }



/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CtApSEVMIController_STOP_SEC_CODE
#include "CtApSEVMIController_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0777:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

   MD_Rte_0779:  MISRA rule: 5.1
     Reason:     The defined RTE naming convention may result in identifiers with more than 31 characters. The compliance to this rule is under user's control.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects to be unique within the significant characters.

*/
