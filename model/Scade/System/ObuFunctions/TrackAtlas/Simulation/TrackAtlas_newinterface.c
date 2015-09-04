#include "TrackAtlas_newinterface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "6a1636420b3f4005664f322e6edaa0bb";
const char* _SCSIM_SmuTypesCheckSum = "f79c40cc4a28a84eb05b013596813063";

/*******************************
 * Validity
 *******************************/
int valid(void * pHandle) {
	return 1;
}
int notvalid(void * pHandle) {
	return 0;
}

/*******************************
 * Simulation context
 *******************************/
inC_TrainLength_Correction_TA_Lib_internal inputs_ctx;
static inC_TrainLength_Correction_TA_Lib_internal inputs_ctx_restore;
static inC_TrainLength_Correction_TA_Lib_internal inputs_ctx_execute;
outC_TrainLength_Correction_TA_Lib_internal outputs_ctx;
static outC_TrainLength_Correction_TA_Lib_internal outputs_ctx_restore;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
	kcg_copy_array__144(&(inputs_ctx.Static_Speed_Profile), &(inputs_ctx_restore.Static_Speed_Profile));
	inputs_ctx.train_length = inputs_ctx_restore.train_length;
	inputs_ctx.i = inputs_ctx_restore.i;
	inputs_ctx.v_static = inputs_ctx_restore.v_static;
	inputs_ctx.distance = inputs_ctx_restore.distance;
	outputs_ctx = outputs_ctx_restore;

	/* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	kcg_copy_array__144(&(inputs_ctx_execute.Static_Speed_Profile), &(inputs_ctx.Static_Speed_Profile));
	inputs_ctx_execute.train_length = inputs_ctx.train_length;
	inputs_ctx_execute.i = inputs_ctx.i;
	inputs_ctx_execute.v_static = inputs_ctx.v_static;
	inputs_ctx_execute.distance = inputs_ctx.distance;
	pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

/*******************************
 * Init/Reset function encapsulation
 *******************************/
int SimInit(void) {
	int nRet=0;
	_SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
	BeforeSimInit();
#endif /* EXTENDED_SIM */
	nRet=0;
#ifdef EXTENDED_SIM
	AfterSimInit();
#endif /* EXTENDED_SIM */
	return nRet;
}

int SimReset(void) {
	int nRet=0;
	_SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
	BeforeSimInit();
#endif /* EXTENDED_SIM */
#ifndef KCG_NO_EXTERN_CALL_TO_RESET
	TrainLength_Correction_reset_TA_Lib_internal(&outputs_ctx);
	nRet=1;
#else /* KCG_NO_EXTERN_CALL_TO_RESET */
	nRet=0;
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */
#ifdef EXTENDED_SIM
	AfterSimInit();
#endif /* EXTENDED_SIM */
	return nRet;
}

#ifdef EXTENDED_SIM
int GraphicalInputsConnected = 1;
#endif /* EXTENDED_SIM */
/*******************************
 * Cyclic function encapsulation
 *******************************/
int SimStep(void) {
#ifdef EXTENDED_SIM
	if (GraphicalInputsConnected)
		BeforeSimStep();
#endif /* EXTENDED_SIM */
	_SCSIM_ExecuteInterface();
	TrainLength_Correction_TA_Lib_internal(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
	AfterSimStep();
#endif /* EXTENDED_SIM */
	return 1;
}

int SimStop(void) {
#ifdef EXTENDED_SIM
	ExtendedSimStop();
#endif /* EXTENDED_SIM */
	return 1;
}

int SsmGetDumpSize(void) {
	int nSize = 0;
	nSize += sizeof(inC_TrainLength_Correction_TA_Lib_internal);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
	nSize += sizeof(outC_TrainLength_Correction_TA_Lib_internal);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &inputs_ctx, sizeof(inC_TrainLength_Correction_TA_Lib_internal));
	pCurrent += sizeof(inC_TrainLength_Correction_TA_Lib_internal);

	/* separate_io: dump (not in ctx) inputs */

	/* separate_io: dump (not in ctx) outputs */
	memcpy(pCurrent, &outputs_ctx, sizeof(outC_TrainLength_Correction_TA_Lib_internal));
	pCurrent += sizeof(outC_TrainLength_Correction_TA_Lib_internal);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&inputs_ctx, pCurrent, sizeof(inC_TrainLength_Correction_TA_Lib_internal));
	pCurrent += sizeof(inC_TrainLength_Correction_TA_Lib_internal);

	/* separate_io: restore (not in ctx) inputs */

	/* separate_io: restore (not in ctx) outputs */
	memcpy(&outputs_ctx, pCurrent, sizeof(outC_TrainLength_Correction_TA_Lib_internal));
	pCurrent += sizeof(outC_TrainLength_Correction_TA_Lib_internal);
#ifdef EXTENDED_SIM
	ExtendedRestoreDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

const char * SsmGetCheckSum() {
	return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
	return _SCSIM_SmuTypesCheckSum;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
	UpdateValues();
#endif /* EXTENDED_SIM */
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
	GraphicalInputsConnected = bConnect;
#endif /* EXTENDED_SIM */
}

