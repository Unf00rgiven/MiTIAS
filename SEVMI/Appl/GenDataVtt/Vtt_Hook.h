/**********************************************************************************************************************
 *  DO NOT EDIT!!! This file is automatically generated.
 *  -------------------------------------------------------------------------------------------------------------------
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  Copyright (c) 2013-2015 by Vector Informatik GmbH. All rights reserved.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Vtt_Hook.h
 *  ECU-Instance:  MyECU
 *  Generated at:  2024-02-06  21:44:40
 *
 *     Generator:  VTT 2.0.126.0
 *
 *   Description:  RTE VFB tracing definition file
 *********************************************************************************************************************/
#ifndef VTT_HOOK_H
#define VTT_HOOK_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
# include "VttCntrl.h"

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
FUNC(void, VTTCNTRL_CODE) VttHook_OnStateChange(uint8 action, uint8 oldState, uint8 newState);
extern void Rte_VttMemCpy(void* target, const void* source, uint32 size);

/**********************************************************************************************************************
 *  GLOBAL VARIABLE PROTOTYPES
 *********************************************************************************************************************/
extern sint32 rtePortHandles[];

#endif