/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "EN-DCTransferTypeRequest.h"

asn_TYPE_member_t asn_MBR_EN_DCTransferTypeRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EN_DCTransferTypeRequest, sourceeNB),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EN_DCSONeNBIdentification,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourceeNB"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EN_DCTransferTypeRequest, targetengNB),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EN_DCSONengNBIdentification,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetengNB"
		},
	{ ATF_POINTER, 4, offsetof(struct EN_DCTransferTypeRequest, targeteNB),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EN_DCSONeNBIdentification,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targeteNB"
		},
	{ ATF_POINTER, 3, offsetof(struct EN_DCTransferTypeRequest, associatedTAI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"associatedTAI"
		},
	{ ATF_POINTER, 2, offsetof(struct EN_DCTransferTypeRequest, broadcast5GSTAI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FiveGSTAI,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"broadcast5GSTAI"
		},
	{ ATF_POINTER, 1, offsetof(struct EN_DCTransferTypeRequest, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_8194P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_EN_DCTransferTypeRequest_oms_1[] = { 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_EN_DCTransferTypeRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EN_DCTransferTypeRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourceeNB */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targetengNB */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* targeteNB */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* associatedTAI */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* broadcast5GSTAI */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_EN_DCTransferTypeRequest_specs_1 = {
	sizeof(struct EN_DCTransferTypeRequest),
	offsetof(struct EN_DCTransferTypeRequest, _asn_ctx),
	asn_MAP_EN_DCTransferTypeRequest_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_EN_DCTransferTypeRequest_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EN_DCTransferTypeRequest = {
	"EN-DCTransferTypeRequest",
	"EN-DCTransferTypeRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_EN_DCTransferTypeRequest_tags_1,
	sizeof(asn_DEF_EN_DCTransferTypeRequest_tags_1)
		/sizeof(asn_DEF_EN_DCTransferTypeRequest_tags_1[0]), /* 1 */
	asn_DEF_EN_DCTransferTypeRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_EN_DCTransferTypeRequest_tags_1)
		/sizeof(asn_DEF_EN_DCTransferTypeRequest_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EN_DCTransferTypeRequest_1,
	6,	/* Elements count */
	&asn_SPC_EN_DCTransferTypeRequest_specs_1	/* Additional specs */
};
