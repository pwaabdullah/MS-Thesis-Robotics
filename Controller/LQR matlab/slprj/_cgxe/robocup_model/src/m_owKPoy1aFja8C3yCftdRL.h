#ifndef __owKPoy1aFja8C3yCftdRL_h__
#define __owKPoy1aFja8C3yCftdRL_h__

/* Include files */
#include "simstruc.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef struct_tag_saG5948SFTrUFnIbVUb0TZH
#define struct_tag_saG5948SFTrUFnIbVUb0TZH

struct tag_saG5948SFTrUFnIbVUb0TZH
{
  int32_T isInitialized;
};

#endif                                 /*struct_tag_saG5948SFTrUFnIbVUb0TZH*/

#ifndef typedef_Global2Body
#define typedef_Global2Body

typedef struct tag_saG5948SFTrUFnIbVUb0TZH Global2Body;

#endif                                 /*typedef_Global2Body*/

#ifndef typedef_InstanceStruct_owKPoy1aFja8C3yCftdRL
#define typedef_InstanceStruct_owKPoy1aFja8C3yCftdRL

typedef struct {
  SimStruct *S;
  Global2Body sysobj;
  boolean_T sysobj_not_empty;
  void *emlrtRootTLSGlobal;
  covrtInstance *covInst;
  real_T (*u0)[3];
  real_T *u1;
  real_T (*b_y0)[3];
} InstanceStruct_owKPoy1aFja8C3yCftdRL;

#endif                                 /*typedef_InstanceStruct_owKPoy1aFja8C3yCftdRL*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
extern void method_dispatcher_owKPoy1aFja8C3yCftdRL(SimStruct *S, int_T method,
  void* data);

#endif
