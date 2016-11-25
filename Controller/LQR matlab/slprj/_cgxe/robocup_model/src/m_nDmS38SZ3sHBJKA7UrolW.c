/* Include files */

#include <stddef.h>
#include "blas.h"
#include "robocup_model_cgxe.h"
#include "m_nDmS38SZ3sHBJKA7UrolW.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 1, 1, "SystemCore",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

/* Function Declarations */
static RobotParams *RobotParams_RobotParams(RobotParams *obj);
static void SystemProp_matlabCodegenSetAnyProp(RobotParams *obj);
static void b_SystemProp_matlabCodegenSetAnyProp(RobotParams *obj, real_T value);
static void c_SystemProp_matlabCodegenSetAnyProp(RobotParams *obj, real_T value);
static void d_SystemProp_matlabCodegenSetAnyProp(RobotParams *obj, real_T value);
static void e_SystemProp_matlabCodegenSetAnyProp(RobotParams *obj, real_T value);
static void f_SystemProp_matlabCodegenSetAnyProp(RobotParams *obj, real_T value);
static void g_SystemProp_matlabCodegenSetAnyProp(RobotParams *obj, real_T value);
static void mw__internal__start___fcn(InstanceStruct_nDmS38SZ3sHBJKA7UrolW
  *moduleInstance);
static void mw__internal__initialize__fcn(InstanceStruct_nDmS38SZ3sHBJKA7UrolW
  *moduleInstance);
static void mw__internal__outputs__fcn(InstanceStruct_nDmS38SZ3sHBJKA7UrolW
  *moduleInstance);
static void mw__internal__update__fcn(InstanceStruct_nDmS38SZ3sHBJKA7UrolW
  *moduleInstance);
static void mw__internal__terminate__fcn(InstanceStruct_nDmS38SZ3sHBJKA7UrolW
  *moduleInstance);
static const mxArray *mw__internal__name__resolution__fcn(void);
static void info_helper(const mxArray **info);
static const mxArray *emlrt_marshallOut(const char * u);
static const mxArray *b_emlrt_marshallOut(const uint32_T u);
static void b_info_helper(const mxArray **info);
static const mxArray *mw__internal__autoInference__fcn(void);
static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_nDmS38SZ3sHBJKA7UrolW *moduleInstance);
static void emlrt_marshallIn(const mxArray *c_y0, const char_T *identifier,
  real_T y[9]);
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[9]);
static void c_emlrt_marshallIn(const mxArray *b_y2, const char_T *identifier,
  real_T y[12]);
static void d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[12]);
static void e_emlrt_marshallIn(const mxArray *b_sysobj, const char_T *identifier,
  RobotParams *y);
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, RobotParams *y);
static void g_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, boolean_T y[17]);
static boolean_T h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static real_T i_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static void j_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[4]);
static boolean_T k_emlrt_marshallIn(const mxArray *b_sysobj_not_empty, const
  char_T *identifier);
static void mw__internal__setSimState__fcn(InstanceStruct_nDmS38SZ3sHBJKA7UrolW *
  moduleInstance, const mxArray *st);
static const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);
static void error(const mxArray *b, emlrtMCInfo *location);
static void l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[9]);
static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[12]);
static void n_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, boolean_T ret[17]);
static boolean_T o_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static real_T p_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void q_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[4]);

/* Function Definitions */
static RobotParams *RobotParams_RobotParams(RobotParams *obj)
{
  RobotParams *b_obj;
  RobotParams *c_obj;
  int32_T i0;
  b_obj = obj;
  c_obj = b_obj;
  c_obj->isInitialized = false;
  c_obj->isReleased = false;
  for (i0 = 0; i0 < 17; i0++) {
    c_obj->tunablePropertyChanged[i0] = false;
  }

  return b_obj;
}

static void SystemProp_matlabCodegenSetAnyProp(RobotParams *obj)
{
  RobotParams *b_obj;
  boolean_T flag;
  b_obj = obj;
  if (b_obj->isInitialized && !b_obj->isReleased) {
    flag = true;
  } else {
    flag = false;
  }

  if (flag) {
    obj->TunablePropsChanged = true;
  }
}

static void b_SystemProp_matlabCodegenSetAnyProp(RobotParams *obj, real_T value)
{
  RobotParams *b_obj;
  boolean_T flag;
  obj->M_bot = value;
  b_obj = obj;
  if (b_obj->isInitialized && !b_obj->isReleased) {
    flag = true;
  } else {
    flag = false;
  }

  if (flag) {
    obj->TunablePropsChanged = true;
    obj->tunablePropertyChanged[0] = true;
  }
}

static void c_SystemProp_matlabCodegenSetAnyProp(RobotParams *obj, real_T value)
{
  RobotParams *b_obj;
  boolean_T flag;
  obj->I_bot = value;
  b_obj = obj;
  if (b_obj->isInitialized && !b_obj->isReleased) {
    flag = true;
  } else {
    flag = false;
  }

  if (flag) {
    obj->TunablePropsChanged = true;
    obj->tunablePropertyChanged[1] = true;
  }
}

static void d_SystemProp_matlabCodegenSetAnyProp(RobotParams *obj, real_T value)
{
  RobotParams *b_obj;
  boolean_T flag;
  obj->g = value;
  b_obj = obj;
  if (b_obj->isInitialized && !b_obj->isReleased) {
    flag = true;
  } else {
    flag = false;
  }

  if (flag) {
    obj->TunablePropsChanged = true;
    obj->tunablePropertyChanged[2] = true;
  }
}

static void e_SystemProp_matlabCodegenSetAnyProp(RobotParams *obj, real_T value)
{
  RobotParams *b_obj;
  boolean_T flag;
  obj->r = value;
  b_obj = obj;
  if (b_obj->isInitialized && !b_obj->isReleased) {
    flag = true;
  } else {
    flag = false;
  }

  if (flag) {
    obj->TunablePropsChanged = true;
    obj->tunablePropertyChanged[3] = true;
  }
}

static void f_SystemProp_matlabCodegenSetAnyProp(RobotParams *obj, real_T value)
{
  RobotParams *b_obj;
  boolean_T flag;
  obj->L = value;
  b_obj = obj;
  if (b_obj->isInitialized && !b_obj->isReleased) {
    flag = true;
  } else {
    flag = false;
  }

  if (flag) {
    obj->TunablePropsChanged = true;
    obj->tunablePropertyChanged[4] = true;
  }
}

static void g_SystemProp_matlabCodegenSetAnyProp(RobotParams *obj, real_T value)
{
  RobotParams *b_obj;
  boolean_T flag;
  obj->Rt = value;
  b_obj = obj;
  if (b_obj->isInitialized && !b_obj->isReleased) {
    flag = true;
  } else {
    flag = false;
  }

  if (flag) {
    obj->TunablePropsChanged = true;
    obj->tunablePropertyChanged[5] = true;
  }
}

