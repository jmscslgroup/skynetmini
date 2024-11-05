//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: skynetmini_controller1.h
//
// Code generated for Simulink model 'skynetmini_controller1'.
//
// Model version                  : 1.4
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Tue Nov  5 10:35:42 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef skynetmini_controller1_h_
#define skynetmini_controller1_h_
#include "rtwtypes.h"
#include "slros_initialize.h"
#include "skynetmini_controller1_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_skynetmini_controller1_T {
  SL_Bus_skynetmini_controller1_std_msgs_Float64 In1;// '<S11>/In1'
  SL_Bus_skynetmini_controller1_std_msgs_Float64 In1_m;// '<S10>/In1'
};

// Block states (default storage) for system '<Root>'
struct DW_skynetmini_controller1_T {
  ros_slroscpp_internal_block_P_T obj; // '<S3>/SinkBlock'
  ros_slroscpp_internal_block_S_T obj_g;// '<S5>/SourceBlock'
  ros_slroscpp_internal_block_S_T obj_n;// '<S4>/SourceBlock'
};

// Parameters (default storage)
struct P_skynetmini_controller1_T_ {
  SL_Bus_skynetmini_controller1_std_msgs_Float64 Constant_Value;// Computed Parameter: Constant_Value
                                                                   //  Referenced by: '<S1>/Constant'

  SL_Bus_skynetmini_controller1_std_msgs_Float64 Out1_Y0;// Computed Parameter: Out1_Y0
                                                            //  Referenced by: '<S10>/Out1'

  SL_Bus_skynetmini_controller1_std_msgs_Float64 Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                     //  Referenced by: '<S4>/Constant'

  SL_Bus_skynetmini_controller1_std_msgs_Float64 Out1_Y0_e;// Computed Parameter: Out1_Y0_e
                                                              //  Referenced by: '<S11>/Out1'

  SL_Bus_skynetmini_controller1_std_msgs_Float64 Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                                     //  Referenced by: '<S5>/Constant'

  real_T tau_normal_Value;             // Expression: 2.5
                                          //  Referenced by: '<S2>/tau_normal'

  real_T alpha_normal_Value;           // Expression: 0.15
                                          //  Referenced by: '<S2>/alpha_normal'

  real_T tau_brake_Value;              // Expression: 1.5
                                          //  Referenced by: '<S2>/tau_brake'

  real_T alpha_break_Value;            // Expression: 0.12
                                          //  Referenced by: '<S2>/alpha_break'

  real_T eco_accel_Value;              // Expression: 0.5
                                          //  Referenced by: '<S2>/eco_accel'

};

// Real-time Model Data Structure
struct tag_RTM_skynetmini_controller_T {
  const char_T * volatile errorStatus;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_skynetmini_controller1_T skynetmini_controller1_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_skynetmini_controller1_T skynetmini_controller1_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_skynetmini_controller1_T skynetmini_controller1_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void skynetmini_controller1_initialize(void);
  extern void skynetmini_controller1_step(void);
  extern void skynetmini_controller1_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_skynetmini_controlle_T *const skynetmini_controller1_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'skynetmini_controller1'
//  '<S1>'   : 'skynetmini_controller1/Blank Message'
//  '<S2>'   : 'skynetmini_controller1/Ego Car Controller 1'
//  '<S3>'   : 'skynetmini_controller1/ego_car_accel'
//  '<S4>'   : 'skynetmini_controller1/ego_car_speed'
//  '<S5>'   : 'skynetmini_controller1/space_gap'
//  '<S6>'   : 'skynetmini_controller1/Ego Car Controller 1/accel_brake'
//  '<S7>'   : 'skynetmini_controller1/Ego Car Controller 1/accel_normal'
//  '<S8>'   : 'skynetmini_controller1/Ego Car Controller 1/balance_accel'
//  '<S9>'   : 'skynetmini_controller1/Ego Car Controller 1/calculate_acceleration'
//  '<S10>'  : 'skynetmini_controller1/ego_car_speed/Enabled Subsystem'
//  '<S11>'  : 'skynetmini_controller1/space_gap/Enabled Subsystem'

#endif                                 // skynetmini_controller1_h_

//
// File trailer for generated code.
//
// [EOF]
//
