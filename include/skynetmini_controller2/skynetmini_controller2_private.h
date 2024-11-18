/*
 * skynetmini_controller2_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "skynetmini_controller2".
 *
 * Model version              : 1.29
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C++ source code generated on : Mon Nov 18 04:28:32 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef skynetmini_controller2_private_h_
#define skynetmini_controller2_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "skynetmini_controller2.h"
#include "skynetmini_controller2_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

extern void skynetmin_EnabledSubsystem_Init(B_EnabledSubsystem_skynetmini_T
  *localB, P_EnabledSubsystem_skynetmini_T *localP);
extern void skynetmini_con_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_skynetmini_controller2_std_msgs_Float64 *rtu_In1,
  B_EnabledSubsystem_skynetmini_T *localB);

#endif                                 /* skynetmini_controller2_private_h_ */
