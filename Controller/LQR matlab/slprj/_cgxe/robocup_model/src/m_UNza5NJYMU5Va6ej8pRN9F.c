/* Include files */

#include "modelInterface.h"
#include "m_UNza5NJYMU5Va6ej8pRN9F.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 1, 1, "SystemCore",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

static emlrtMCInfo b_emlrtMCI = { 17, 9, "error",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\eml\\eml\\+coder\\+internal\\error.m"
};

/* Function Declarations */
static boolean_T isequal(real_T varargin_1, real_T varargin_2);
static real_T mpower(real_T a);
static void cgxe_mdl_start(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance);
static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance);
static void emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *b_sysobj, const char_T *identifier,
  RobotParams *y);
static void b_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId,
  RobotParams *y);
static int32_T c_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static boolean_T d_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static real_T e_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static void f_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId, real_T
  y[4]);
static boolean_T g_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *b_sysobj_not_empty, const char_T *identifier);
static void mw__internal__setSimState__fcn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *st);
static const mxArray *message(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
static void error(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance, const
                  mxArray *b, emlrtMCInfo *location);
static const mxArray *b_message(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *b, emlrtMCInfo *location);
static int32_T h_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId);
static boolean_T i_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId);
static real_T j_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId);
static void k_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId, real_T
  ret[4]);
static void init_simulink_io_address(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance);

/* Function Definitions */
static boolean_T isequal(real_T varargin_1, real_T varargin_2)
{
  boolean_T p;
  boolean_T b_p;
  p = false;
  b_p = true;
  if (!(varargin_1 == varargin_2)) {
    b_p = false;
  }

  if (b_p) {
    p = true;
  }

  return p;
}

static real_T mpower(real_T a)
{
  return a * a;
}

static void cgxe_mdl_start(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance)
{
  boolean_T flag;
  int32_T i0;
  RobotParams *obj;
  static char_T cv0[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T u[51];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 51 };

  const mxArray *m0;
  static char_T cv1[5] = { 's', 'e', 't', 'u', 'p' };

  char_T b_u[5];
  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 5 };

  static char_T cv2[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  char_T c_u[44];
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 44 };

  real_T *M_bot;
  real_T *I_bot;
  real_T *g;
  real_T *r;
  real_T *L;
  real_T *Rt;
  real_T *K_e;
  real_T *K_t;
  real_T *K_f;
  real_T *I_asm;
  real_T *V;
  real_T (*wheel_angles)[4];
  wheel_angles = (real_T (*)[4])cgxertGetRunTimeParamInfoData(moduleInstance->S,
    11);
  V = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 10);
  I_asm = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 9);
  K_f = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 8);
  K_t = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 7);
  K_e = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 6);
  Rt = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 5);
  L = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 4);
  r = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 3);
  g = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 2);
  I_bot = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  M_bot = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  init_simulink_io_address(moduleInstance);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst,
                  "C:\\Users\\abdullah\\Documents\\GitHub\\Robocup-SSL\\Controller\\LQR matlab\\RobotParams.m",
                  0, 9, 9, 0, 0, 0, 0, 0, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst, 0, 5, "RobotParams_get.B", 2822, -1,
               2951);
  covrtFcnInit(moduleInstance->covInst, 0, 4, "RobotParams_get.A_2", 2647, -1,
               2804);
  covrtFcnInit(moduleInstance->covInst, 0, 3, "RobotParams_get.A_1", 2491, -1,
               2637);
  covrtFcnInit(moduleInstance->covInst, 0, 2, "RobotParams_get.G", 2070, -1,
               2481);
  covrtFcnInit(moduleInstance->covInst, 0, 1, "RobotParams_get.J", 1874, -1,
               2060);
  covrtFcnInit(moduleInstance->covInst, 0, 8,
               "RobotParams_isOutputFixedSizeImpl", 3663, -1, 3748);
  covrtFcnInit(moduleInstance->covInst, 0, 7, "RobotParams_getOutputSizeImpl",
               3497, -1, 3645);
  covrtFcnInit(moduleInstance->covInst, 0, 6, "RobotParams_stepImpl", 3174, -1,
               3298);
  covrtFcnInit(moduleInstance->covInst, 0, 0, "RobotParams_RobotParams", 64, -1,
               75);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst, 0, 5, 2858, -1, 2938);
  covrtBasicBlockInit(moduleInstance->covInst, 0, 4, 2687, -1, 2791);
  covrtBasicBlockInit(moduleInstance->covInst, 0, 3, 2531, -1, 2624);
  covrtBasicBlockInit(moduleInstance->covInst, 0, 2, 2106, -1, 2468);
  covrtBasicBlockInit(moduleInstance->covInst, 0, 1, 1910, -1, 2047);
  covrtBasicBlockInit(moduleInstance->covInst, 0, 8, 3720, -1, 3735);
  covrtBasicBlockInit(moduleInstance->covInst, 0, 7, 3564, -1, 3632);
  covrtBasicBlockInit(moduleInstance->covInst, 0, 6, 3224, -1, 3285);
  covrtBasicBlockInit(moduleInstance->covInst, 0, 0, 64, -1, 75);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst, 0U);
  if (!moduleInstance->sysobj_not_empty) {
    covrtLogFcn(moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 0);
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.TunablePropsChanged = false;
    moduleInstance->sysobj_not_empty = true;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.M_bot = *M_bot;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.I_bot = *I_bot;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.g = *g;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.r = *r;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.L = *L;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Rt = *Rt;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_e = *K_e;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_t = *K_t;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_f = *K_f;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.I_asm = *I_asm;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.V = *V;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i0 = 0; i0 < 4; i0++) {
      moduleInstance->sysobj.wheel_angles[i0] = (*wheel_angles)[i0];
    }
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i0 = 0; i0 < 51; i0++) {
      u[i0] = cv0[i0];
    }

    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m0, &u[0]);
    emlrtAssign(&y, m0);
    for (i0 = 0; i0 < 5; i0++) {
      b_u[i0] = cv1[i0];
    }

    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m0, &b_u[0]);
    emlrtAssign(&b_y, m0);
    error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = 1;
  if (obj->TunablePropsChanged) {
    for (i0 = 0; i0 < 44; i0++) {
      c_u[i0] = cv2[i0];
    }

    c_y = NULL;
    m0 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 44, m0, &c_u[0]);
    emlrtAssign(&c_y, m0);
    error(moduleInstance, b_message(moduleInstance, c_y, &emlrtMCI), &emlrtMCI);
  }

  obj->TunablePropsChanged = false;
}

