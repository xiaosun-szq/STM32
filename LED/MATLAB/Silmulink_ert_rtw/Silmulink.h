/*
 * Sponsored License - for use in support of a program or activity
 * sponsored by MathWorks.  Not for government, commercial or other
 * non-sponsored organizational use.
 *
 * File: Silmulink.h
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

#ifndef RTW_HEADER_Silmulink_h_
#define RTW_HEADER_Silmulink_h_
#ifndef Silmulink_COMMON_INCLUDES_
#define Silmulink_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Silmulink_COMMON_INCLUDES_ */

#include "Silmulink_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint8_T is_active_c3_Silmulink;      /* '<Root>/LED_BREATHE' */
  uint8_T is_c3_Silmulink;             /* '<Root>/LED_BREATHE' */
  uint8_T is_A;                        /* '<Root>/LED_BREATHE' */
  uint8_T is_B;                        /* '<Root>/LED_BREATHE' */
} DW_Silmulink_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Input;                        /* '<Root>/Input' */
} ExtU_Silmulink_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Output;                       /* '<Root>/Output' */
  real_T Output1;                      /* '<Root>/Output1' */
} ExtY_Silmulink_T;

/* Real-time Model Data Structure */
struct tag_RTM_Silmulink_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_Silmulink_T Silmulink_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Silmulink_T Silmulink_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Silmulink_T Silmulink_Y;

/* Model entry point functions */
extern void Silmulink_initialize(void);
extern void Silmulink_step(void);
extern void Silmulink_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Silmulink_T *const Silmulink_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 */

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
 * '<Root>' : 'Silmulink'
 * '<S1>'   : 'Silmulink/LED_BREATHE'
 */
#endif                                 /* RTW_HEADER_Silmulink_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
