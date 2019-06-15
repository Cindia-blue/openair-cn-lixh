/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/v0.1.0/openair-cn/src/s1ap/messages/asn1/r10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_CauseRadioNetwork_H_
#define	_S1ap_CauseRadioNetwork_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_CauseRadioNetwork {
	S1ap_CauseRadioNetwork_unspecified	= 0,
	S1ap_CauseRadioNetwork_tx2relocoverall_expiry	= 1,
	S1ap_CauseRadioNetwork_successful_handover	= 2,
	S1ap_CauseRadioNetwork_release_due_to_eutran_generated_reason	= 3,
	S1ap_CauseRadioNetwork_handover_cancelled	= 4,
	S1ap_CauseRadioNetwork_partial_handover	= 5,
	S1ap_CauseRadioNetwork_ho_failure_in_target_EPC_eNB_or_target_system	= 6,
	S1ap_CauseRadioNetwork_ho_target_not_allowed	= 7,
	S1ap_CauseRadioNetwork_tS1relocoverall_expiry	= 8,
	S1ap_CauseRadioNetwork_tS1relocprep_expiry	= 9,
	S1ap_CauseRadioNetwork_cell_not_available	= 10,
	S1ap_CauseRadioNetwork_unknown_targetID	= 11,
	S1ap_CauseRadioNetwork_no_radio_resources_available_in_target_cell	= 12,
	S1ap_CauseRadioNetwork_unknown_mme_ue_s1ap_id	= 13,
	S1ap_CauseRadioNetwork_unknown_enb_ue_s1ap_id	= 14,
	S1ap_CauseRadioNetwork_unknown_pair_ue_s1ap_id	= 15,
	S1ap_CauseRadioNetwork_handover_desirable_for_radio_reason	= 16,
	S1ap_CauseRadioNetwork_time_critical_handover	= 17,
	S1ap_CauseRadioNetwork_resource_optimisation_handover	= 18,
	S1ap_CauseRadioNetwork_reduce_load_in_serving_cell	= 19,
	S1ap_CauseRadioNetwork_user_inactivity	= 20,
	S1ap_CauseRadioNetwork_radio_connection_with_ue_lost	= 21,
	S1ap_CauseRadioNetwork_load_balancing_tau_required	= 22,
	S1ap_CauseRadioNetwork_cs_fallback_triggered	= 23,
	S1ap_CauseRadioNetwork_ue_not_available_for_ps_service	= 24,
	S1ap_CauseRadioNetwork_radio_resources_not_available	= 25,
	S1ap_CauseRadioNetwork_failure_in_radio_interface_procedure	= 26,
	S1ap_CauseRadioNetwork_invals1ap_id_qos_combination	= 27,
	S1ap_CauseRadioNetwork_interrat_redirection	= 28,
	S1ap_CauseRadioNetwork_interaction_with_other_procedure	= 29,
	S1ap_CauseRadioNetwork_unknown_E_RAB_ID	= 30,
	S1ap_CauseRadioNetwork_multiple_E_RAB_ID_instances	= 31,
	S1ap_CauseRadioNetwork_encryption_and_or_integrity_protection_algorithms_not_supported	= 32,
	S1ap_CauseRadioNetwork_s1_intra_system_handover_triggered	= 33,
	S1ap_CauseRadioNetwork_s1_inter_system_handover_triggered	= 34,
	S1ap_CauseRadioNetwork_x2_handover_triggered	= 35,
	/*
	 * Enumeration is extensible
	 */
	S1ap_CauseRadioNetwork_redirection_towards_1xRTT	= 36,
	S1ap_CauseRadioNetwork_not_supported_QCI_value	= 37,
	S1ap_CauseRadioNetwork_invals1ap_id_CSG_Id	= 38
} e_S1ap_CauseRadioNetwork;

/* S1ap-CauseRadioNetwork */
typedef long	 S1ap_CauseRadioNetwork_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_CauseRadioNetwork;
asn_struct_free_f S1ap_CauseRadioNetwork_free;
asn_struct_print_f S1ap_CauseRadioNetwork_print;
asn_constr_check_f S1ap_CauseRadioNetwork_constraint;
ber_type_decoder_f S1ap_CauseRadioNetwork_decode_ber;
der_type_encoder_f S1ap_CauseRadioNetwork_encode_der;
xer_type_decoder_f S1ap_CauseRadioNetwork_decode_xer;
xer_type_encoder_f S1ap_CauseRadioNetwork_encode_xer;
per_type_decoder_f S1ap_CauseRadioNetwork_decode_uper;
per_type_encoder_f S1ap_CauseRadioNetwork_encode_uper;
per_type_decoder_f S1ap_CauseRadioNetwork_decode_aper;
per_type_encoder_f S1ap_CauseRadioNetwork_encode_aper;
type_compare_f     S1ap_CauseRadioNetwork_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_CauseRadioNetwork_H_ */
#include <asn_internal.h>
