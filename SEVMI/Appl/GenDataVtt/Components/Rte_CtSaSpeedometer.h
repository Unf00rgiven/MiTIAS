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
 *          File:  Rte_CtSaSpeedometer.h
 *        Config:  MyECU.dpa
 *   ECU-Project:  MyECU
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtSaSpeedometer>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSASPEEDOMETER_H
# define _RTE_CTSASPEEDOMETER_H

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

# include "Rte_CtSaSpeedometer_Type.h"
# include "Rte_DataHandleType.h"


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define RTE_START_SEC_CTIOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
FUNC(void, RTE_CTIOHWAB_APPL_CODE) PpSpeed_ReadChannelHwAb(P2VAR(uint8, AUTOMATIC, RTE_CTIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */
#  define RTE_STOP_SEC_CTIOHWAB_APPL_CODE
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

#  define Rte_Call_PpSpeed_ReadChannel(arg1) (PpSpeed_ReadChannelHwAb(arg1), ((Std_ReturnType)RTE_E_OK)) /* PRQA S 3453 */ /* MD_MSR_19.7 */


# endif /* !defined(RTE_CORE) */


# define CtSaSpeedometer_START_SEC_CODE
# include "CtSaSpeedometer_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_RSpeedCli RSpeedCli
# endif

FUNC(void, CtSaSpeedometer_CODE) RSpeedCli(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define CtSaSpeedometer_STOP_SEC_CODE
# include "CtSaSpeedometer_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSASPEEDOMETER_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
