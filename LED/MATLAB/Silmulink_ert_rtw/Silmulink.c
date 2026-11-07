/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Silmulink.c
 *
 * Code generated for Simulink model 'Silmulink'.
 *
 * Model version                  : 1.16
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sat Nov  7 18:50:47 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Silmulink.h"
#include "rtwtypes.h"
#include <math.h>

/* Named constants for Chart: '<Root>/LED_BREATHE' */
#define Silmulink_IN_LedDark           ((uint8_T)1U)
#define Silmulink_IN_LedLight          ((uint8_T)2U)

/* Block signals (default storage) */
B_Silmulink_T Silmulink_B;

/* Block states (default storage) */
DW_Silmulink_T Silmulink_DW;

/* Real-time model */
static RT_MODEL_Silmulink_T Silmulink_M_;
RT_MODEL_Silmulink_T *const Silmulink_M = &Silmulink_M_;

/* Model step function */
void Silmulink_step(real_T *arg_Output, real_T *arg_Input, real_T *arg_Input1,
                    real_T *arg_Input2, real_T *arg_Output1, real_T *arg_Output2)
{
  real_T tmp;

  /* Chart: '<Root>/LED_BREATHE' */
  if (Silmulink_DW.is_active_c3_Silmulink == 0U) {
    Silmulink_DW.is_active_c3_Silmulink = 1U;
    Silmulink_DW.is_c3_Silmulink = Silmulink_IN_LedLight;
    Silmulink_B.Led_Output = 0.0;
  } else if (Silmulink_DW.is_c3_Silmulink == Silmulink_IN_LedDark) {
    if (Silmulink_B.Led_Output <= 0.0) {
      Silmulink_DW.is_c3_Silmulink = Silmulink_IN_LedLight;
      Silmulink_B.Led_Output = 0.0;
    } else {
      Silmulink_B.Led_Output--;
    }

    /* case IN_LedLight: */
  } else if (Silmulink_B.Led_Output >= 999.0) {
    Silmulink_DW.is_c3_Silmulink = Silmulink_IN_LedDark;
  } else {
    Silmulink_B.Led_Output++;
  }

  /* End of Chart: '<Root>/LED_BREATHE' */

  /* Outport: '<Root>/Output' */
  *arg_Output = Silmulink_B.Led_Output;

  /* Switch: '<S3>/Switch' incorporates:
   *  Abs: '<S3>/Abs'
   *  Constant: '<S3>/Constant'
   *  Constant: '<S3>/Constant1'
   *  Inport: '<Root>/Input1'
   *  RelationalOperator: '<S3>/Relational Operator'
   */
  if (fabs(*arg_Input1) <= 1.0E-5) {
    tmp = 1.0E-5;
  } else {
    tmp = *arg_Input1;
  }

  /* Outport: '<Root>/Output1' incorporates:
   *  Inport: '<Root>/Input'
   *  Product: '<S3>/Divide'
   *  Switch: '<S3>/Switch'
   */
  *arg_Output1 = *arg_Input / tmp;

  /* Outport: '<Root>/Output2' incorporates:
   *  Constant: '<S2>/Constant'
   *  Constant: '<S2>/Constant1'
   *  Inport: '<Root>/Input2'
   *  Product: '<S2>/Divide'
   *  Product: '<S2>/Divide1'
   */
  *arg_Output2 = *arg_Input2 * 180.0 / 3.1415926535897931;
}

/* Model initialize function */
void Silmulink_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Silmulink_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
