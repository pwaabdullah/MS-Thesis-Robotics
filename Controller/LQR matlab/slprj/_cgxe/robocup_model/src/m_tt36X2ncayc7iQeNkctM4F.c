/* Include files */

#include <stddef.h>
#include "blas.h"
#include "robocup_model_cgxe.h"
#include "m_tt36X2ncayc7iQeNkctM4F.h"
#include "mwmathutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtMCInfo emlrtMCI = { 1, 1, "SystemCore",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"
};

static emlrtMCInfo b_emlrtMCI = { 20, 34, "eml_error",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_error.m"
};

static emlrtMCInfo c_emlrtMCI = { 75, 9, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo d_emlrtMCI = { 74, 15, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

static emlrtBCInfo emlrtBCI = { 1, 9, 1, 1, "", "xnrm2",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xnrm2.p",
  0 };

static emlrtBCInfo b_emlrtBCI = { 1, 9, 1, 1, "", "xdotx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xdotx.p",
  0 };

static emlrtBCInfo c_emlrtBCI = { 1, 3, 1, 1, "", "xnrm2",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xnrm2.p",
  0 };

static emlrtBCInfo d_emlrtBCI = { 1, 9, 1, 1, "", "xgemm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xgemm.p",
  0 };

static emlrtBCInfo e_emlrtBCI = { 1, 9, 1, 1, "", "xscal",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xscal.p",
  0 };

static emlrtBCInfo f_emlrtBCI = { 1, 9, 1, 1, "", "xaxpy",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xaxpy.p",
  0 };

static emlrtBCInfo g_emlrtBCI = { 1, 3, 1, 1, "", "xscal",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xscal.p",
  0 };

static emlrtBCInfo h_emlrtBCI = { 1, 3, 1, 1, "", "xaxpy",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xaxpy.p",
  0 };

static emlrtBCInfo i_emlrtBCI = { 1, 9, 1, 1, "", "xrot",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xrot.p",
  0 };

static emlrtBCInfo j_emlrtBCI = { 1, 9, 1, 1, "", "xswap",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xswap.p",
  0 };

/* Function Declarations */
static void eml_error(void);
static void eml_xgesvd(real_T A[9], real_T U[9], real_T b_S[3], real_T V[9]);
static real_T eml_xnrm2(int32_T n, real_T x[9], int32_T ix0);
static void check_forloop_overflow_error(boolean_T overflow);
static real_T eml_div(real_T x, real_T y);
static real_T eml_xdotc(int32_T n, real_T x[9], int32_T ix0, real_T y[9],
  int32_T iy0);
static real_T b_eml_xnrm2(int32_T n, real_T x[3], int32_T ix0);
static void b_eml_error(void);
static void c_eml_error(void);
static void mw__internal__start___fcn(InstanceStruct_tt36X2ncayc7iQeNkctM4F
  *moduleInstance);
static void mw__internal__initialize__fcn(InstanceStruct_tt36X2ncayc7iQeNkctM4F *
  moduleInstance);
static void mw__internal__outputs__fcn(InstanceStruct_tt36X2ncayc7iQeNkctM4F
  *moduleInstance);
static void mw__internal__update__fcn(InstanceStruct_tt36X2ncayc7iQeNkctM4F
  *moduleInstance);
static void mw__internal__terminate__fcn(InstanceStruct_tt36X2ncayc7iQeNkctM4F
  *moduleInstance);
static const mxArray *mw__internal__name__resolution__fcn(void);
static void info_helper(const mxArray **info);
static const mxArray *emlrt_marshallOut(const char * u);
static const mxArray *b_emlrt_marshallOut(const uint32_T u);
static void b_info_helper(const mxArray **info);
static void c_info_helper(const mxArray **info);
static void d_info_helper(const mxArray **info);
static const mxArray *mw__internal__autoInference__fcn(void);
static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_tt36X2ncayc7iQeNkctM4F *moduleInstance);
static void emlrt_marshallIn(const mxArray *c_y0, const char_T *identifier,
  real_T y[3]);
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[3]);
static Global2Body c_emlrt_marshallIn(const mxArray *b_sysobj, const char_T
  *identifier);
static Global2Body d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static boolean_T e_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId);
static boolean_T f_emlrt_marshallIn(const mxArray *b_sysobj_not_empty, const
  char_T *identifier);
static void mw__internal__setSimState__fcn(InstanceStruct_tt36X2ncayc7iQeNkctM4F
  *moduleInstance, const mxArray *st);
static const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location);
static void error(const mxArray *b, emlrtMCInfo *location);
static const mxArray *b_message(const mxArray *b, emlrtMCInfo *location);
static void g_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[3]);
static boolean_T h_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId);
static void eml_xscal(int32_T n, real_T a, real_T x[9], int32_T ix0);
static void eml_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0);
static void b_eml_xscal(int32_T n, real_T a, real_T x[3], int32_T ix0);
static void b_eml_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y
  [3], int32_T iy0);
static void c_eml_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y
  [9], int32_T iy0);
static void c_eml_xscal(real_T a, real_T x[9], int32_T ix0);
static void eml_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
static void eml_xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s);
static void eml_xswap(real_T x[9], int32_T ix0, int32_T iy0);

/* Function Definitions */
static void eml_error(void)
{
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 33 };

  const mxArray *m0;
  char_T cv0[33];
  int32_T i0;
  static char_T cv1[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 's', 'v', 'd', '_', 'm', 'a', 't', 'r', 'i', 'x', 'W', 'i',
    't', 'h', 'N', 'a', 'N', 'I', 'n', 'f' };

  y = NULL;
  m0 = emlrtCreateCharArray(2, iv0);
  for (i0 = 0; i0 < 33; i0++) {
    cv0[i0] = cv1[i0];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 33, m0, cv0);
  emlrtAssign(&y, m0);
  error(b_message(y, &b_emlrtMCI), &b_emlrtMCI);
}

