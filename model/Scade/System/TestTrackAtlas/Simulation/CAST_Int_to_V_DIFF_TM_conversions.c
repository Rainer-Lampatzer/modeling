/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_DIFF_TM_conversions.h"

void CAST_Int_to_V_DIFF_reset_TM_conversions(
  outC_CAST_Int_to_V_DIFF_TM_conversions *outC)
{
}

/* TM_conversions::CAST_Int_to_V_DIFF */
void CAST_Int_to_V_DIFF_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_DIFF::v_diff_int */kcg_int v_diff_int,
  outC_CAST_Int_to_V_DIFF_TM_conversions *outC)
{
  kcg_bool noname;
  kcg_bool _1_noname;
  
  outC->_L12 = 5;
  outC->_L1 = v_diff_int;
  outC->_L11 = outC->_L1 * outC->_L12;
  outC->_L7 = 120;
  outC->_L9 = outC->_L1 > outC->_L7;
  outC->_L6 = 0;
  outC->_L8 = outC->_L1 < outC->_L6;
  _1_noname = outC->_L8;
  noname = outC->_L9;
  outC->v_diff = outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_DIFF_TM_conversions.c
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */
