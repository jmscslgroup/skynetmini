/*
 * skynetmini_controller2.h
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

#ifndef skynetmini_controller2_h_
#define skynetmini_controller2_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "skynetmini_controller2_types.h"
#include <string.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include <stddef.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S4>/Enabled Subsystem' */
struct B_EnabledSubsystem_skynetmini_T {
  SL_Bus_skynetmini_controller2_std_msgs_Float64 In1;/* '<S12>/In1' */
};

/* Block signals (default storage) */
struct B_skynetmini_controller2_T {
  SL_Bus_skynetmini_controller2_std_msgs_Float64 r;
  B_EnabledSubsystem_skynetmini_T EnabledSubsystem_e;/* '<S6>/Enabled Subsystem' */
  B_EnabledSubsystem_skynetmini_T EnabledSubsystem_m;/* '<S5>/Enabled Subsystem' */
  B_EnabledSubsystem_skynetmini_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_skynetmini_controller2_T {
  ros_slroscpp_internal_block_P_T obj; /* '<S3>/SinkBlock' */
  ros_slroscpp_internal_block_S_T obj_g;/* '<S6>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_d;/* '<S5>/SourceBlock' */
  ros_slroscpp_internal_block_S_T obj_n;/* '<S4>/SourceBlock' */
  boolean_T objisempty;                /* '<S6>/SourceBlock' */
  boolean_T objisempty_m;              /* '<S5>/SourceBlock' */
  boolean_T objisempty_g;              /* '<S4>/SourceBlock' */
  boolean_T objisempty_j;              /* '<S3>/SinkBlock' */
};

/* Parameters for system: '<S4>/Enabled Subsystem' */
struct P_EnabledSubsystem_skynetmini_T_ {
  SL_Bus_skynetmini_controller2_std_msgs_Float64 Out1_Y0;/* Computed Parameter: Out1_Y0
                                                          * Referenced by: '<S12>/Out1'
                                                          */
};

/* Parameters (default storage) */
struct P_skynetmini_controller2_T_ {
  SL_Bus_skynetmini_controller2_std_msgs_Float64 Constant_Value;/* Computed Parameter: Constant_Value
                                                                 * Referenced by: '<S1>/Constant'
                                                                 */
  SL_Bus_skynetmini_controller2_std_msgs_Float64 Constant_Value_d;/* Computed Parameter: Constant_Value_d
                                                                   * Referenced by: '<S4>/Constant'
                                                                   */
  SL_Bus_skynetmini_controller2_std_msgs_Float64 Constant_Value_a;/* Computed Parameter: Constant_Value_a
                                                                   * Referenced by: '<S5>/Constant'
                                                                   */
  SL_Bus_skynetmini_controller2_std_msgs_Float64 Constant_Value_h;/* Computed Parameter: Constant_Value_h
                                                                   * Referenced by: '<S6>/Constant'
                                                                   */
  real_T tau_normal_Value;             /* Expression: 4
                                        * Referenced by: '<S2>/tau_normal'
                                        */
  real_T maximum_desired_speed_Value;  /* Expression: 20
                                        * Referenced by: '<S2>/maximum_desired_speed'
                                        */
  real_T minimum_speed_for_calculation_V;/* Expression: 10
                                          * Referenced by: '<S2>/minimum_speed_for_calculation'
                                          */
  real_T alpha_normal_Value;           /* Expression: 0.2
                                        * Referenced by: '<S2>/alpha_normal'
                                        */
  real_T tau_brake_Value;              /* Expression: 2.5
                                        * Referenced by: '<S2>/tau_brake'
                                        */
  real_T alpha_break_Value;            /* Expression: 0.15
                                        * Referenced by: '<S2>/alpha_break'
                                        */
  real_T eco_accel_Value;              /* Expression: 0.5
                                        * Referenced by: '<S2>/eco_accel'
                                        */
  P_EnabledSubsystem_skynetmini_T EnabledSubsystem_e;/* '<S6>/Enabled Subsystem' */
  P_EnabledSubsystem_skynetmini_T EnabledSubsystem_m;/* '<S5>/Enabled Subsystem' */
  P_EnabledSubsystem_skynetmini_T EnabledSubsystem;/* '<S4>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_skynetmini_controller_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_skynetmini_controller2_T skynetmini_controller2_P;

#ifdef __cplusplus

}

#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_skynetmini_controller2_T skynetmini_controller2_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_skynetmini_controller2_T skynetmini_controller2_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void skynetmini_controller2_initialize(void);
  extern void skynetmini_controller2_step(void);
  extern void skynetmini_controller2_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_skynetmini_controlle_T *const skynetmini_controller2_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'skynetmini_controller2'
 * '<S1>'   : 'skynetmini_controller2/Blank Message'
 * '<S2>'   : 'skynetmini_controller2/Ego Car Controller 1'
 * '<S3>'   : 'skynetmini_controller2/ego_car_accel'
 * '<S4>'   : 'skynetmini_controller2/ego_car_speed'
 * '<S5>'   : 'skynetmini_controller2/ego_car_speed1'
 * '<S6>'   : 'skynetmini_controller2/space_gap'
 * '<S7>'   : 'skynetmini_controller2/Ego Car Controller 1/accel_brake'
 * '<S8>'   : 'skynetmini_controller2/Ego Car Controller 1/accel_normal'
 * '<S9>'   : 'skynetmini_controller2/Ego Car Controller 1/balance_accel'
 * '<S10>'  : 'skynetmini_controller2/Ego Car Controller 1/buffer_time'
 * '<S11>'  : 'skynetmini_controller2/Ego Car Controller 1/calculate_acceleration'
 * '<S12>'  : 'skynetmini_controller2/ego_car_speed/Enabled Subsystem'
 * '<S13>'  : 'skynetmini_controller2/ego_car_speed1/Enabled Subsystem'
 * '<S14>'  : 'skynetmini_controller2/space_gap/Enabled Subsystem'
 */
#endif                                 /* skynetmini_controller2_h_ */