static void eml_xgesvd(real_T A[9], real_T U[9], real_T b_S[3], real_T V[9])
{
  real_T b_A[9];
  int32_T kase;
  real_T s[3];
  real_T e[3];
  real_T work[3];
  real_T Vf[9];
  int32_T q;
  int32_T qs;
  real_T ztest0;
  int32_T ii;
  int32_T m;
  real_T rt;
  real_T ztest;
  int32_T iter;
  real_T tiny;
  real_T snorm;
  boolean_T exitg1;
  int32_T exitg4;
  boolean_T exitg3;
  real_T f;
  real_T varargin_1[5];
  real_T mtmp;
  boolean_T exitg2;
  real_T sqds;
  for (kase = 0; kase < 9; kase++) {
    b_A[kase] = A[kase];
  }

  for (kase = 0; kase < 3; kase++) {
    s[kase] = 0.0;
    e[kase] = 0.0;
    work[kase] = 0.0;
  }

  for (kase = 0; kase < 9; kase++) {
    U[kase] = 0.0;
    Vf[kase] = 0.0;
  }

  for (q = 0; q < 2; q++) {
    qs = q + 3 * q;
    ztest0 = eml_xnrm2(3 - q, b_A, qs + 1);
    if (ztest0 > 0.0) {
      if (b_A[qs] < 0.0) {
        s[q] = -ztest0;
      } else {
        s[q] = ztest0;
      }

      eml_xscal(3 - q, eml_div(1.0, s[q]), b_A, qs + 1);
      b_A[qs]++;
      s[q] = -s[q];
    } else {
      s[q] = 0.0;
    }

    for (ii = q + 1; ii + 1 < 4; ii++) {
      kase = q + 3 * ii;
      if (s[q] != 0.0) {
        ztest0 = eml_xdotc(3 - q, b_A, qs + 1, b_A, kase + 1);
        ztest0 = -eml_div(ztest0, b_A[q + 3 * q]);
        eml_xaxpy(3 - q, ztest0, qs + 1, b_A, kase + 1);
      }

      e[ii] = b_A[kase];
    }

    for (ii = q; ii + 1 < 4; ii++) {
      U[ii + 3 * q] = b_A[ii + 3 * q];
    }

    if (q + 1 <= 1) {
      ztest0 = b_eml_xnrm2(2, e, 2);
      if (ztest0 == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          ztest0 = -ztest0;
        }

        e[0] = ztest0;
        b_eml_xscal(2, eml_div(1.0, ztest0), e, 2);
        e[1]++;
      }

      e[0] = -e[0];
      if (e[0] != 0.0) {
        for (ii = 0; ii < 2; ii++) {
          work[ii + 1] = 0.0;
        }

        for (ii = 0; ii < 2; ii++) {
          b_eml_xaxpy(2, e[ii + 1], b_A, 2 + 3 * (ii + 1), work, 2);
        }

        for (ii = 0; ii < 2; ii++) {
          c_eml_xaxpy(2, eml_div(-e[ii + 1], e[1]), work, 2, b_A, 2 + 3 * (ii +
            1));
        }
      }

      for (ii = 0; ii < 2; ii++) {
        Vf[ii + 1] = e[ii + 1];
      }
    }
  }

  m = 1;
  s[2] = b_A[8];
  e[1] = b_A[7];
  e[2] = 0.0;
  for (ii = 0; ii < 3; ii++) {
    U[6 + ii] = 0.0;
  }

  U[8] = 1.0;
  for (q = 1; q > -1; q += -1) {
    qs = q + 3 * q;
    if (s[q] != 0.0) {
      for (ii = q; ii + 2 < 4; ii++) {
        kase = q + 3 * (ii + 1) + 1;
        ztest0 = eml_xdotc(3 - q, U, qs + 1, U, kase);
        ztest0 = -eml_div(ztest0, U[qs]);
        eml_xaxpy(3 - q, ztest0, qs + 1, U, kase);
      }

      for (ii = q; ii + 1 < 4; ii++) {
        U[ii + 3 * q] = -U[ii + 3 * q];
      }

      U[qs]++;
      ii = 1;
      while (ii <= q) {
        U[3] = 0.0;
        ii = 2;
      }
    } else {
      for (ii = 0; ii < 3; ii++) {
        U[ii + 3 * q] = 0.0;
      }

      U[qs] = 1.0;
    }
  }

  for (q = 2; q > -1; q += -1) {
    if (q + 1 <= 1 && e[0] != 0.0) {
      for (ii = 0; ii < 2; ii++) {
        kase = 3 * (ii + 1);
        ztest0 = eml_xdotc(2, Vf, 2, Vf, 2 + kase);
        ztest0 = -eml_div(ztest0, Vf[1]);
        eml_xaxpy(2, ztest0, 2, Vf, kase + 2);
      }
    }

    for (ii = 0; ii < 3; ii++) {
      Vf[ii + 3 * q] = 0.0;
    }

    Vf[q + 3 * q] = 1.0;
  }

  for (q = 0; q < 3; q++) {
    ztest0 = e[q];
    if (s[q] != 0.0) {
      rt = muDoubleScalarAbs(s[q]);
      ztest = eml_div(s[q], rt);
      s[q] = rt;
      if (q + 1 < 3) {
        ztest0 = eml_div(e[q], ztest);
      }

      c_eml_xscal(ztest, U, 3 * q + 1);
    }

    if (q + 1 < 3 && ztest0 != 0.0) {
      rt = muDoubleScalarAbs(ztest0);
      ztest = eml_div(rt, ztest0);
      ztest0 = rt;
      s[q + 1] *= ztest;
      c_eml_xscal(ztest, Vf, 3 * (q + 1) + 1);
    }

    e[q] = ztest0;
  }

  iter = 0;
  tiny = eml_div(2.2250738585072014E-308, 2.2204460492503131E-16);
  snorm = 0.0;
  for (ii = 0; ii < 3; ii++) {
    snorm = muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs(s[ii]),
      muDoubleScalarAbs(e[ii])));
  }

  exitg1 = false;
  while (exitg1 == false && m + 2 > 0) {
    if (iter >= 75) {
      b_eml_error();
      exitg1 = true;
    } else {
      ii = m;
      do {
        exitg4 = 0;
        q = ii + 1;
        if (ii + 1 == 0) {
          exitg4 = 1;
        } else {
          ztest0 = muDoubleScalarAbs(e[ii]);
          if (ztest0 <= 2.2204460492503131E-16 * (muDoubleScalarAbs(s[ii]) +
               muDoubleScalarAbs(s[ii + 1])) || ztest0 <= tiny || (iter > 20 &&
               ztest0 <= 2.2204460492503131E-16 * snorm)) {
            e[ii] = 0.0;
            exitg4 = 1;
          } else {
            ii--;
          }
        }
      } while (exitg4 == 0);

      if (ii + 1 == m + 1) {
        kase = 4;
      } else {
        qs = m + 2;
        kase = m + 2;
        exitg3 = false;
        while (exitg3 == false && kase >= ii + 1) {
          qs = kase;
          if (kase == ii + 1) {
            exitg3 = true;
          } else {
            ztest0 = 0.0;
            if (kase < m + 2) {
              ztest0 = muDoubleScalarAbs(e[kase - 1]);
            }

            if (kase > ii + 2) {
              ztest0 += muDoubleScalarAbs(e[kase - 2]);
            }

            ztest = muDoubleScalarAbs(s[kase - 1]);
            if (ztest <= 2.2204460492503131E-16 * ztest0 || ztest <= tiny) {
              s[kase - 1] = 0.0;
              exitg3 = true;
            } else {
              kase--;
            }
          }
        }

        if (qs == ii + 1) {
          kase = 3;
        } else if (qs == m + 2) {
          kase = 1;
        } else {
          kase = 2;
          q = qs;
        }
      }

      switch (kase) {
       case 1:
        f = e[m];
        e[m] = 0.0;
        for (ii = m; ii + 1 >= q + 1; ii--) {
          ztest0 = s[ii];
          eml_xrotg(&ztest0, &f, &ztest, &rt);
          s[ii] = ztest0;
          if (ii + 1 > q + 1) {
            f = -rt * e[0];
            e[0] *= ztest;
          }

          eml_xrot(Vf, 3 * ii + 1, 3 * (m + 1) + 1, ztest, rt);
        }
        break;

       case 2:
        f = e[q - 1];
        e[q - 1] = 0.0;
        for (ii = q; ii + 1 <= m + 2; ii++) {
          ztest0 = s[ii];
          eml_xrotg(&ztest0, &f, &ztest, &rt);
          s[ii] = ztest0;
          f = -rt * e[ii];
          e[ii] *= ztest;
          eml_xrot(U, 3 * ii + 1, 3 * (q - 1) + 1, ztest, rt);
        }
        break;

       case 3:
        varargin_1[0] = muDoubleScalarAbs(s[m + 1]);
        varargin_1[1] = muDoubleScalarAbs(s[m]);
        varargin_1[2] = muDoubleScalarAbs(e[m]);
        varargin_1[3] = muDoubleScalarAbs(s[q]);
        varargin_1[4] = muDoubleScalarAbs(e[q]);
        kase = 1;
        mtmp = varargin_1[0];
        if (muDoubleScalarIsNaN(varargin_1[0])) {
          ii = 1;
          exitg2 = false;
          while (exitg2 == false && ii + 1 < 6) {
            kase = ii + 1;
            if (!muDoubleScalarIsNaN(varargin_1[ii])) {
              mtmp = varargin_1[ii];
              exitg2 = true;
            } else {
              ii++;
            }
          }
        }

        if (kase < 5) {
          while (kase + 1 < 6) {
            if (varargin_1[kase] > mtmp) {
              mtmp = varargin_1[kase];
            }

            kase++;
          }
        }

        f = eml_div(s[m + 1], mtmp);
        ztest0 = eml_div(s[m], mtmp);
        ztest = eml_div(e[m], mtmp);
        sqds = eml_div(s[q], mtmp);
        rt = eml_div((ztest0 + f) * (ztest0 - f) + ztest * ztest, 2.0);
        ztest *= f;
        ztest *= ztest;
        ztest0 = 0.0;
        if (rt != 0.0 || ztest != 0.0) {
          ztest0 = rt * rt + ztest;
          if (ztest0 < 0.0) {
            c_eml_error();
          }

          ztest0 = muDoubleScalarSqrt(ztest0);
          if (rt < 0.0) {
            ztest0 = -ztest0;
          }

          ztest0 = eml_div(ztest, rt + ztest0);
        }

        f = (sqds + f) * (sqds - f) + ztest0;
        ztest0 = sqds * eml_div(e[q], mtmp);
        for (ii = q + 1; ii <= m + 1; ii++) {
          eml_xrotg(&f, &ztest0, &ztest, &rt);
          if (ii > q + 1) {
            e[0] = f;
          }

          f = ztest * s[ii - 1] + rt * e[ii - 1];
          e[ii - 1] = ztest * e[ii - 1] - rt * s[ii - 1];
          ztest0 = rt * s[ii];
          s[ii] *= ztest;
          eml_xrot(Vf, 3 * (ii - 1) + 1, 3 * ii + 1, ztest, rt);
          eml_xrotg(&f, &ztest0, &ztest, &rt);
          s[ii - 1] = f;
          f = ztest * e[ii - 1] + rt * s[ii];
          s[ii] = -rt * e[ii - 1] + ztest * s[ii];
          ztest0 = rt * e[ii];
          e[ii] *= ztest;
          eml_xrot(U, 3 * (ii - 1) + 1, 3 * ii + 1, ztest, rt);
        }

        e[m] = f;
        iter++;
        break;

       default:
        if (s[q] < 0.0) {
          s[q] = -s[q];
          c_eml_xscal(-1.0, Vf, 3 * q + 1);
        }

        kase = q + 1;
        while (q + 1 < 3 && s[q] < s[kase]) {
          rt = s[q];
          s[q] = s[kase];
          s[kase] = rt;
          eml_xswap(Vf, 3 * q + 1, 3 * (q + 1) + 1);
          eml_xswap(U, 3 * q + 1, 3 * (q + 1) + 1);
          q = kase;
          kase++;
        }

        iter = 0;
        m--;
        break;
      }
    }
  }

  for (ii = 0; ii < 3; ii++) {
    b_S[ii] = s[ii];
    for (kase = 0; kase < 3; kase++) {
      V[kase + 3 * ii] = Vf[kase + 3 * ii];
    }
  }
}

static real_T eml_xnrm2(int32_T n, real_T x[9], int32_T ix0)
{
  real_T y;
  real_T scale;
  int32_T kend;
  boolean_T b_ix0;
  int32_T k;
  real_T absxk;
  real_T t;
  y = 0.0;
  if (!(n < 1)) {
    if (n == 1) {
      emlrtDynamicBoundsCheckFastR2012b(ix0, 1, 9, &emlrtBCI, emlrtRootTLSGlobal);
      y = muDoubleScalarAbs(x[ix0 - 1]);
    } else {
      scale = 2.2250738585072014E-308;
      kend = ix0 + n - 1;
      if (ix0 > kend) {
        b_ix0 = false;
      } else {
        b_ix0 = kend > 2147483646;
      }

      if (b_ix0) {
        check_forloop_overflow_error(true);
      }

      for (k = ix0; k <= kend; k++) {
        emlrtDynamicBoundsCheckFastR2012b(k, 1, 9, &emlrtBCI, emlrtRootTLSGlobal);
        absxk = muDoubleScalarAbs(x[k - 1]);
        if (absxk > scale) {
          t = scale / absxk;
          y = 1.0 + y * t * t;
          scale = absxk;
        } else {
          t = absxk / scale;
          y += t * t;
        }
      }

      y = scale * muDoubleScalarSqrt(y);
    }
  }

  return y;
}

static void check_forloop_overflow_error(boolean_T overflow)
{
  const mxArray *y;
  static const int32_T iv1[2] = { 1, 34 };

  const mxArray *m1;
  char_T cv2[34];
  int32_T i1;
  static char_T cv3[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 23 };

  char_T cv4[23];
  static char_T cv5[23] = { 'c', 'o', 'd', 'e', 'r', '.', 'i', 'n', 't', 'e',
    'r', 'n', 'a', 'l', '.', 'i', 'n', 'd', 'e', 'x', 'I', 'n', 't' };

  (void)overflow;
  y = NULL;
  m1 = emlrtCreateCharArray(2, iv1);
  for (i1 = 0; i1 < 34; i1++) {
    cv2[i1] = cv3[i1];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 34, m1, cv2);
  emlrtAssign(&y, m1);
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv2);
  for (i1 = 0; i1 < 23; i1++) {
    cv4[i1] = cv5[i1];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 23, m1, cv4);
  emlrtAssign(&b_y, m1);
  error(message(y, b_y, &c_emlrtMCI), &d_emlrtMCI);
}

static real_T eml_div(real_T x, real_T y)
{
  return x / y;
}

static real_T eml_xdotc(int32_T n, real_T x[9], int32_T ix0, real_T y[9],
  int32_T iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  if (!(n < 1)) {
    ix = ix0;
    iy = iy0;
    if (n > 2147483646) {
      check_forloop_overflow_error(true);
    }

    for (k = 1; k <= n; k++) {
      d += x[emlrtDynamicBoundsCheckFastR2012b(ix, 1, 9, &b_emlrtBCI,
        emlrtRootTLSGlobal) - 1] * y[emlrtDynamicBoundsCheckFastR2012b(iy, 1, 9,
        &b_emlrtBCI, emlrtRootTLSGlobal) - 1];
      ix++;
      iy++;
    }
  }

  return d;
}

