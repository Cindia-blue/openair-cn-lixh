/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/lixh/v0.1.0/openair-cn/src/s1ap/messages/asn1/r10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_Data_Forwarding_Not_Possible_H_
#define	_S1ap_Data_Forwarding_Not_Possible_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_Data_Forwarding_Not_Possible {
	S1ap_Data_Forwarding_Not_Possible_data_Forwarding_not_Possible	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1ap_Data_Forwarding_Not_Possible;

/* S1ap-Data-Forwarding-Not-Possible */
typedef long	 S1ap_Data_Forwarding_Not_Possible_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_Data_Forwarding_Not_Possible;
asn_struct_free_f S1ap_Data_Forwarding_Not_Possible_free;
asn_struct_print_f S1ap_Data_Forwarding_Not_Possible_print;
asn_constr_check_f S1ap_Data_Forwarding_Not_Possible_constraint;
ber_type_decoder_f S1ap_Data_Forwarding_Not_Possible_decode_ber;
der_type_encoder_f S1ap_Data_Forwarding_Not_Possible_encode_der;
xer_type_decoder_f S1ap_Data_Forwarding_Not_Possible_decode_xer;
xer_type_encoder_f S1ap_Data_Forwarding_Not_Possible_encode_xer;
per_type_decoder_f S1ap_Data_Forwarding_Not_Possible_decode_uper;
per_type_encoder_f S1ap_Data_Forwarding_Not_Possible_encode_uper;
per_type_decoder_f S1ap_Data_Forwarding_Not_Possible_decode_aper;
per_type_encoder_f S1ap_Data_Forwarding_Not_Possible_encode_aper;
type_compare_f     S1ap_Data_Forwarding_Not_Possible_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_Data_Forwarding_Not_Possible_H_ */
#include <asn_internal.h>
