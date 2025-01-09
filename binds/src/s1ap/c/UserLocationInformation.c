/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "UserLocationInformation.h"

static asn_TYPE_member_t asn_MBR_UserLocationInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UserLocationInformation, eutran_cgi),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EUTRAN_CGI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutran-cgi"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UserLocationInformation, tai),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tai"
		},
	{ ATF_POINTER, 1, offsetof(struct UserLocationInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_8194P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_UserLocationInformation_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_UserLocationInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UserLocationInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutran-cgi */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tai */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_UserLocationInformation_specs_1 = {
	sizeof(struct UserLocationInformation),
	offsetof(struct UserLocationInformation, _asn_ctx),
	asn_MAP_UserLocationInformation_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_UserLocationInformation_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UserLocationInformation = {
	"UserLocationInformation",
	"UserLocationInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_UserLocationInformation_tags_1,
	sizeof(asn_DEF_UserLocationInformation_tags_1)
		/sizeof(asn_DEF_UserLocationInformation_tags_1[0]), /* 1 */
	asn_DEF_UserLocationInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_UserLocationInformation_tags_1)
		/sizeof(asn_DEF_UserLocationInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UserLocationInformation_1,
	3,	/* Elements count */
	&asn_SPC_UserLocationInformation_specs_1	/* Additional specs */
};