static real_T b_eml_xnrm2(int32_T n, real_T x[3], int32_T ix0)
{
  real_T y;
  real_T scale;
  boolean_T b_ix0;
  int32_T k;
  real_T absxk;
  real_T t;
  (void)n;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  if (ix0 > ix0 + 1) {
    b_ix0 = false;
  } else {
    b_ix0 = ix0 + 1 > 2147483646;
  }

  if (b_ix0) {
    check_forloop_overflow_error(true);
  }

  for (k = ix0; k <= ix0 + 1; k++) {
    emlrtDynamicBoundsCheckFastR2012b(k, 1, 3, &c_emlrtBCI, emlrtRootTLSGlobal);
    absxk = muDoubleScalarAbs(x[k - 1]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static void b_eml_error(void)
{
  const mxArray *y;
  static const int32_T iv3[2] = { 1, 30 };

  const mxArray *m2;
  char_T cv6[30];
  int32_T i2;
  static char_T cv7[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 's', 'v', 'd', '_', 'N', 'o', 'C', 'o', 'n', 'v', 'e', 'r',
    'g', 'e', 'n', 'c', 'e' };

  y = NULL;
  m2 = emlrtCreateCharArray(2, iv3);
  for (i2 = 0; i2 < 30; i2++) {
    cv6[i2] = cv7[i2];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 30, m2, cv6);
  emlrtAssign(&y, m2);
  error(b_message(y, &b_emlrtMCI), &b_emlrtMCI);
}

static void c_eml_error(void)
{
  const mxArray *y;
  static const int32_T iv4[2] = { 1, 30 };

  const mxArray *m3;
  char_T cv8[30];
  int32_T i3;
  static char_T cv9[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  const mxArray *b_y;
  static const int32_T iv5[2] = { 1, 4 };

  char_T cv10[4];
  static char_T cv11[4] = { 's', 'q', 'r', 't' };

  y = NULL;
  m3 = emlrtCreateCharArray(2, iv4);
  for (i3 = 0; i3 < 30; i3++) {
    cv8[i3] = cv9[i3];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 30, m3, cv8);
  emlrtAssign(&y, m3);
  b_y = NULL;
  m3 = emlrtCreateCharArray(2, iv5);
  for (i3 = 0; i3 < 4; i3++) {
    cv10[i3] = cv11[i3];
  }

  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m3, cv10);
  emlrtAssign(&b_y, m3);
  error(message(y, b_y, &b_emlrtMCI), &b_emlrtMCI);
}

static void mw__internal__start___fcn(InstanceStruct_tt36X2ncayc7iQeNkctM4F
  *moduleInstance)
{
  Global2Body *obj;
  const mxArray *y;
  static const int32_T iv6[2] = { 1, 51 };

  const mxArray *m4;
  char_T cv12[51];
  int32_T i4;
  static char_T cv13[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv7[2] = { 1, 5 };

  char_T cv14[5];
  static char_T cv15[5] = { 's', 'e', 't', 'u', 'p' };

  if (!moduleInstance->sysobj_not_empty) {
    obj = &moduleInstance->sysobj;
    obj->isInitialized = false;
    obj->isReleased = false;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (obj->isInitialized) {
    y = NULL;
    m4 = emlrtCreateCharArray(2, iv6);
    for (i4 = 0; i4 < 51; i4++) {
      cv12[i4] = cv13[i4];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m4, cv12);
    emlrtAssign(&y, m4);
    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv7);
    for (i4 = 0; i4 < 5; i4++) {
      cv14[i4] = cv15[i4];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m4, cv14);
    emlrtAssign(&b_y, m4);
    error(message(y, b_y, &emlrtMCI), &emlrtMCI);
  }

  obj->isInitialized = true;
}

static void mw__internal__initialize__fcn(InstanceStruct_tt36X2ncayc7iQeNkctM4F *
  moduleInstance)
{
  Global2Body *obj;
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 45 };

  const mxArray *m5;
  char_T cv16[45];
  int32_T i5;
  static char_T cv17[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 8 };

  char_T cv18[8];
  static char_T cv19[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  boolean_T flag;
  const mxArray *c_y;
  static const int32_T iv10[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv11[2] = { 1, 5 };

  char_T cv20[5];
  static char_T cv21[5] = { 'r', 'e', 's', 'e', 't' };

  if (!moduleInstance->sysobj_not_empty) {
    obj = &moduleInstance->sysobj;
    obj->isInitialized = false;
    obj->isReleased = false;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (obj->isReleased) {
    y = NULL;
    m5 = emlrtCreateCharArray(2, iv8);
    for (i5 = 0; i5 < 45; i5++) {
      cv16[i5] = cv17[i5];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m5, cv16);
    emlrtAssign(&y, m5);
    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv9);
    for (i5 = 0; i5 < 8; i5++) {
      cv18[i5] = cv19[i5];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 8, m5, cv18);
    emlrtAssign(&b_y, m5);
    error(message(y, b_y, &emlrtMCI), &emlrtMCI);
  }

  flag = obj->isInitialized;
  if (flag && moduleInstance->sysobj.isReleased) {
    c_y = NULL;
    m5 = emlrtCreateCharArray(2, iv10);
    for (i5 = 0; i5 < 45; i5++) {
      cv16[i5] = cv17[i5];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m5, cv16);
    emlrtAssign(&c_y, m5);
    d_y = NULL;
    m5 = emlrtCreateCharArray(2, iv11);
    for (i5 = 0; i5 < 5; i5++) {
      cv20[i5] = cv21[i5];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m5, cv20);
    emlrtAssign(&d_y, m5);
    error(message(c_y, d_y, &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__outputs__fcn(InstanceStruct_tt36X2ncayc7iQeNkctM4F
  *moduleInstance)
{
  real_T varargin_1[3];
  int32_T k;
  Global2Body *obj;
  const mxArray *y;
  static const int32_T iv12[2] = { 1, 45 };

  const mxArray *m6;
  char_T cv22[45];
  static char_T cv23[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv13[2] = { 1, 4 };

  char_T cv24[4];
  static char_T cv25[4] = { 's', 't', 'e', 'p' };

  const mxArray *c_y;
  static const int32_T iv14[2] = { 1, 51 };

  char_T cv26[51];
  static char_T cv27[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  const mxArray *d_y;
  static const int32_T iv15[2] = { 1, 5 };

  char_T cv28[5];
  static char_T cv29[5] = { 's', 'e', 't', 'u', 'p' };

  real_T gbR[9];
  static int8_T iv16[3] = { 0, 0, 1 };

  real_T X[9];
  real_T b_gbR[9];
  real_T V[9];
  real_T s[3];
  real_T tol;
  int32_T r;
  int32_T vcol;
  int32_T ar;
  boolean_T b_vcol;
  int32_T ic;
  int32_T b;
  boolean_T c_vcol;
  int32_T ib;
  int32_T ia;
  real_T *u1;
  real_T (*b_y0)[3];
  real_T (*u0)[3];
  b_y0 = (real_T (*)[3])ssGetOutputPortSignal(moduleInstance->S, 0U);
  u1 = (real_T *)ssGetInputPortSignal(moduleInstance->S, 1U);
  u0 = (real_T (*)[3])ssGetInputPortSignal(moduleInstance->S, 0U);
  for (k = 0; k < 3; k++) {
    varargin_1[k] = (*u0)[k];
  }

  if (!moduleInstance->sysobj_not_empty) {
    obj = &moduleInstance->sysobj;
    obj->isInitialized = false;
    obj->isReleased = false;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (obj->isReleased) {
    y = NULL;
    m6 = emlrtCreateCharArray(2, iv12);
    for (k = 0; k < 45; k++) {
      cv22[k] = cv23[k];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m6, cv22);
    emlrtAssign(&y, m6);
    b_y = NULL;
    m6 = emlrtCreateCharArray(2, iv13);
    for (k = 0; k < 4; k++) {
      cv24[k] = cv25[k];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 4, m6, cv24);
    emlrtAssign(&b_y, m6);
    error(message(y, b_y, &emlrtMCI), &emlrtMCI);
  }

  if (!obj->isInitialized) {
    if (obj->isInitialized) {
      c_y = NULL;
      m6 = emlrtCreateCharArray(2, iv14);
      for (k = 0; k < 51; k++) {
        cv26[k] = cv27[k];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 51, m6, cv26);
      emlrtAssign(&c_y, m6);
      d_y = NULL;
      m6 = emlrtCreateCharArray(2, iv15);
      for (k = 0; k < 5; k++) {
        cv28[k] = cv29[k];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 5, m6, cv28);
      emlrtAssign(&d_y, m6);
      error(message(c_y, d_y, &emlrtMCI), &emlrtMCI);
    }

    obj->isInitialized = true;
  }

  /*  Inputs = global velocity, phi (robot global angle) */
  /*  output: body velocity */
  /*  rotation matrix that converts from body frame to globalVel frame */
  gbR[0] = muDoubleScalarCos(*u1);
  gbR[3] = -muDoubleScalarSin(*u1);
  gbR[6] = 0.0;
  gbR[1] = muDoubleScalarSin(*u1);
  gbR[4] = muDoubleScalarCos(*u1);
  gbR[7] = 0.0;
  for (k = 0; k < 3; k++) {
    gbR[2 + 3 * k] = (real_T)iv16[k];
  }

  /*  Inversion of the usual equation: Global = gbR*body */
  for (k = 0; k < 9; k++) {
    X[k] = 0.0;
  }

  for (k = 0; k < 9; k++) {
    if (!(!muDoubleScalarIsInf(gbR[k]) && !muDoubleScalarIsNaN(gbR[k]))) {
      eml_error();
    }
  }

  for (k = 0; k < 9; k++) {
    b_gbR[k] = gbR[k];
  }

  eml_xgesvd(b_gbR, gbR, s, V);
  for (k = 0; k < 9; k++) {
    b_gbR[k] = 0.0;
  }

  for (k = 0; k < 3; k++) {
    b_gbR[k + 3 * k] = s[k];
  }

  tol = 3.0 * b_gbR[0] * 2.2204460492503131E-16;
  r = 0;
  k = 0;
  while (k + 1 < 4 && b_gbR[k + 3 * k] > tol) {
    r++;
    k++;
  }

  if (r > 0) {
    vcol = 3;
    if (r > 2147483646) {
      check_forloop_overflow_error(true);
    }

    for (ar = 0; ar + 1 <= r; ar++) {
      tol = 1.0 / b_gbR[ar + 3 * ar];
      if (vcol - 2 > vcol) {
        b_vcol = false;
      } else {
        b_vcol = vcol > 2147483646;
      }

      if (b_vcol) {
        check_forloop_overflow_error(true);
      }

      for (k = vcol - 2; k <= vcol; k++) {
        V[emlrtDynamicBoundsCheckFastR2012b(k, 1, 9, &e_emlrtBCI,
          emlrtRootTLSGlobal) - 1] = tol * V[emlrtDynamicBoundsCheckFastR2012b(k,
          1, 9, &e_emlrtBCI, emlrtRootTLSGlobal) - 1];
      }

      vcol += 3;
    }

    for (k = 0; k < 8; k += 3) {
      for (ic = k + 1; ic <= k + 3; ic++) {
        X[emlrtDynamicBoundsCheckFastR2012b(ic, 1, 9, &d_emlrtBCI,
          emlrtRootTLSGlobal) - 1] = 0.0;
      }
    }

    vcol = 0;
    for (k = 0; k < 8; k += 3) {
      ar = 0;
      vcol++;
      b = vcol + 3 * (r - 1);
      if (vcol > b) {
        c_vcol = false;
      } else {
        c_vcol = b > 2147483644;
      }

      if (c_vcol) {
        check_forloop_overflow_error(true);
      }

      for (ib = vcol; ib <= b; ib += 3) {
        if (gbR[emlrtDynamicBoundsCheckFastR2012b(ib, 1, 9, &d_emlrtBCI,
             emlrtRootTLSGlobal) - 1] != 0.0) {
          ia = ar;
          for (ic = k + 1; ic <= k + 3; ic++) {
            ia++;
            X[emlrtDynamicBoundsCheckFastR2012b(ic, 1, 9, &d_emlrtBCI,
              emlrtRootTLSGlobal) - 1] = X[emlrtDynamicBoundsCheckFastR2012b(ic,
              1, 9, &d_emlrtBCI, emlrtRootTLSGlobal) - 1] + gbR[ib - 1] *
              V[emlrtDynamicBoundsCheckFastR2012b(ia, 1, 9, &d_emlrtBCI,
              emlrtRootTLSGlobal) - 1];
          }
        }

        ar += 3;
      }
    }
  }

  for (k = 0; k < 3; k++) {
    s[k] = 0.0;
    for (vcol = 0; vcol < 3; vcol++) {
      s[k] += X[k + 3 * vcol] * varargin_1[vcol];
    }

    (*b_y0)[k] = s[k];
  }
}

static void mw__internal__update__fcn(InstanceStruct_tt36X2ncayc7iQeNkctM4F
  *moduleInstance)
{
  (void)moduleInstance;
}

static void mw__internal__terminate__fcn(InstanceStruct_tt36X2ncayc7iQeNkctM4F
  *moduleInstance)
{
  Global2Body *obj;
  const mxArray *y;
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *m7;
  char_T cv30[45];
  int32_T i6;
  static char_T cv31[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  const mxArray *b_y;
  static const int32_T iv18[2] = { 1, 8 };

  char_T cv32[8];
  static char_T cv33[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  boolean_T flag;
  const mxArray *c_y;
  static const int32_T iv19[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv20[2] = { 1, 7 };

  char_T cv34[7];
  static char_T cv35[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  if (!moduleInstance->sysobj_not_empty) {
    obj = &moduleInstance->sysobj;
    obj->isInitialized = false;
    obj->isReleased = false;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (obj->isReleased) {
    y = NULL;
    m7 = emlrtCreateCharArray(2, iv17);
    for (i6 = 0; i6 < 45; i6++) {
      cv30[i6] = cv31[i6];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m7, cv30);
    emlrtAssign(&y, m7);
    b_y = NULL;
    m7 = emlrtCreateCharArray(2, iv18);
    for (i6 = 0; i6 < 8; i6++) {
      cv32[i6] = cv33[i6];
    }

    emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 8, m7, cv32);
    emlrtAssign(&b_y, m7);
    error(message(y, b_y, &emlrtMCI), &emlrtMCI);
  }

  flag = obj->isInitialized;
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (obj->isReleased) {
      c_y = NULL;
      m7 = emlrtCreateCharArray(2, iv19);
      for (i6 = 0; i6 < 45; i6++) {
        cv30[i6] = cv31[i6];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 45, m7, cv30);
      emlrtAssign(&c_y, m7);
      d_y = NULL;
      m7 = emlrtCreateCharArray(2, iv20);
      for (i6 = 0; i6 < 7; i6++) {
        cv34[i6] = cv35[i6];
      }

      emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 7, m7, cv34);
      emlrtAssign(&d_y, m7);
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
  emlrtAssign(&nameCaptureInfo, emlrtCreateStructMatrix(219, 1, 0, NULL));
  info_helper(&nameCaptureInfo);
  b_info_helper(&nameCaptureInfo);
  c_info_helper(&nameCaptureInfo);
  d_info_helper(&nameCaptureInfo);
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
    "[C]D:/Abdullah/LQR matlab/Global2Body.m"), "context", 30);
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
  emlrtAddField(*info, emlrt_marshallOut("Global2Body"), "name", 31);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 31);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/Global2Body.m"), "resolved", 31);
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
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/Global2Body.m"), "context", 35);
  emlrtAddField(*info, emlrt_marshallOut("cos"), "name", 35);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 35);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m"), "resolved", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(1343837572U), "fileTimeLo", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 35);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 35);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/cos.m"), "context", 36);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_cos"), "name", 36);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 36);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_cos.m"),
                "resolved", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825922U), "fileTimeLo", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 36);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 36);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/Global2Body.m"), "context", 37);
  emlrtAddField(*info, emlrt_marshallOut("sin"), "name", 37);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 37);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m"), "resolved", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(1343837586U), "fileTimeLo", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 37);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 37);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sin.m"), "context", 38);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_sin"), "name", 38);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 38);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sin.m"),
                "resolved", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825936U), "fileTimeLo", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 38);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 38);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/Global2Body.m"), "context", 39);
  emlrtAddField(*info, emlrt_marshallOut("pinv"), "name", 39);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 39);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/pinv.m"), "resolved", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(1286826028U), "fileTimeLo", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 39);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 39);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/pinv.m!eml_pinv"),
                "context", 40);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 40);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 40);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(1323174178U), "fileTimeLo", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 40);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 40);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/pinv.m!eml_pinv"),
                "context", 41);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 41);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 41);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                41);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 41);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 41);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "context",
                42);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 42);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 42);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 42);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 42);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/pinv.m!eml_pinv"),
                "context", 43);
  emlrtAddField(*info, emlrt_marshallOut("svd"), "name", 43);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 43);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/svd.m"), "resolved", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(1286826032U), "fileTimeLo", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 43);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 43);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/svd.m"), "context", 44);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 44);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 44);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(1323174178U), "fileTimeLo", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 44);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 44);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/svd.m"), "context", 45);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 45);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 45);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 45);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 45);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper"),
                "context", 46);
  emlrtAddField(*info, emlrt_marshallOut("intmax"), "name", 46);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 46);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmax.m"), "resolved", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(1362265482U), "fileTimeLo", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 46);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 46);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/svd.m"), "context", 47);
  emlrtAddField(*info, emlrt_marshallOut("isfinite"), "name", 47);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 47);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "resolved",
                47);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717456U), "fileTimeLo", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 47);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 47);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 48);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 48);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 48);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 48);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 48);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 49);
  emlrtAddField(*info, emlrt_marshallOut("isinf"), "name", 49);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 49);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isinf.m"), "resolved", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717456U), "fileTimeLo", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 49);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 49);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isfinite.m"), "context", 50);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 50);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 50);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717458U), "fileTimeLo", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 50);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 50);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context", 51);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 51);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 51);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 51);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 51);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/svd.m"), "context", 52);
  emlrtAddField(*info, emlrt_marshallOut("eml_error"), "name", 52);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 52);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m"), "resolved", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(1343837558U), "fileTimeLo", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 52);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 52);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/svd.m"), "context", 53);
  emlrtAddField(*info, emlrt_marshallOut("eml_xgesvd"), "name", 53);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/eml_xgesvd.m"),
                "resolved", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(1286826006U), "fileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 53);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 53);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/eml_xgesvd.m"),
                "context", 54);
  emlrtAddField(*info, emlrt_marshallOut("eml_lapack_xgesvd"), "name", 54);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/internal/eml_lapack_xgesvd.m"),
                "resolved", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(1286826010U), "fileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 54);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 54);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/internal/eml_lapack_xgesvd.m"),
                "context", 55);
  emlrtAddField(*info, emlrt_marshallOut("eml_matlab_zsvdc"), "name", 55);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 55);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "resolved", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(1295288466U), "fileTimeLo", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 55);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 55);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 56);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 56);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(1323174178U), "fileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 56);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 56);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 57);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 57);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                57);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 57);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 57);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 58);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 58);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(1372589616U), "fileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 58);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 58);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"), "context",
                59);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name", 59);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 59);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 59);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 60);
  emlrtAddField(*info, emlrt_marshallOut("min"), "name", 60);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "resolved", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(1311262518U), "fileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 60);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 60);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "context", 61);
  emlrtAddField(*info, emlrt_marshallOut("eml_min_or_max"), "name", 61);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"),
                "resolved", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(1378303184U), "fileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 61);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 61);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 62);
  emlrtAddField(*info, emlrt_marshallOut("max"), "name", 62);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "resolved", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(1311262516U), "fileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 62);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 62);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 63);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 63);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 63);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                63);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 63);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 63);
}

