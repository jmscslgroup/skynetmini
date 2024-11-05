//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: skynetmini_controller1.cpp
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
#include "skynetmini_controller1.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rtwtypes.h"
#include "skynetmini_controller1_types.h"

// Block signals (default storage)
B_skynetmini_controller1_T skynetmini_controller1_B;

// Block states (default storage)
DW_skynetmini_controller1_T skynetmini_controller1_DW;

// Real-time model
RT_MODEL_skynetmini_controlle_T skynetmini_controller1_M_ =
  RT_MODEL_skynetmini_controlle_T();
RT_MODEL_skynetmini_controlle_T *const skynetmini_controller1_M =
  &skynetmini_controller1_M_;

// Model step function
void skynetmini_controller1_step(void)
{
  SL_Bus_skynetmini_controller1_std_msgs_Float64 rtb_BusAssignment;
  SL_Bus_skynetmini_controller1_std_msgs_Float64 rtb_SourceBlock_o2_0;
  real_T rtb_ego_accel_l;
  real_T rtb_ego_accel_m;
  boolean_T b_varargout_1;

  // Outputs for Atomic SubSystem: '<Root>/space_gap'
  // MATLABSystem: '<S5>/SourceBlock'
  b_varargout_1 = Sub_skynetmini_controller1_2.getLatestMessage
    (&rtb_SourceBlock_o2_0);

  // Outputs for Enabled SubSystem: '<S5>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S11>/Enable'

  // Start for MATLABSystem: '<S5>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S11>/In1'
    skynetmini_controller1_B.In1 = rtb_SourceBlock_o2_0;
  }

  // End of Start for MATLABSystem: '<S5>/SourceBlock'
  // End of Outputs for SubSystem: '<S5>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/space_gap'

  // Outputs for Atomic SubSystem: '<Root>/ego_car_speed'
  // MATLABSystem: '<S4>/SourceBlock'
  b_varargout_1 = Sub_skynetmini_controller1_1.getLatestMessage
    (&rtb_SourceBlock_o2_0);

  // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S10>/Enable'

  // Start for MATLABSystem: '<S4>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S10>/In1'
    skynetmini_controller1_B.In1_m = rtb_SourceBlock_o2_0;
  }

  // End of Start for MATLABSystem: '<S4>/SourceBlock'
  // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<Root>/ego_car_speed'

  // MATLAB Function: '<S2>/accel_normal' incorporates:
  //   Constant: '<S2>/alpha_normal'
  //   Constant: '<S2>/tau_normal'

  rtb_ego_accel_m = (skynetmini_controller1_B.In1.Data -
                     skynetmini_controller1_P.tau_normal_Value *
                     skynetmini_controller1_B.In1_m.Data) *
    skynetmini_controller1_P.alpha_normal_Value;
  if (!(rtb_ego_accel_m <= 1.5)) {
    rtb_ego_accel_m = 1.5;
  }

  if (!(rtb_ego_accel_m >= -3.0)) {
    rtb_ego_accel_m = -3.0;
  }

  // End of MATLAB Function: '<S2>/accel_normal'

  // MATLAB Function: '<S2>/accel_brake' incorporates:
  //   Constant: '<S2>/alpha_break'

  if (skynetmini_controller1_P.alpha_break_Value <= 1.5) {
    rtb_ego_accel_l = skynetmini_controller1_P.alpha_break_Value;
  } else {
    rtb_ego_accel_l = 1.5;
  }

  if (!(rtb_ego_accel_l >= -3.0)) {
    rtb_ego_accel_l = -3.0;
  }

  // End of MATLAB Function: '<S2>/accel_brake'

  // MATLAB Function: '<S2>/calculate_acceleration' incorporates:
  //   Constant: '<S2>/eco_accel'

  if (rtb_ego_accel_m > 0.0) {
    if ((rtb_ego_accel_m <= skynetmini_controller1_P.eco_accel_Value) || rtIsNaN
        (skynetmini_controller1_P.eco_accel_Value)) {
      // BusAssignment: '<Root>/Bus Assignment'
      rtb_BusAssignment.Data = rtb_ego_accel_m;
    } else {
      // BusAssignment: '<Root>/Bus Assignment'
      rtb_BusAssignment.Data = skynetmini_controller1_P.eco_accel_Value;
    }
  } else if (rtb_ego_accel_l > 0.0) {
    // MATLAB Function: '<S2>/balance_accel'
    rtb_ego_accel_l = skynetmini_controller1_B.In1_m.Data *
      skynetmini_controller1_B.In1_m.Data * -0.00021453 - 0.14715;
    if ((rtb_ego_accel_m >= rtb_ego_accel_l) || rtIsNaN(rtb_ego_accel_l)) {
      // BusAssignment: '<Root>/Bus Assignment'
      rtb_BusAssignment.Data = rtb_ego_accel_m;
    } else {
      // BusAssignment: '<Root>/Bus Assignment'
      rtb_BusAssignment.Data = rtb_ego_accel_l;
    }
  } else {
    // BusAssignment: '<Root>/Bus Assignment'
    rtb_BusAssignment.Data = rtb_ego_accel_l;
  }

  // End of MATLAB Function: '<S2>/calculate_acceleration'

  // Outputs for Atomic SubSystem: '<Root>/ego_car_accel'
  // MATLABSystem: '<S3>/SinkBlock'
  Pub_skynetmini_controller1_3.publish(&rtb_BusAssignment);

  // End of Outputs for SubSystem: '<Root>/ego_car_accel'
}

