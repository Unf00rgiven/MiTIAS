/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: Com
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Com_Lcfg.c
 *   Generation Time: 2024-02-10 19:33:43
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
  MISRA / PClint JUSTIFICATIONS
**********************************************************************************************************************/
/* PRQA S 0342 EOF */ /* MD_Com_0342 */
/* PRQA S 0612 EOF */ /* MD_Com_0612 */
/* PRQA S 0639 EOF */ /* MD_MSR_1.1_639 */
/* PRQA S 0850 EOF */ /* MD_MSR_19.8 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 2006 EOF */ /* MD_MSR_14.7 */
/* PRQA S 3109 EOF */ /* MD_MSR_14.3 */
/* PRQA S 3453 EOF */ /* MD_CSL_3453 */
/* PRQA S 3458 EOF */ /* MD_MSR_19.4 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#define V_IL_ASRCOMCFG5_LCFG_SOURCE

#include "Com.h"

#include "Com_Lcfg.h"

#include "Appl_Cbk.h"
#include "Rte_Cbk.h"
#include "SchM_Com.h"

/**********************************************************************************************************************
  LOCAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL DATA PROTOTYPES
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: LOCAL DATA
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: LOCAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL DATA
**********************************************************************************************************************/
/**********************************************************************************************************************
  Com_ConstValueXInt16
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueXInt16
  \brief  Optimized array of commonly used values like initial or invalid values. ea:{6C5B1979-F523-4386-8DE1-63F2D0DD2BB9} (SINT16, UINT16)
*/ 
#define COM_START_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_ConstValueXInt16Type, COM_CONST) Com_ConstValueXInt16[1] = {
  /* Index    ConstValueXInt16      Referable Keys */
  /*     0 */          0x0000U   /* [/ActiveEcuC/Com/ComConfig/sig_CurrentSpeedSlider_InInitValue, /ActiveEcuC/Com/ComConfig/sig_CurrentSpeedSlider_InRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sig_SunlightPresence_InInitValue, /ActiveEcuC/Com/ComConfig/sig_SunlightPresence_InRxDataTimeoutSubstitutionValue] */
};
#define COM_STOP_SEC_CONST_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_ConstValueXInt8
**********************************************************************************************************************/
/** 
  \var    Com_ConstValueXInt8
  \brief  Optimized array of commonly used values like initial or invalid values. ea:{6C5B1979-F523-4386-8DE1-63F2D0DD2BB9} (BOOLEAN, SINT8, UINT8, UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_ConstValueXInt8Type, COM_CONST) Com_ConstValueXInt8[1] = {
  /* Index    ConstValueXInt8      Referable Keys */
  /*     0 */           0x00U   /* [/ActiveEcuC/Com/ComConfig/sig_BatteryModeSwitch_InInitValue, /ActiveEcuC/Com/ComConfig/sig_BatteryModeSwitch_InRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sig_Ignition_InInitValue, /ActiveEcuC/Com/ComConfig/sig_Ignition_InRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sig_Locking_InInitValue, /ActiveEcuC/Com/ComConfig/sig_Locking_InRxDataTimeoutSubstitutionValue, /ActiveEcuC/Com/ComConfig/sig_SolarPanelSwitch_InInitValue, /ActiveEcuC/Com/ComConfig/sig_SolarPanelSwitch_InRxDataTimeoutSubstitutionValue] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxAccessInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxAccessInfo
  \brief  Contains all signal layout information necessary for signal access within an I-PDU. ea:{{29ED57B2-6571-49b1-98EC-829C637CABCD}}
  \details
  Element                   Description
  ApplType                  Application data type. ea:{{E33B4863-9456-4cd2-84A1-94C89AF37A23}}
  BitLength                 Bit length of the signal or group signal. ea:{{646B1706-21D2-4b10-A5AC-A1113F297CD1}}
  BitPosition               Bit position of the signal or group signal within the I-PDU. ea:{{180FD2F9-6CDB-48e4-9557-FD4DFCABF773}}
  BufferIdx                 the index of the 0:1 relation pointing to Com_RxSigBufferXInt8,Com_RxSigBufferXInt16,Com_RxSigBufferXInt32
  ByteLength                Byte length of the signal or group signal. ea:{{646B1706-21D2-4b10-A5AC-A1113F297CD1}}
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxAccessInfoType, COM_CONST) Com_RxAccessInfo[6] = {
    /* Index    ApplType                            BitLength  BitPosition  BufferIdx  ByteLength  StartByteInPduPosition        Referable Keys */
  { /*     0 */ COM_BOOLEAN_APPLTYPEOFRXACCESSINFO,        1U,         34U,        0U,         0U,                     4U },  /* [/ActiveEcuC/Com/ComConfig/sig_BatteryModeSwitch_In, /ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  { /*     1 */  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,          0U,        0U,         2U,                     0U },  /* [/ActiveEcuC/Com/ComConfig/sig_CurrentSpeedSlider_In, /ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  { /*     2 */ COM_BOOLEAN_APPLTYPEOFRXACCESSINFO,        1U,         32U,        1U,         0U,                     4U },  /* [/ActiveEcuC/Com/ComConfig/sig_Ignition_In, /ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  { /*     3 */ COM_BOOLEAN_APPLTYPEOFRXACCESSINFO,        1U,         33U,        2U,         0U,                     4U },  /* [/ActiveEcuC/Com/ComConfig/sig_Locking_In, /ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  { /*     4 */ COM_BOOLEAN_APPLTYPEOFRXACCESSINFO,        1U,         35U,        3U,         0U,                     4U },  /* [/ActiveEcuC/Com/ComConfig/sig_SolarPanelSwitch_In, /ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  { /*     5 */  COM_UINT16_APPLTYPEOFRXACCESSINFO,       16U,         16U,        1U,         2U,                     2U }   /* [/ActiveEcuC/Com/ComConfig/sig_SunlightPresence_In, /ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_RxSigInfo
  \brief  Contains all relevant information for Rx signals. ea:{{248B1277-41E1-478b-A849-89452020B239}}
  \details
  Element     Description
  ValidDlc    Minimum length of PDU required to completely receive the signal or signal group. ea:{{0EAD864F-51F0-475a-A517-E3127ABAEBE4}}
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_RxSigInfoType, COM_CONST) Com_RxSigInfo[6] = {
    /* Index    ValidDlc        Referable Keys */
  { /*     0 */       5U },  /* [/ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  { /*     1 */       2U },  /* [/ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  { /*     2 */       5U },  /* [/ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  { /*     3 */       5U },  /* [/ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  { /*     4 */       5U },  /* [/ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  { /*     5 */       4U }   /* [/ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduInitValue
**********************************************************************************************************************/
/** 
  \var    Com_TxPduInitValue
  \brief  Initial values used for Tx I-PDU buffer initialization. ea:{{F6DC1DA1-E33F-4690-8F08-3B5B786D0FFB}}
*/ 
#define COM_START_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxPduInitValueType, COM_CONST) Com_TxPduInitValue[6] = {
  /* Index    TxPduInitValue      Referable Keys */
  /*     0 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
  /*     1 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
  /*     2 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
  /*     3 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
  /*     4 */          0x00U,  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
  /*     5 */          0x00U   /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
};
#define COM_STOP_SEC_CONST_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSigInfo
**********************************************************************************************************************/
/** 
  \var    Com_TxSigInfo
  \brief  Contains all relevant information for Tx signals and group signals. ea:{{CC99987D-84AB-4c41-BADD-7B2C86FBE930}}
  \details
  Element                   Description
  BitPosition               Bit position of the signal or group signal within the I-PDU. ea:{{180FD2F9-6CDB-48e4-9557-FD4DFCABF773}}
  StartByteInPduPosition    Start Byte position of the signal or group signal within the I-PDU.
*/ 
#define COM_START_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
CONST(Com_TxSigInfoType, COM_CONST) Com_TxSigInfo[2] = {
    /* Index    BitPosition  StartByteInPduPosition        Referable Keys */
  { /*     0 */         16U,                     2U },  /* [/ActiveEcuC/Com/ComConfig/sig_BatteryStatus_Out, /ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
  { /*     1 */          0U,                     0U }   /* [/ActiveEcuC/Com/ComConfig/sig_SpeedLimit_Out, /ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
};
#define COM_STOP_SEC_CONST_UNSPECIFIED
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CurrentTxMode
**********************************************************************************************************************/
/** 
  \var    Com_CurrentTxMode
  \brief  Current transmission mode state of all Tx I-PDUs. ea:{{ED5079EC-06ED-442b-A19B-216FAD6A321E}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uCom_CurrentTxModeType, COM_VAR_NOINIT) Com_CurrentTxMode;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CycleTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_CycleTimeCnt
  \brief  Current counter value of cyclic transmission. ea:{{3ADDB39D-576E-4748-899C-D5603B5E20E0}}
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uCom_CycleTimeCntType, COM_VAR_NOINIT) Com_CycleTimeCnt;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_CyclicSendRequest
**********************************************************************************************************************/
/** 
  \var    Com_CyclicSendRequest
  \brief  Cyclic send request flag used to indicate cyclic transmission mode for all Tx I-PDU. ea:{{DE677C5B-3122-43da-8688-6A05FE89F69D}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uCom_CyclicSendRequestType, COM_VAR_NOINIT) Com_CyclicSendRequest;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_DelayTimeCnt
**********************************************************************************************************************/
/** 
  \var    Com_DelayTimeCnt
  \brief  Current counter value of minimum delay counter. ea:{{D968C511-E27E-4b19-BF56-22E0FB91C9E8}}
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uCom_DelayTimeCntType, COM_VAR_NOINIT) Com_DelayTimeCnt;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleRxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleRxPduDeferred
  \brief  Array indicating received Rx I-PDUs to be processed deferred within the next call of Com_MainfunctionRx(). ea:{{0AD1CC67-C659-4d36-834A-23D7490767D2}}
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uCom_HandleRxPduDeferredType, COM_VAR_NOINIT) Com_HandleRxPduDeferred;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_HandleTxPduDeferred
**********************************************************************************************************************/
/** 
  \var    Com_HandleTxPduDeferred
  \brief  Flag array used for deferred Tx confirmation handling. ea:{{56043229-CA4B-4603-A242-CA55DAE9978B}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_HandleTxPduDeferredType, COM_VAR_NOINIT) Com_HandleTxPduDeferred[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_Initialized
**********************************************************************************************************************/
/** 
  \var    Com_Initialized
  \brief  Initialization state of Com. TRUE, if Com_Init() has been called, else FALSE.
*/ 
#define COM_START_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_InitializedType, COM_VAR_ZERO_INIT) Com_Initialized = FALSE;
#define COM_STOP_SEC_VAR_ZERO_INIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCnt
  \brief  Current repetition counter value for replication of transmission requests. ea:{{5E082CB5-0604-45fc-A6AC-149C28E5C4CB}}
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uCom_RepCntType, COM_VAR_NOINIT) Com_RepCnt;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RepCycleCnt
**********************************************************************************************************************/
/** 
  \var    Com_RepCycleCnt
  \brief  Current counter value of repetition period for replication of transmission requests. ea:{{C6AF618A-754E-46e3-9D7B-CDECCC6484BD}}
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uCom_RepCycleCntType, COM_VAR_NOINIT) Com_RepCycleCnt;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDefPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_RxDefPduBuffer
  \brief  Rx I-PDU buffer for deferred signal processing. ea:{{F49B9896-FB53-417d-997D-9D6FAD9EE7C6}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uCom_RxDefPduBufferType, COM_VAR_NOINIT) Com_RxDefPduBuffer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_Rear_2_MyECU_oCAN00_In] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxDlMonDivisorCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxDlMonDivisorCounterType, COM_VAR_NOINIT) Com_RxDlMonDivisorCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_RxPduGrpActive
  \brief  Rx I-PDU based state (started/stopped) of the corresponding I-PDU-Group. ea:{{1FEA071E-983D-4471-A91C-FB71A7760C8C}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_RxPduGrpActiveType, COM_VAR_NOINIT) Com_RxPduGrpActive[1];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferXInt16
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferXInt16
  \brief  Rx Signal and Group Signal Buffer. ea:{426E0C09-86A4-4b44-857F-632E79F22E59} (SINT16, UINT16)
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uCom_RxSigBufferXInt16Type, COM_VAR_NOINIT) Com_RxSigBufferXInt16;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/sig_CurrentSpeedSlider_In] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/sig_SunlightPresence_In] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_RxSigBufferXInt8
**********************************************************************************************************************/
/** 
  \var    Com_RxSigBufferXInt8
  \brief  Rx Signal and Group Signal Buffer. ea:{426E0C09-86A4-4b44-857F-632E79F22E59} (BOOLEAN, SINT8, UINT8, UINT8_N, UINT8_DYN)
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uCom_RxSigBufferXInt8Type, COM_VAR_NOINIT) Com_RxSigBufferXInt8;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/sig_BatteryModeSwitch_In] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/sig_Ignition_In] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/sig_Locking_In] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/sig_SolarPanelSwitch_In] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TransmitRequest
**********************************************************************************************************************/
/** 
  \var    Com_TransmitRequest
  \brief  Transmit request flag used for decoupled Tx I-PDU tranmission. ea:{{6073E4F7-39EB-4415-9119-5C3187E718D8}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uCom_TransmitRequestType, COM_VAR_NOINIT) Com_TransmitRequest;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxCycleCounterDivisorCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxCycleCounterDivisorCounterType, COM_VAR_NOINIT) Com_TxCycleCounterDivisorCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxDlMonDivisorCounter
**********************************************************************************************************************/
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxDlMonDivisorCounterType, COM_VAR_NOINIT) Com_TxDlMonDivisorCounter;
#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduBuffer
**********************************************************************************************************************/
/** 
  \var    Com_TxPduBuffer
  \brief  Tx I-PDU Buffer. ea:{{8FBCB61E-4F9A-4eed-BBAC-8F3EA5D20D44}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(uCom_TxPduBufferType, COM_VAR_NOINIT) Com_TxPduBuffer;  /* PRQA S 0759 */  /* MD_CSL_18.4 */
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
  /*     1 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
  /*     2 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
  /*     3 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
  /*     4 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */
  /*     5 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxPduGrpActive
**********************************************************************************************************************/
/** 
  \var    Com_TxPduGrpActive
  \brief  Tx I-PDU based state (started/stopped) of the corresponding I-PDU-Group. ea:{{6C333DA7-FB73-42c4-86EA-1F8FC5CD1D2C}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxPduGrpActiveType, COM_VAR_NOINIT) Com_TxPduGrpActive[1];
#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_TxSduLength
**********************************************************************************************************************/
/** 
  \var    Com_TxSduLength
  \brief  This var Array contains the Com Ipdu Length. ea:{{7A1C61AC-8FAE-47ea-8E93-9DA53000332A}}
*/ 
#define COM_START_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_TxSduLengthType, COM_VAR_NOINIT) Com_TxSduLength[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_16BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */

