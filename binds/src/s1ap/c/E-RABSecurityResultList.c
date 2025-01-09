/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "E-RABSecurityResultList.h"

static asn_oer_constraints_t asn_OER_type_E_RABSecurityResultList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..256)) */};
static asn_per_constraints_t asn_PER_type_E_RABSecurityResultList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_E_RABSecurityResultList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_ProtocolIE_SingleContainer_8146P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_E_RABSecurityResultList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_E_RABSecurityResultList_specs_1 = {
	sizeof(struct E_RABSecurityResultList),
	offsetof(struct E_RABSecurityResultList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_E_RABSecurityResultList = {
	"E-RABSecurityResultList",
	"E-RABSecurityResultList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_E_RABSecurityResultList_tags_1,
	sizeof(asn_DEF_E_RABSecurityResultList_tags_1)
		/sizeof(asn_DEF_E_RABSecurityResultList_tags_1[0]), /* 1 */
	asn_DEF_E_RABSecurityResultList_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RABSecurityResultList_tags_1)
		/sizeof(asn_DEF_E_RABSecurityResultList_tags_1[0]), /* 1 */
	{ &asn_OER_type_E_RABSecurityResultList_constr_1, &asn_PER_type_E_RABSecurityResultList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_E_RABSecurityResultList_1,
	1,	/* Single element */
	&asn_SPC_E_RABSecurityResultList_specs_1	/* Additional specs */
};

