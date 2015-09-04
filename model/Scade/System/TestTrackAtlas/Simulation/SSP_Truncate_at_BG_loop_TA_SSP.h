/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _SSP_Truncate_at_BG_loop_TA_SSP_H_
#define _SSP_Truncate_at_BG_loop_TA_SSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_SSP::SSP_Truncate_at_BG_loop::cont */ cont;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Truncate_at_BG_loop::Profile_out */ Profile_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_SSP::SSP_Truncate_at_BG_loop::_L1 */ _L1;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Truncate_at_BG_loop::_L2 */ _L2;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Truncate_at_BG_loop::_L3 */ _L3;
  kcg_int /* TA_SSP::SSP_Truncate_at_BG_loop::_L4 */ _L4;
  StaticSpeedProfile_t_TrackAtlasTypes /* TA_SSP::SSP_Truncate_at_BG_loop::_L5 */ _L5;
  kcg_int /* TA_SSP::SSP_Truncate_at_BG_loop::_L6 */ _L6;
  kcg_int /* TA_SSP::SSP_Truncate_at_BG_loop::_L7 */ _L7;
  StaticSpeedSection_t_TrackAtlasTypes /* TA_SSP::SSP_Truncate_at_BG_loop::_L8 */ _L8;
  kcg_bool /* TA_SSP::SSP_Truncate_at_BG_loop::_L9 */ _L9;
} outC_SSP_Truncate_at_BG_loop_TA_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* TA_SSP::SSP_Truncate_at_BG_loop */
extern void SSP_Truncate_at_BG_loop_TA_SSP(
  /* TA_SSP::SSP_Truncate_at_BG_loop::i */kcg_int i,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Acc */StaticSpeedProfile_t_TrackAtlasTypes *Acc,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_SSP::SSP_Truncate_at_BG_loop::Pointer */kcg_int Pointer,
  outC_SSP_Truncate_at_BG_loop_TA_SSP *outC);

extern void SSP_Truncate_at_BG_loop_reset_TA_SSP(
  outC_SSP_Truncate_at_BG_loop_TA_SSP *outC);

#endif /* _SSP_Truncate_at_BG_loop_TA_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Truncate_at_BG_loop_TA_SSP.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

