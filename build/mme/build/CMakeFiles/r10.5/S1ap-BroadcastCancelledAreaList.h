/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/v0.1.0/openair-cn/src/s1ap/messages/asn1/r10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_BroadcastCancelledAreaList_H_
#define	_S1ap_BroadcastCancelledAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-CellID-Cancelled.h"
#include "S1ap-TAI-Cancelled.h"
#include "S1ap-EmergencyAreaID-Cancelled.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_BroadcastCancelledAreaList_PR {
	S1ap_BroadcastCancelledAreaList_PR_NOTHING,	/* No components present */
	S1ap_BroadcastCancelledAreaList_PR_cellID_Cancelled,
	S1ap_BroadcastCancelledAreaList_PR_tAI_Cancelled,
	S1ap_BroadcastCancelledAreaList_PR_emergencyAreaID_Cancelled,
	/* Extensions may appear below */
	
} S1ap_BroadcastCancelledAreaList_PR;

/* S1ap-BroadcastCancelledAreaList */
typedef struct S1ap_BroadcastCancelledAreaList {
	S1ap_BroadcastCancelledAreaList_PR present;
	union S1ap_BroadcastCancelledAreaList_u {
		S1ap_CellID_Cancelled_t	 cellID_Cancelled;
		S1ap_TAI_Cancelled_t	 tAI_Cancelled;
		S1ap_EmergencyAreaID_Cancelled_t	 emergencyAreaID_Cancelled;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_BroadcastCancelledAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_BroadcastCancelledAreaList;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_BroadcastCancelledAreaList_H_ */
#include <asn_internal.h>