static void cgxe_mdl_initialize(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance)
{
  boolean_T tunablePropChangedBeforeResetImpl;
  int32_T i1;
  RobotParams *obj;
  static char_T cv3[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv3[2] = { 1, 45 };

  const mxArray *m1;
  static char_T cv4[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv4[2] = { 1, 8 };

  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv5[2] = { 1, 45 };

  static char_T cv5[5] = { 'r', 'e', 's', 'e', 't' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv6[2] = { 1, 5 };

  static char_T cv6[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  char_T e_u[44];
  const mxArray *e_y;
  static const int32_T iv7[2] = { 1, 44 };

  real_T *M_bot;
  real_T *I_bot;
  real_T *g;
  real_T *r;
  real_T *L;
  real_T *Rt;
  real_T *K_e;
  real_T *K_t;
  real_T *K_f;
  real_T *I_asm;
  real_T *V;
  real_T (*wheel_angles)[4];
  wheel_angles = (real_T (*)[4])cgxertGetRunTimeParamInfoData(moduleInstance->S,
    11);
  V = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 10);
  I_asm = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 9);
  K_f = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 8);
  K_t = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 7);
  K_e = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 6);
  Rt = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 5);
  L = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 4);
  r = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 3);
  g = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 2);
  I_bot = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  M_bot = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  if (!moduleInstance->sysobj_not_empty) {
    covrtLogFcn(moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 0);
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.TunablePropsChanged = false;
    moduleInstance->sysobj_not_empty = true;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.M_bot = *M_bot;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.I_bot = *I_bot;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.g = *g;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.r = *r;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.L = *L;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Rt = *Rt;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_e = *K_e;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_t = *K_t;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_f = *K_f;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.I_asm = *I_asm;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.V = *V;
    tunablePropChangedBeforeResetImpl = (moduleInstance->sysobj.isInitialized ==
      1);
    if (tunablePropChangedBeforeResetImpl) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i1 = 0; i1 < 4; i1++) {
      moduleInstance->sysobj.wheel_angles[i1] = (*wheel_angles)[i1];
    }
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i1 = 0; i1 < 45; i1++) {
      u[i1] = cv3[i1];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv3);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (i1 = 0; i1 < 8; i1++) {
      b_u[i1] = cv4[i1];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  tunablePropChangedBeforeResetImpl = (obj->isInitialized == 1);
  if (tunablePropChangedBeforeResetImpl) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i1 = 0; i1 < 45; i1++) {
        c_u[i1] = cv3[i1];
      }

      c_y = NULL;
      m1 = emlrtCreateCharArray(2, iv5);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m1, &c_u
        [0]);
      emlrtAssign(&c_y, m1);
      for (i1 = 0; i1 < 5; i1++) {
        d_u[i1] = cv5[i1];
      }

      d_y = NULL;
      m1 = emlrtCreateCharArray(2, iv6);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m1, &d_u[0]);
      emlrtAssign(&d_y, m1);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    tunablePropChangedBeforeResetImpl = obj->TunablePropsChanged;
    if ((int32_T)tunablePropChangedBeforeResetImpl != (int32_T)
        obj->TunablePropsChanged) {
      for (i1 = 0; i1 < 44; i1++) {
        e_u[i1] = cv6[i1];
      }

      e_y = NULL;
      m1 = emlrtCreateCharArray(2, iv7);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 44, m1, &e_u
        [0]);
      emlrtAssign(&e_y, m1);
      error(moduleInstance, b_message(moduleInstance, e_y, &emlrtMCI), &emlrtMCI);
    }
  }
}