// Model initialize function
void skynetmini_controller1_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    char_T b_zeroDelimTopic_0[17];
    char_T b_zeroDelimTopic[11];
    static const char_T b_zeroDelimTopic_1[11] = "/lead_dist";
    static const char_T b_zeroDelimTopic_2[17] = "/car/state/vel_x";
    static const char_T b_zeroDelimTopic_3[11] = "/cmd_accel";

    // SystemInitialize for Atomic SubSystem: '<Root>/space_gap'
    // SystemInitialize for Enabled SubSystem: '<S5>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S11>/In1' incorporates:
    //   Outport: '<S11>/Out1'

    skynetmini_controller1_B.In1 = skynetmini_controller1_P.Out1_Y0_e;

    // End of SystemInitialize for SubSystem: '<S5>/Enabled Subsystem'

    // Start for MATLABSystem: '<S5>/SourceBlock'
    skynetmini_controller1_DW.obj_g.matlabCodegenIsDeleted = false;
    skynetmini_controller1_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_1[i];
    }

    Sub_skynetmini_controller1_2.createSubscriber(&b_zeroDelimTopic[0], 1);
    skynetmini_controller1_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S5>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/space_gap'

    // SystemInitialize for Atomic SubSystem: '<Root>/ego_car_speed'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for SignalConversion generated from: '<S10>/In1' incorporates:
    //   Outport: '<S10>/Out1'

    skynetmini_controller1_B.In1_m = skynetmini_controller1_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'

    // Start for MATLABSystem: '<S4>/SourceBlock'
    skynetmini_controller1_DW.obj_n.matlabCodegenIsDeleted = false;
    skynetmini_controller1_DW.obj_n.isInitialized = 1;
    for (i = 0; i < 17; i++) {
      b_zeroDelimTopic_0[i] = b_zeroDelimTopic_2[i];
    }

    Sub_skynetmini_controller1_1.createSubscriber(&b_zeroDelimTopic_0[0], 1);
    skynetmini_controller1_DW.obj_n.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/ego_car_speed'

    // SystemInitialize for Atomic SubSystem: '<Root>/ego_car_accel'
    // Start for MATLABSystem: '<S3>/SinkBlock'
    skynetmini_controller1_DW.obj.matlabCodegenIsDeleted = false;
    skynetmini_controller1_DW.obj.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      b_zeroDelimTopic[i] = b_zeroDelimTopic_3[i];
    }

    Pub_skynetmini_controller1_3.createPublisher(&b_zeroDelimTopic[0], 1);
    skynetmini_controller1_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<Root>/ego_car_accel'
  }
}

// Model terminate function
void skynetmini_controller1_terminate(void)
{
  // Terminate for Atomic SubSystem: '<Root>/space_gap'
  // Terminate for MATLABSystem: '<S5>/SourceBlock'
  if (!skynetmini_controller1_DW.obj_g.matlabCodegenIsDeleted) {
    skynetmini_controller1_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S5>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/space_gap'

  // Terminate for Atomic SubSystem: '<Root>/ego_car_speed'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  if (!skynetmini_controller1_DW.obj_n.matlabCodegenIsDeleted) {
    skynetmini_controller1_DW.obj_n.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S4>/SourceBlock'
  // End of Terminate for SubSystem: '<Root>/ego_car_speed'

  // Terminate for Atomic SubSystem: '<Root>/ego_car_accel'
  // Terminate for MATLABSystem: '<S3>/SinkBlock'
  if (!skynetmini_controller1_DW.obj.matlabCodegenIsDeleted) {
    skynetmini_controller1_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S3>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/ego_car_accel'
}

//
// File trailer for generated code.
//
// [EOF]
//