static const mxArray *emlrt_marshallOut(const char * u)
{
  const mxArray *y;
  const mxArray *m8;
  y = NULL;
  m8 = emlrtCreateString(u);
  emlrtAssign(&y, m8);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const uint32_T u)
{
  const mxArray *y;
  const mxArray *m9;
  y = NULL;
  m9 = emlrtCreateNumericMatrix(1, 1, mxUINT32_CLASS, mxREAL);
  *(uint32_T *)mxGetData(m9) = u;
  emlrtAssign(&y, m9);
  return y;
}

static void b_info_helper(const mxArray **info)
{
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_bin_extremum"),
                "context", 64);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_alloc"), "name", 64);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "resolved", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 64);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 64);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_alloc.m"),
                "context", 65);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalexpAlloc"), "name",
                65);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p"),
                "resolved", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 65);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 65);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 66);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 66);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                66);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 66);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 66);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 67);
  emlrtAddField(*info, emlrt_marshallOut("eml_relop"), "name", 67);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 67);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m"), "resolved", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(1342458382U), "fileTimeLo", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 67);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 67);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m"), "context", 68);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexIntRelop"), "name",
                68);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexIntRelop.m"),
                "resolved", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(1326731922U), "fileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 68);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 68);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 69);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 69);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 69);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717458U), "fileTimeLo", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 69);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 69);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "context", 70);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 70);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 70);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 70);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 70);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 71);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 71);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 71);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(1372589616U), "fileTimeLo", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 71);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 71);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "context", 72);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexMinus"), "name",
                72);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 72);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexMinus.m"),
                "resolved", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 72);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 72);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 73);
  emlrtAddField(*info, emlrt_marshallOut("max"), "name", 73);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 73);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/max.m"), "resolved", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(1311262516U), "fileTimeLo", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 73);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 73);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 74);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 74);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 74);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 74);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 74);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 75);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_times"), "name", 75);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 75);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "resolved", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(1372589616U), "fileTimeLo", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 75);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 75);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_times.m"),
                "context", 76);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexTimes"), "name",
                76);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 76);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexTimes.m"),
                "resolved", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 76);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 76);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 77);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 77);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 77);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(1372589616U), "fileTimeLo", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 77);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 77);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"), "context",
                78);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name", 78);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 78);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 78);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 78);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 79);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_minus"), "name", 79);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 79);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "resolved", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(1372589616U), "fileTimeLo", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 79);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 79);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_minus.m"),
                "context", 80);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexMinus"), "name",
                80);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 80);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexMinus.m"),
                "resolved", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 80);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 80);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 81);
  emlrtAddField(*info, emlrt_marshallOut("eml_xnrm2"), "name", 81);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 81);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xnrm2.m"),
                "resolved", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987892U), "fileTimeLo", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 81);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 81);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xnrm2.m"), "context",
                82);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.inline"), "name",
                82);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 82);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/inline.p"),
                "resolved", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 82);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 82);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xnrm2.m"), "context",
                83);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.xnrm2"), "name",
                83);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 83);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xnrm2.p"),
                "resolved", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 83);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 83);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xnrm2.p"),
                "context", 84);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 84);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 84);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/use_refblas.p"),
                "resolved", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 84);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 84);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xnrm2.p!below_threshold"),
                "context", 85);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 85);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 85);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/threshold.p"),
                "resolved", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 85);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 85);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/threshold.p"),
                "context", 86);
  emlrtAddField(*info, emlrt_marshallOut("eml_switch_helper"), "name", 86);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 86);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_switch_helper.m"),
                "resolved", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(1381857500U), "fileTimeLo", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 86);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 86);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xnrm2.p!below_threshold"),
                "context", 87);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 87);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 87);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(1303153406U), "fileTimeLo", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 87);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 87);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m!intlength"),
                "context", 88);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 88);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 88);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(1323174178U), "fileTimeLo", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 88);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 88);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xnrm2.p"),
                "context", 89);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.refblas.xnrm2"), "name",
                89);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 89);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xnrm2.p"),
                "resolved", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 89);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 89);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xnrm2.p"),
                "context", 90);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 90);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 90);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "resolved", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717452U), "fileTimeLo", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 90);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 90);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "context", 91);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 91);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 91);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 91);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 91);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "context", 92);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_abs"), "name", 92);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 92);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"),
                "resolved", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825912U), "fileTimeLo", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 92);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 92);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xnrm2.p"),
                "context", 93);
  emlrtAddField(*info, emlrt_marshallOut("realmin"), "name", 93);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 93);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmin.m"), "resolved", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(1307658442U), "fileTimeLo", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 93);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 93);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmin.m"), "context", 94);
  emlrtAddField(*info, emlrt_marshallOut("eml_realmin"), "name", 94);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 94);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m"), "resolved",
                94);
  emlrtAddField(*info, b_emlrt_marshallOut(1307658444U), "fileTimeLo", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 94);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 94);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_realmin.m"), "context",
                95);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 95);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 95);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(1326731596U), "fileTimeLo", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 95);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 95);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xnrm2.p"),
                "context", 96);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexMinus"), "name",
                96);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 96);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexMinus.m"),
                "resolved", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 96);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 96);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xnrm2.p"),
                "context", 97);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexTimes"), "name",
                97);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 97);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexTimes.m"),
                "resolved", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 97);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 97);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xnrm2.p"),
                "context", 98);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name", 98);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 98);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 98);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 98);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xnrm2.p"),
                "context", 99);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 99);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 99);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 99);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 99);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 100);
  emlrtAddField(*info, emlrt_marshallOut("eml_div"), "name", 100);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 100);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 100);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 100);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "context", 101);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.div"), "name", 101);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 101);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/div.p"), "resolved",
                101);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 101);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 101);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 102);
  emlrtAddField(*info, emlrt_marshallOut("eml_xscal"), "name", 102);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 102);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xscal.m"),
                "resolved", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987892U), "fileTimeLo", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 102);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 102);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xscal.m"), "context",
                103);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.inline"), "name",
                103);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 103);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/inline.p"),
                "resolved", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 103);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 103);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xscal.m"), "context",
                104);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.xscal"), "name",
                104);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 104);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xscal.p"),
                "resolved", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 104);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 104);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xscal.p"),
                "context", 105);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 105);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 105);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/use_refblas.p"),
                "resolved", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 105);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 105);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xscal.p!below_threshold"),
                "context", 106);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 106);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 106);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/threshold.p"),
                "resolved", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 106);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 106);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xscal.p!below_threshold"),
                "context", 107);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 107);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 107);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(1303153406U), "fileTimeLo", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 107);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 107);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xscal.p"),
                "context", 108);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 108);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 108);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 108);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 108);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xscal.p"),
                "context", 109);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.refblas.xscal"), "name",
                109);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 109);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xscal.p"),
                "resolved", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 109);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 109);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xscal.p"),
                "context", 110);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexMinus"), "name",
                110);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 110);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexMinus.m"),
                "resolved", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 110);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 110);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xscal.p"),
                "context", 111);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexTimes"), "name",
                111);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 111);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexTimes.m"),
                "resolved", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 111);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 111);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xscal.p"),
                "context", 112);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name",
                112);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 112);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 112);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 112);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xscal.p"),
                "context", 113);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 113);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 113);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 113);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 113);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 114);
  emlrtAddField(*info, emlrt_marshallOut("eml_xdotc"), "name", 114);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 114);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdotc.m"),
                "resolved", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987890U), "fileTimeLo", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 114);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 114);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdotc.m"), "context",
                115);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.inline"), "name",
                115);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 115);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/inline.p"),
                "resolved", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 115);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 115);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xdotc.m"), "context",
                116);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.xdotc"), "name",
                116);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 116);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xdotc.p"),
                "resolved", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 116);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 116);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xdotc.p"),
                "context", 117);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.xdot"), "name",
                117);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 117);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xdot.p"),
                "resolved", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 117);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 117);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xdot.p"),
                "context", 118);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 118);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 118);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/use_refblas.p"),
                "resolved", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 118);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 118);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xdot.p!below_threshold"),
                "context", 119);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 119);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 119);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/threshold.p"),
                "resolved", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 119);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 119);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xdot.p!below_threshold"),
                "context", 120);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 120);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 120);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(1303153406U), "fileTimeLo", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 120);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 120);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xdot.p"),
                "context", 121);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.refblas.xdot"), "name",
                121);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 121);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xdot.p"),
                "resolved", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 121);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 121);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xdot.p"),
                "context", 122);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.refblas.xdotx"), "name",
                122);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 122);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xdotx.p"),
                "resolved", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 122);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 122);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xdotx.p"),
                "context", 123);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 123);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 123);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 123);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 123);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xdotx.p"),
                "context", 124);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 124);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 124);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 124);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 124);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xdotx.p"),
                "context", 125);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name",
                125);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 125);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 125);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 125);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 126);
  emlrtAddField(*info, emlrt_marshallOut("eml_xaxpy"), "name", 126);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 126);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xaxpy.m"),
                "resolved", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 126);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 126);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xaxpy.m"), "context",
                127);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.inline"), "name",
                127);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 127);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/inline.p"),
                "resolved", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 127);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 127);
}

static void c_info_helper(const mxArray **info)
{
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xaxpy.m"), "context",
                128);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.xaxpy"), "name",
                128);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 128);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xaxpy.p"),
                "resolved", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 128);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 128);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xaxpy.p"),
                "context", 129);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 129);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 129);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/use_refblas.p"),
                "resolved", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 129);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 129);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xaxpy.p!below_threshold"),
                "context", 130);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 130);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 130);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/threshold.p"),
                "resolved", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 130);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 130);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xaxpy.p!below_threshold"),
                "context", 131);
  emlrtAddField(*info, emlrt_marshallOut("length"), "name", 131);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 131);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/length.m"), "resolved", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(1303153406U), "fileTimeLo", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 131);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 131);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xaxpy.p"),
                "context", 132);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 132);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 132);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 132);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 132);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xaxpy.p"),
                "context", 133);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.refblas.xaxpy"), "name",
                133);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 133);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xaxpy.p"),
                "resolved", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 133);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 133);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xaxpy.p"),
                "context", 134);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isaUint"), "name", 134);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 134);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/isaUint.p"),
                "resolved", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 134);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 134);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xaxpy.p"),
                "context", 135);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexMinus"), "name",
                135);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 135);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexMinus.m"),
                "resolved", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 135);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 135);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xaxpy.p"),
                "context", 136);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 136);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 136);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 136);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 136);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xaxpy.p"),
                "context", 137);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name",
                137);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 137);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 137);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 137);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xaxpy.p"),
                "context", 138);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name",
                138);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 138);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 138);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 138);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m!eml_int_forloop_overflow_check_helper"),
                "context", 139);
  emlrtAddField(*info, emlrt_marshallOut("intmin"), "name", 139);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 139);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/intmin.m"), "resolved", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(1362265482U), "fileTimeLo", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 139);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 139);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 140);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 140);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 140);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "resolved", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717452U), "fileTimeLo", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 140);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 140);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 141);
  emlrtAddField(*info, emlrt_marshallOut("realmin"), "name", 141);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 141);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/realmin.m"), "resolved",
                141);
  emlrtAddField(*info, b_emlrt_marshallOut(1307658442U), "fileTimeLo", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 141);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 141);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 142);
  emlrtAddField(*info, emlrt_marshallOut("eps"), "name", 142);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 142);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "resolved", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(1326731596U), "fileTimeLo", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 142);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 142);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 143);
  emlrtAddField(*info, emlrt_marshallOut("eml_is_float_class"), "name", 143);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 143);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_is_float_class.m"),
                "resolved", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825982U), "fileTimeLo", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 143);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 143);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "context", 144);
  emlrtAddField(*info, emlrt_marshallOut("eml_eps"), "name", 144);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 144);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m"), "resolved", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(1326731596U), "fileTimeLo", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 144);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 144);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_eps.m"), "context", 145);
  emlrtAddField(*info, emlrt_marshallOut("eml_float_model"), "name", 145);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 145);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_float_model.m"),
                "resolved", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(1326731596U), "fileTimeLo", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 145);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 145);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_scalar_bin_extremum"),
                "context", 146);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 146);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 146);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 146);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 146);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 147);
  emlrtAddField(*info, emlrt_marshallOut("eml_error"), "name", 147);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 147);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m"), "resolved",
                147);
  emlrtAddField(*info, b_emlrt_marshallOut(1343837558U), "fileTimeLo", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 147);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 147);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum"),
                "context", 148);
  emlrtAddField(*info, emlrt_marshallOut("eml_const_nonsingleton_dim"), "name",
                148);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 148);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m"),
                "resolved", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(1372589616U), "fileTimeLo", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 148);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 148);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_const_nonsingleton_dim.m"),
                "context", 149);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.constNonSingletonDim"),
                "name", 149);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 149);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/constNonSingletonDim.m"),
                "resolved", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 149);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 149);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum"),
                "context", 150);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 150);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 150);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                150);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 150);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 150);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum"),
                "context", 151);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 151);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 151);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(1323174178U), "fileTimeLo", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 151);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 151);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub"),
                "context", 152);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 152);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 152);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(1323174178U), "fileTimeLo", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 152);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 152);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub"),
                "context", 153);
  emlrtAddField(*info, emlrt_marshallOut("isnan"), "name", 153);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 153);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/isnan.m"), "resolved", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717458U), "fileTimeLo", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 153);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 153);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub"),
                "context", 154);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 154);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 154);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(1372589616U), "fileTimeLo", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 154);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 154);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub"),
                "context", 155);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 155);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 155);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 155);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 155);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_min_or_max.m!eml_extremum_sub"),
                "context", 156);
  emlrtAddField(*info, emlrt_marshallOut("eml_relop"), "name", 156);
  emlrtAddField(*info, emlrt_marshallOut("function_handle"), "dominantType", 156);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_relop.m"), "resolved",
                156);
  emlrtAddField(*info, b_emlrt_marshallOut(1342458382U), "fileTimeLo", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 156);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 156);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 157);
  emlrtAddField(*info, emlrt_marshallOut("sqrt"), "name", 157);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 157);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m"), "resolved", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(1343837586U), "fileTimeLo", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 157);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 157);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m"), "context", 158);
  emlrtAddField(*info, emlrt_marshallOut("eml_error"), "name", 158);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 158);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_error.m"), "resolved",
                158);
  emlrtAddField(*info, b_emlrt_marshallOut(1343837558U), "fileTimeLo", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 158);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 158);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m"), "context", 159);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_sqrt"), "name", 159);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 159);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_sqrt.m"),
                "resolved", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825938U), "fileTimeLo", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 159);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 159);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 160);
  emlrtAddField(*info, emlrt_marshallOut("eml_xrotg"), "name", 160);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 160);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xrotg.m"),
                "resolved", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987892U), "fileTimeLo", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 160);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 160);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xrotg.m"), "context",
                161);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.inline"), "name",
                161);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 161);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/inline.p"),
                "resolved", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 161);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 161);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xrotg.m"), "context",
                162);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.xrotg"), "name",
                162);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 162);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xrotg.p"),
                "resolved", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 162);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 162);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xrotg.p"),
                "context", 163);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 163);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 163);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/use_refblas.p"),
                "resolved", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 163);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 163);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xrotg.p"),
                "context", 164);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.refblas.xrotg"), "name",
                164);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 164);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xrotg.p"),
                "resolved", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 164);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 164);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xrotg.p"),
                "context", 165);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 165);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 165);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "resolved", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717452U), "fileTimeLo", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 165);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 165);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xrotg.p"),
                "context", 166);
  emlrtAddField(*info, emlrt_marshallOut("mrdivide"), "name", 166);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 166);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "resolved", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(1388463696U), "fileTimeLo", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(1370017086U), "mFileTimeLo", 166);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 166);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context", 167);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.assert"), "name", 167);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 167);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/assert.m"),
                "resolved", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 167);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 167);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/mrdivide.p"), "context", 168);
  emlrtAddField(*info, emlrt_marshallOut("rdivide"), "name", 168);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 168);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "resolved", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717480U), "fileTimeLo", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 168);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 168);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 169);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 169);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 169);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 169);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 169);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 170);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalexp_compatible"), "name", 170);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 170);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalexp_compatible.m"),
                "resolved", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825996U), "fileTimeLo", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 170);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 170);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/rdivide.m"), "context", 171);
  emlrtAddField(*info, emlrt_marshallOut("eml_div"), "name", 171);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 171);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 171);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 171);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xrotg.p"),
                "context", 172);
  emlrtAddField(*info, emlrt_marshallOut("sqrt"), "name", 172);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 172);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/sqrt.m"), "resolved", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(1343837586U), "fileTimeLo", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 172);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 172);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xrotg.p!eml_ceval_xrotg"),
                "context", 173);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 173);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 173);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 173);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 173);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 174);
  emlrtAddField(*info, emlrt_marshallOut("eml_xrot"), "name", 174);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 174);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xrot.m"), "resolved",
                174);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987892U), "fileTimeLo", 174);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 174);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 174);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 174);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xrot.m"), "context",
                175);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.inline"), "name",
                175);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 175);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/inline.p"),
                "resolved", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 175);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 175);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xrot.m"), "context",
                176);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.xrot"), "name",
                176);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 176);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xrot.p"),
                "resolved", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 176);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 176);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xrot.p"),
                "context", 177);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 177);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 177);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/use_refblas.p"),
                "resolved", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 177);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 177);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xrot.p!below_threshold"),
                "context", 178);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 178);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 178);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/threshold.p"),
                "resolved", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 178);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 178);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xrot.p"),
                "context", 179);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 179);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 179);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 179);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 179);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xrot.p"),
                "context", 180);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.refblas.xrot"), "name",
                180);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 180);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xrot.p"),
                "resolved", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 180);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 180);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xrot.p"),
                "context", 181);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 181);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 181);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 181);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 181);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xrot.p"),
                "context", 182);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name",
                182);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 182);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 182);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 182);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/lapack/matlab/eml_matlab_zsvdc.m"),
                "context", 183);
  emlrtAddField(*info, emlrt_marshallOut("eml_xswap"), "name", 183);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 183);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xswap.m"),
                "resolved", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987892U), "fileTimeLo", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 183);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 183);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xswap.m"), "context",
                184);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.inline"), "name",
                184);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 184);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/inline.p"),
                "resolved", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 184);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 184);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xswap.m"), "context",
                185);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.xswap"), "name",
                185);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 185);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xswap.p"),
                "resolved", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 185);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 185);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xswap.p"),
                "context", 186);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 186);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 186);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/use_refblas.p"),
                "resolved", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 186);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 186);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xswap.p!below_threshold"),
                "context", 187);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 187);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 187);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/threshold.p"),
                "resolved", 187);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 187);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 187);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 187);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 187);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xswap.p"),
                "context", 188);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.refblas.xswap"), "name",
                188);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 188);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xswap.p"),
                "resolved", 188);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 188);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 188);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 188);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 188);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xswap.p"),
                "context", 189);
  emlrtAddField(*info, emlrt_marshallOut("abs"), "name", 189);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 189);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "resolved", 189);
  emlrtAddField(*info, b_emlrt_marshallOut(1363717452U), "fileTimeLo", 189);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 189);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 189);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 189);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "context", 190);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 190);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 190);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 190);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 190);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 190);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 190);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 190);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/abs.m"), "context", 191);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_abs"), "name", 191);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 191);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elfun/eml_scalar_abs.m"),
                "resolved", 191);
  emlrtAddField(*info, b_emlrt_marshallOut(1286825912U), "fileTimeLo", 191);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 191);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 191);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 191);
}

static void d_info_helper(const mxArray **info)
{
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xswap.p"),
                "context", 192);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 192);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 192);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 192);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 192);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 192);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 192);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 192);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xswap.p"),
                "context", 193);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name",
                193);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 193);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 193);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 193);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 193);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 193);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 193);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/pinv.m!eml_pinv"),
                "context", 194);
  emlrtAddField(*info, emlrt_marshallOut("eps"), "name", 194);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 194);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/elmat/eps.m"), "resolved", 194);
  emlrtAddField(*info, b_emlrt_marshallOut(1326731596U), "fileTimeLo", 194);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 194);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 194);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 194);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/pinv.m!eml_pinv"),
                "context", 195);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 195);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 195);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 195);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 195);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 195);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 195);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 195);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/pinv.m!eml_pinv"),
                "context", 196);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 196);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 196);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 196);
  emlrtAddField(*info, b_emlrt_marshallOut(1372589616U), "fileTimeLo", 196);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 196);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 196);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 196);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/pinv.m!eml_pinv"),
                "context", 197);
  emlrtAddField(*info, emlrt_marshallOut("eml_div"), "name", 197);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 197);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_div.m"), "resolved", 197);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 197);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 197);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 197);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 197);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/pinv.m!eml_pinv"),
                "context", 198);
  emlrtAddField(*info, emlrt_marshallOut("eml_xscal"), "name", 198);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 198);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xscal.m"),
                "resolved", 198);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987892U), "fileTimeLo", 198);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 198);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 198);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 198);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/pinv.m!eml_pinv"),
                "context", 199);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_plus"), "name", 199);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 199);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_plus.m"),
                "resolved", 199);
  emlrtAddField(*info, b_emlrt_marshallOut(1372589616U), "fileTimeLo", 199);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 199);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 199);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 199);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/matfun/pinv.m!eml_pinv"),
                "context", 200);
  emlrtAddField(*info, emlrt_marshallOut("eml_xgemm"), "name", 200);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 200);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m"),
                "resolved", 200);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987890U), "fileTimeLo", 200);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 200);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 200);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 200);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m"), "context",
                201);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.inline"), "name",
                201);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 201);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/inline.p"),
                "resolved", 201);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 201);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 201);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 201);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 201);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m"), "context",
                202);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.xgemm"), "name",
                202);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 202);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xgemm.p"),
                "resolved", 202);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 202);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 202);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 202);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 202);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xgemm.p"),
                "context", 203);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.use_refblas"),
                "name", 203);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 203);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/use_refblas.p"),
                "resolved", 203);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 203);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 203);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 203);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 203);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xgemm.p!below_threshold"),
                "context", 204);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.blas.threshold"),
                "name", 204);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 204);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/threshold.p"),
                "resolved", 204);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 204);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 204);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 204);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 204);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xgemm.p!below_threshold"),
                "context", 205);
  emlrtAddField(*info, emlrt_marshallOut("min"), "name", 205);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 205);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/datafun/min.m"), "resolved", 205);
  emlrtAddField(*info, b_emlrt_marshallOut(1311262518U), "fileTimeLo", 205);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 205);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 205);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 205);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xgemm.p"),
                "context", 206);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 206);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 206);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 206);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 206);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 206);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 206);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 206);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+blas/xgemm.p"),
                "context", 207);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.refblas.xgemm"), "name",
                207);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 207);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xgemm.p"),
                "resolved", 207);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311522U), "fileTimeLo", 207);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 207);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 207);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 207);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xgemm.p"),
                "context", 208);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexMinus"), "name",
                208);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 208);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexMinus.m"),
                "resolved", 208);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 208);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 208);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 208);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 208);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xgemm.p"),
                "context", 209);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.scalarEg"), "name", 209);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 209);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/scalarEg.p"),
                "resolved", 209);
  emlrtAddField(*info, b_emlrt_marshallOut(1389311520U), "fileTimeLo", 209);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 209);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 209);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 209);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xgemm.p"),
                "context", 210);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexTimes"), "name",
                210);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 210);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexTimes.m"),
                "resolved", 210);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 210);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 210);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 210);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 210);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xgemm.p"),
                "context", 211);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name",
                211);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexInt"),
                "dominantType", 211);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 211);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 211);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 211);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 211);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 211);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xgemm.p"),
                "context", 212);
  emlrtAddField(*info, emlrt_marshallOut("eml_int_forloop_overflow_check"),
                "name", 212);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 212);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"),
                "resolved", 212);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 212);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 212);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 212);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 212);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/coder/coder/+coder/+internal/+refblas/xgemm.p"),
                "context", 213);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.indexPlus"), "name",
                213);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 213);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/indexPlus.m"),
                "resolved", 213);
  emlrtAddField(*info, b_emlrt_marshallOut(1372590360U), "fileTimeLo", 213);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 213);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 213);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 213);
  emlrtAddField(*info, emlrt_marshallOut(
    "[C]D:/Abdullah/LQR matlab/Global2Body.m"), "context", 214);
  emlrtAddField(*info, emlrt_marshallOut("eml_mtimes_helper"), "name", 214);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 214);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "resolved", 214);
  emlrtAddField(*info, b_emlrt_marshallOut(1383880894U), "fileTimeLo", 214);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 214);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 214);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 214);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m!common_checks"),
                "context", 215);
  emlrtAddField(*info, emlrt_marshallOut("coder.internal.isBuiltInNumeric"),
                "name", 215);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 215);
  emlrtAddField(*info, emlrt_marshallOut(
    "[IXE]$matlabroot$/toolbox/shared/coder/coder/+coder/+internal/isBuiltInNumeric.m"),
                "resolved", 215);
  emlrtAddField(*info, b_emlrt_marshallOut(1363718156U), "fileTimeLo", 215);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 215);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 215);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 215);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "context", 216);
  emlrtAddField(*info, emlrt_marshallOut("eml_index_class"), "name", 216);
  emlrtAddField(*info, emlrt_marshallOut(""), "dominantType", 216);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_index_class.m"),
                "resolved", 216);
  emlrtAddField(*info, b_emlrt_marshallOut(1323174178U), "fileTimeLo", 216);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 216);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 216);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 216);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "context", 217);
  emlrtAddField(*info, emlrt_marshallOut("eml_scalar_eg"), "name", 217);
  emlrtAddField(*info, emlrt_marshallOut("double"), "dominantType", 217);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/eml_scalar_eg.m"), "resolved",
                217);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987888U), "fileTimeLo", 217);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 217);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 217);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 217);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"),
                "context", 218);
  emlrtAddField(*info, emlrt_marshallOut("eml_xgemm"), "name", 218);
  emlrtAddField(*info, emlrt_marshallOut("char"), "dominantType", 218);
  emlrtAddField(*info, emlrt_marshallOut(
    "[ILXE]$matlabroot$/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m"),
                "resolved", 218);
  emlrtAddField(*info, b_emlrt_marshallOut(1375987890U), "fileTimeLo", 218);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "fileTimeHi", 218);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeLo", 218);
  emlrtAddField(*info, b_emlrt_marshallOut(0U), "mFileTimeHi", 218);
}