static void cgxe_mdl_outputs(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance)
{
  real_T varargin_12[4];
  int32_T k;
  boolean_T flag;
  real_T hoistedGlobal_wheel_angles[4];
  boolean_T p;
  boolean_T exitg1;
  RobotParams *obj;
  static char_T cv7[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 45 };

  const mxArray *m2;
  static char_T cv8[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 4 };

  static char_T cv9[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv10[2] = { 1, 51 };

  static char_T cv10[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv11[2] = { 1, 5 };

  static char_T cv11[44] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'T', 'u', 'n', 'a',
    'b', 'l', 'e', 'M', 'o', 'd', 'A', 'c', 'c', 'e', 's', 's', 'C', 'o', 'd',
    'e', 'g', 'e', 'n' };

  char_T e_u[44];
  const mxArray *e_y;
  static const int32_T iv12[2] = { 1, 44 };

  real_T A;
  real_T B;
  real_T f_y;
  real_T x;
  real_T b_x;
  real_T c_x;
  real_T d_x;
  real_T e_x;
  real_T f_x;
  real_T g_x;
  real_T h_x;
  real_T b_B;
  real_T c_B;
  real_T d_B;
  real_T a;
  real_T e_B;
  real_T f_B;
  char_T f_u[44];
  const mxArray *g_y;
  static const int32_T iv13[2] = { 1, 44 };

  static int8_T b[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  static int8_T b_b[9] = { 0, -1, 0, 1, 0, 0, 0, 0, 0 };

  real_T dv0[12];
  int32_T i2;
  real_T *M_bot;
  real_T *I_bot;
  real_T *g;
  real_T *r;
  real_T *L;
  real_T *Rt;
  real_T *K_e;
  real_T *K_t;
  real_T *K_f;
  real_T *I_asm;
  real_T *V;
  real_T (*wheel_angles)[4];
  wheel_angles = (real_T (*)[4])cgxertGetRunTimeParamInfoData(moduleInstance->S,
    11);
  V = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 10);
  I_asm = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 9);
  K_f = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 8);
  K_t = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 7);
  K_e = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 6);
  Rt = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 5);
  L = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 4);
  r = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 3);
  g = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 2);
  I_bot = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  M_bot = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  for (k = 0; k < 4; k++) {
    varargin_12[k] = (*wheel_angles)[k];
  }

  if (!moduleInstance->sysobj_not_empty) {
    covrtLogFcn(moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 0);
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.TunablePropsChanged = false;
    moduleInstance->sysobj_not_empty = true;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.M_bot = *M_bot;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.I_bot = *I_bot;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.g = *g;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.r = *r;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.L = *L;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Rt = *Rt;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_e = *K_e;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_t = *K_t;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_f = *K_f;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.I_asm = *I_asm;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.V = *V;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (k = 0; k < 4; k++) {
      moduleInstance->sysobj.wheel_angles[k] = varargin_12[k];
    }
  }

  if (!isequal(moduleInstance->sysobj.M_bot, *M_bot)) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.M_bot = *M_bot;
  }

  if (!isequal(moduleInstance->sysobj.I_bot, *I_bot)) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.I_bot = *I_bot;
  }

  if (!isequal(moduleInstance->sysobj.g, *g)) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.g = *g;
  }

  if (!isequal(moduleInstance->sysobj.r, *r)) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.r = *r;
  }

  if (!isequal(moduleInstance->sysobj.L, *L)) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.L = *L;
  }

  if (!isequal(moduleInstance->sysobj.Rt, *Rt)) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Rt = *Rt;
  }

  if (!isequal(moduleInstance->sysobj.K_e, *K_e)) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_e = *K_e;
  }

  if (!isequal(moduleInstance->sysobj.K_t, *K_t)) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_t = *K_t;
  }

  if (!isequal(moduleInstance->sysobj.K_f, *K_f)) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_f = *K_f;
  }

  if (!isequal(moduleInstance->sysobj.I_asm, *I_asm)) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.I_asm = *I_asm;
  }

  if (!isequal(moduleInstance->sysobj.V, *V)) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.V = *V;
  }

  for (k = 0; k < 4; k++) {
    hoistedGlobal_wheel_angles[k] = moduleInstance->sysobj.wheel_angles[k];
  }

  flag = false;
  p = true;
  k = 0;
  exitg1 = false;
  while ((exitg1 == false) && (k < 4)) {
    if (!(hoistedGlobal_wheel_angles[k] == varargin_12[k])) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (k = 0; k < 4; k++) {
      moduleInstance->sysobj.wheel_angles[k] = varargin_12[k];
    }
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = cv7[k];
    }

    y = NULL;
    m2 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m2, &u[0]);
    emlrtAssign(&y, m2);
    for (k = 0; k < 4; k++) {
      b_u[k] = cv8[k];
    }

    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m2, &b_u[0]);
    emlrtAssign(&b_y, m2);
    error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    if (obj->isInitialized != 0) {
      for (k = 0; k < 51; k++) {
        c_u[k] = cv9[k];
      }

      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv10);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m2, &c_u
        [0]);
      emlrtAssign(&c_y, m2);
      for (k = 0; k < 5; k++) {
        d_u[k] = cv10[k];
      }

      d_y = NULL;
      m2 = emlrtCreateCharArray(2, iv11);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m2, &d_u[0]);
      emlrtAssign(&d_y, m2);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    obj->isInitialized = 1;
    if (obj->TunablePropsChanged) {
      for (k = 0; k < 44; k++) {
        e_u[k] = cv11[k];
      }

      e_y = NULL;
      m2 = emlrtCreateCharArray(2, iv12);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 44, m2, &e_u
        [0]);
      emlrtAssign(&e_y, m2);
      error(moduleInstance, b_message(moduleInstance, e_y, &emlrtMCI), &emlrtMCI);
    }

    obj->TunablePropsChanged = false;
  }

  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
  }

  covrtLogFcn(moduleInstance->covInst, 0, 6);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 6);
  covrtLogFcn(moduleInstance->covInst, 0, 3);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 3);
  A = obj->K_e * obj->K_t;
  B = obj->Rt;
  A = -(A / B + obj->K_f);
  B = obj->M_bot * mpower(obj->g) * mpower(obj->r) + obj->I_asm;
  f_y = A / B;
  covrtLogFcn(moduleInstance->covInst, 0, 4);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 4);
  A = obj->M_bot * mpower(obj->g) * mpower(obj->r);
  B = obj->M_bot * mpower(obj->g) * mpower(obj->r) + obj->I_asm;
  A /= B;
  covrtLogFcn(moduleInstance->covInst, 0, 5);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 5);

  /*  Note: The default values for the below properties are garbage - if */
  /*  you want to set them, double-click on the RobotParams block in the */
  /*  Simulink block-diagram model file. */
  /*  Mass of bot (Kg) */
  /*  Moment of inertia of bot about the z (vertical) axis through the center of mass (Kg*m^2) */
  /*  Gear ratio of motor to wheel.  w_motor * g = w_wheel */
  /*  Radius of omni-wheels (meters) */
  /*  Distance from the center of wheel to the center of the robot (meters) */
  /*  Resistance of motor from terminal to terminal (ohms) */
  /*  Back-emf constant of motor (V/(rad/s)) */
  /*  Maxon lists the "Speed Constant" in rpm/V as 380 */
  /*  invert this to get 1/380 V/rpm */
  /*  multiply by 60 to get 60/380 V/rps */
  /*  divide by 2pi to get 30/380pi V/(rad/s) */
  /*  Torque constant of motor (N*m/A) */
  /*  Viscous friction coefficient of wheel assembly (N*m/(rad/s)).  Tau_friction = w_motor * K_f */
  /*  Moment of inertia of wheel assembly.  Tau_accel = I_asm*w_dot_motor */
  /*  Max voltage applied to the motor phases (Volts) */
  /*  Angle of each wheel axis relative to the +x axis (radians) */
  /*  Inertial matrix */
  /*  Geometry matrix - maps wheel velocities to body velocity */
  /*  matrices for final nonlinear state equation */
  /*  x_b_dot_dot = A_1*x_b_dot + A_2*dphidt*x_b_dot + B*u */
  covrtLogFcn(moduleInstance->covInst, 0, 2);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 2);
  x = obj->wheel_angles[0];
  b_x = obj->wheel_angles[1];
  c_x = obj->wheel_angles[2];
  d_x = obj->wheel_angles[3];
  e_x = obj->wheel_angles[0];
  f_x = obj->wheel_angles[1];
  g_x = obj->wheel_angles[2];
  h_x = obj->wheel_angles[3];
  B = obj->L;
  b_B = obj->L;
  c_B = obj->L;
  d_B = obj->L;
  a = obj->g * obj->r * obj->K_t;
  e_B = obj->Rt;
  f_B = obj->M_bot * mpower(obj->g) * mpower(obj->r) + obj->I_asm;
  if (obj->TunablePropsChanged) {
    for (k = 0; k < 44; k++) {
      f_u[k] = cv11[k];
    }

    g_y = NULL;
    m2 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 44, m2, &f_u[0]);
    emlrtAssign(&g_y, m2);
    error(moduleInstance, b_message(moduleInstance, g_y, &emlrtMCI), &emlrtMCI);
  }

  for (k = 0; k < 9; k++) {
    (*moduleInstance->b_y0)[k] = f_y * (real_T)b[k];
    (*moduleInstance->b_y1)[k] = A * (real_T)b_b[k];
  }

  dv0[0] = -muDoubleScalarSin(x);
  dv0[3] = -muDoubleScalarSin(b_x);
  dv0[6] = -muDoubleScalarSin(c_x);
  dv0[9] = -muDoubleScalarSin(d_x);
  dv0[1] = muDoubleScalarCos(e_x);
  dv0[4] = muDoubleScalarCos(f_x);
  dv0[7] = muDoubleScalarCos(g_x);
  dv0[10] = muDoubleScalarCos(h_x);
  dv0[2] = 1.0 / B;
  dv0[5] = 1.0 / b_B;
  dv0[8] = 1.0 / c_B;
  dv0[11] = 1.0 / d_B;
  for (k = 0; k < 4; k++) {
    for (i2 = 0; i2 < 3; i2++) {
      (*moduleInstance->y2)[i2 + 3 * k] = a * dv0[i2 + 3 * k] / e_B / f_B;
    }
  }
}

static void cgxe_mdl_update(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance)
{
  boolean_T flag;
  int32_T i3;
  RobotParams *obj;
  static char_T cv12[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv14[2] = { 1, 45 };

  const mxArray *m3;
  static char_T cv13[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv15[2] = { 1, 8 };

  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv16[2] = { 1, 45 };

  static char_T cv14[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  char_T d_u[7];
  const mxArray *d_y;
  static const int32_T iv17[2] = { 1, 7 };

  real_T *M_bot;
  real_T *I_bot;
  real_T *g;
  real_T *r;
  real_T *L;
  real_T *Rt;
  real_T *K_e;
  real_T *K_t;
  real_T *K_f;
  real_T *I_asm;
  real_T *V;
  real_T (*wheel_angles)[4];
  wheel_angles = (real_T (*)[4])cgxertGetRunTimeParamInfoData(moduleInstance->S,
    11);
  V = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 10);
  I_asm = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 9);
  K_f = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 8);
  K_t = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 7);
  K_e = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 6);
  Rt = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 5);
  L = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 4);
  r = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 3);
  g = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 2);
  I_bot = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 1);
  M_bot = (real_T *)cgxertGetRunTimeParamInfoData(moduleInstance->S, 0);
  if (!moduleInstance->sysobj_not_empty) {
    covrtLogFcn(moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 0);
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj.TunablePropsChanged = false;
    moduleInstance->sysobj_not_empty = true;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.M_bot = *M_bot;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.I_bot = *I_bot;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.g = *g;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.r = *r;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.L = *L;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.Rt = *Rt;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_e = *K_e;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_t = *K_t;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.K_f = *K_f;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.I_asm = *I_asm;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    moduleInstance->sysobj.V = *V;
    flag = (moduleInstance->sysobj.isInitialized == 1);
    if (flag) {
      moduleInstance->sysobj.TunablePropsChanged = true;
    }

    for (i3 = 0; i3 < 4; i3++) {
      moduleInstance->sysobj.wheel_angles[i3] = (*wheel_angles)[i3];
    }
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i3 = 0; i3 < 45; i3++) {
      u[i3] = cv12[i3];
    }

    y = NULL;
    m3 = emlrtCreateCharArray(2, iv14);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3, &u[0]);
    emlrtAssign(&y, m3);
    for (i3 = 0; i3 < 8; i3++) {
      b_u[i3] = cv13[i3];
    }

    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv15);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m3, &b_u[0]);
    emlrtAssign(&b_y, m3);
    error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI), &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i3 = 0; i3 < 45; i3++) {
        c_u[i3] = cv12[i3];
      }

      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv16);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m3, &c_u
        [0]);
      emlrtAssign(&c_y, m3);
      for (i3 = 0; i3 < 7; i3++) {
        d_u[i3] = cv14[i3];
      }

      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv17);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m3, &d_u[0]);
      emlrtAssign(&d_y, m3);
      error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
    }

    if (obj->isInitialized == 1) {
      obj->isInitialized = 2;
    }
  }

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst);
}

