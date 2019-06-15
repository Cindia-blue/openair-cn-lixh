/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-CommonDataTypes"
 * 	found in "/home/lixh/v0.1.0/openair-cn/src/s1ap/messages/asn1/r10.5/S1AP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_TriggeringMessage_H_
#define	_S1ap_TriggeringMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_TriggeringMessage {
	S1ap_TriggeringMessage_initiating_message	= 0,
	S1ap_TriggeringMessage_successful_outcome	= 1,
	S1ap_TriggeringMessage_unsuccessfull_outcome	= 2
} e_S1ap_TriggeringMessage;

/* S1ap-TriggeringMessage */
typedef long	 S1ap_TriggeringMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_TriggeringMessage;
asn_struct_free_f S1ap_TriggeringMessage_free;
asn_struct_print_f S1ap_TriggeringMessage_print;
asn_constr_check_f S1ap_TriggeringMessage_constraint;
ber_type_decoder_f S1ap_TriggeringMessage_decode_ber;
der_type_encoder_f S1ap_TriggeringMessage_encode_der;
xer_type_decoder_f S1ap_TriggeringMessage_decode_xer;
xer_type_encoder_f S1ap_TriggeringMessage_encode_xer;
per_type_decoder_f S1ap_TriggeringMessage_decode_uper;
per_type_encoder_f S1ap_TriggeringMessage_encode_uper;
per_type_decoder_f S1ap_TriggeringMessage_decode_aper;
per_type_encoder_f S1ap_TriggeringMessage_encode_aper;
type_compare_f     S1ap_TriggeringMessage_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_TriggeringMessage_H_ */
#include <asn_internal.h>
