#ifndef __robocup_model_cgxe_h__
#define __robocup_model_cgxe_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"
#include "emlrt.h"
#include "covrt.h"
#define rtInf                          (mxGetInf())
#define rtMinusInf                     (-(mxGetInf()))
#define rtNaN                          (mxGetNaN())
#define rtIsNaN(X)                     ((int)mxIsNaN(X))
#define rtIsInf(X)                     ((int)mxIsInf(X))
#define CGXE_SIM_RUNNING               0
#define CGXE_SIM_STOPPED               1
#define CGXE_SIM_PAUSED                2
#ifndef WATCOM

EXTERN_C double utCPUtime(void);

#endif

extern void *emlrtRootTLSGlobal;
extern char cgxeRtErrBuf[4096];

#define CGXERT_ENTER_CHECK() \
{ \
 jmp_buf emlrtJBEnviron; \
 emlrtSetJmpBuf(emlrtRootTLSGlobal, &emlrtJBEnviron); \
 switch (setjmp(emlrtJBEnviron)) { \
 case 0:
#define CGXERT_LEAVE_CHECK() \
 break; \
 case 1: \
 emlrtRetrieveRunTimeError(emlrtRootTLSGlobal, cgxeRtErrBuf, sizeof(cgxeRtErrBuf)); \
 S->errorStatus.str = cgxeRtErrBuf; \
 case 2: \
 break; \
 default: \
 break; \
 } \
}

extern unsigned int cgxe_robocup_model_method_dispatcher(SimStruct* S, int_T
  method, void* data);
extern int cgxe_robocup_model_autoInfer_dispatcher(const mxArray* prhs, mxArray*
  lhs[], const char* commandName);
extern void cgxe_robocup_model_initializer(void);
extern void cgxe_robocup_model_terminator(void);
extern int *ssGetCurrentInputPortDimensions_wrapper(SimStruct *S,int portNumber);
extern int *ssGetCurrentOutputPortDimensions_wrapper(SimStruct *S,int portNumber);
extern unsigned int cgxe_listen_for_ctrl_c(SimStruct *S, emlrtCTX aCtx);

#endif
