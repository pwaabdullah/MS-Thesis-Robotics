/* Include files */

#include "robocup_model_cgxe.h"
#include "m_owKPoy1aFja8C3yCftdRL.h"
#include "m_UNza5NJYMU5Va6ej8pRN9F.h"

unsigned int cgxe_robocup_model_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 2837309474 &&
      ssGetChecksum1(S) == 1635128444 &&
      ssGetChecksum2(S) == 2603969495 &&
      ssGetChecksum3(S) == 1999517435) {
    method_dispatcher_owKPoy1aFja8C3yCftdRL(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3225565520 &&
      ssGetChecksum1(S) == 3698230950 &&
      ssGetChecksum2(S) == 1847306651 &&
      ssGetChecksum3(S) == 3248063875) {
    method_dispatcher_UNza5NJYMU5Va6ej8pRN9F(S, method, data);
    return 1;
  }

  return 0;
}
