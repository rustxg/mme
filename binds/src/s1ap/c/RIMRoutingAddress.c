/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "RIMRoutingAddress.h"

static int
memb_eHRPD_Sector_ID_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 16)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_eHRPD_Sector_ID_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	16	/* (SIZE(16..16)) */};
static asn_per_constraints_t asn_PER_memb_eHRPD_Sector_ID_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  16,  16 }	/* (SIZE(16..16)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_RIMRoutingAddress_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_RIMRoutingAddress_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RIMRoutingAddress_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RIMRoutingAddress, choice.gERAN_Cell_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GERAN_Cell_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gERAN-Cell-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RIMRoutingAddress, choice.targetRNC_ID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TargetRNC_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetRNC-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RIMRoutingAddress, choice.eHRPD_Sector_ID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_eHRPD_Sector_ID_constr_5, &asn_PER_memb_eHRPD_Sector_ID_constr_5,  memb_eHRPD_Sector_ID_constraint_1 },
		0, 0, /* No default value */
		"eHRPD-Sector-ID"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_RIMRoutingAddress_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gERAN-Cell-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targetRNC-ID */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* eHRPD-Sector-ID */
};
asn_CHOICE_specifics_t asn_SPC_RIMRoutingAddress_specs_1 = {
	sizeof(struct RIMRoutingAddress),
	offsetof(struct RIMRoutingAddress, _asn_ctx),
	offsetof(struct RIMRoutingAddress, present),
	sizeof(((struct RIMRoutingAddress *)0)->present),
	asn_MAP_RIMRoutingAddress_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_RIMRoutingAddress = {
	"RIMRoutingAddress",
	"RIMRoutingAddress",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_RIMRoutingAddress_constr_1, &asn_PER_type_RIMRoutingAddress_constr_1, CHOICE_constraint },
	asn_MBR_RIMRoutingAddress_1,
	3,	/* Elements count */
	&asn_SPC_RIMRoutingAddress_specs_1	/* Additional specs */
};