static void mw__internal__start___fcn(InstanceStruct_nDmS38SZ3sHBJKA7UrolW
  *moduleInstance)
{
  RobotParams *obj;
  int32_T i1;
  boolean_T flag;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 51 };

  const mxArray *m0;
  char_T cv0[51];
  static char_T cv1[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 5 };

  char_T cv2[5];
  static char_T cv3[5] = { 's', 'e', 't', 'u', 'p' };

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
  wheel_angles = (real_T (*)[4])(ssGetRunTimeParamInfo(moduleInstance->S, 11U)
    )->data;
  V = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 10U))->data;
  I_asm = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 9U))->data;
  K_f = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 8U))->data;
  K_t = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 7U))->data;
  K_e = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 6U))->data;
  Rt = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 5U))->data;
  L = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 4U))->data;
  r = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 3U))->data;
  g = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 2U))->data;
  I_bot = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 1U))->data;
  M_bot = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 0U))->data;
  if (!moduleInstance->sysobj_not_empty) {
    obj = &moduleInstance->sysobj;
    obj->isInitialized = false;
    obj->isReleased = false;
    for (i1 = 0; i1 < 17; i1++) {
      obj->tunablePropertyChanged[i1] = false;
    }

    moduleInstance->sysobj_not_empty = true;
    obj = &moduleInstance->sysobj;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
    }

    obj = &moduleInstance->sysobj;
    obj->M_bot = *M_bot;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[0] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->I_bot = *I_bot;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[1] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->g = *g;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[2] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->r = *r;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[3] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->L = *L;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[4] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->Rt = *Rt;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[5] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->K_e = *K_e;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[6] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->K_t = *K_t;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[7] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->K_f = *K_f;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[8] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->I_asm = *I_asm;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[9] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->V = *V;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[10] = true;
    }

    obj = &moduleInstance->sysobj;
    for (i1 = 0; i1 < 4; i1++) {
      obj->wheel_angles[i1] = (*wheel_angles)[i1];
    }

    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[11] = true;
    }
  }

  obj = &moduleInstance->sysobj;
  if (obj->isInitialized) {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    for (i1 = 0; i1 < 51; i1++) {
      cv0[i1] = cv1[i1];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m0, cv0);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m0 = emlrtCreateCharArray(2, iv1);
    for (i1 = 0; i1 < 5; i1++) {
      cv2[i1] = cv3[i1];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m0, cv2);
    emlrtAssign(&b_y, m0);
    error(message(y, b_y, &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = true;
  obj->TunablePropsChanged = false;
}

static void mw__internal__initialize__fcn(InstanceStruct_nDmS38SZ3sHBJKA7UrolW
  *moduleInstance)
{
  RobotParams *obj;
  int32_T i2;
  boolean_T flag;
  const mxArray *y;
  static const int32_T iv2[2] = { 1, 45 };

  const mxArray *m1;
  char_T cv4[45];
  static char_T cv5[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv3[2] = { 1, 8 };

  char_T cv6[8];
  static char_T cv7[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  const mxArray *c_y;
  static const int32_T iv4[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv5[2] = { 1, 5 };

  char_T cv8[5];
  static char_T cv9[5] = { 'r', 'e', 's', 'e', 't' };

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
  wheel_angles = (real_T (*)[4])(ssGetRunTimeParamInfo(moduleInstance->S, 11U)
    )->data;
  V = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 10U))->data;
  I_asm = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 9U))->data;
  K_f = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 8U))->data;
  K_t = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 7U))->data;
  K_e = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 6U))->data;
  Rt = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 5U))->data;
  L = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 4U))->data;
  r = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 3U))->data;
  g = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 2U))->data;
  I_bot = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 1U))->data;
  M_bot = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 0U))->data;
  if (!moduleInstance->sysobj_not_empty) {
    obj = &moduleInstance->sysobj;
    obj->isInitialized = false;
    obj->isReleased = false;
    for (i2 = 0; i2 < 17; i2++) {
      obj->tunablePropertyChanged[i2] = false;
    }

    moduleInstance->sysobj_not_empty = true;
    obj = &moduleInstance->sysobj;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
    }

    obj = &moduleInstance->sysobj;
    obj->M_bot = *M_bot;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[0] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->I_bot = *I_bot;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[1] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->g = *g;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[2] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->r = *r;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[3] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->L = *L;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[4] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->Rt = *Rt;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[5] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->K_e = *K_e;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[6] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->K_t = *K_t;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[7] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->K_f = *K_f;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[8] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->I_asm = *I_asm;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[9] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->V = *V;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[10] = true;
    }

    obj = &moduleInstance->sysobj;
    for (i2 = 0; i2 < 4; i2++) {
      obj->wheel_angles[i2] = (*wheel_angles)[i2];
    }

    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[11] = true;
    }
  }

  obj = &moduleInstance->sysobj;
  if (obj->isReleased) {
    y = NULL;
    m1 = emlrtCreateCharArray(2, iv2);
    for (i2 = 0; i2 < 45; i2++) {
      cv4[i2] = cv5[i2];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m1, cv4);
    emlrtAssign(&y, m1);
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv3);
    for (i2 = 0; i2 < 8; i2++) {
      cv6[i2] = cv7[i2];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 8, m1, cv6);
    emlrtAssign(&b_y, m1);
    error(message(y, b_y, &emlrtMCI), &emlrtMCI);
  }

  flag = obj->isInitialized;
  if (flag && moduleInstance->sysobj.isReleased) {
    c_y = NULL;
    m1 = emlrtCreateCharArray(2, iv4);
    for (i2 = 0; i2 < 45; i2++) {
      cv4[i2] = cv5[i2];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m1, cv4);
    emlrtAssign(&c_y, m1);
    d_y = NULL;
    m1 = emlrtCreateCharArray(2, iv5);
    for (i2 = 0; i2 < 5; i2++) {
      cv8[i2] = cv9[i2];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m1, cv8);
    emlrtAssign(&d_y, m1);
    error(message(c_y, d_y, &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__outputs__fcn(InstanceStruct_nDmS38SZ3sHBJKA7UrolW
  *moduleInstance)
{
  real_T varargin_12[4];
  int32_T k;
  RobotParams *obj;
  boolean_T flag;
  real_T hoistedGlobal_M_bot;
  boolean_T p;
  real_T hoistedGlobal_wheel_angles[4];
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv6[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv10[45];
  static char_T cv11[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv7[2] = { 1, 4 };

  char_T cv12[4];
  static char_T cv13[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv8[2] = { 1, 51 };

  char_T cv14[51];
  static char_T cv15[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv9[2] = { 1, 5 };

  char_T cv16[5];
  static char_T cv17[5] = { 's', 'e', 't', 'u', 'p' };

  real_T A;
  real_T B;
  real_T a;
  real_T b_a;
  real_T e_y;
  real_T c_a;
  real_T b_x;
  real_T c_x;
  real_T d_x;
  real_T e_x;
  real_T f_x;
  real_T g_x;
  real_T h_x;
  real_T i_x;
  real_T b_B;
  real_T c_B;
  real_T d_B;
  real_T e_B;
  static int8_T b[9] = { 1, 0, 0, 0, 1, 0, 0, 0, 1 };

  static int8_T b_b[9] = { 0, -1, 0, 1, 0, 0, 0, 0, 0 };

  real_T dv0[12];
  int32_T i3;
  real_T *Rt;
  real_T *L;
  real_T *r;
  real_T *g;
  real_T *I_bot;
  real_T *M_bot;
  real_T *K_e;
  real_T *K_t;
  real_T *K_f;
  real_T *I_asm;
  real_T *V;
  real_T (*b_y0)[9];
  real_T (*b_y1)[9];
  real_T (*y2)[12];
  real_T (*wheel_angles)[4];
  wheel_angles = (real_T (*)[4])(ssGetRunTimeParamInfo(moduleInstance->S, 11U)
    )->data;
  V = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 10U))->data;
  I_asm = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 9U))->data;
  K_f = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 8U))->data;
  K_t = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 7U))->data;
  K_e = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 6U))->data;
  Rt = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 5U))->data;
  L = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 4U))->data;
  r = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 3U))->data;
  g = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 2U))->data;
  I_bot = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 1U))->data;
  M_bot = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 0U))->data;
  y2 = (real_T (*)[12])ssGetOutputPortSignal(moduleInstance->S, 2U);
  b_y1 = (real_T (*)[9])ssGetOutputPortSignal(moduleInstance->S, 1U);
  b_y0 = (real_T (*)[9])ssGetOutputPortSignal(moduleInstance->S, 0U);
  for (k = 0; k < 4; k++) {
    varargin_12[k] = (*wheel_angles)[k];
  }

  if (!moduleInstance->sysobj_not_empty) {
    RobotParams_RobotParams(&moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
    SystemProp_matlabCodegenSetAnyProp(&moduleInstance->sysobj);
    b_SystemProp_matlabCodegenSetAnyProp(&moduleInstance->sysobj, *M_bot);
    c_SystemProp_matlabCodegenSetAnyProp(&moduleInstance->sysobj, *I_bot);
    d_SystemProp_matlabCodegenSetAnyProp(&moduleInstance->sysobj, *g);
    e_SystemProp_matlabCodegenSetAnyProp(&moduleInstance->sysobj, *r);
    f_SystemProp_matlabCodegenSetAnyProp(&moduleInstance->sysobj, *L);
    g_SystemProp_matlabCodegenSetAnyProp(&moduleInstance->sysobj, *Rt);
    obj = &moduleInstance->sysobj;
    obj->K_e = *K_e;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[6] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->K_t = *K_t;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[7] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->K_f = *K_f;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[8] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->I_asm = *I_asm;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[9] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->V = *V;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[10] = true;
    }

    obj = &moduleInstance->sysobj;
    for (k = 0; k < 4; k++) {
      obj->wheel_angles[k] = varargin_12[k];
    }

    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[11] = true;
    }
  }

  hoistedGlobal_M_bot = moduleInstance->sysobj.M_bot;
  flag = false;
  p = true;
  if (!(hoistedGlobal_M_bot == *M_bot)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    obj = &moduleInstance->sysobj;
    obj->M_bot = *M_bot;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[0] = true;
    }
  }

  hoistedGlobal_M_bot = moduleInstance->sysobj.I_bot;
  flag = false;
  p = true;
  if (!(hoistedGlobal_M_bot == *I_bot)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    obj = &moduleInstance->sysobj;
    obj->I_bot = *I_bot;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[1] = true;
    }
  }

  hoistedGlobal_M_bot = moduleInstance->sysobj.g;
  flag = false;
  p = true;
  if (!(hoistedGlobal_M_bot == *g)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    obj = &moduleInstance->sysobj;
    obj->g = *g;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[2] = true;
    }
  }

  hoistedGlobal_M_bot = moduleInstance->sysobj.r;
  flag = false;
  p = true;
  if (!(hoistedGlobal_M_bot == *r)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    obj = &moduleInstance->sysobj;
    obj->r = *r;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[3] = true;
    }
  }

  hoistedGlobal_M_bot = moduleInstance->sysobj.L;
  flag = false;
  p = true;
  if (!(hoistedGlobal_M_bot == *L)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    obj = &moduleInstance->sysobj;
    obj->L = *L;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[4] = true;
    }
  }

  hoistedGlobal_M_bot = moduleInstance->sysobj.Rt;
  flag = false;
  p = true;
  if (!(hoistedGlobal_M_bot == *Rt)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    obj = &moduleInstance->sysobj;
    obj->Rt = *Rt;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[5] = true;
    }
  }

  hoistedGlobal_M_bot = moduleInstance->sysobj.K_e;
  flag = false;
  p = true;
  if (!(hoistedGlobal_M_bot == *K_e)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    obj = &moduleInstance->sysobj;
    obj->K_e = *K_e;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[6] = true;
    }
  }

  hoistedGlobal_M_bot = moduleInstance->sysobj.K_t;
  flag = false;
  p = true;
  if (!(hoistedGlobal_M_bot == *K_t)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    obj = &moduleInstance->sysobj;
    obj->K_t = *K_t;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[7] = true;
    }
  }

  hoistedGlobal_M_bot = moduleInstance->sysobj.K_f;
  flag = false;
  p = true;
  if (!(hoistedGlobal_M_bot == *K_f)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    obj = &moduleInstance->sysobj;
    obj->K_f = *K_f;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[8] = true;
    }
  }

  hoistedGlobal_M_bot = moduleInstance->sysobj.I_asm;
  flag = false;
  p = true;
  if (!(hoistedGlobal_M_bot == *I_asm)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    obj = &moduleInstance->sysobj;
    obj->I_asm = *I_asm;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[9] = true;
    }
  }

  hoistedGlobal_M_bot = moduleInstance->sysobj.V;
  flag = false;
  p = true;
  if (!(hoistedGlobal_M_bot == *V)) {
    p = false;
  }

  if (p) {
    flag = true;
  }

  if (!flag) {
    obj = &moduleInstance->sysobj;
    obj->V = *V;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[10] = true;
    }
  }

  for (k = 0; k < 4; k++) {
    hoistedGlobal_wheel_angles[k] = moduleInstance->sysobj.wheel_angles[k];
  }

  flag = false;
  p = true;
  k = 0;
  exitg1 = false;
  while (exitg1 == false && k < 4) {
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
    obj = &moduleInstance->sysobj;
    for (k = 0; k < 4; k++) {
      obj->wheel_angles[k] = varargin_12[k];
    }

    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[11] = true;
    }
  }

  obj = &moduleInstance->sysobj;
  if (obj->isReleased) {
    y = NULL;
    m2 = emlrtCreateCharArray(2, iv6);
    for (k = 0; k < 45; k++) {
      cv10[k] = cv11[k];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m2, cv10);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv7);
    for (k = 0; k < 4; k++) {
      cv12[k] = cv13[k];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m2, cv12);
    emlrtAssign(&b_y, m2);
    error(message(y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    if (obj->isInitialized) {
      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv8);
      for (k = 0; k < 51; k++) {
        cv14[k] = cv15[k];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m2, cv14);
      emlrtAssign(&c_y, m2);
      d_y = NULL;
      m2 = emlrtCreateCharArray(2, iv9);
      for (k = 0; k < 5; k++) {
        cv16[k] = cv17[k];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m2, cv16);
      emlrtAssign(&d_y, m2);
      error(message(c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    obj->isInitialized = true;
    obj->TunablePropsChanged = false;
  }

  if (obj->TunablePropsChanged) {
    obj->TunablePropsChanged = false;
    for (k = 0; k < 17; k++) {
      obj->tunablePropertyChanged[k] = false;
    }
  }

  A = obj->K_e * obj->K_t;
  B = obj->Rt;
  a = obj->g;
  b_a = obj->r;
  A = -(A / B + obj->K_f);
  B = obj->M_bot * (a * a) * (b_a * b_a) + obj->I_asm;
  e_y = A / B;
  a = obj->g;
  b_a = obj->r;
  c_a = obj->g;
  hoistedGlobal_M_bot = obj->r;
  A = obj->M_bot * (a * a) * (b_a * b_a);
  B = obj->M_bot * (c_a * c_a) * (hoistedGlobal_M_bot * hoistedGlobal_M_bot) +
    obj->I_asm;
  A /= B;

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
  b_x = obj->wheel_angles[0];
  c_x = obj->wheel_angles[1];
  d_x = obj->wheel_angles[2];
  e_x = obj->wheel_angles[3];
  f_x = obj->wheel_angles[0];
  g_x = obj->wheel_angles[1];
  h_x = obj->wheel_angles[2];
  i_x = obj->wheel_angles[3];
  B = obj->L;
  b_B = obj->L;
  c_B = obj->L;
  d_B = obj->L;
  a = obj->g * obj->r * obj->K_t;
  e_B = obj->Rt;
  b_a = obj->g;
  c_a = obj->r;
  hoistedGlobal_M_bot = obj->M_bot * (b_a * b_a) * (c_a * c_a) + obj->I_asm;
  for (k = 0; k < 9; k++) {
    (*b_y0)[k] = e_y * (real_T)b[k];
    (*b_y1)[k] = A * (real_T)b_b[k];
  }

  dv0[0] = -muDoubleScalarSin(b_x);
  dv0[3] = -muDoubleScalarSin(c_x);
  dv0[6] = -muDoubleScalarSin(d_x);
  dv0[9] = -muDoubleScalarSin(e_x);
  dv0[1] = muDoubleScalarCos(f_x);
  dv0[4] = muDoubleScalarCos(g_x);
  dv0[7] = muDoubleScalarCos(h_x);
  dv0[10] = muDoubleScalarCos(i_x);
  dv0[2] = 1.0 / B;
  dv0[5] = 1.0 / b_B;
  dv0[8] = 1.0 / c_B;
  dv0[11] = 1.0 / d_B;
  for (k = 0; k < 4; k++) {
    for (i3 = 0; i3 < 3; i3++) {
      (*y2)[i3 + 3 * k] = a * dv0[i3 + 3 * k] / e_B / hoistedGlobal_M_bot;
    }
  }
}

static void mw__internal__update__fcn(InstanceStruct_nDmS38SZ3sHBJKA7UrolW
  *moduleInstance)
{
  (void)moduleInstance;
}

static void mw__internal__terminate__fcn(InstanceStruct_nDmS38SZ3sHBJKA7UrolW
  *moduleInstance)
{
  RobotParams *obj;
  int32_T i4;
  boolean_T flag;
  const mxArray *y;
  static const int32_T iv10[2] = { 1, 45 };

  const mxArray *m3;
  char_T cv18[45];
  static char_T cv19[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv11[2] = { 1, 8 };

  char_T cv20[8];
  static char_T cv21[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  const mxArray *c_y;
  static const int32_T iv12[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv13[2] = { 1, 7 };

  char_T cv22[7];
  static char_T cv23[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

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
  wheel_angles = (real_T (*)[4])(ssGetRunTimeParamInfo(moduleInstance->S, 11U)
    )->data;
  V = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 10U))->data;
  I_asm = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 9U))->data;
  K_f = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 8U))->data;
  K_t = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 7U))->data;
  K_e = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 6U))->data;
  Rt = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 5U))->data;
  L = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 4U))->data;
  r = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 3U))->data;
  g = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 2U))->data;
  I_bot = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 1U))->data;
  M_bot = (real_T *)(ssGetRunTimeParamInfo(moduleInstance->S, 0U))->data;
  if (!moduleInstance->sysobj_not_empty) {
    obj = &moduleInstance->sysobj;
    obj->isInitialized = false;
    obj->isReleased = false;
    for (i4 = 0; i4 < 17; i4++) {
      obj->tunablePropertyChanged[i4] = false;
    }

    moduleInstance->sysobj_not_empty = true;
    obj = &moduleInstance->sysobj;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
    }

    obj = &moduleInstance->sysobj;
    obj->M_bot = *M_bot;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[0] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->I_bot = *I_bot;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[1] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->g = *g;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[2] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->r = *r;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[3] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->L = *L;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[4] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->Rt = *Rt;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[5] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->K_e = *K_e;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[6] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->K_t = *K_t;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[7] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->K_f = *K_f;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[8] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->I_asm = *I_asm;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[9] = true;
    }

    obj = &moduleInstance->sysobj;
    obj->V = *V;
    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[10] = true;
    }

    obj = &moduleInstance->sysobj;
    for (i4 = 0; i4 < 4; i4++) {
      obj->wheel_angles[i4] = (*wheel_angles)[i4];
    }

    if (obj->isInitialized && !obj->isReleased) {
      flag = true;
    } else {
      flag = false;
    }

    if (flag) {
      obj->TunablePropsChanged = true;
      obj->tunablePropertyChanged[11] = true;
    }
  }

  obj = &moduleInstance->sysobj;
  if (obj->isReleased) {
    y = NULL;
    m3 = emlrtCreateCharArray(2, iv10);
    for (i4 = 0; i4 < 45; i4++) {
      cv18[i4] = cv19[i4];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m3, cv18);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m3 = emlrtCreateCharArray(2, iv11);
    for (i4 = 0; i4 < 8; i4++) {
      cv20[i4] = cv21[i4];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 8, m3, cv20);
    emlrtAssign(&b_y, m3);
    error(message(y, b_y, &emlrtMCI), &emlrtMCI);
  }

  flag = obj->isInitialized;
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (obj->isReleased) {
      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv12);
      for (i4 = 0; i4 < 45; i4++) {
        cv18[i4] = cv19[i4];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m3, cv18);
      emlrtAssign(&c_y, m3);
      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv13);
      for (i4 = 0; i4 < 7; i4++) {
        cv22[i4] = cv23[i4];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m3, cv22);
      emlrtAssign(&d_y, m3);
      error(message(c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    if (obj->isInitialized) {
      obj->isReleased = true;
    }
  }
}

