/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "S1AP-IEs.asn"
 */

#include "S1ap-LastVisitedGERANCellInformation.h"

static asn_TYPE_member_t asn_MBR_S1ap_LastVisitedGERANCellInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_LastVisitedGERANCellInformation, choice.undefined),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"undefined"
		},
};
static asn_TYPE_tag2member_t asn_MAP_S1ap_LastVisitedGERANCellInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* undefined at 801 */
};
static asn_CHOICE_specifics_t asn_SPC_S1ap_LastVisitedGERANCellInformation_specs_1 = {
	sizeof(struct S1ap_LastVisitedGERANCellInformation),
	offsetof(struct S1ap_LastVisitedGERANCellInformation, _asn_ctx),
	offsetof(struct S1ap_LastVisitedGERANCellInformation, present),
	sizeof(((struct S1ap_LastVisitedGERANCellInformation *)0)->present),
	asn_MAP_S1ap_LastVisitedGERANCellInformation_tag2el_1,
	1,	/* Count of tags in the map */
	0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_LastVisitedGERANCellInformation = {
	"S1ap-LastVisitedGERANCellInformation",
	"S1ap-LastVisitedGERANCellInformation",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No UPER support, use "-gen-PER" to enable */
	0, 0,	/* No APER support, use "-gen-PER" to enable */
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_LastVisitedGERANCellInformation_1,
	1,	/* Elements count */
	&asn_SPC_S1ap_LastVisitedGERANCellInformation_specs_1	/* Additional specs */
};

