/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Silmulink.c
 *
 * Code generated for Simulink model 'Silmulink'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
 * C/C++ source code generated on : Sun Nov  8 20:04:21 2026
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Silmulink.h"
#include "rtwtypes.h"

/* Named constants for Chart: '<Root>/LED_BREATHE' */
#define Silmulink_IN_A                 ((uint8_T)1U)
#define Silmulink_IN_B                 ((uint8_T)2U)
#define Silmulink_IN_LedDark           ((uint8_T)1U)
#define Silmulink_IN_LedDark1          ((uint8_T)1U)
#define Silmulink_IN_LedLight          ((uint8_T)2U)
#define Silmulink_IN_LedLight1         ((uint8_T)2U)
#define Silmulink_IN_NO_ACTIVE_CHILD   ((uint8_T)0U)

/* Block states (default storage) */
DW_Silmulink_T Silmulink_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Silmulink_T Silmulink_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Silmulink_T Silmulink_Y;

/* Real-time model */
static RT_MODEL_Silmulink_T Silmulink_M_;
RT_MODEL_Silmulink_T *const Silmulink_M = &Silmulink_M_;

/* Model step function */
void Silmulink_step(void)
{
  /* Chart: '<Root>/LED_BREATHE' incorporates:
   *  Inport: '<Root>/Input'
   *  Outport: '<Root>/Output'
   *  Outport: '<Root>/Output1'
   */
  if (Silmulink_DW.is_active_c3_Silmulink == 0U) {
    Silmulink_DW.is_active_c3_Silmulink = 1U;
    Silmulink_DW.is_c3_Silmulink = Silmulink_IN_A;
    Silmulink_DW.is_A = Silmulink_IN_LedLight;

    /* Outport: '<Root>/Output' */
    Silmulink_Y.Output = 0.0;
  } else if (Silmulink_DW.is_c3_Silmulink == Silmulink_IN_A) {
    if (Silmulink_U.Input == 0.0) {
      Silmulink_DW.is_A = Silmulink_IN_NO_ACTIVE_CHILD;
      Silmulink_DW.is_c3_Silmulink = Silmulink_IN_B;
      Silmulink_DW.is_B = Silmulink_IN_LedLight1;

      /* Outport: '<Root>/Output' */
      Silmulink_Y.Output = 0.0;

      /* Outport: '<Root>/Output1' */
      Silmulink_Y.Output1 = 0.0;
    } else if (Silmulink_DW.is_A == Silmulink_IN_LedDark) {
      if (Silmulink_Y.Output <= 0.0) {
        Silmulink_DW.is_A = Silmulink_IN_LedLight;
        Silmulink_Y.Output = 0.0;
      } else {
        Silmulink_Y.Output--;
      }

      /* case IN_LedLight: */
    } else if (Silmulink_Y.Output >= 999.0) {
      Silmulink_DW.is_A = Silmulink_IN_LedDark;
    } else {
      Silmulink_Y.Output++;
    }

    /* case IN_B: */
  } else if (Silmulink_U.Input == 1.0) {
    Silmulink_DW.is_B = Silmulink_IN_NO_ACTIVE_CHILD;
    Silmulink_DW.is_c3_Silmulink = Silmulink_IN_A;
    Silmulink_DW.is_A = Silmulink_IN_LedLight;

    /* Outport: '<Root>/Output' */
    Silmulink_Y.Output = 0.0;
  } else if (Silmulink_DW.is_B == Silmulink_IN_LedDark1) {
    if (Silmulink_Y.Output1 <= 0.0) {
      Silmulink_DW.is_B = Silmulink_IN_LedLight1;

      /* Outport: '<Root>/Output' */
      Silmulink_Y.Output = 0.0;
      Silmulink_Y.Output1 = 0.0;
    } else {
      Silmulink_Y.Output1--;
    }

    /* case IN_LedLight1: */
  } else if (Silmulink_Y.Output1 >= 999.0) {
    Silmulink_DW.is_B = Silmulink_IN_LedDark1;

    /* Outport: '<Root>/Output' */
    Silmulink_Y.Output = 999.0;
  } else {
    Silmulink_Y.Output1++;
  }

  /* End of Chart: '<Root>/LED_BREATHE' */
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
