/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "S1AP-IEs.asn"
 */

#include "S1ap-ECGIList.h"

static asn_TYPE_member_t asn_MBR_S1ap_ECGIList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1ap_EUTRAN_CGI,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_S1ap_ECGIList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_S1ap_ECGIList_specs_1 = {
	sizeof(struct S1ap_ECGIList),
	offsetof(struct S1ap_ECGIList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_ECGIList = {
	"S1ap-ECGIList",
	"S1ap-ECGIList",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	0, 0,	/* No UPER support, use "-gen-PER" to enable */
	0, 0,	/* No APER support, use "-gen-PER" to enable */
	SEQUENCE_OF_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_S1ap_ECGIList_tags_1,
	sizeof(asn_DEF_S1ap_ECGIList_tags_1)
		/sizeof(asn_DEF_S1ap_ECGIList_tags_1[0]), /* 1 */
	asn_DEF_S1ap_ECGIList_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_ECGIList_tags_1)
		/sizeof(asn_DEF_S1ap_ECGIList_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_ECGIList_1,
	1,	/* Single element */
	&asn_SPC_S1ap_ECGIList_specs_1	/* Additional specs */
};

