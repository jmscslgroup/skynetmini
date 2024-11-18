/*
 * skynetmini_controller2_data.cpp
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

#include "skynetmini_controller2.h"

/* Block parameters (default storage) */
P_skynetmini_controller2_T skynetmini_controller2_P = {
  /* Computed Parameter: Constant_Value
   * Referenced by: '<S1>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S4>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value_a
   * Referenced by: '<S5>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S6>/Constant'
   */
  {
    0.0                                /* Data */
  },

  /* Expression: 4
   * Referenced by: '<S2>/tau_normal'
   */
  4.0,

  /* Expression: 20
   * Referenced by: '<S2>/maximum_desired_speed'
   */
  20.0,

  /* Expression: 10
   * Referenced by: '<S2>/minimum_speed_for_calculation'
   */
  10.0,

  /* Expression: 0.2
   * Referenced by: '<S2>/alpha_normal'
   */
  0.2,

  /* Expression: 2.5
   * Referenced by: '<S2>/tau_brake'
   */
  2.5,

  /* Expression: 0.15
   * Referenced by: '<S2>/alpha_break'
   */
  0.15,

  /* Expression: 0.5
   * Referenced by: '<S2>/eco_accel'
   */
  0.5,

  /* Start of '<S6>/Enabled Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S14>/Out1'
     */
    {
      0.0                              /* Data */
    }
  }
  ,

  /* End of '<S6>/Enabled Subsystem' */

  /* Start of '<S5>/Enabled Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S13>/Out1'
     */
    {
      0.0                              /* Data */
    }
  }
  ,

  /* End of '<S5>/Enabled Subsystem' */

  /* Start of '<S4>/Enabled Subsystem' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S12>/Out1'
     */
    {
      0.0                              /* Data */
    }
  }
  /* End of '<S4>/Enabled Subsystem' */
};
