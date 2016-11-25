/* Include files */

#include "robocup_model_cgxe.h"
#include "m_nDmS38SZ3sHBJKA7UrolW.h"
#include "m_tt36X2ncayc7iQeNkctM4F.h"

static unsigned int cgxeModelInitialized = 0;
emlrtContext emlrtContextGlobal = { true, true, EMLRT_VERSION_INFO, NULL, "",
  NULL, false, { 0, 0, 0, 0 }, NULL };

void *emlrtRootTLSGlobal = NULL;
char cgxeRtErrBuf[4096];

/* CGXE Glue Code */
void cgxe_robocup_model_initializer(void)
{
  if (cgxeModelInitialized == 0) {
    cgxeModelInitialized = 1;
    emlrtRootTLSGlobal = NULL;
    emlrtCreateSimulinkRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  }
}

void cgxe_robocup_model_terminator(void)
{
  if (cgxeModelInitialized != 0) {
    cgxeModelInitialized = 0;
    emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
    emlrtRootTLSGlobal = NULL;
  }
}

unsigned int cgxe_robocup_model_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 331709438 &&
      ssGetChecksum1(S) == 2539423650 &&
      ssGetChecksum2(S) == 2210995290 &&
      ssGetChecksum3(S) == 236571053) {
    method_dispatcher_nDmS38SZ3sHBJKA7UrolW(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1666341979 &&
      ssGetChecksum1(S) == 355480991 &&
      ssGetChecksum2(S) == 1051679561 &&
      ssGetChecksum3(S) == 3056227516) {
    method_dispatcher_tt36X2ncayc7iQeNkctM4F(S, method, data);
    return 1;
  }

  return 0;
}

int cgxe_robocup_model_autoInfer_dispatcher(const mxArray* prhs, mxArray* lhs[],
  const char* commandName)
{
  char sid[64];
  mxGetString(prhs,sid, sizeof(sid)/sizeof(char));
  sid[(sizeof(sid)/sizeof(char)-1)] = '\0';
  if (strcmp(sid, "robocup_model:85") == 0 ) {
    return autoInfer_dispatcher_nDmS38SZ3sHBJKA7UrolW(lhs, commandName);
  }

  mxGetString(prhs,sid, sizeof(sid)/sizeof(char));
  sid[(sizeof(sid)/sizeof(char)-1)] = '\0';
  if (strcmp(sid, "robocup_model:121") == 0 ) {
    return autoInfer_dispatcher_tt36X2ncayc7iQeNkctM4F(lhs, commandName);
  }

  return 0;
}

int *ssGetCurrentInputPortDimensions_wrapper(SimStruct *S,int portNumber)
{
  return((int *)(&(ssGetCurrentInputPortDimensions(S, portNumber, 0))));
}

int *ssGetCurrentOutputPortDimensions_wrapper(SimStruct *S,int portNumber)
{
  return(&(ssGetCurrentOutputPortDimensions(S, portNumber, 0)));
}

static unsigned int cgxe_listen_for_ctrl_c_force(SimStruct *S, emlrtCTX aCtx)
{
  mxArray *plhs[1]= { NULL };

  mxArray *prhs[2];
  emlrtBreakCheckR2012b(aCtx);
  prhs[0] = mxCreateString("listen_for_ctrlc");
  prhs[1] = mxCreateString("robocup_model");
  mexCallMATLAB(1,plhs,2,prhs,"cgxeprivate");
  mxDestroyArray(prhs[0]);
  mxDestroyArray(prhs[1]);
  if (plhs[0]!=NULL) {
    unsigned int simStatus = (unsigned int)mxGetScalar(plhs[0]);
    mxDestroyArray(plhs[0]);
    if (simStatus==CGXE_SIM_STOPPED) {
      emlrtBreakSimulation(aCtx);
    }

    return(simStatus);
  }

  return(0);
}

#ifdef WATCOM
#define CONTROL_C_THRESHOLD            1000

unsigned int cgxe_listen_for_ctrl_c(SimStruct *S, emlrtCTX aCtx)
{
  static unsigned int sControlCCount = 0;
  sControlCCount++;
  if (sControlCCount>=CONTROL_C_THRESHOLD) {
    unsigned int result;
    sControlCCount = 0;
    result = cgxe_listen_for_ctrl_c_force(S,aCtx);
  }

  return(0);
}

#else                                  /* #ifdef WATCOM */

unsigned int cgxe_listen_for_ctrl_c(SimStruct *S, emlrtCTX aCtx)
{
  static double lastCpuTime = 0;
  double cpuTime = utCPUtime();
  if (cpuTime - lastCpuTime > 0.3) {
    unsigned int result;
    lastCpuTime = cpuTime;
    result = cgxe_listen_for_ctrl_c_force(S,aCtx);
  }

  return(0);
}

#endif
