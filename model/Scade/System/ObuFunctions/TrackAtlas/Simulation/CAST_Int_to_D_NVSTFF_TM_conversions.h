/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _CAST_Int_to_D_NVSTFF_TM_conversions_H_
#define _CAST_Int_to_D_NVSTFF_TM_conversions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  D_NVSTFF /* TM_conversions::CAST_Int_to_D_NVSTFF::d_nvstff */ d_nvstff;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_conversions::CAST_Int_to_D_NVSTFF::_L1 */ _L1;
  kcg_bool /* TM_conversions::CAST_Int_to_D_NVSTFF::_L9 */ _L9;
  kcg_bool /* TM_conversions::CAST_Int_to_D_NVSTFF::_L8 */ _L8;
  kcg_int /* TM_conversions::CAST_Int_to_D_NVSTFF::_L7 */ _L7;
  kcg_int /* TM_conversions::CAST_Int_to_D_NVSTFF::_L6 */ _L6;
} outC_CAST_Int_to_D_NVSTFF_TM_conversions;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions::CAST_Int_to_D_NVSTFF */
extern void CAST_Int_to_D_NVSTFF_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_NVSTFF::d_nvstff_int */kcg_int d_nvstff_int,
  outC_CAST_Int_to_D_NVSTFF_TM_conversions *outC);

extern void CAST_Int_to_D_NVSTFF_reset_TM_conversions(
  outC_CAST_Int_to_D_NVSTFF_TM_conversions *outC);

#endif /* _CAST_Int_to_D_NVSTFF_TM_conversions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_D_NVSTFF_TM_conversions.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

