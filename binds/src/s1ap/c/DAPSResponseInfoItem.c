/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "DAPSResponseInfoItem.h"

static asn_TYPE_member_t asn_MBR_DAPSResponseInfoItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DAPSResponseInfoItem, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DAPSResponseInfoItem, dAPSResponseInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DAPSResponseInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dAPSResponseInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct DAPSResponseInfoItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_8194P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_DAPSResponseInfoItem_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_DAPSResponseInfoItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DAPSResponseInfoItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dAPSResponseInfo */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_DAPSResponseInfoItem_specs_1 = {
	sizeof(struct DAPSResponseInfoItem),
	offsetof(struct DAPSResponseInfoItem, _asn_ctx),
	asn_MAP_DAPSResponseInfoItem_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_DAPSResponseInfoItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DAPSResponseInfoItem = {
	"DAPSResponseInfoItem",
	"DAPSResponseInfoItem",
	&asn_OP_SEQUENCE,
	asn_DEF_DAPSResponseInfoItem_tags_1,
	sizeof(asn_DEF_DAPSResponseInfoItem_tags_1)
		/sizeof(asn_DEF_DAPSResponseInfoItem_tags_1[0]), /* 1 */
	asn_DEF_DAPSResponseInfoItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_DAPSResponseInfoItem_tags_1)
		/sizeof(asn_DEF_DAPSResponseInfoItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DAPSResponseInfoItem_1,
	3,	/* Elements count */
	&asn_SPC_DAPSResponseInfoItem_specs_1	/* Additional specs */
};