static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m4;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m_y;
  const mxArray *n_y;
  const mxArray *o_y;
  const mxArray *p_y;
  static const int32_T iv18[1] = { 4 };

  real_T *pData;
  int32_T i;
  const mxArray *q_y;
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  c_y = NULL;
  m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m4) = moduleInstance->sysobj.isInitialized;
  emlrtAssign(&c_y, m4);
  emlrtAddField(b_y, c_y, "isInitialized", 0);
  d_y = NULL;
  m4 = emlrtCreateLogicalScalar(moduleInstance->sysobj.TunablePropsChanged);
  emlrtAssign(&d_y, m4);
  emlrtAddField(b_y, d_y, "TunablePropsChanged", 0);
  e_y = NULL;
  m4 = emlrtCreateDoubleScalar(moduleInstance->sysobj.M_bot);
  emlrtAssign(&e_y, m4);
  emlrtAddField(b_y, e_y, "M_bot", 0);
  f_y = NULL;
  m4 = emlrtCreateDoubleScalar(moduleInstance->sysobj.I_bot);
  emlrtAssign(&f_y, m4);
  emlrtAddField(b_y, f_y, "I_bot", 0);
  g_y = NULL;
  m4 = emlrtCreateDoubleScalar(moduleInstance->sysobj.g);
  emlrtAssign(&g_y, m4);
  emlrtAddField(b_y, g_y, "g", 0);
  h_y = NULL;
  m4 = emlrtCreateDoubleScalar(moduleInstance->sysobj.r);
  emlrtAssign(&h_y, m4);
  emlrtAddField(b_y, h_y, "r", 0);
  i_y = NULL;
  m4 = emlrtCreateDoubleScalar(moduleInstance->sysobj.L);
  emlrtAssign(&i_y, m4);
  emlrtAddField(b_y, i_y, "L", 0);
  j_y = NULL;
  m4 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Rt);
  emlrtAssign(&j_y, m4);
  emlrtAddField(b_y, j_y, "Rt", 0);
  k_y = NULL;
  m4 = emlrtCreateDoubleScalar(moduleInstance->sysobj.K_e);
  emlrtAssign(&k_y, m4);
  emlrtAddField(b_y, k_y, "K_e", 0);
  l_y = NULL;
  m4 = emlrtCreateDoubleScalar(moduleInstance->sysobj.K_t);
  emlrtAssign(&l_y, m4);
  emlrtAddField(b_y, l_y, "K_t", 0);
  m_y = NULL;
  m4 = emlrtCreateDoubleScalar(moduleInstance->sysobj.K_f);
  emlrtAssign(&m_y, m4);
  emlrtAddField(b_y, m_y, "K_f", 0);
  n_y = NULL;
  m4 = emlrtCreateDoubleScalar(moduleInstance->sysobj.I_asm);
  emlrtAssign(&n_y, m4);
  emlrtAddField(b_y, n_y, "I_asm", 0);
  o_y = NULL;
  m4 = emlrtCreateDoubleScalar(moduleInstance->sysobj.V);
  emlrtAssign(&o_y, m4);
  emlrtAddField(b_y, o_y, "V", 0);
  p_y = NULL;
  m4 = emlrtCreateNumericArray(1, iv18, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m4);
  for (i = 0; i < 4; i++) {
    pData[i] = moduleInstance->sysobj.wheel_angles[i];
  }

  emlrtAssign(&p_y, m4);
  emlrtAddField(b_y, p_y, "wheel_angles", 0);
  emlrtSetCell(y, 0, b_y);
  q_y = NULL;
  m4 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&q_y, m4);
  emlrtSetCell(y, 1, q_y);
  emlrtAssign(&st, y);
  return st;
}

