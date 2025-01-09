/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "MeasurementThresholdL1LoggedMDT.h"

static asn_oer_constraints_t asn_OER_type_MeasurementThresholdL1LoggedMDT_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_MeasurementThresholdL1LoggedMDT_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MeasurementThresholdL1LoggedMDT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementThresholdL1LoggedMDT, choice.threshold_RSRP),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Threshold_RSRP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshold-RSRP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementThresholdL1LoggedMDT, choice.threshold_RSRQ),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Threshold_RSRQ,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"threshold-RSRQ"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasurementThresholdL1LoggedMDT, choice.choice_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_SingleContainer_8146P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"choice-Extensions"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_MeasurementThresholdL1LoggedMDT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* threshold-RSRP */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* threshold-RSRQ */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* choice-Extensions */
};
asn_CHOICE_specifics_t asn_SPC_MeasurementThresholdL1LoggedMDT_specs_1 = {
	sizeof(struct MeasurementThresholdL1LoggedMDT),
	offsetof(struct MeasurementThresholdL1LoggedMDT, _asn_ctx),
	offsetof(struct MeasurementThresholdL1LoggedMDT, present),
	sizeof(((struct MeasurementThresholdL1LoggedMDT *)0)->present),
	asn_MAP_MeasurementThresholdL1LoggedMDT_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MeasurementThresholdL1LoggedMDT = {
	"MeasurementThresholdL1LoggedMDT",
	"MeasurementThresholdL1LoggedMDT",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_MeasurementThresholdL1LoggedMDT_constr_1, &asn_PER_type_MeasurementThresholdL1LoggedMDT_constr_1, CHOICE_constraint },
	asn_MBR_MeasurementThresholdL1LoggedMDT_1,
	3,	/* Elements count */
	&asn_SPC_MeasurementThresholdL1LoggedMDT_specs_1	/* Additional specs */
};
