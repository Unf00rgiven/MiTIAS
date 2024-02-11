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
 *          File:  Rte_CtSaBatteryModeManager.h
 *        Config:  C:/nit-au-03/AUTOSAR_Exercises/AFS/MyECU.dpa
 *     SW-C Type:  CtSaBatteryModeManager
 *  Generated at:  Sat Feb 10 20:02:11 2024
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtSaBatteryModeManager> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSABATTERYMODEMANAGER_H
# define _RTE_CTSABATTERYMODEMANAGER_H

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

# include "Rte_CtSaBatteryModeManager_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtSaBatteryModeManager
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtSaBatteryModeManager, RTE_CONST, RTE_CONST) Rte_Inst_CtSaBatteryModeManager; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtSaBatteryModeManager, TYPEDEF, RTE_CONST) Rte_Instance;


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_CtSaBatteryModeManager_PpBatteryMode_BatteryModes(uint8 nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes(uint8 nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtSaBatteryModeManager_PpBatteryModeIn_ReadChannel(P2VAR(uint8, AUTOMATIC, RTE_CTSABATTERYMODEMANAGER_APPL_VAR) arg); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Switch_PpBatteryMode_BatteryModes Rte_Switch_CtSaBatteryModeManager_PpBatteryMode_BatteryModes
# define Rte_Switch_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes Rte_Switch_CtSaBatteryModeManager_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/
# define Rte_Call_PpBatteryModeIn_ReadChannel Rte_Call_CtSaBatteryModeManager_PpBatteryModeIn_ReadChannel




# define CtSaBatteryModeManager_START_SEC_CODE
# include "CtSaBatteryModeManager_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApBatteryManager_WriteMode
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Mode Interfaces:
 * ================
 *   Std_ReturnType Rte_Switch_PpBatteryMode_BatteryModes(uint8 mode)
 *   Modes of Rte_ModeType_MdgBatteryMode:
 *   - RTE_MODE_MdgBatteryMode_ECO
 *   - RTE_MODE_MdgBatteryMode_NORMAL
 *   - RTE_TRANSITION_MdgBatteryMode
 *   Std_ReturnType Rte_Switch_PpBswMBatteryLevel_BswM_MDGP_MdgBswMBatteryModes(uint8 mode)
 *   Modes of Rte_ModeType_MdgBatteryMode:
 *   - RTE_MODE_MdgBatteryMode_ECO
 *   - RTE_MODE_MdgBatteryMode_NORMAL
 *   - RTE_TRANSITION_MdgBatteryMode
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_PpBatteryModeIn_ReadChannel(uint8 *arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApBatteryManager_WriteMode RCtApBatteryManager
FUNC(void, CtSaBatteryModeManager_CODE) RCtApBatteryManager(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtSaBatteryModeManager_STOP_SEC_CODE
# include "CtSaBatteryModeManager_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSABATTERYMODEMANAGER_H */
