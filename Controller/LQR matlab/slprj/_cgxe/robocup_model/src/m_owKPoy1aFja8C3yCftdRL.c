/* Include files */

#include "modelInterface.h"
#include "m_owKPoy1aFja8C3yCftdRL.h"
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

static emlrtMCInfo c_emlrtMCI = { 87, 9, "eml_int_forloop_overflow_check",
  "C:\\Program Files\\MATLAB\\R2015b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"
};

/* Function Declarations */
static void error(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance);
static void svd(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance, real_T A[9],
                real_T U[9], real_T b_S[9], real_T V[9]);
static real_T xnrm2(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance,
                    int32_T n, real_T x[9], int32_T ix0);
static void check_forloop_overflow_error(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, boolean_T overflow);
static real_T xdotc(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance,
                    int32_T n, real_T x[9], int32_T ix0, real_T y[9], int32_T
                    iy0);
static real_T b_xnrm2(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance,
                      int32_T n, real_T x[3], int32_T ix0);
static void b_error(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance);
static void c_error(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance);
static void cgxe_mdl_start(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance);
static const mxArray *mw__internal__getSimState__fcn
  (InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance);
static Global2Body emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *b_sysobj, const char_T *identifier);
static Global2Body b_emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static int32_T c_emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static boolean_T d_emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *b_sysobj_not_empty, const char_T *identifier);
static boolean_T e_emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId);
static void mw__internal__setSimState__fcn(InstanceStruct_owKPoy1aFja8C3yCftdRL *
  moduleInstance, const mxArray *st);
static const mxArray *message(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location);
static void d_error(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance, const
                    mxArray *b, emlrtMCInfo *location);
static const mxArray *b_message(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *b, emlrtMCInfo *location);
static int32_T f_emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId);
static boolean_T g_emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *src, const emlrtMsgIdentifier *msgId);
static void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0);
static void b_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y[3],
                    int32_T iy0);
static void c_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y[9],
                    int32_T iy0);
static void xscal(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance, real_T a,
                  real_T x[9], int32_T ix0);
static void b_sqrt(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance, real_T *
                   x);
static void xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
static void xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s);
static void xswap(real_T x[9], int32_T ix0, int32_T iy0);
static void init_simulink_io_address(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance);

/* Function Definitions */
static void error(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance)
{
  int32_T i0;
  static char_T cv0[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 's', 'v', 'd', '_', 'm', 'a', 't', 'r', 'i', 'x', 'W', 'i',
    't', 'h', 'N', 'a', 'N', 'I', 'n', 'f' };

  char_T u[33];
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 33 };

  const mxArray *m0;
  for (i0 = 0; i0 < 33; i0++) {
    u[i0] = cv0[i0];
  }

  y = NULL;
  m0 = emlrtCreateCharArray(2, iv0);
  emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 33, m0, &u[0]);
  emlrtAssign(&y, m0);
  d_error(moduleInstance, b_message(moduleInstance, y, &b_emlrtMCI), &b_emlrtMCI);
}

static void svd(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance, real_T A[9],
                real_T U[9], real_T b_S[9], real_T V[9])
{
  real_T b_A[9];
  int32_T kase;
  real_T s[3];
  real_T e[3];
  real_T work[3];
  real_T Vf[9];
  int32_T q;
  int32_T qs;
  boolean_T apply_transform;
  real_T ztest0;
  real_T ztest;
  int32_T ii;
  int32_T m;
  real_T rt;
  int32_T iter;
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
    qs = (q + 3 * q) + 1;
    apply_transform = false;
    ztest0 = xnrm2(moduleInstance, 3 - q, b_A, qs);
    if (ztest0 > 0.0) {
      apply_transform = true;
      if (b_A[qs - 1] < 0.0) {
        s[q] = -ztest0;
      } else {
        s[q] = ztest0;
      }

      if (muDoubleScalarAbs(s[q]) >= 1.0020841800044864E-292) {
        ztest = 1.0 / s[q];
        kase = qs - q;
        for (ii = qs - 1; ii + 1 <= kase + 2; ii++) {
          b_A[ii] *= ztest;
        }
      } else {
        kase = qs - q;
        for (ii = qs - 1; ii + 1 <= kase + 2; ii++) {
          b_A[ii] /= s[q];
        }
      }

      b_A[qs - 1]++;
      s[q] = -s[q];
    } else {
      s[q] = 0.0;
    }

    for (ii = q + 1; ii + 1 < 4; ii++) {
      kase = q + 3 * ii;
      if (apply_transform) {
        ztest0 = xdotc(moduleInstance, 3 - q, b_A, qs, b_A, kase + 1);
        xaxpy(3 - q, -(ztest0 / b_A[q + 3 * q]), qs, b_A, kase + 1);
      }

      e[ii] = b_A[kase];
    }

    for (ii = q; ii + 1 < 4; ii++) {
      U[ii + 3 * q] = b_A[ii + 3 * q];
    }

    if (q + 1 <= 1) {
      ztest0 = b_xnrm2(moduleInstance, 2, e, 2);
      if (ztest0 == 0.0) {
        e[0] = 0.0;
      } else {
        if (e[1] < 0.0) {
          ztest = -ztest0;
        } else {
          ztest = ztest0;
        }

        if (e[1] < 0.0) {
          e[0] = -ztest0;
        } else {
          e[0] = ztest0;
        }

        if (muDoubleScalarAbs(e[0]) >= 1.0020841800044864E-292) {
          ztest = 1.0 / e[0];
          for (ii = 0; ii < 2; ii++) {
            e[ii + 1] *= ztest;
          }
        } else {
          for (ii = 0; ii < 2; ii++) {
            e[ii + 1] /= ztest;
          }
        }

        e[1]++;
        e[0] = -e[0];
        for (ii = 0; ii < 2; ii++) {
          work[ii + 1] = 0.0;
        }

        for (ii = 0; ii < 2; ii++) {
          b_xaxpy(2, e[ii + 1], b_A, 3 * (ii + 1) + 2, work, 2);
        }

        for (ii = 0; ii < 2; ii++) {
          c_xaxpy(2, -e[ii + 1] / e[1], work, 2, b_A, 3 * (ii + 1) + 2);
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
        kase = (q + 3 * (ii + 1)) + 1;
        ztest0 = xdotc(moduleInstance, 3 - q, U, qs + 1, U, kase);
        xaxpy(3 - q, -(ztest0 / U[qs]), qs + 1, U, kase);
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
    if ((q + 1 <= 1) && (e[0] != 0.0)) {
      for (ii = 0; ii < 2; ii++) {
        kase = 3 * (ii + 1) + 2;
        ztest0 = xdotc(moduleInstance, 2, Vf, 2, Vf, kase);
        xaxpy(2, -(ztest0 / Vf[1]), 2, Vf, kase);
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
      ztest = s[q] / rt;
      s[q] = rt;
      if (q + 1 < 3) {
        ztest0 = e[q] / ztest;
      }

      xscal(moduleInstance, ztest, U, 1 + 3 * q);
    }

    if ((q + 1 < 3) && (ztest0 != 0.0)) {
      rt = muDoubleScalarAbs(ztest0);
      ztest = rt / ztest0;
      ztest0 = rt;
      s[q + 1] *= ztest;
      xscal(moduleInstance, ztest, Vf, 1 + 3 * (q + 1));
    }

    e[q] = ztest0;
  }

  iter = 0;
  snorm = 0.0;
  for (ii = 0; ii < 3; ii++) {
    snorm = muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs(s[ii]),
      muDoubleScalarAbs(e[ii])));
  }

  exitg1 = false;
  while ((exitg1 == false) && (m + 2 > 0)) {
    if (iter >= 75) {
      b_error(moduleInstance);
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
          if ((ztest0 <= 2.2204460492503131E-16 * (muDoubleScalarAbs(s[ii]) +
                muDoubleScalarAbs(s[ii + 1]))) || (ztest0 <=
               1.0020841800044864E-292) || ((iter > 20) && (ztest0 <=
                2.2204460492503131E-16 * snorm))) {
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
        while ((exitg3 == false) && (kase >= ii + 1)) {
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
            if ((ztest <= 2.2204460492503131E-16 * ztest0) || (ztest <=
                 1.0020841800044864E-292)) {
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
          xrotg(&ztest0, &f, &ztest, &rt);
          s[ii] = ztest0;
          if (ii + 1 > q + 1) {
            f = -rt * e[0];
            e[0] *= ztest;
          }

          xrot(Vf, 1 + 3 * ii, 1 + 3 * (m + 1), ztest, rt);
        }
        break;

       case 2:
        f = e[q - 1];
        e[q - 1] = 0.0;
        for (ii = q; ii + 1 <= m + 2; ii++) {
          ztest0 = s[ii];
          xrotg(&ztest0, &f, &ztest, &rt);
          s[ii] = ztest0;
          f = -rt * e[ii];
          e[ii] *= ztest;
          xrot(U, 1 + 3 * ii, 1 + 3 * (q - 1), ztest, rt);
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
          while ((exitg2 == false) && (ii + 1 < 6)) {
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

        f = s[m + 1] / mtmp;
        ztest0 = s[m] / mtmp;
        ztest = e[m] / mtmp;
        sqds = s[q] / mtmp;
        rt = ((ztest0 + f) * (ztest0 - f) + ztest * ztest) / 2.0;
        ztest0 = f * ztest;
        ztest0 *= ztest0;
        if ((rt != 0.0) || (ztest0 != 0.0)) {
          ztest = rt * rt + ztest0;
          b_sqrt(moduleInstance, &ztest);
          if (rt < 0.0) {
            ztest = -ztest;
          }

          ztest = ztest0 / (rt + ztest);
        } else {
          ztest = 0.0;
        }

        f = (sqds + f) * (sqds - f) + ztest;
        ztest0 = sqds * (e[q] / mtmp);
        for (ii = q + 1; ii <= m + 1; ii++) {
          xrotg(&f, &ztest0, &ztest, &rt);
          if (ii > q + 1) {
            e[0] = f;
          }

          f = ztest * s[ii - 1] + rt * e[ii - 1];
          e[ii - 1] = ztest * e[ii - 1] - rt * s[ii - 1];
          ztest0 = rt * s[ii];
          s[ii] *= ztest;
          xrot(Vf, 1 + 3 * (ii - 1), 1 + 3 * ii, ztest, rt);
          xrotg(&f, &ztest0, &ztest, &rt);
          s[ii - 1] = f;
          f = ztest * e[ii - 1] + rt * s[ii];
          s[ii] = -rt * e[ii - 1] + ztest * s[ii];
          ztest0 = rt * e[ii];
          e[ii] *= ztest;
          xrot(U, 1 + 3 * (ii - 1), 1 + 3 * ii, ztest, rt);
        }

        e[m] = f;
        iter++;
        break;

       default:
        if (s[q] < 0.0) {
          s[q] = -s[q];
          xscal(moduleInstance, -1.0, Vf, 1 + 3 * q);
        }

        kase = q + 1;
        while ((q + 1 < 3) && (s[q] < s[kase])) {
          rt = s[q];
          s[q] = s[kase];
          s[kase] = rt;
          xswap(Vf, 1 + 3 * q, 1 + 3 * (q + 1));
          xswap(U, 1 + 3 * q, 1 + 3 * (q + 1));
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
    e[ii] = s[ii];
    for (kase = 0; kase < 3; kase++) {
      V[kase + 3 * ii] = Vf[kase + 3 * ii];
    }
  }

  for (kase = 0; kase < 9; kase++) {
    b_S[kase] = 0.0;
  }

  for (ii = 0; ii < 3; ii++) {
    b_S[ii + 3 * ii] = e[ii];
  }
}

static real_T xnrm2(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance,
                    int32_T n, real_T x[9], int32_T ix0)
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
      y = muDoubleScalarAbs(x[ix0 - 1]);
    } else {
      scale = 2.2250738585072014E-308;
      kend = (ix0 + n) - 1;
      if (ix0 > kend) {
        b_ix0 = false;
      } else {
        b_ix0 = (kend > 2147483646);
      }

      if (b_ix0) {
        check_forloop_overflow_error(moduleInstance, true);
      }

      for (k = ix0; k <= kend; k++) {
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

static void check_forloop_overflow_error(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, boolean_T overflow)
{
  int32_T i1;
  static char_T cv1[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  char_T u[34];
  const mxArray *y;
  static const int32_T iv1[2] = { 1, 34 };

  const mxArray *m1;
  static char_T cv2[5] = { 'i', 'n', 't', '3', '2' };

  char_T b_u[5];
  const mxArray *b_y;
  static const int32_T iv2[2] = { 1, 5 };

  if (overflow) {
    for (i1 = 0; i1 < 34; i1++) {
      u[i1] = cv1[i1];
    }

    y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 34, m1, &u[0]);
    emlrtAssign(&y, m1);
    for (i1 = 0; i1 < 5; i1++) {
      b_u[i1] = cv2[i1];
    }

    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    d_error(moduleInstance, message(moduleInstance, y, b_y, &c_emlrtMCI),
            &c_emlrtMCI);
  }
}

static real_T xdotc(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance,
                    int32_T n, real_T x[9], int32_T ix0, real_T y[9], int32_T
                    iy0)
{
  real_T d;
  int32_T ix;
  int32_T iy;
  int32_T k;
  d = 0.0;
  if (!(n < 1)) {
    ix = ix0 - 1;
    iy = iy0 - 1;
    if (n > 2147483646) {
      check_forloop_overflow_error(moduleInstance, true);
    }

    for (k = 1; k <= n; k++) {
      d += x[ix] * y[iy];
      ix++;
      iy++;
    }
  }

  return d;
}

static real_T b_xnrm2(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance,
                      int32_T n, real_T x[3], int32_T ix0)
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
      y = muDoubleScalarAbs(x[ix0 - 1]);
    } else {
      scale = 2.2250738585072014E-308;
      kend = (ix0 + n) - 1;
      if (ix0 > kend) {
        b_ix0 = false;
      } else {
        b_ix0 = (kend > 2147483646);
      }

      if (b_ix0) {
        check_forloop_overflow_error(moduleInstance, true);
      }

      for (k = ix0; k <= kend; k++) {
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

static void b_error(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance)
{
  int32_T i2;
  static char_T cv3[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 's', 'v', 'd', '_', 'N', 'o', 'C', 'o', 'n', 'v', 'e', 'r',
    'g', 'e', 'n', 'c', 'e' };

  char_T u[30];
  const mxArray *y;
  static const int32_T iv3[2] = { 1, 30 };

  const mxArray *m2;
  for (i2 = 0; i2 < 30; i2++) {
    u[i2] = cv3[i2];
  }

  y = NULL;
  m2 = emlrtCreateCharArray(2, iv3);
  emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 30, m2, &u[0]);
  emlrtAssign(&y, m2);
  d_error(moduleInstance, b_message(moduleInstance, y, &b_emlrtMCI), &b_emlrtMCI);
}

static void c_error(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance)
{
  int32_T i3;
  static char_T cv4[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  char_T u[30];
  const mxArray *y;
  static const int32_T iv4[2] = { 1, 30 };

  const mxArray *m3;
  static char_T cv5[4] = { 's', 'q', 'r', 't' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv5[2] = { 1, 4 };

  for (i3 = 0; i3 < 30; i3++) {
    u[i3] = cv4[i3];
  }

  y = NULL;
  m3 = emlrtCreateCharArray(2, iv4);
  emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 30, m3, &u[0]);
  emlrtAssign(&y, m3);
  for (i3 = 0; i3 < 4; i3++) {
    b_u[i3] = cv5[i3];
  }

  b_y = NULL;
  m3 = emlrtCreateCharArray(2, iv5);
  emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m3, &b_u[0]);
  emlrtAssign(&b_y, m3);
  d_error(moduleInstance, message(moduleInstance, y, b_y, &b_emlrtMCI),
          &b_emlrtMCI);
}

static void cgxe_mdl_start(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance)
{
  Global2Body *obj;
  int32_T i4;
  static char_T cv6[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T u[51];
  const mxArray *y;
  static const int32_T iv6[2] = { 1, 51 };

  const mxArray *m4;
  static char_T cv7[5] = { 's', 'e', 't', 'u', 'p' };

  char_T b_u[5];
  const mxArray *b_y;
  static const int32_T iv7[2] = { 1, 5 };

  init_simulink_io_address(moduleInstance);

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst,
                  "C:\\Users\\abdullah\\Documents\\GitHub\\Robocup-SSL\\Controller\\LQR matlab\\Global2Body.m",
                  0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst, 0, 1, "Global2Body_stepImpl", 652, -1,
               1024);
  covrtFcnInit(moduleInstance->covInst, 0, 0, "Global2Body_Global2Body", 79, -1,
               90);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst, 0, 1, 789, -1, 1011);
  covrtBasicBlockInit(moduleInstance->covInst, 0, 0, 79, -1, 90);

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
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized != 0) {
    for (i4 = 0; i4 < 51; i4++) {
      u[i4] = cv6[i4];
    }

    y = NULL;
    m4 = emlrtCreateCharArray(2, iv6);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m4, &u[0]);
    emlrtAssign(&y, m4);
    for (i4 = 0; i4 < 5; i4++) {
      b_u[i4] = cv7[i4];
    }

    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv7);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m4, &b_u[0]);
    emlrtAssign(&b_y, m4);
    d_error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI),
            &emlrtMCI);
  }

  obj->isInitialized = 1;
}

static void cgxe_mdl_initialize(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance)
{
  Global2Body *obj;
  int32_T i5;
  static char_T cv8[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 45 };

  const mxArray *m5;
  static char_T cv9[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 8 };

  boolean_T flag;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv10[2] = { 1, 45 };

  static char_T cv10[5] = { 'r', 'e', 's', 'e', 't' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv11[2] = { 1, 5 };

  if (!moduleInstance->sysobj_not_empty) {
    covrtLogFcn(moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 0);
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i5 = 0; i5 < 45; i5++) {
      u[i5] = cv8[i5];
    }

    y = NULL;
    m5 = emlrtCreateCharArray(2, iv8);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m5, &u[0]);
    emlrtAssign(&y, m5);
    for (i5 = 0; i5 < 8; i5++) {
      b_u[i5] = cv9[i5];
    }

    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv9);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m5, &b_u[0]);
    emlrtAssign(&b_y, m5);
    d_error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI),
            &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag && (moduleInstance->sysobj.isInitialized == 2)) {
    for (i5 = 0; i5 < 45; i5++) {
      c_u[i5] = cv8[i5];
    }

    c_y = NULL;
    m5 = emlrtCreateCharArray(2, iv10);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m5, &c_u[0]);
    emlrtAssign(&c_y, m5);
    for (i5 = 0; i5 < 5; i5++) {
      d_u[i5] = cv10[i5];
    }

    d_y = NULL;
    m5 = emlrtCreateCharArray(2, iv11);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m5, &d_u[0]);
    emlrtAssign(&d_y, m5);
    d_error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
            &emlrtMCI);
  }
}

static void cgxe_mdl_outputs(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance)
{
  real_T varargin_1[3];
  int32_T k;
  Global2Body *obj;
  static char_T cv11[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv12[2] = { 1, 45 };

  const mxArray *m6;
  static char_T cv12[4] = { 's', 't', 'e', 'p' };

  char_T b_u[4];
  const mxArray *b_y;
  static const int32_T iv13[2] = { 1, 4 };

  static char_T cv13[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  char_T c_u[51];
  const mxArray *c_y;
  static const int32_T iv14[2] = { 1, 51 };

  static char_T cv14[5] = { 's', 'e', 't', 'u', 'p' };

  char_T d_u[5];
  const mxArray *d_y;
  static const int32_T iv15[2] = { 1, 5 };

  real_T gbR[9];
  static int8_T iv16[3] = { 0, 0, 1 };

  real_T X[9];
  real_T V[9];
  real_T b_S[9];
  real_T U[9];
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
  real_T b_X[3];
  for (k = 0; k < 3; k++) {
    varargin_1[k] = (*moduleInstance->u0)[k];
  }

  if (!moduleInstance->sysobj_not_empty) {
    covrtLogFcn(moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 0);
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (k = 0; k < 45; k++) {
      u[k] = cv11[k];
    }

    y = NULL;
    m6 = emlrtCreateCharArray(2, iv12);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m6, &u[0]);
    emlrtAssign(&y, m6);
    for (k = 0; k < 4; k++) {
      b_u[k] = cv12[k];
    }

    b_y = NULL;
    m6 = emlrtCreateCharArray(2, iv13);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 4, m6, &b_u[0]);
    emlrtAssign(&b_y, m6);
    d_error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI),
            &emlrtMCI);
  }

  if (obj->isInitialized != 1) {
    if (obj->isInitialized != 0) {
      for (k = 0; k < 51; k++) {
        c_u[k] = cv13[k];
      }

      c_y = NULL;
      m6 = emlrtCreateCharArray(2, iv14);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 51, m6, &c_u
        [0]);
      emlrtAssign(&c_y, m6);
      for (k = 0; k < 5; k++) {
        d_u[k] = cv14[k];
      }

      d_y = NULL;
      m6 = emlrtCreateCharArray(2, iv15);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 5, m6, &d_u[0]);
      emlrtAssign(&d_y, m6);
      d_error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
              &emlrtMCI);
    }

    obj->isInitialized = 1;
  }

  covrtLogFcn(moduleInstance->covInst, 0, 1);
  covrtLogBasicBlock(moduleInstance->covInst, 0, 1);

  /*  Inputs = global velocity, phi (robot global angle) */
  /*  output: body velocity */
  /*  rotation matrix that converts from body frame to globalVel frame */
  gbR[0] = muDoubleScalarCos(*moduleInstance->u1);
  gbR[3] = -muDoubleScalarSin(*moduleInstance->u1);
  gbR[6] = 0.0;
  gbR[1] = muDoubleScalarSin(*moduleInstance->u1);
  gbR[4] = muDoubleScalarCos(*moduleInstance->u1);
  gbR[7] = 0.0;
  for (k = 0; k < 3; k++) {
    gbR[2 + 3 * k] = (real_T)iv16[k];
  }

  /*  Inversion of the usual equation: Global = gbR*body */
  for (k = 0; k < 9; k++) {
    X[k] = 0.0;
  }

  for (k = 0; k < 9; k++) {
    if (!((!muDoubleScalarIsInf(gbR[k])) && (!muDoubleScalarIsNaN(gbR[k])))) {
      error(moduleInstance);
    }
  }

  svd(moduleInstance, gbR, U, b_S, V);
  tol = 3.0 * b_S[0] * 2.2204460492503131E-16;
  r = 0;
  k = 0;
  while ((k + 1 < 4) && (b_S[k + 3 * k] > tol)) {
    r++;
    k++;
  }

  if (r > 0) {
    vcol = 3;
    if (r > 2147483646) {
      check_forloop_overflow_error(moduleInstance, true);
    }

    for (ar = 0; ar + 1 <= r; ar++) {
      tol = 1.0 / b_S[ar + 3 * ar];
      if (vcol - 2 > vcol) {
        b_vcol = false;
      } else {
        b_vcol = (vcol > 2147483646);
      }

      if (b_vcol) {
        check_forloop_overflow_error(moduleInstance, true);
      }

      for (k = vcol - 3; k + 1 <= vcol; k++) {
        V[k] *= tol;
      }

      vcol += 3;
    }

    for (k = 0; k < 8; k += 3) {
      for (ic = k; ic + 1 <= k + 3; ic++) {
        X[ic] = 0.0;
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
        c_vcol = (b > 2147483644);
      }

      if (c_vcol) {
        check_forloop_overflow_error(moduleInstance, true);
      }

      for (ib = vcol - 1; ib + 1 <= b; ib += 3) {
        if (U[ib] != 0.0) {
          ia = ar - 1;
          for (ic = k; ic + 1 <= k + 3; ic++) {
            ia++;
            X[ic] += U[ib] * V[ia];
          }
        }

        ar += 3;
      }
    }
  }

  for (k = 0; k < 3; k++) {
    b_X[k] = 0.0;
    for (vcol = 0; vcol < 3; vcol++) {
      b_X[k] += X[k + 3 * vcol] * varargin_1[vcol];
    }

    (*moduleInstance->b_y0)[k] = b_X[k];
  }
}

static void cgxe_mdl_update(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance)
{
  Global2Body *obj;
  int32_T i6;
  static char_T cv15[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  char_T u[45];
  const mxArray *y;
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *m7;
  static char_T cv16[8] = { 'i', 's', 'L', 'o', 'c', 'k', 'e', 'd' };

  char_T b_u[8];
  const mxArray *b_y;
  static const int32_T iv18[2] = { 1, 8 };

  boolean_T flag;
  char_T c_u[45];
  const mxArray *c_y;
  static const int32_T iv19[2] = { 1, 45 };

  static char_T cv17[7] = { 'r', 'e', 'l', 'e', 'a', 's', 'e' };

  char_T d_u[7];
  const mxArray *d_y;
  static const int32_T iv20[2] = { 1, 7 };

  if (!moduleInstance->sysobj_not_empty) {
    covrtLogFcn(moduleInstance->covInst, 0, 0);
    covrtLogBasicBlock(moduleInstance->covInst, 0, 0);
    moduleInstance->sysobj.isInitialized = 0;
    moduleInstance->sysobj_not_empty = true;
  }

  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i6 = 0; i6 < 45; i6++) {
      u[i6] = cv15[i6];
    }

    y = NULL;
    m7 = emlrtCreateCharArray(2, iv17);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7, &u[0]);
    emlrtAssign(&y, m7);
    for (i6 = 0; i6 < 8; i6++) {
      b_u[i6] = cv16[i6];
    }

    b_y = NULL;
    m7 = emlrtCreateCharArray(2, iv18);
    emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 8, m7, &b_u[0]);
    emlrtAssign(&b_y, m7);
    d_error(moduleInstance, message(moduleInstance, y, b_y, &emlrtMCI),
            &emlrtMCI);
  }

  flag = (obj->isInitialized == 1);
  if (flag) {
    obj = &moduleInstance->sysobj;
    if (moduleInstance->sysobj.isInitialized == 2) {
      for (i6 = 0; i6 < 45; i6++) {
        c_u[i6] = cv15[i6];
      }

      c_y = NULL;
      m7 = emlrtCreateCharArray(2, iv19);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 45, m7, &c_u
        [0]);
      emlrtAssign(&c_y, m7);
      for (i6 = 0; i6 < 7; i6++) {
        d_u[i6] = cv17[i6];
      }

      d_y = NULL;
      m7 = emlrtCreateCharArray(2, iv20);
      emlrtInitCharArrayR2013a(moduleInstance->emlrtRootTLSGlobal, 7, m7, &d_u[0]);
      emlrtAssign(&d_y, m7);
      d_error(moduleInstance, message(moduleInstance, c_y, d_y, &emlrtMCI),
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
  (InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance)
{
  const mxArray *st;
  const mxArray *y;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m8;
  const mxArray *d_y;
  st = NULL;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  c_y = NULL;
  m8 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)mxGetData(m8) = moduleInstance->sysobj.isInitialized;
  emlrtAssign(&c_y, m8);
  emlrtAddField(b_y, c_y, "isInitialized", 0);
  emlrtSetCell(y, 0, b_y);
  d_y = NULL;
  m8 = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&d_y, m8);
  emlrtSetCell(y, 1, d_y);
  emlrtAssign(&st, y);
  return st;
}

static Global2Body emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *b_sysobj, const char_T *identifier)
{
  Global2Body y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(moduleInstance, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static Global2Body b_emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  Global2Body y;
  emlrtMsgIdentifier thisId;
  static const int32_T dims = 0;
  static const char * fieldNames[1] = { "isInitialized" };

  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(moduleInstance->emlrtRootTLSGlobal, parentId, u, 1,
    fieldNames, 0U, &dims);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = c_emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetFieldR2013a(moduleInstance->emlrtRootTLSGlobal, u, 0,
    "isInitialized")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T c_emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = f_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T d_emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *b_sysobj_not_empty, const char_T *identifier)
{
  boolean_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = e_emlrt_marshallIn(moduleInstance, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static boolean_T e_emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *u, const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = g_emlrt_marshallIn(moduleInstance, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void mw__internal__setSimState__fcn(InstanceStruct_owKPoy1aFja8C3yCftdRL *
  moduleInstance, const mxArray *st)
{
  const mxArray *u;
  u = emlrtAlias(st);
  moduleInstance->sysobj = emlrt_marshallIn(moduleInstance, emlrtAlias
    (emlrtGetCell(moduleInstance->emlrtRootTLSGlobal, "sysobj", u, 0)), "sysobj");
  moduleInstance->sysobj_not_empty = d_emlrt_marshallIn(moduleInstance,
    emlrtAlias(emlrtGetCell(moduleInstance->emlrtRootTLSGlobal,
    "sysobj_not_empty", u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
  emlrtDestroyArray(&st);
}

static const mxArray *message(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *b, const mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m9;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m9, 2,
    pArrays, "message", true, location);
}

static void d_error(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance, const
                    mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 0, NULL, 1, &pArray,
                        "error", true, location);
}

static const mxArray *b_message(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m10;
  pArray = b;
  return emlrtCallMATLABR2012b(moduleInstance->emlrtRootTLSGlobal, 1, &m10, 1,
    &pArray, "message", true, location);
}

static int32_T f_emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
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

static boolean_T g_emlrt_marshallIn(InstanceStruct_owKPoy1aFja8C3yCftdRL
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

static void xaxpy(int32_T n, real_T a, int32_T ix0, real_T y[9], int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if ((n < 1) || (a == 0.0)) {
  } else {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * y[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void b_xaxpy(int32_T n, real_T a, real_T x[9], int32_T ix0, real_T y[3],
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if ((n < 1) || (a == 0.0)) {
  } else {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void c_xaxpy(int32_T n, real_T a, real_T x[3], int32_T ix0, real_T y[9],
                    int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  if ((n < 1) || (a == 0.0)) {
  } else {
    ix = ix0;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y[iy] += a * x[ix - 1];
      ix++;
      iy++;
    }
  }
}

static void xscal(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance, real_T a,
                  real_T x[9], int32_T ix0)
{
  boolean_T b_ix0;
  int32_T k;
  if (ix0 > ix0 + 2) {
    b_ix0 = false;
  } else {
    b_ix0 = (ix0 + 2 > 2147483646);
  }

  if (b_ix0) {
    check_forloop_overflow_error(moduleInstance, true);
  }

  for (k = ix0 - 1; k + 1 <= ix0 + 2; k++) {
    x[k] *= a;
  }
}

static void b_sqrt(InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance, real_T *
                   x)
{
  if (*x < 0.0) {
    c_error(moduleInstance);
  }

  *x = muDoubleScalarSqrt(*x);
}

static void xrotg(real_T *a, real_T *b, real_T *c, real_T *s)
{
  *c = 0.0;
  *s = 0.0;
  drotg(a, b, c, s);
}

static void xrot(real_T x[9], int32_T ix0, int32_T iy0, real_T c, real_T s)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  real_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = c * x[ix] + s * x[iy];
    x[iy] = c * x[iy] - s * x[ix];
    x[ix] = temp;
    iy++;
    ix++;
  }
}

static void xswap(real_T x[9], int32_T ix0, int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  int32_T k;
  real_T temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 0; k < 3; k++) {
    temp = x[ix];
    x[ix] = x[iy];
    x[iy] = temp;
    ix++;
    iy++;
  }
}

static void init_simulink_io_address(InstanceStruct_owKPoy1aFja8C3yCftdRL
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = cgxertGetEMLRTCtx(moduleInstance->S, 0);
  moduleInstance->covInst = (covrtInstance *)cgxertGetCovrtInstance
    (moduleInstance->S, 0);
  moduleInstance->u0 = (real_T (*)[3])cgxertGetInputPortSignal(moduleInstance->S,
    0);
  moduleInstance->u1 = (real_T *)cgxertGetInputPortSignal(moduleInstance->S, 1);
  moduleInstance->b_y0 = (real_T (*)[3])cgxertGetOutputPortSignal
    (moduleInstance->S, 0);
}

/* CGXE Glue Code */
static void mdlOutputs_owKPoy1aFja8C3yCftdRL(SimStruct *S, int_T tid)
{
  InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance =
    (InstanceStruct_owKPoy1aFja8C3yCftdRL *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_owKPoy1aFja8C3yCftdRL(SimStruct *S)
{
  InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance =
    (InstanceStruct_owKPoy1aFja8C3yCftdRL *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_owKPoy1aFja8C3yCftdRL(SimStruct *S, int_T tid)
{
  InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance =
    (InstanceStruct_owKPoy1aFja8C3yCftdRL *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_owKPoy1aFja8C3yCftdRL(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance =
    (InstanceStruct_owKPoy1aFja8C3yCftdRL *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) mw__internal__getSimState__fcn(moduleInstance);
  return mxSS;
}

static void setSimState_owKPoy1aFja8C3yCftdRL(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance =
    (InstanceStruct_owKPoy1aFja8C3yCftdRL *)cgxertGetRuntimeInstance(S);
  mw__internal__setSimState__fcn(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_owKPoy1aFja8C3yCftdRL(SimStruct *S)
{
  InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance =
    (InstanceStruct_owKPoy1aFja8C3yCftdRL *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlStart_owKPoy1aFja8C3yCftdRL(SimStruct *S)
{
  InstanceStruct_owKPoy1aFja8C3yCftdRL *moduleInstance =
    (InstanceStruct_owKPoy1aFja8C3yCftdRL *)calloc(1, sizeof
    (InstanceStruct_owKPoy1aFja8C3yCftdRL));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_owKPoy1aFja8C3yCftdRL);
  ssSetmdlInitializeConditions(S, mdlInitialize_owKPoy1aFja8C3yCftdRL);
  ssSetmdlUpdate(S, mdlUpdate_owKPoy1aFja8C3yCftdRL);
  ssSetmdlTerminate(S, mdlTerminate_owKPoy1aFja8C3yCftdRL);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_owKPoy1aFja8C3yCftdRL(SimStruct *S)
{
}

void method_dispatcher_owKPoy1aFja8C3yCftdRL(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_owKPoy1aFja8C3yCftdRL(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_owKPoy1aFja8C3yCftdRL(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_owKPoy1aFja8C3yCftdRL(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_owKPoy1aFja8C3yCftdRL(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: owKPoy1aFja8C3yCftdRL.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_owKPoy1aFja8C3yCftdRL_BuildInfoUpdate(void)
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