/**********************************************************************************************************************
  Com_WaitingForConfirmation
**********************************************************************************************************************/
/** 
  \var    Com_WaitingForConfirmation
  \brief  Flag array used for Tx error notification handling. ea:{{D441973A-62D6-42b6-877F-1096F9A5C295}}
*/ 
#define COM_START_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */
VAR(Com_WaitingForConfirmationType, COM_VAR_NOINIT) Com_WaitingForConfirmation[1];
  /* Index        Referable Keys  */
  /*     0 */  /* [/ActiveEcuC/Com/ComConfig/msg_MyECU_2_Rear_oCAN00_Out, /ActiveEcuC/Com/ComConfig/MyECU_oCAN00_Tx_fcef2243] */

#define COM_STOP_SEC_VAR_NOINIT_8BIT
/*lint -save -esym(961, 19.1) */
#include "MemMap.h"  /* PRQA S 5087 */  /* MD_MSR_19.1 */
/*lint -restore */


/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL DATA
**********************************************************************************************************************/


/**********************************************************************************************************************
  LOCAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  LOCAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTIONS
**********************************************************************************************************************/
/**********************************************************************************************************************
  CONFIGURATION CLASS: PRE_COMPILE
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/

/**********************************************************************************************************************
  CONFIGURATION CLASS: LINK
  SECTION: GLOBAL FUNCTIONS
**********************************************************************************************************************/






/**********************************************************************************************************************
  END OF FILE: Com_Lcfg.c
**********************************************************************************************************************/