static const mxArray *mw__internal__name__resolution__fcn(void)
{
  const mxArray *nameCaptureInfo;
  nameCaptureInfo = NULL;
  emlrtAssign(&nameCaptureInfo, emlrtCreateStructMatrix(69, 1, 0, NULL));
  info_helper(&nameCaptureInfo);
  b_info_helper(&nameCaptureInfo);
  emlrtNameCapturePostProcessR2013b(&nameCaptureInfo);
  return nameCaptureInfo;
}

static void info_helper(const mxArray **info)
{
  emlrtAddField(*info, emlrt_marshallOut(""), "context", 0);
  emlrtAddField(*info, emlrt_marshallOut("repmat"), "name", 0);
  emlrtAddField(*info, emlrt_marshallOut("struct"), "dominantType", 0);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "resolved", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(1372589614U), "fileTimeLo", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 0);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 0);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 1);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.assert"), "name", 1);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 1);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                "resolved", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 1);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 1);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 2);
  emlrtAddField(*info, emlrt_marshallOut("eml_assert_valid_size_arg"), "name", 2);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 2);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "resolved", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(1368190230U), "fileTimeLo", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 2);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 2);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "context", 3);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 3);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 3);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 3);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 3);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isintegral"),
                "context", 4);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 4);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 4);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717456U), "fileTimeLo", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 4);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 4);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "context", 5);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 5);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 5);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 5);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 5);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isinbounds"),
                "context", 6);
  emlrtAddField(*info, emlrt_marshallOut("eml_is_integer_class"), "name", 6);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 6);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_integer_class.m"),
                "resolved", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825982U), "fileTimeLo", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 6);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 6);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isinbounds"),
                "context", 7);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 7);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 7);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(1362265482U), "fileTimeLo", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 7);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 7);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "context", 8);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 8);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 8);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(1381857500U), "fileTimeLo", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 8);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 8);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isinbounds"),
                "context", 9);
  emlrtAddField(*info, emlrt_marshallOut("intmin"), "name", 9);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 9);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m"), "resolved", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(1362265482U), "fileTimeLo", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 9);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 9);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m"), "context", 10);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 10);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 10);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(1381857500U), "fileTimeLo", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 10);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 10);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m!isinbounds"),
                "context", 11);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexIntRelop"), "name",
                11);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 11);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(1326731922U), "fileTimeLo", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 11);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 11);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!apply_float_relop"),
                "context", 12);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 12);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 12);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(1381857500U), "fileTimeLo", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 12);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 12);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!float_class_contains_indexIntClass"),
                "context", 13);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 13);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 13);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(1326731596U), "fileTimeLo", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 13);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 13);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m!is_signed_indexIntClass"),
                "context", 14);
  emlrtAddField(*info, emlrt_marshallOut("intmin"), "name", 14);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 14);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m"), "resolved", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(1362265482U), "fileTimeLo", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 14);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 14);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "context", 15);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 15);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 15);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(1323174178U), "fileTimeLo", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 15);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 15);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "context", 16);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 16);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 16);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(1362265482U), "fileTimeLo", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 16);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 16);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/repmat.m"), "context", 17);
  emlrtAddField(*info, emlrt_marshallOut("max"), "name", 17);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 17);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "resolved", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(1311262516U), "fileTimeLo", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 17);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 17);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "context", 18);
  emlrtAddField(*info, emlrt_marshallOut("eml_min_or_max"), "name", 18);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 18);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                "resolved", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(1378303184U), "fileTimeLo", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 18);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 18);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 19);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 19);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 19);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                19);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 19);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 19);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                20);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 20);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 20);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 20);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 20);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 21);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 21);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 21);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 21);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 21);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "context", 22);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAlloc"), "name",
                22);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 22);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                "resolved", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 22);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 22);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 23);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 23);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 23);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(1323174178U), "fileTimeLo", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 23);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 23);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 24);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 24);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 24);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                24);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 24);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 24);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 25);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 25);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 25);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 25);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 25);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 26);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.matlabCodegenHandle"),
                "name", 26);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 26);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"),
                "resolved", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 26);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 26);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "context", 27);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemProp"),
                "name", 27);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 27);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "resolved", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(1388462290U), "fileTimeLo", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 27);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 27);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"),
                "context", 28);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.matlabCodegenHandle"),
                "name", 28);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 28);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/coder/coder/+coder/+internal/matlabCodegenHandle.p"),
                "resolved", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 28);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 28);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "context", 29);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemCore"),
                "name", 29);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 29);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"),
                "resolved", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(1388462290U), "fileTimeLo", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 29);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 29);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/RobotParams.m"), "context", 30);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.System"), "name",
                30);
  emlrtAddField(*info, emlrt_marshallOut("unknown"), "dominantType", 30);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/System.p"),
                "resolved", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(1388462288U), "fileTimeLo", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 30);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 30);
  emlrtAddField(*info, emlrt_marshallOut(""), "context", 31);
  emlrtAddField(*info, emlrt_marshallOut("RobotParams"), "name", 31);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 31);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/RobotParams.m"), "resolved", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(1475083226U), "fileTimeLo", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 31);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 31);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 32);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemProp"),
                "name", 32);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 32);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "resolved", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(1388462290U), "fileTimeLo", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 32);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 32);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemProp.p"),
                "context", 33);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 33);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 33);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(1381857500U), "fileTimeLo", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 33);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 33);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"),
                "context", 34);
  emlrtAddField(*info, emlrt_marshallOut("matlab.system.coder.SystemCore"),
                "name", 34);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 34);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXC]$matlabroot$/toolbox/shared/system/coder/+matlab/+system/+coder/SystemCore.p"),
                "resolved", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(1388462290U), "fileTimeLo", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 34);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 34);
  emlrtAddField(*info, emlrt_marshallOut(""), "context", 35);
  emlrtAddField(*info, emlrt_marshallOut("isequal"), "name", 35);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 35);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "resolved", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825958U), "fileTimeLo", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 35);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isequal.m"), "context", 36);
  emlrtAddField(*info, emlrt_marshallOut("eml_isequal_core"), "name", 36);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 36);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m"),
                "resolved", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825986U), "fileTimeLo", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 36);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_isequal_core.m!isequal_scalar"),
                "context", 37);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 37);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 37);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717458U), "fileTimeLo", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 37);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context", 38);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 38);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 38);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 38);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/RobotParams.m"), "context", 39);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 39);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 39);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(1388463696U), "fileTimeLo", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(1370017086U), "mFileTimeLo", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 39);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context", 40);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.assert"), "name", 40);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 40);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                "resolved", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 40);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context", 41);
  emlrtAddField(*info, emlrt_marshallOut("rdivide"), "name", 41);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 41);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717480U), "fileTimeLo", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 41);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 42);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 42);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 42);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 42);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 43);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_compatible"), "name", 43);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 43);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                "resolved", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825996U), "fileTimeLo", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 43);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 44);
  emlrtAddField(*info, emlrt_marshallOut("eml_div"), "name", 44);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 44);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 44);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context", 45);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.div"), "name", 45);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 45);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                45);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 45);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/RobotParams.m"), "context", 46);
  emlrtAddField(*info, emlrt_marshallOut("mpower"), "name", 46);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 46);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "resolved", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717478U), "fileTimeLo", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 46);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context", 47);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 47);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 47);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 47);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context", 48);
  emlrtAddField(*info, emlrt_marshallOut("ismatrix"), "name", 48);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 48);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/ismatrix.m"), "resolved",
                48);
  emlrtAddField(*info, b_emlrt_marshallOut(1331308458U), "fileTimeLo", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 48);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mpower.m"), "context", 49);
  emlrtAddField(*info, emlrt_marshallOut("power"), "name", 49);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 49);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "resolved", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717480U), "fileTimeLo", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 49);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m"), "context", 50);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 50);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 50);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 50);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                51);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 51);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 51);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                51);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 51);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                52);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 52);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 52);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 52);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                53);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 53);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "context", 54);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAlloc"), "name",
                54);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                "resolved", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!fltpower"), "context",
                55);
  emlrtAddField(*info, emlrt_marshallOut("floor"), "name", 55);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 55);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "resolved", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717454U), "fileTimeLo", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 55);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context", 56);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 56);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/floor.m"), "context", 57);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_floor"), "name", 57);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_floor.m"),
                "resolved", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825926U), "fileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/power.m!scalar_float_power"),
                "context", 58);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 58);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                58);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/RobotParams.m"), "context", 59);
  emlrtAddField(*info, emlrt_marshallOut("eye"), "name", 59);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m"), "resolved", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(1381857498U), "fileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m"), "context", 60);
  emlrtAddField(*info, emlrt_marshallOut("eml_assert_valid_size_arg"), "name",
                60);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"),
                "resolved", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(1368190230U), "fileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eye.m"), "context", 61);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 61);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper"),
                "context", 62);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 62);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(1362265482U), "fileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/RobotParams.m"), "context", 63);
  emlrtAddField(*info, emlrt_marshallOut("eml_mtimes_helper"), "name", 63);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 63);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "resolved", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(1383880894U), "fileTimeLo", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 63);
}