static const mxArray *mw__internal__autoInference__fcn(void)
{
  const mxArray *infoCache;
  int8_T Ports_dims_data[4];
  int32_T i7;
  static int8_T iv21[4] = { 3, 2, 3, 1 };

  char_T t1_objTypeName[11];
  static char_T cv36[11] = { 'G', 'l', 'o', 'b', 'a', 'l', '2', 'B', 'o', 'd',
    'y' };

  char_T t1_sysObjChksum[22];
  static char_T cv37[22] = { 'o', 'r', 'd', 'o', 'J', 'j', 'x', 'p', 'Y', 'j',
    'l', 't', 'L', 'b', 't', 'E', '5', 'i', 'e', 'Y', 'w', 'C' };

  uint32_T t0_cgxeChksum[4];
  s7UBIGHSehQY1gCsIQWwr5C expl_temp;
  s7UBIGHSehQY1gCsIQWwr5C b_expl_temp;
  s7UBIGHSehQY1gCsIQWwr5C c_expl_temp;
  s7UBIGHSehQY1gCsIQWwr5C d_expl_temp;
  static uint32_T uv0[4] = { 1666341979U, 355480991U, 1051679561U, 3056227516U };

  static uint32_T t2_chksum[4] = { 1929122457U, 7617283U, 2230904748U,
    3725242384U };

  static uint32_T t3_chksum[4] = { 907274058U, 3220786148U, 779473529U,
    2769831971U };

  static int32_T t4_chksum[4] = { 725019261, 9350207, 1380543125, 1962202275 };

  static uint32_T t5_chksum[4] = { 454675138U, 1109102713U, 4122847319U,
    2206369785U };

  s7UBIGHSehQY1gCsIQWwr5C checksums[4];
  char_T u_slVer[3];
  static char_T cv38[3] = { '8', '.', '3' };

  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *m10;
  int32_T u_sizes[2];
  int8_T u_data[4];
  const mxArray *f_y;
  real_T *pData;
  int32_T i;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  const mxArray *j_y;
  int32_T iv22[2];
  const mxArray *k_y;
  static const int32_T iv23[2] = { 1, 11 };

  const mxArray *l_y;
  const mxArray *m_y;
  const mxArray *n_y;
  static const int32_T iv24[2] = { 1, 22 };

  const mxArray *o_y;
  const mxArray *p_y;
  const mxArray *q_y;
  const mxArray *r_y;
  const mxArray *s_y;
  int32_T b_u_sizes[2];
  const mxArray *t_y;
  const mxArray *u_y;
  static const int32_T iv25[2] = { 1, 4 };

  const mxArray *v_y;
  s7UBIGHSehQY1gCsIQWwr5C u[4];
  const mxArray *w_y;
  const s7UBIGHSehQY1gCsIQWwr5C *r0;
  real_T b_u[4];
  const mxArray *x_y;
  static const int32_T iv26[2] = { 1, 4 };

  const mxArray *y_y;
  static const int32_T iv27[2] = { 1, 3 };

  infoCache = NULL;
  for (i7 = 0; i7 < 4; i7++) {
    Ports_dims_data[i7] = iv21[i7];
  }

  for (i7 = 0; i7 < 11; i7++) {
    t1_objTypeName[i7] = cv36[i7];
  }

  for (i7 = 0; i7 < 22; i7++) {
    t1_sysObjChksum[i7] = cv37[i7];
  }

  for (i7 = 0; i7 < 4; i7++) {
    t0_cgxeChksum[i7] = uv0[i7];
    expl_temp.chksum[i7] = (real_T)t2_chksum[i7];
    b_expl_temp.chksum[i7] = (real_T)t3_chksum[i7];
    c_expl_temp.chksum[i7] = (real_T)t4_chksum[i7];
    d_expl_temp.chksum[i7] = (real_T)t5_chksum[i7];
  }

  checksums[0] = expl_temp;
  checksums[1] = b_expl_temp;
  checksums[2] = c_expl_temp;
  checksums[3] = d_expl_temp;
  for (i7 = 0; i7 < 3; i7++) {
    u_slVer[i7] = cv38[i7];
  }

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  d_y = NULL;
  emlrtAssign(&d_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  e_y = NULL;
  m10 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&e_y, m10);
  emlrtAddField(d_y, e_y, "dimModes", 0);
  u_sizes[0] = 1;
  u_sizes[1] = 4;
  for (i7 = 0; i7 < 4; i7++) {
    u_data[i7] = Ports_dims_data[i7];
  }

  f_y = NULL;
  m10 = emlrtCreateNumericArray(2, u_sizes, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m10);
  i7 = 0;
  for (i = 0; i < u_sizes[1]; i++) {
    pData[i7] = (real_T)u_data[u_sizes[0] * i];
    i7++;
  }

  emlrtAssign(&f_y, m10);
  emlrtAddField(d_y, f_y, "dims", 0);
  g_y = NULL;
  m10 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&g_y, m10);
  emlrtAddField(d_y, g_y, "dType", 0);
  h_y = NULL;
  m10 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&h_y, m10);
  emlrtAddField(d_y, h_y, "complexity", 0);
  i_y = NULL;
  m10 = emlrtCreateDoubleScalar(0.0);
  emlrtAssign(&i_y, m10);
  emlrtAddField(d_y, i_y, "outputBuiltInDTEqUsed", 0);
  emlrtAddField(c_y, d_y, "Ports", 0);
  j_y = NULL;
  for (i7 = 0; i7 < 2; i7++) {
    iv22[i7] = 1 - i7;
  }

  emlrtAssign(&j_y, emlrtCreateStructArray(2, iv22, 0, NULL));
  emlrtAddField(j_y, NULL, "names", 0);
  emlrtAddField(j_y, NULL, "dims", 0);
  emlrtAddField(j_y, NULL, "dType", 0);
  emlrtAddField(j_y, NULL, "complexity", 0);
  emlrtAddField(c_y, j_y, "dWork", 0);
  k_y = NULL;
  m10 = emlrtCreateCharArray(2, iv23);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 11, m10, t1_objTypeName);
  emlrtAssign(&k_y, m10);
  emlrtAddField(c_y, k_y, "objTypeName", 0);
  l_y = NULL;
  m10 = emlrtCreateDoubleScalar(2.0);
  emlrtAssign(&l_y, m10);
  emlrtAddField(c_y, l_y, "objTypeSize", 0);
  m_y = NULL;
  for (i7 = 0; i7 < 2; i7++) {
    iv22[i7] = 1 - i7;
  }

  emlrtAssign(&m_y, emlrtCreateStructArray(2, iv22, 0, NULL));
  emlrtAddField(m_y, NULL, "names", 0);
  emlrtAddField(m_y, NULL, "dims", 0);
  emlrtAddField(m_y, NULL, "dType", 0);
  emlrtAddField(m_y, NULL, "dTypeSize", 0);
  emlrtAddField(m_y, NULL, "dTypeName", 0);
  emlrtAddField(m_y, NULL, "dTypeChksum", 0);
  emlrtAddField(m_y, NULL, "complexity", 0);
  emlrtAddField(c_y, m_y, "persisVarDWork", 0);
  n_y = NULL;
  m10 = emlrtCreateCharArray(2, iv24);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 22, m10, t1_sysObjChksum);
  emlrtAssign(&n_y, m10);
  emlrtAddField(c_y, n_y, "sysObjChksum", 0);
  o_y = NULL;
  emlrtAssign(&o_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  p_y = NULL;
  for (i7 = 0; i7 < 2; i7++) {
    iv22[i7] = 1 - i7;
  }

  emlrtAssign(&p_y, emlrtCreateStructArray(2, iv22, 0, NULL));
  emlrtAddField(p_y, NULL, "Index", 0);
  emlrtAddField(p_y, NULL, "DataType", 0);
  emlrtAddField(p_y, NULL, "IsSigned", 0);
  emlrtAddField(p_y, NULL, "MantBits", 0);
  emlrtAddField(p_y, NULL, "FixExp", 0);
  emlrtAddField(p_y, NULL, "Slope", 0);
  emlrtAddField(p_y, NULL, "Bias", 0);
  emlrtAddField(o_y, p_y, "Out", 0);
  q_y = NULL;
  for (i7 = 0; i7 < 2; i7++) {
    iv22[i7] = 1 - i7;
  }

  emlrtAssign(&q_y, emlrtCreateStructArray(2, iv22, 0, NULL));
  emlrtAddField(q_y, NULL, "Index", 0);
  emlrtAddField(q_y, NULL, "DataType", 0);
  emlrtAddField(q_y, NULL, "IsSigned", 0);
  emlrtAddField(q_y, NULL, "MantBits", 0);
  emlrtAddField(q_y, NULL, "FixExp", 0);
  emlrtAddField(q_y, NULL, "Slope", 0);
  emlrtAddField(q_y, NULL, "Bias", 0);
  emlrtAddField(o_y, q_y, "DW", 0);
  r_y = NULL;
  for (i7 = 0; i7 < 2; i7++) {
    iv22[i7] = 1 - i7;
  }

  emlrtAssign(&r_y, emlrtCreateStructArray(2, iv22, 0, NULL));
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
  m10 = emlrtCreateDoubleScalar(1.0);
  emlrtAssign(&s_y, m10);
  emlrtAddField(c_y, s_y, "objDWorkTypeNameIndex", 0);
  b_u_sizes[0] = 1;
  b_u_sizes[1] = 2;
  t_y = NULL;
  m10 = emlrtCreateNumericArray(2, b_u_sizes, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m10);
  i7 = 0;
  for (i = 0; i < 2; i++) {
    pData[i7] = 1.0;
    i7++;
  }

  emlrtAssign(&t_y, m10);
  emlrtAddField(c_y, t_y, "inputDFFlagsIndexField", 0);
  emlrtAddField(b_y, c_y, "DispatcherInfo", 0);
  u_y = NULL;
  m10 = emlrtCreateNumericArray(2, iv25, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m10);
  for (i = 0; i < 4; i++) {
    pData[i] = (real_T)t0_cgxeChksum[i];
  }

  emlrtAssign(&u_y, m10);
  emlrtAddField(b_y, u_y, "cgxeChksum", 0);
  emlrtAddField(y, b_y, "RestoreInfo", 0);
  v_y = NULL;
  emlrtAssign(&v_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  for (i7 = 0; i7 < 4; i7++) {
    u[i7] = checksums[i7];
  }

  w_y = NULL;
  for (i7 = 0; i7 < 2; i7++) {
    iv22[i7] = 1 + 3 * i7;
  }

  emlrtAssign(&w_y, emlrtCreateStructArray(2, iv22, 0, NULL));
  for (i7 = 0; i7 < 4; i7++) {
    r0 = &u[i7];
    for (i = 0; i < 4; i++) {
      b_u[i] = r0->chksum[i];
    }

    x_y = NULL;
    m10 = emlrtCreateNumericArray(2, iv26, mxDOUBLE_CLASS, mxREAL);
    pData = (real_T *)mxGetPr(m10);
    for (i = 0; i < 4; i++) {
      pData[i] = b_u[i];
    }

    emlrtAssign(&x_y, m10);
    emlrtAddField(w_y, x_y, "chksum", i7);
  }

  emlrtAddField(v_y, w_y, "checksums", 0);
  emlrtAddField(y, v_y, "VerificationInfo", 0);
  y_y = NULL;
  m10 = emlrtCreateCharArray(2, iv27);
  emlrtInitCharArrayR2013a(emlrtRootTLSGlobal, 3, m10, u_slVer);
  emlrtAssign(&y_y, m10);
  emlrtAddField(y, y_y, "slVer", 0);
  emlrtAssign(&infoCache, y);
  return infoCache;
}

static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_tt36X2ncayc7iQeNkctM4F *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  static const int32_T iv28[2] = { 3, 1 };

  const mxArray *m11;
  real_T *pData;
  int32_T i;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  real_T (*b_y0)[3];
  b_y0 = (real_T (*)[3])ssGetOutputPortSignal(moduleInstance->S, 0U);
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(3, 1));
  b_y = NULL;
  m11 = emlrtCreateNumericArray(2, iv28, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T *)mxGetPr(m11);
  for (i = 0; i < 3; i++) {
    pData[i] = (*b_y0)[i];
  }

  emlrtAssign(&b_y, m11);
  emlrtSetCell(y, 0, b_y);
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  d_y = NULL;
  m11 = emlrtCreateLogicalScalar(moduleInstance->sysobj.isInitialized);
  emlrtAssign(&d_y, m11);
  emlrtAddField(c_y, d_y, "isInitialized", 0);
  e_y = NULL;
  m11 = emlrtCreateLogicalScalar(moduleInstance->sysobj.isReleased);
  emlrtAssign(&e_y, m11);
  emlrtAddField(c_y, e_y, "isReleased", 0);
  emlrtSetCell(y, 1, c_y);
  f_y = NULL;
  m11 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&f_y, m11);
  emlrtSetCell(y, 2, f_y);
  emlrtAssign(&st, y);
  return st;
}

static void emlrt_marshallIn(const mxArray *c_y0, const char_T *identifier,
  real_T y[3])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(c_y0), &thisId, y);
  emlrtDestroyArray(&c_y0);
}

