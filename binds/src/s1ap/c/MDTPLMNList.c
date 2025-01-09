/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "MDTPLMNList.h"

static asn_oer_constraints_t asn_OER_type_MDTPLMNList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
static asn_per_constraints_t asn_PER_type_MDTPLMNList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_MDTPLMNList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_PLMNidentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_MDTPLMNList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_MDTPLMNList_specs_1 = {
	sizeof(struct MDTPLMNList),
	offsetof(struct MDTPLMNList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_MDTPLMNList = {
	"MDTPLMNList",
	"MDTPLMNList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_MDTPLMNList_tags_1,
	sizeof(asn_DEF_MDTPLMNList_tags_1)
		/sizeof(asn_DEF_MDTPLMNList_tags_1[0]), /* 1 */
	asn_DEF_MDTPLMNList_tags_1,	/* Same as above */
	sizeof(asn_DEF_MDTPLMNList_tags_1)
		/sizeof(asn_DEF_MDTPLMNList_tags_1[0]), /* 1 */
	{ &asn_OER_type_MDTPLMNList_constr_1, &asn_PER_type_MDTPLMNList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_MDTPLMNList_1,
	1,	/* Single element */
	&asn_SPC_MDTPLMNList_specs_1	/* Additional specs */
};

