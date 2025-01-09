/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "WUS-Assistance-Information.h"

static asn_TYPE_member_t asn_MBR_WUS_Assistance_Information_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WUS_Assistance_Information, pagingProbabilityInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PagingProbabilityInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pagingProbabilityInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct WUS_Assistance_Information, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_8194P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_WUS_Assistance_Information_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_WUS_Assistance_Information_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_WUS_Assistance_Information_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pagingProbabilityInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_WUS_Assistance_Information_specs_1 = {
	sizeof(struct WUS_Assistance_Information),
	offsetof(struct WUS_Assistance_Information, _asn_ctx),
	asn_MAP_WUS_Assistance_Information_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_WUS_Assistance_Information_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_WUS_Assistance_Information = {
	"WUS-Assistance-Information",
	"WUS-Assistance-Information",
	&asn_OP_SEQUENCE,
	asn_DEF_WUS_Assistance_Information_tags_1,
	sizeof(asn_DEF_WUS_Assistance_Information_tags_1)
		/sizeof(asn_DEF_WUS_Assistance_Information_tags_1[0]), /* 1 */
	asn_DEF_WUS_Assistance_Information_tags_1,	/* Same as above */
	sizeof(asn_DEF_WUS_Assistance_Information_tags_1)
		/sizeof(asn_DEF_WUS_Assistance_Information_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_WUS_Assistance_Information_1,
	2,	/* Elements count */
	&asn_SPC_WUS_Assistance_Information_specs_1	/* Additional specs */
};