static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[3])
{
  g_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static Global2Body c_emlrt_marshallIn(const mxArray *b_sysobj, const char_T
  *identifier)
{
  Global2Body y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static Global2Body d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  Global2Body y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[2] = { "isInitialized", "isReleased" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(emlrtRootTLSGlobal, parentId, u, 2, fieldNames, 0U, 0);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "isInitialized")), &thisId);
  thisId.fIdentifier = "isReleased";
  y.isReleased = e_emlrt_marshallIn(emlrtAlias(emlrtGetFieldR2013a
    (emlrtRootTLSGlobal, u, 0, "isReleased")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T e_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId)
{
  boolean_T y;
  y = h_emlrt_marshallIn(emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T f_emlrt_marshallIn(const mxArray *b_sysobj_not_empty, const
  char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = e_emlrt_marshallIn(emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void mw__internal__setSimState__fcn(InstanceStruct_tt36X2ncayc7iQeNkctM4F
  *moduleInstance, const mxArray *st)
{
  const mxArray *u;
  real_T (*b_y0)[3];
  b_y0 = (real_T (*)[3])ssGetOutputPortSignal(moduleInstance->S, 0U);
  u = emlrtAlias(st);
  emlrt_marshallIn(emlrtAlias(emlrtGetCell(emlrtRootTLSGlobal, u, 0)), "y0",
                   *b_y0);
  moduleInstance->sysobj = c_emlrt_marshallIn(emlrtAlias(emlrtGetCell
    (emlrtRootTLSGlobal, u, 1)), "sysobj");
  moduleInstance->sysobj_not_empty = f_emlrt_marshallIn(emlrtAlias(emlrtGetCell
    (emlrtRootTLSGlobal, u, 2)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static const mxArray *message(const mxArray *b, const mxArray *c, emlrtMCInfo
  *location)
{
  const mxArray *pArrays[2];
  const mxArray *m12;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m12, 2, pArrays,
    "message", true, location);
}

static void error(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 0, NULL, 1, &pArray, "error", true,
                        location);
}

static const mxArray *b_message(const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m13;
  pArray = b;
  return emlrtCallMATLABR2012b(emlrtRootTLSGlobal, 1, &m13, 1, &pArray,
    "message", true, location);
}

static void g_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[3])
{
  int32_T iv29[2];
  int32_T i8;
  for (i8 = 0; i8 < 2; i8++) {
    iv29[i8] = 3 + -2 * i8;
  }

  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "double", false, 2U,
    iv29);
  for (i8 = 0; i8 < 3; i8++) {
    ret[i8] = (*(real_T (*)[3])mxGetData(src))[i8];
  }

  emlrtDestroyArray(&src);
}

static boolean_T h_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId)
{
  boolean_T ret;
  emlrtCheckBuiltInR2012b(emlrtRootTLSGlobal, msgId, src, "logical", false, 0U,
    0);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void eml_xscal(int32_T n, real_T a, real_T x[9], int32_T ix0)
{
  int32_T b;
  boolean_T b_ix0;
  int32_T k;
  b = ix0 + n - 1;
  if (ix0 > b) {
    b_ix0 = false;
  } else {
    b_ix0 = b > 2147483646;
  }

  if (b_ix0) {
    check_forloop_overflow_error(true);
  }

  for (k = ix0; k <= b; k++) {
    x[emlrtDynamicBoundsCheckFastR2012b(k, 1, 9, &e_emlrtBCI, emlrtRootTLSGlobal)
      - 1] = a * x[emlrtDynamicBoundsCheckFastR2012b(k, 1, 9, &e_emlrtBCI,
      emlrtRootTLSGlobal) - 1];
  }
}

static void eml_xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (n < 1 || a == 0.0) {
  } else {
    ix = ix0;
    iy = iy0;
    for (k = 0; k < n; k++) {
      y[emlrtDynamicBoundsCheckFastR2012b(iy, 1, 9, &f_emlrtBCI,
        emlrtRootTLSGlobal) - 1] = y[emlrtDynamicBoundsCheckFastR2012b(iy, 1, 9,
        &f_emlrtBCI, emlrtRootTLSGlobal) - 1] + a *
        y[emlrtDynamicBoundsCheckFastR2012b(ix, 1, 9, &f_emlrtBCI,
        emlrtRootTLSGlobal) - 1];
      ix++;
      iy++;
    }
  }
}

static void b_eml_xscal(int32_T n, real_T a, real_T x[3], int32_T ix0)
{
  boolean_T b_ix0;
  int32_T k;
  (void)n;
  if (ix0 > ix0 + 1) {
    b_ix0 = false;
  } else {
    b_ix0 = ix0 + 1 > 2147483646;
  }

  if (b_ix0) {
    check_forloop_overflow_error(true);
  }

  for (k = ix0; k <= ix0 + 1; k++) {
    x[emlrtDynamicBoundsCheckFastR2012b(k, 1, 3, &g_emlrtBCI, emlrtRootTLSGlobal)
      - 1] = a * x[emlrtDynamicBoundsCheckFastR2012b(k, 1, 3, &g_emlrtBCI,
      emlrtRootTLSGlobal) - 1];
  }
}

static void b_eml_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y
  [3], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (n < 1 || a == 0.0) {
  } else {
    ix = ix0;
    iy = iy0;
    for (k = 0; k < n; k++) {
      y[emlrtDynamicBoundsCheckFastR2012b(iy, 1, 3, &h_emlrtBCI,
        emlrtRootTLSGlobal) - 1] = y[emlrtDynamicBoundsCheckFastR2012b(iy, 1, 3,
        &h_emlrtBCI, emlrtRootTLSGlobal) - 1] + a *
        x[emlrtDynamicBoundsCheckFastR2012b(ix, 1, 9, &f_emlrtBCI,
        emlrtRootTLSGlobal) - 1];
      ix++;
      iy++;
    }
  }
}

static void c_eml_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y
  [9], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if (n < 1 || a == 0.0) {
  } else {
    ix = ix0;
    iy = iy0;
    for (k = 0; k < n; k++) {
      y[emlrtDynamicBoundsCheckFastR2012b(iy, 1, 9, &f_emlrtBCI,
        emlrtRootTLSGlobal) - 1] = y[emlrtDynamicBoundsCheckFastR2012b(iy, 1, 9,
        &f_emlrtBCI, emlrtRootTLSGlobal) - 1] + a *
        x[emlrtDynamicBoundsCheckFastR2012b(ix, 1, 3, &h_emlrtBCI,
        emlrtRootTLSGlobal) - 1];
      ix++;
      iy++;
    }
  }
}

static void c_eml_xscal(real_T a, real_T x[9], int32_T ix0)
{
  boolean_T b_ix0;
  int32_T k;
  if (ix0 > ix0 + 2) {
    b_ix0 = false;
  } else {
    b_ix0 = ix0 + 2 > 2147483646;
  }

  if (b_ix0) {
    check_forloop_overflow_error(true);
  }

  for (k = ix0; k <= ix0 + 2; k++) {
    x[emlrtDynamicBoundsCheckFastR2012b(k, 1, 9, &e_emlrtBCI, emlrtRootTLSGlobal)
      - 1] = a * x[emlrtDynamicBoundsCheckFastR2012b(k, 1, 9, &e_emlrtBCI,
      emlrtRootTLSGlobal) - 1];
  }
}

static void eml_xrotg(real_T *a, real_T *b, real_T *c, real_T *s)
{
  real_T b_b;
  real_T b_a;
  double * a_t;
  double * b_t;
  double * c_t;
  double * s_t;
  b_b = *b;
  b_a = *a;
  *c = 0.0;
  *s = 0.0;
  a_t = (double *)(&b_a);
  b_t = (double *)(&b_b);
  c_t = (double *)(c);
  s_t = (double *)(s);
  drotg(a_t, b_t, c_t, s_t);
  *a = b_a;
  *b = b_b;
}

static void eml_xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  real_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = c * x[emlrtDynamicBoundsCheckFastR2012b(ix + 1, 1, 9, &i_emlrtBCI,
      emlrtRootTLSGlobal) - 1] + s * x[emlrtDynamicBoundsCheckFastR2012b(iy + 1,
      1, 9, &i_emlrtBCI, emlrtRootTLSGlobal) - 1];
    x[iy] = c * x[iy] - s * x[ix];
    x[ix] = temp;
    iy++;
    ix++;
  }
}

static void eml_xswap(real_T x[9], int32_T ix0, int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  real_T temp;
  ix = ix0;
  iy = iy0;
  for (k = 0; k < 3; k++) {
    temp = x[emlrtDynamicBoundsCheckFastR2012b(ix, 1, 9, &j_emlrtBCI,
      emlrtRootTLSGlobal) - 1];
    x[ix - 1] = x[emlrtDynamicBoundsCheckFastR2012b(iy, 1, 9, &j_emlrtBCI,
      emlrtRootTLSGlobal) - 1];
    x[iy - 1] = temp;
    ix++;
    iy++;
  }
}

/* CGXE Glue Code */
static void mdlOutputs_tt36X2ncayc7iQeNkctM4F(SimStruct *S, int_T tid)
{
  InstanceStruct_tt36X2ncayc7iQeNkctM4F *moduleInstance;
  moduleInstance = (InstanceStruct_tt36X2ncayc7iQeNkctM4F *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mw__internal__outputs__fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static void mdlInitialize_tt36X2ncayc7iQeNkctM4F(SimStruct *S)
{
  InstanceStruct_tt36X2ncayc7iQeNkctM4F *moduleInstance;
  moduleInstance = (InstanceStruct_tt36X2ncayc7iQeNkctM4F *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mw__internal__initialize__fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static void mdlUpdate_tt36X2ncayc7iQeNkctM4F(SimStruct *S, int_T tid)
{
  InstanceStruct_tt36X2ncayc7iQeNkctM4F *moduleInstance;
  moduleInstance = (InstanceStruct_tt36X2ncayc7iQeNkctM4F *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mw__internal__update__fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();
}

static mxArray* getSimState_tt36X2ncayc7iQeNkctM4F(SimStruct *S)
{
  InstanceStruct_tt36X2ncayc7iQeNkctM4F *moduleInstance;
  mxArray* mxSS;
  moduleInstance = (InstanceStruct_tt36X2ncayc7iQeNkctM4F *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mxSS = (mxArray *) mw__internal__getSimState__fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();
  return mxSS;
}

static void setSimState_tt36X2ncayc7iQeNkctM4F(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_tt36X2ncayc7iQeNkctM4F *moduleInstance;
  moduleInstance = (InstanceStruct_tt36X2ncayc7iQeNkctM4F *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mw__internal__setSimState__fcn(moduleInstance, emlrtAlias(ss));
  CGXERT_LEAVE_CHECK();
}

static void mdlTerminate_tt36X2ncayc7iQeNkctM4F(SimStruct *S)
{
  InstanceStruct_tt36X2ncayc7iQeNkctM4F *moduleInstance;
  moduleInstance = (InstanceStruct_tt36X2ncayc7iQeNkctM4F *)ssGetUserData(S);
  CGXERT_ENTER_CHECK();
  mw__internal__terminate__fcn(moduleInstance);
  CGXERT_LEAVE_CHECK();
  free((void *)moduleInstance);
  ssSetUserData(S, NULL);
}

static void mdlStart_tt36X2ncayc7iQeNkctM4F(SimStruct *S)
{
  InstanceStruct_tt36X2ncayc7iQeNkctM4F *moduleInstance;
  moduleInstance = (InstanceStruct_tt36X2ncayc7iQeNkctM4F *)calloc(1, sizeof
    (InstanceStruct_tt36X2ncayc7iQeNkctM4F));
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

  ssSetmdlOutputs(S, mdlOutputs_tt36X2ncayc7iQeNkctM4F);
  ssSetmdlInitializeConditions(S, mdlInitialize_tt36X2ncayc7iQeNkctM4F);
  ssSetmdlUpdate(S, mdlUpdate_tt36X2ncayc7iQeNkctM4F);
  ssSetmdlTerminate(S, mdlTerminate_tt36X2ncayc7iQeNkctM4F);
}

static void mdlProcessParameters_tt36X2ncayc7iQeNkctM4F(SimStruct *S)
{
}

void method_dispatcher_tt36X2ncayc7iQeNkctM4F(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_tt36X2ncayc7iQeNkctM4F(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_tt36X2ncayc7iQeNkctM4F(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_tt36X2ncayc7iQeNkctM4F(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_tt36X2ncayc7iQeNkctM4F(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: tt36X2ncayc7iQeNkctM4F.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

int autoInfer_dispatcher_tt36X2ncayc7iQeNkctM4F(mxArray* plhs[], const char
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

mxArray *cgxe_tt36X2ncayc7iQeNkctM4F_BuildInfoUpdate(void)
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