static const mxArray *emlrt_marshallOut(const char * u)
{
  const mxArray *y;
  const mxArray *m4;
  y = NULL;
  m4 = emlrtCreateString(u);
  emlrtAssign(&y, m4);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const uint32_T u)
{
  const mxArray *y;
  const mxArray *m5;
  y = NULL;
  m5 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
  *(uint32_T *)mxGetData(m5) = u;
  emlrtAssign(&y, m5);
  return y;
}

static void b_info_helper(const mxArray **info)
{
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                "context", 64);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 64);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/RobotParams.m"), "context", 65);
  emlrtAddField(*info, emlrt_marshallOut("sin"), "name", 65);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m"), "resolved", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(1343837586U), "fileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m"), "context", 66);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_sin"), "name", 66);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sin.m"),
                "resolved", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825936U), "fileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/RobotParams.m"), "context", 67);
  emlrtAddField(*info, emlrt_marshallOut("cos"), "name", 67);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 67);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m"), "resolved", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(1343837572U), "fileTimeLo", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 67);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m"), "context", 68);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_cos"), "name", 68);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_cos.m"),
                "resolved", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825922U), "fileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 68);
}

static const mxArray *mw__internal__autoInference__fcn(void)
{
  const mxArray *infoCache;
  sfOd2wElE6un66xmZCZog7F Ports_data[3];
  sfOd2wElE6un66xmZCZog7F_size Ports_elems_sizes[3];
  int32_T i5;
  static int8_T iv14[4] = { 9, 2, 3, 3 };

  static int8_T iv15[4] = { 12, 2, 3, 4 };

  char_T t1_objTypeName[11];
  static char_T cv24[11] = { 'R', 'o', 'b', 'o', 't', 'P', 'a', 'r', 'a', 'm',
    's' };

  char_T t1_sysObjChksum[22];
  static char_T cv25[22] = { 'Q', 'F', 'U', 'v', '2', 'T', 'K', 'b', 'G', 'k',
    'e', 'g', 'z', 'H', 'r', 'b', 'T', 'E', 'm', 'M', 'u', 'H' };

  uint32_T t0_cgxeChksum[4];
  s7UBIGHSehQY1gCsIQWwr5C expl_temp;
  s7UBIGHSehQY1gCsIQWwr5C b_expl_temp;
  s7UBIGHSehQY1gCsIQWwr5C c_expl_temp;
  s7UBIGHSehQY1gCsIQWwr5C d_expl_temp;
  static uint32_T uv0[4] = { 331709438U, 2539423650U, 2210995290U, 236571053U };

  static uint32_T t3_chksum[4] = { 1339705561U, 3202792849U, 2337750453U,
    1726114774U };

  s7UBIGHSehQY1gCsIQWwr5C checksums[4];
  char_T u_slVer[3];
  static char_T cv26[3] = { '8', '.', '3' };

  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  sfOd2wElE6un66xmZCZog7F_size u_elems_sizes[3];
  sfOd2wElE6un66xmZCZog7F u_data[3];
  const mxArray *d_y;
  int32_T iv16[2];
  const sfOd2wElE6un66xmZCZog7F_size *tmp_elems_sizes;
  const sfOd2wElE6un66xmZCZog7F *tmp_data;
  real_T u;
  const mxArray *e_y;
  const mxArray *m6;
  int32_T u_sizes[2];
  int32_T i6;
  int32_T i;
  real_T b_u[4];
  int32_T tmp_sizes;
  real_T b_u_data[4];
  const mxArray *f_y;
  real_T *pData;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  const mxArray *k_y;
  static const int32_T iv17[2] = { 1, 11 };

  const mxArray *l_y;
  const mxArray *m_y;
  const mxArray *n_y;
  static const int32_T iv18[2] = { 1, 22 };

  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  const mxArray *t_y;
  static const int32_T iv19[2] = { 0, 0 };

  const mxArray *u_y;
  static const int32_T iv20[2] = { 1, 4 };

  const mxArray *v_y;
  s7UBIGHSehQY1gCsIQWwr5C c_u[4];
  const mxArray *w_y;
  const s7UBIGHSehQY1gCsIQWwr5C *r0;
  const mxArray *x_y;
  static const int32_T iv21[2] = { 1, 4 };

  const mxArray *y_y;
  static const int32_T iv22[2] = { 1, 3 };

  infoCache = NULL;
  Ports_data[0].dimModes = 0.0;
  Ports_elems_sizes[0].dims[0] = 1;
  Ports_elems_sizes[0].dims[1] = 4;
  for (i5 = 0; i5 < 4; i5++) {
    Ports_data[0].dims[i5] = (real_T)iv14[i5];
  }

  Ports_data[0].dType = 0.0;
  Ports_data[0].complexity = 0.0;
  Ports_data[0].outputBuiltInDTEqUsed = 0.0;
  Ports_data[1].dimModes = 0.0;
  Ports_elems_sizes[1].dims[0] = 1;
  Ports_elems_sizes[1].dims[1] = 4;
  for (i5 = 0; i5 < 4; i5++) {
    Ports_data[1].dims[i5] = (real_T)iv14[i5];
  }

  Ports_data[1].dType = 0.0;
  Ports_data[1].complexity = 0.0;
  Ports_data[1].outputBuiltInDTEqUsed = 0.0;
  Ports_data[2].dimModes = 0.0;
  Ports_elems_sizes[2].dims[0] = 1;
  Ports_elems_sizes[2].dims[1] = 4;
  for (i5 = 0; i5 < 4; i5++) {
    Ports_data[2].dims[i5] = (real_T)iv15[i5];
  }

  Ports_data[2].dType = 0.0;
  Ports_data[2].complexity = 0.0;
  Ports_data[2].outputBuiltInDTEqUsed = 0.0;
  for (i5 = 0; i5 < 11; i5++) {
    t1_objTypeName[i5] = cv24[i5];
  }

  for (i5 = 0; i5 < 22; i5++) {
    t1_sysObjChksum[i5] = cv25[i5];
  }

  for (i5 = 0; i5 < 4; i5++) {
    t0_cgxeChksum[i5] = uv0[i5];
    expl_temp.chksum[i5] = 0.0;
    b_expl_temp.chksum[i5] = 0.0;
    c_expl_temp.chksum[i5] = 0.0;
    d_expl_temp.chksum[i5] = (real_T)t3_chksum[i5];
  }

  checksums[0] = expl_temp;
  checksums[1] = b_expl_temp;
  checksums[2] = c_expl_temp;
  checksums[3] = d_expl_temp;
  for (i5 = 0; i5 < 3; i5++) {
    u_slVer[i5] = cv26[i5];
  }

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  for (i5 = 0; i5 < 3; i5++) {
    u_elems_sizes[i5] = Ports_elems_sizes[i5];
    u_data[i5] = Ports_data[i5];
  }

  d_y = NULL;
  for (i5 = 0; i5 < 2; i5++) {
    iv16[i5] = 1 + (i5 << 1);
  }

  emlrtAssign(&d_y, emlrtCreateStructArray(2, iv16, 0, NULL));
  for (i5 = 0; i5 < 3; i5++) {
    tmp_elems_sizes = &u_elems_sizes[i5];
    tmp_data = &u_data[i5];
    u = tmp_data->dimModes;
    e_y = NULL;
    m6 = emlrtCreateDoubleScalar(u);
    emlrtAssign(&e_y, m6);
    emlrtAddField(d_y, e_y, "dimModes", i5);
    u_sizes[0] = 1;
    u_sizes[1] = tmp_elems_sizes->dims[1];
    i6 = tmp_elems_sizes->dims[0];
    i = tmp_elems_sizes->dims[1];
    tmp_sizes = i6 * i;
    i *= i6;
    for (i6 = 0; i6 < i; i6++) {
      b_u[i6] = tmp_data->dims[i6];
    }

    for (i6 = 0; i6 < tmp_sizes; i6++) {
      b_u_data[i6] = b_u[i6];
    }

    f_y = NULL;
    m6 = emlrtCreateNumericArray(2, u_sizes, mxDOUBLE_CLASS, mxREAL);
    pData = (real_T *)mxGetPr(m6);
    i6 = 0;
    for (i = 0; i < u_sizes[1]; i++) {
      pData[i6] = b_u_data[u_sizes[0] * i];
      i6++;
    }

    emlrtAssign(&f_y, m6);
    emlrtAddField(d_y, f_y, "dims", i5);
    u = tmp_data->dType;
    g_y = NULL;
    m6 = emlrtCreateDoubleScalar(u);
    emlrtAssign(&g_y, m6);
    emlrtAddField(d_y, g_y, "dType", i5);
    u = tmp_data->complexity;
    h_y = NULL;
    m6 = emlrtCreateDoubleScalar(u);
    emlrtAssign(&h_y, m6);
    emlrtAddField(d_y, h_y, "complexity", i5);
    u = tmp_data->outputBuiltInDTEqUsed;
    i_y = NULL;
    m6 = emlrtCreateDoubleScalar(u);
    emlrtAssign(&i_y, m6);
    emlrtAddField(d_y, i_y, "outputBuiltInDTEqUsed", i5);
  }

  emlrtAddField(c_y, d_y, "Ports", 0);
  j_y = NULL;
  for (i5 = 0; i5 < 2; i5++) {
    iv16[i5] = 1 - i5;
  }

  emlrtAssign(&j_y, emlrtCreateStructArray(2, iv16, 0, NULL));
  emlrtAddField(j_y, NULL, "names", 0);
  emlrtAddField(j_y, NULL, "dims", 0);
  emlrtAddField(j_y, NULL, "dType", 0);
  emlrtAddField(j_y, NULL, "complexity", 0);
  emlrtAddField(c_y, j_y, "dWork", 0);
  k_y = NULL;
  m6 = emlrtCreateCharArray(2, iv17);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 11, m6, t1_objTypeName);
  emlrtAssign(&k_y, m6);
  emlrtAddField(c_y, k_y, "objTypeName", 0);
  l_y = NULL;
  m6 = emlrtCreateDoubleScalar(144.0);
  emlrtAssign(&l_y, m6);
  emlrtAddField(c_y, l_y, "objTypeSize", 0);
  m_y = NULL;
  for (i5 = 0; i5 < 2; i5++) {
    iv16[i5] = 1 - i5;
  }

  emlrtAssign(&m_y, emlrtCreateStructArray(2, iv16, 0, NULL));
  emlrtAddField(m_y, NULL, "names", 0);
  emlrtAddField(m_y, NULL, "dims", 0);
  emlrtAddField(m_y, NULL, "dType", 0);
  emlrtAddField(m_y, NULL, "dTypeSize", 0);
  emlrtAddField(m_y, NULL, "dTypeName", 0);
  emlrtAddField(m_y, NULL, "dTypeChksum", 0);
  emlrtAddField(m_y, NULL, "complexity", 0);
  emlrtAddField(c_y, m_y, "persisVarDWork", 0);
  n_y = NULL;
  m6 = emlrtCreateCharArray(2, iv18);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 22, m6, t1_sysObjChksum);
  emlrtAssign(&n_y, m6);
  emlrtAddField(c_y, n_y, "sysObjChksum", 0);
  o_y = NULL;
  emlrtAssign(&o_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  p_y = NULL;
  for (i5 = 0; i5 < 2; i5++) {
    iv16[i5] = 1 - i5;
  }

  emlrtAssign(&p_y, emlrtCreateStructArray(2, iv16, 0, NULL));
  emlrtAddField(p_y, NULL, "Index", 0);
  emlrtAddField(p_y, NULL, "DataType", 0);
  emlrtAddField(p_y, NULL, "IsSigned", 0);
  emlrtAddField(p_y, NULL, "MantBits", 0);
  emlrtAddField(p_y, NULL, "FixExp", 0);
  emlrtAddField(p_y, NULL, "Slope", 0);
  emlrtAddField(p_y, NULL, "Bias", 0);
  emlrtAddField(o_y, p_y, "Out", 0);
  q_y = NULL;
  for (i5 = 0; i5 < 2; i5++) {
    iv16[i5] = 1 - i5;
  }

  emlrtAssign(&q_y, emlrtCreateStructArray(2, iv16, 0, NULL));
  emlrtAddField(q_y, NULL, "Index", 0);
  emlrtAddField(q_y, NULL, "DataType", 0);
  emlrtAddField(q_y, NULL, "IsSigned", 0);
  emlrtAddField(q_y, NULL, "MantBits", 0);
  emlrtAddField(q_y, NULL, "FixExp", 0);
  emlrtAddField(q_y, NULL, "Slope", 0);
  emlrtAddField(q_y, NULL, "Bias", 0);
  emlrtAddField(o_y, q_y, "DW", 0);
  r_y = NULL;
  for (i5 = 0; i5 < 2; i5++) {
    iv16[i5] = 1 - i5;
  }

  emlrtAssign(&r_y, emlrtCreateStructArray(2, iv16, 0, NULL));
  emlrtAddField(r_y, NULL, "Index", 0);
  emlrtAddField(r_y, NULL, "DataType", 0);
  emlrtAddField(r_y, NULL, "IsSigned", 0);
  emlrtAddField(r_y, NULL, "MantBits", 0);
  emlrtAddField(r_y, NULL, "FixExp", 0);
  emlrtAddField(r_y, NULL, "Slope", 0);
  emlrtAddField(r_y, NULL, "Bias", 0);
  emlrtAddField(o_y, r_y, "PersisDW", 0);
  emlrtAddField(c_y, o_y, "mapsInfo", 0);
  s_y = NULL;
  m6 = emlrtCreateDoubleScalar(2.0);
  emlrtAssign(&s_y, m6);
  emlrtAddField(c_y, s_y, "objDWorkTypeNameIndex", 0);
  t_y = NULL;
  m6 = emlrtCreateNumericArray(2, iv19, mxDOUBLE_CLASS, mxREAL);
  emlrtAssign(&t_y, m6);
  emlrtAddField(c_y, t_y, "inputDFFlagsIndexField", 0);
  emlrtAddField(b_y, c_y, "DispatcherInfo", 0);
  u_y = NULL;
  m6 = emlrtCreateNumericArray(2, iv20, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m6);
  for (i = 0; i < 4; i++) {
    pData[i] = (real_T)t0_cgxeChksum[i];
  }

  emlrtAssign(&u_y, m6);
  emlrtAddField(b_y, u_y, "cgxeChksum", 0);
  emlrtAddField(y, b_y, "RestoreInfo", 0);
  v_y = NULL;
  emlrtAssign(&v_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  for (i5 = 0; i5 < 4; i5++) {
    c_u[i5] = checksums[i5];
  }

  w_y = NULL;
  for (i5 = 0; i5 < 2; i5++) {
    iv16[i5] = 1 + 3 * i5;
  }

  emlrtAssign(&w_y, emlrtCreateStructArray(2, iv16, 0, NULL));
  for (i5 = 0; i5 < 4; i5++) {
    r0 = &c_u[i5];
    for (i6 = 0; i6 < 4; i6++) {
      b_u[i6] = r0->chksum[i6];
    }

    x_y = NULL;
    m6 = emlrtCreateNumericArray(2, iv21, mxDOUBLE_CLASS, mxREAL);
    pData = (real_T *)mxGetPr(m6);
    for (i = 0; i < 4; i++) {
      pData[i] = b_u[i];
    }

    emlrtAssign(&x_y, m6);
    emlrtAddField(w_y, x_y, "chksum", i5);
  }

  emlrtAddField(v_y, w_y, "checksums", 0);
  emlrtAddField(y, v_y, "VerificationInfo", 0);
  y_y = NULL;
  m6 = emlrtCreateCharArray(2, iv22);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 3, m6, u_slVer);
  emlrtAssign(&y_y, m6);
  emlrtAddField(y, y_y, "slVer", 0);
  emlrtAssign(&infoCache, y);
  return infoCache;
}

