/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config S:/modeling/test/EnvSim/Scade/Simulation/config.txt
** Generation date: 2015-10-29T09:08:52
*************************************************************$ */
#ifndef _ProbeSDM_EnvSim_H_
#define _ProbeSDM_EnvSim_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* --------------------- no memorised outputs  --------------------- */
  /* -------------  insert eventual inits and memories  -------------- */
} outC_ProbeSDM_EnvSim;

/* ===========  node initialization and cycle functions  =========== */
/* EnvSim::ProbeSDM */
extern void ProbeSDM_EnvSim(
  /* EnvSim::ProbeSDM::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  /* EnvSim::ProbeSDM::curveCollection */ CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* EnvSim::ProbeSDM::target */ Target_T_TargetManagement_types *target,
  outC_ProbeSDM_EnvSim *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ProbeSDM_reset_EnvSim(outC_ProbeSDM_EnvSim *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

extern void ProbeSDM_init_EnvSim(outC_ProbeSDM_EnvSim *outC);

#endif /* _ProbeSDM_EnvSim_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ProbeSDM_EnvSim.dh
** Generation date: 2015-10-29T09:08:52
*************************************************************$ */

