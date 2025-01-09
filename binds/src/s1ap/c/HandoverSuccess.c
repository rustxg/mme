/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "HandoverSuccess.h"

asn_TYPE_member_t asn_MBR_HandoverSuccess_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct HandoverSuccess, protocolIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolIE_Container_8143P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"protocolIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_HandoverSuccess_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_HandoverSuccess_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* protocolIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_HandoverSuccess_specs_1 = {
	sizeof(struct HandoverSuccess),
	offsetof(struct HandoverSuccess, _asn_ctx),
	asn_MAP_HandoverSuccess_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_HandoverSuccess = {
	"HandoverSuccess",
	"HandoverSuccess",
	&asn_OP_SEQUENCE,
	asn_DEF_HandoverSuccess_tags_1,
	sizeof(asn_DEF_HandoverSuccess_tags_1)
		/sizeof(asn_DEF_HandoverSuccess_tags_1[0]), /* 1 */
	asn_DEF_HandoverSuccess_tags_1,	/* Same as above */
	sizeof(asn_DEF_HandoverSuccess_tags_1)
		/sizeof(asn_DEF_HandoverSuccess_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_HandoverSuccess_1,
	1,	/* Elements count */
	&asn_SPC_HandoverSuccess_specs_1	/* Additional specs */
};