static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_nDmS38SZ3sHBJKA7UrolW *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  static const int32_T iv23[2] = { 3, 3 };

  const mxArray *m7;
  real_T *pData;
  int32_T i;
  const mxArray *c_y;
  static const int32_T iv24[2] = { 3, 3 };

  const mxArray *d_y;
  static const int32_T iv25[2] = { 3, 4 };

  const mxArray *e_y;
  const mxArray *f_y;
  static const int32_T iv26[2] = { 1, 17 };

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
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  const mxArray *t_y;
  const mxArray *u_y;
  static const int32_T iv27[1] = { 4 };

  const mxArray *v_y;
  real_T (*y2)[12];
  real_T (*b_y1)[9];
  real_T (*b_y0)[9];
  y2 = (real_T (*)[12])ssGetOutputPortSignal(moduleInstance->S, 2U);
  b_y1 = (real_T (*)[9])ssGetOutputPortSignal(moduleInstance->S, 1U);
  b_y0 = (real_T (*)[9])ssGetOutputPortSignal(moduleInstance->S, 0U);
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(5, 1));
  b_y = NULL;
  m7 = emlrtCreateNumericArray(2, iv23, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m7);
  for (i = 0; i < 9; i++) {
    pData[i] = (*b_y0)[i];
  }

  emlrtAssign(&b_y, m7);
  emlrtSetCell(y, 0, b_y);
  c_y = NULL;
  m7 = emlrtCreateNumericArray(2, iv24, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m7);
  for (i = 0; i < 9; i++) {
    pData[i] = (*b_y1)[i];
  }

  emlrtAssign(&c_y, m7);
  emlrtSetCell(y, 1, c_y);
  d_y = NULL;
  m7 = emlrtCreateNumericArray(2, iv25, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m7);
  for (i = 0; i < 12; i++) {
    pData[i] = (*y2)[i];
  }

  emlrtAssign(&d_y, m7);
  emlrtSetCell(y, 2, d_y);
  e_y = NULL;
  emlrtAssign(&e_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  f_y = NULL;
  m7 = emlrtCreateLogicalArray(2, iv26);
  emlrtInitLogicalArray(17, m7, moduleInstance->sysobj.tunablePropertyChanged);
  emlrtAssign(&f_y, m7);
  emlrtAddField(e_y, f_y, "tunablePropertyChanged", 0);
  g_y = NULL;
  m7 = emlrtCreateLogicalScalar(moduleInstance->sysobj.isInitialized);
  emlrtAssign(&g_y, m7);
  emlrtAddField(e_y, g_y, "isInitialized", 0);
  h_y = NULL;
  m7 = emlrtCreateLogicalScalar(moduleInstance->sysobj.isReleased);
  emlrtAssign(&h_y, m7);
  emlrtAddField(e_y, h_y, "isReleased", 0);
  i_y = NULL;
  m7 = emlrtCreateLogicalScalar(moduleInstance->sysobj.TunablePropsChanged);
  emlrtAssign(&i_y, m7);
  emlrtAddField(e_y, i_y, "TunablePropsChanged", 0);
  j_y = NULL;
  m7 = emlrtCreateDoubleScalar(moduleInstance->sysobj.M_bot);
  emlrtAssign(&j_y, m7);
  emlrtAddField(e_y, j_y, "M_bot", 0);
  k_y = NULL;
  m7 = emlrtCreateDoubleScalar(moduleInstance->sysobj.I_bot);
  emlrtAssign(&k_y, m7);
  emlrtAddField(e_y, k_y, "I_bot", 0);
  l_y = NULL;
  m7 = emlrtCreateDoubleScalar(moduleInstance->sysobj.g);
  emlrtAssign(&l_y, m7);
  emlrtAddField(e_y, l_y, "g", 0);
  m_y = NULL;
  m7 = emlrtCreateDoubleScalar(moduleInstance->sysobj.r);
  emlrtAssign(&m_y, m7);
  emlrtAddField(e_y, m_y, "r", 0);
  n_y = NULL;
  m7 = emlrtCreateDoubleScalar(moduleInstance->sysobj.L);
  emlrtAssign(&n_y, m7);
  emlrtAddField(e_y, n_y, "L", 0);
  o_y = NULL;
  m7 = emlrtCreateDoubleScalar(moduleInstance->sysobj.Rt);
  emlrtAssign(&o_y, m7);
  emlrtAddField(e_y, o_y, "Rt", 0);
  p_y = NULL;
  m7 = emlrtCreateDoubleScalar(moduleInstance->sysobj.K_e);
  emlrtAssign(&p_y, m7);
  emlrtAddField(e_y, p_y, "K_e", 0);
  q_y = NULL;
  m7 = emlrtCreateDoubleScalar(moduleInstance->sysobj.K_t);
  emlrtAssign(&q_y, m7);
  emlrtAddField(e_y, q_y, "K_t", 0);
  r_y = NULL;
  m7 = emlrtCreateDoubleScalar(moduleInstance->sysobj.K_f);
  emlrtAssign(&r_y, m7);
  emlrtAddField(e_y, r_y, "K_f", 0);
  s_y = NULL;
  m7 = emlrtCreateDoubleScalar(moduleInstance->sysobj.I_asm);
  emlrtAssign(&s_y, m7);
  emlrtAddField(e_y, s_y, "I_asm", 0);
  t_y = NULL;
  m7 = emlrtCreateDoubleScalar(moduleInstance->sysobj.V);
  emlrtAssign(&t_y, m7);
  emlrtAddField(e_y, t_y, "V", 0);
  u_y = NULL;
  m7 = emlrtCreateNumericArray(1, iv27, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m7);
  for (i = 0; i < 4; i++) {
    pData[i] = moduleInstance->sysobj.wheel_angles[i];
  }

  emlrtAssign(&u_y, m7);
  emlrtAddField(e_y, u_y, "wheel_angles", 0);
  emlrtSetCell(y, 3, e_y);
  v_y = NULL;
  m7 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&v_y, m7);
  emlrtSetCell(y, 4, v_y);
  emlrtAssign(&st, y);
  return st;
}

