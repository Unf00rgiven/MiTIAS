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
 *          File:  Rte_CtSaBatteryModeManager_Type.h
 *        Config:  C:/nit-au-03/AUTOSAR_Exercises/AFS/MyECU.dpa
 *     SW-C Type:  CtSaBatteryModeManager
 *  Generated at:  Sat Feb 10 20:02:11 2024
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application types header file for SW-C <CtSaBatteryModeManager> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSABATTERYMODEMANAGER_TYPE_H
# define _RTE_CTSABATTERYMODEMANAGER_TYPE_H

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

# include "Rte_Type.h"



/**********************************************************************************************************************
 * Definitions for Mode Management
 *********************************************************************************************************************/
# ifndef RTE_MODETYPE_MdgBatteryMode
#  define RTE_MODETYPE_MdgBatteryMode
typedef uint8 Rte_ModeType_MdgBatteryMode;
# endif

# ifndef RTE_MODE_MdgBatteryMode_ECO
#  define RTE_MODE_MdgBatteryMode_ECO (0U)
# endif
# ifndef RTE_MODE_MdgBatteryMode_NORMAL
#  define RTE_MODE_MdgBatteryMode_NORMAL (1U)
# endif
# ifndef RTE_TRANSITION_MdgBatteryMode
#  define RTE_TRANSITION_MdgBatteryMode (2U)
# endif

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSABATTERYMODEMANAGER_TYPE_H */