static void emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *b_sysobj, const char_T *identifier,
  RobotParams *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(moduleInstance, emlrtAlias(b_sysobj), &thisId, y);
  emlrtDestroyArray(&b_sysobj);
}

static void b_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId,
  RobotParams *y)
{
  emlrtMsgIdentifier thisId;
  static const int32_T dims = 0;
  static const char * fieldNames[14] = { "isInitialized", "TunablePropsChanged",
    "M_bot", "I_bot", "g", "r", "L", "Rt", "K_e", "K_t", "K_f", "I_asm", "V",
    "wheel_angles" };

  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(moduleInstance->emlrtRootTLSGlobal, parentId, u, 14,
    fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y->isInitialized = c_emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetFieldR2013a(moduleInstance->emlrtRootTLSGlobal, u, 0,
    "isInitialized")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y->TunablePropsChanged = d_emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetFieldR2013a(moduleInstance->emlrtRootTLSGlobal, u, 0,
    "TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "M_bot";
  y->M_bot = e_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "M_bot")), &thisId);
  thisId.fIdentifier = "I_bot";
  y->I_bot = e_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "I_bot")), &thisId);
  thisId.fIdentifier = "g";
  y->g = e_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "g")), &thisId);
  thisId.fIdentifier = "r";
  y->r = e_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "r")), &thisId);
  thisId.fIdentifier = "L";
  y->L = e_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "L")), &thisId);
  thisId.fIdentifier = "Rt";
  y->Rt = e_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "Rt")), &thisId);
  thisId.fIdentifier = "K_e";
  y->K_e = e_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "K_e")), &thisId);
  thisId.fIdentifier = "K_t";
  y->K_t = e_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "K_t")), &thisId);
  thisId.fIdentifier = "K_f";
  y->K_f = e_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "K_f")), &thisId);
  thisId.fIdentifier = "I_asm";
  y->I_asm = e_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "I_asm")), &thisId);
  thisId.fIdentifier = "V";
  y->V = e_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "V")), &thisId);
  thisId.fIdentifier = "wheel_angles";
  f_emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetFieldR2013a
    (moduleInstance->emlrtRootTLSGlobal, u, 0, "wheel_angles")), &thisId,
                     y->wheel_angles);
  emlrtDestroyArray(&u);
}