static void emlrt_marshallIn(const mxArray *c_y0, const char_T *identifier,
  real_T y[9])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(c_y0), &thisId, y);
  emlrtDestroyArray(&c_y0);
}

static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[9])
{
  l_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const mxArray *b_y2, const char_T *identifier,
  real_T y[12])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(emlrtAlias(b_y2), &thisId, y);
  emlrtDestroyArray(&b_y2);
}

static void d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[12])
{
  m_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const mxArray *b_sysobj, const char_T *identifier,
  RobotParams *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(emlrtAlias(b_sysobj), &thisId, y);
  emlrtDestroyArray(&b_sysobj);
}

static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, RobotParams *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[16] = { "tunablePropertyChanged",
    "isInitialized", "isReleased", "TunablePropsChanged", "M_bot", "I_bot", "g",
    "r", "L", "Rt", "K_e", "K_t", "K_f", "I_asm", "V", "wheel_angles" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 16, fieldNames, 0U, 0);
  thisId.fIdentifier = "tunablePropertyChanged";
  g_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "tunablePropertyChanged")), &thisId, y->tunablePropertyChanged);
  thisId.fIdentifier = "isInitialized";
  y->isInitialized = h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "isReleased";
  y->isReleased = h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "isReleased")), &thisId);
  thisId.fIdentifier = "TunablePropsChanged";
  y->TunablePropsChanged = h_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "TunablePropsChanged")), &thisId);
  thisId.fIdentifier = "M_bot";
  y->M_bot = i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "M_bot")), &thisId);
  thisId.fIdentifier = "I_bot";
  y->I_bot = i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "I_bot")), &thisId);
  thisId.fIdentifier = "g";
  y->g = i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u,
    0, "g")), &thisId);
  thisId.fIdentifier = "r";
  y->r = i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u,
    0, "r")), &thisId);
  thisId.fIdentifier = "L";
  y->L = i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u,
    0, "L")), &thisId);
  thisId.fIdentifier = "Rt";
  y->Rt = i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal,
    u, 0, "Rt")), &thisId);
  thisId.fIdentifier = "K_e";
  y->K_e = i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal,
    u, 0, "K_e")), &thisId);
  thisId.fIdentifier = "K_t";
  y->K_t = i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal,
    u, 0, "K_t")), &thisId);
  thisId.fIdentifier = "K_f";
  y->K_f = i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal,
    u, 0, "K_f")), &thisId);
  thisId.fIdentifier = "I_asm";
  y->I_asm = i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "I_asm")), &thisId);
  thisId.fIdentifier = "V";
  y->V = i_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u,
    0, "V")), &thisId);
  thisId.fIdentifier = "wheel_angles";
  j_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a(emlrtRootTLSGlobal, u, 0,
    "wheel_angles")), &thisId, y->wheel_angles);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, boolean_T y[17])
{
  n_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T h_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  boolean_T y;
  y = o_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T i_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  real_T y;
  y = p_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void j_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[4])
{
  q_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static boolean_T k_emlrt_marshallIn(const mxArray *b_sysobj_not_empty, const
  char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = h_emlrt_marshallIn(emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void mw__internal__setSimState__fcn(InstanceStruct_nDmS38SZ3sHBJKA7UrolW *
  moduleInstance, const mxArray *st)
{
  const mxArray *u;
  real_T (*b_y0)[9];
  real_T (*b_y1)[9];
  real_T (*y2)[12];
  y2 = (real_T (*)[12])ssGetOutputPortSignal(moduleInstance->S, 2U);
  b_y1 = (real_T (*)[9])ssGetOutputPortSignal(moduleInstance->S, 1U);
  b_y0 = (real_T (*)[9])ssGetOutputPortSignal(moduleInstance->S, 0U);
  u = emlrtAlias(st);
  emlrt_marshallIn(emlrtAlias(emlrtGetCell(emlrtRootTLSGlobal, u, 0)), "y0",
                   *b_y0);
  emlrt_marshallIn(emlrtAlias(emlrtGetCell(emlrtRootTLSGlobal, u, 1)), "y1",
                   *b_y1);
  c_emlrt_marshallIn(emlrtAlias(emlrtGetCell(emlrtRootTLSGlobal, u, 2)), "y2",
                     *y2);
  e_emlrt_marshallIn(emlrtAlias(emlrtGetCell(emlrtRootTLSGlobal, u, 3)),
                     "sysobj", &moduleInstance->sysobj);
  moduleInstance->sysobj_not_empty = k_emlrt_marshallIn(emlrtAlias(emlrtGetCell
    (emlrtRootTLSGlobal, u, 4)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location)
{
  const mxArray *pArrays[2];
  const mxArray *m8;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m8, 2, pArrays, "message",
    true, location);
}

static void error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", true,
                        location);
}

static void l_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[9])
{
  int32_T iv28[2];
  int32_T i7;
  int32_T i8;
  for (i7 = 0; i7 < 2; i7++) {
    iv28[i7] = 3;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
    iv28);
  for (i7 = 0; i7 < 3; i7++) {
    for (i8 = 0; i8 < 3; i8++) {
      ret[i8 + 3 * i7] = (*(real_T (*)[9])mxGetData(src))[i8 + 3 * i7];
    }
  }

  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[12])
{
  int32_T iv29[2];
  int32_T i9;
  int32_T i10;
  for (i9 = 0; i9 < 2; i9++) {
    iv29[i9] = 3 + i9;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
    iv29);
  for (i9 = 0; i9 < 4; i9++) {
    for (i10 = 0; i10 < 3; i10++) {
      ret[i10 + 3 * i9] = (*(real_T (*)[12])mxGetData(src))[i10 + 3 * i9];
    }
  }

  emlrtDestroyArray(&src);
}

static void n_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, boolean_T ret[17])
{
  int32_T iv30[2];
  int32_T i11;
  for (i11 = 0; i11 < 2; i11++) {
    iv30[i11] = 1 + (i11 << 4);
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "logical", false, 2U,
    iv30);
  for (i11 = 0; i11 < 17; i11++) {
    ret[i11] = (*(boolean_T (*)[17])mxGetLogicals(src))[i11];
  }

  emlrtDestroyArray(&src);
}

