#ifndef __UNza5NJYMU5Va6ej8pRN9F_h__
#define __UNza5NJYMU5Va6ej8pRN9F_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef struct_tag_sr5gBZ1lzeX3YxnupIGQHlC
#define struct_tag_sr5gBZ1lzeX3YxnupIGQHlC

struct tag_sr5gBZ1lzeX3YxnupIGQHlC
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  real_T M_bot;
  real_T I_bot;
  real_T g;
  real_T r;
  real_T L;
  real_T Rt;
  real_T K_e;
  real_T K_t;
  real_T K_f;
  real_T I_asm;
  real_T V;
  real_T wheel_angles[4];
};

#endif                                 /*struct_tag_sr5gBZ1lzeX3YxnupIGQHlC*/

#ifndef typedef_RobotParams
#define typedef_RobotParams

typedef struct tag_sr5gBZ1lzeX3YxnupIGQHlC RobotParams;

#endif                                 /*typedef_RobotParams*/

#ifndef typedef_InstanceStruct_UNza5NJYMU5Va6ej8pRN9F
#define typedef_InstanceStruct_UNza5NJYMU5Va6ej8pRN9F

typedef struct {
  SimStruct *S;
  RobotParams sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  covrtInstance *covInst;
  real_T (*b_y0)[9];
  real_T (*b_y1)[9];
  real_T (*y2)[12];
} InstanceStruct_UNza5NJYMU5Va6ej8pRN9F;

#endif                                 /*typedef_InstanceStruct_UNza5NJYMU5Va6ej8pRN9F*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_UNza5NJYMU5Va6ej8pRN9F(SimStruct *S, int_T method,
  void* data);

#endif
