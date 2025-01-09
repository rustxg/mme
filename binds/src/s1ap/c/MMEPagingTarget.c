/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "MMEPagingTarget.h"

static asn_oer_constraints_t asn_OER_type_MMEPagingTarget_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_MMEPagingTarget_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MMEPagingTarget_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MMEPagingTarget, choice.global_ENB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Global_ENB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"global-ENB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MMEPagingTarget, choice.tAI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tAI"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_MMEPagingTarget_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* global-ENB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tAI */
};
asn_CHOICE_specifics_t asn_SPC_MMEPagingTarget_specs_1 = {
	sizeof(struct MMEPagingTarget),
	offsetof(struct MMEPagingTarget, _asn_ctx),
	offsetof(struct MMEPagingTarget, present),
	sizeof(((struct MMEPagingTarget *)0)->present),
	asn_MAP_MMEPagingTarget_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MMEPagingTarget = {
	"MMEPagingTarget",
	"MMEPagingTarget",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_MMEPagingTarget_constr_1, &asn_PER_type_MMEPagingTarget_constr_1, CHOICE_constraint },
	asn_MBR_MMEPagingTarget_1,
	2,	/* Elements count */
	&asn_SPC_MMEPagingTarget_specs_1	/* Additional specs */
};