static boolean_T o_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  boolean_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "logical", false, 0U,
    0);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T p_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void q_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[4])
{
  int32_T iv31[1];
  int32_T i12;
  iv31[0] = 4;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 1U,
    iv31);
  for (i12 = 0; i12 < 4; i12++) {
    ret[i12] = (*(real_T (*)[4])mxGetData(src))[i12];
  }

  emlrtDestroyArray(&src);
}

/* CGXE Glue Code */
static void mdlOutputs_nDmS38SZ3sHBJKA7UrolW(SimStruct *S, int_T tid)
{
  InstanceStruct_nDmS38SZ3sHBJKA7UrolW *moduleInstance;
  moduleInstance = (InstanceStruct_nDmS38SZ3sHBJKA7UrolW *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mw__internal__outputs__fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static void mdlInitialize_nDmS38SZ3sHBJKA7UrolW(SimStruct *S)
{
  InstanceStruct_nDmS38SZ3sHBJKA7UrolW *moduleInstance;
  moduleInstance = (InstanceStruct_nDmS38SZ3sHBJKA7UrolW *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mw__internal__initialize__fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static void mdlUpdate_nDmS38SZ3sHBJKA7UrolW(SimStruct *S, int_T tid)
{
  InstanceStruct_nDmS38SZ3sHBJKA7UrolW *moduleInstance;
  moduleInstance = (InstanceStruct_nDmS38SZ3sHBJKA7UrolW *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mw__internal__update__fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static mxArray* getSimState_nDmS38SZ3sHBJKA7UrolW(SimStruct *S)
{
  InstanceStruct_nDmS38SZ3sHBJKA7UrolW *moduleInstance;
  mxArray* mxSS;
  moduleInstance = (InstanceStruct_nDmS38SZ3sHBJKA7UrolW *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mxSS = (mxArray *) mw__internal__getSimState__fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();
  return mxSS;
}

static void setSimState_nDmS38SZ3sHBJKA7UrolW(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_nDmS38SZ3sHBJKA7UrolW *moduleInstance;
  moduleInstance = (InstanceStruct_nDmS38SZ3sHBJKA7UrolW *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mw__internal__setSimState__fcn(moduleInstance, emlrtAlias(ss));
  CGXERT_LEAVE_CHECK();
}

static void mdlTerminate_nDmS38SZ3sHBJKA7UrolW(SimStruct *S)
{
  InstanceStruct_nDmS38SZ3sHBJKA7UrolW *moduleInstance;
  moduleInstance = (InstanceStruct_nDmS38SZ3sHBJKA7UrolW *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mw__internal__terminate__fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();
  free((void *)moduleInstance);
  ssSetUserData(S, NULL);
}

static void mdlStart_nDmS38SZ3sHBJKA7UrolW(SimStruct *S)
{
  InstanceStruct_nDmS38SZ3sHBJKA7UrolW *moduleInstance;
  moduleInstance = (InstanceStruct_nDmS38SZ3sHBJKA7UrolW *)calloc(1, sizeof
    (InstanceStruct_nDmS38SZ3sHBJKA7UrolW));
  moduleInstance->S = S;
  ssSetUserData(S, (void *)moduleInstance);
  CGXERT_ENTER_CHECK();
  mw__internal__start___fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }

  ssSetmdlOutputs(S, mdlOutputs_nDmS38SZ3sHBJKA7UrolW);
  ssSetmdlInitializeConditions(S, mdlInitialize_nDmS38SZ3sHBJKA7UrolW);
  ssSetmdlUpdate(S, mdlUpdate_nDmS38SZ3sHBJKA7UrolW);
  ssSetmdlTerminate(S, mdlTerminate_nDmS38SZ3sHBJKA7UrolW);
}

static void mdlProcessParameters_nDmS38SZ3sHBJKA7UrolW(SimStruct *S)
{
}

void method_dispatcher_nDmS38SZ3sHBJKA7UrolW(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_nDmS38SZ3sHBJKA7UrolW(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_nDmS38SZ3sHBJKA7UrolW(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_nDmS38SZ3sHBJKA7UrolW(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_nDmS38SZ3sHBJKA7UrolW(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: nDmS38SZ3sHBJKA7UrolW.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

int autoInfer_dispatcher_nDmS38SZ3sHBJKA7UrolW(mxArray* plhs[], const char
  * commandName)
{
  if (strcmp(commandName, "NameResolution") == 0) {
    plhs[0] = (mxArray*) mw__internal__name__resolution__fcn();
    return 1;
  }

  if (strcmp(commandName, "AutoInfer") == 0) {
    plhs[0] = (mxArray*) mw__internal__autoInference__fcn();
    return 1;
  }

  return 0;
}

mxArray *cgxe_nDmS38SZ3sHBJKA7UrolW_BuildInfoUpdate(void)
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
  double * pointer;
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
