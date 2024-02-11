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
 *          File:  Rte_CtIoHwAb.h
 *        Config:  C:/nit-au-03/AUTOSAR_Exercises/AFS/MyECU.dpa
 *     SW-C Type:  CtIoHwAb
 *  Generated at:  Sat Feb 10 20:02:09 2024
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtIoHwAb> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTIOHWAB_H
# define _RTE_CTIOHWAB_H

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

# include "Rte_CtIoHwAb_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtIoHwAb
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtIoHwAb, RTE_CONST, RTE_CONST) Rte_Inst_CtIoHwAb; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtIoHwAb, TYPEDEF, RTE_CONST) Rte_Instance;


# define CtIoHwAb_START_SEC_CODE
# include "CtIoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: PpSpeed_ReadChannelHwAb
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ReadChannel> of PortPrototype <PpSpeed>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void PpSpeed_ReadChannelHwAb(IdtDioValueType *value)
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_PpSpeed_ReadChannelHwAb PpSpeed_ReadChannelHwAb
FUNC(void, CtIoHwAb_CODE) PpSpeed_ReadChannelHwAb(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTIOHWAB_APPL_VAR) value); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtIoHwAb_STOP_SEC_CODE
# include "CtIoHwAb_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTIOHWAB_H */