static int32_T c_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = h_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T d_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = i_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T e_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = j_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void f_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId, real_T
  y[4])
{
  k_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T g_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(moduleInstance, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void mw__internal__setSimState__fcn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *st)
{
  const mxArray *u;
  u = emlrtAlias(st);
  emlrt_marshallIn(moduleInstance, emlrtAlias(emlrtGetCell
    (moduleInstance->emlrtRootTLSGlobal, "sysobj", u, 0)), "sysobj",
                   &moduleInstance->sysobj);
  moduleInstance->sysobj_not_empty = g_emlrt_marshallIn(moduleInstance,
    emlrtAlias(emlrtGetCell(moduleInstance->emlrtRootTLSGlobal,
    "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static const mxArray *message(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m5;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m5, 2,
    pArrays, "message", true, location);
}

static void error(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance, const
                  mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 0, NULL, 1, &pArray,
                        "error", true, location);
}

static const mxArray *b_message(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m6;
  pArray = b;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m6, 1,
    &pArray, "message", true, location);
}

static int32_T h_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId)
{
  int32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(moduleInstance->emlrtRootTLSGlobal, msgId, src,
    "int32", false, 0U, &dims);
  ret = *(int32_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static boolean_T i_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(moduleInstance->emlrtRootTLSGlobal, msgId, src,
    "logical", false, 0U, &dims);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T j_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(moduleInstance->emlrtRootTLSGlobal, msgId, src,
    "double", false, 0U, &dims);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void k_emlrt_marshallIn(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId, real_T
  ret[4])
{
  static const int32_T dims[1] = { 4 };

  int32_T i4;
  emlrtCheckBuiltInR2012b(moduleInstance->emlrtRootTLSGlobal, msgId, src,
    "double", false, 1U, dims);
  for (i4 = 0; i4 < 4; i4++) {
    ret[i4] = (*(real_T (*)[4])mxGetData(src))[i4];
  }

  emlrtDestroyArray(&src);
}

static void init_simulink_io_address(InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = cgxertGetEMLRTCtx(moduleInstance->S, 0);
  moduleInstance->covInst = (covrtInstance *)cgxertGetCovrtInstance
    (moduleInstance->S, 0);
  moduleInstance->b_y0 = (real_T (*)[9])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
  moduleInstance->b_y1 = (real_T (*)[9])cgxertGetOutputPortSignal
    (moduleInstance->S, 1);
  moduleInstance->y2 = (real_T (*)[12])cgxertGetOutputPortSignal
    (moduleInstance->S, 2);
}

/* CGXE Glue Code */
static void mdlOutputs_UNza5NJYMU5Va6ej8pRN9F(SimStruct *S, int_T tid)
{
  InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance =
    (InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_UNza5NJYMU5Va6ej8pRN9F(SimStruct *S)
{
  InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance =
    (InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_UNza5NJYMU5Va6ej8pRN9F(SimStruct *S, int_T tid)
{
  InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance =
    (InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_UNza5NJYMU5Va6ej8pRN9F(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance =
    (InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) mw__internal__getSimState__fcn(moduleInstance);
  return mxSS;
}

static void setSimState_UNza5NJYMU5Va6ej8pRN9F(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance =
    (InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *)cgxertGetRuntimeInstance(S);
  mw__internal__setSimState__fcn(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_UNza5NJYMU5Va6ej8pRN9F(SimStruct *S)
{
  InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance =
    (InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_UNza5NJYMU5Va6ej8pRN9F(SimStruct *S)
{
  InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *moduleInstance =
    (InstanceStruct_UNza5NJYMU5Va6ej8pRN9F *)calloc(1, sizeof
    (InstanceStruct_UNza5NJYMU5Va6ej8pRN9F));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_UNza5NJYMU5Va6ej8pRN9F);
  ssSetmdlInitializeConditions(S, mdlInitialize_UNza5NJYMU5Va6ej8pRN9F);
  ssSetmdlUpdate(S, mdlUpdate_UNza5NJYMU5Va6ej8pRN9F);
  ssSetmdlTerminate(S, mdlTerminate_UNza5NJYMU5Va6ej8pRN9F);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_UNza5NJYMU5Va6ej8pRN9F(SimStruct *S)
{
}

void method_dispatcher_UNza5NJYMU5Va6ej8pRN9F(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_UNza5NJYMU5Va6ej8pRN9F(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_UNza5NJYMU5Va6ej8pRN9F(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_UNza5NJYMU5Va6ej8pRN9F(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_UNza5NJYMU5Va6ej8pRN9F(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: UNza5NJYMU5Va6ej8pRN9F.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_UNza5NJYMU5Va6ej8pRN9F_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_9 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_9);
  return mxBIArgs;
}
