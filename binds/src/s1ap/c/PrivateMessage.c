/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "PrivateMessage.h"

asn_TYPE_member_t asn_MBR_PrivateMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PrivateMessage, privateIEs),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrivateIE_Container_8210P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"privateIEs"
		},
};
static const ber_tlv_tag_t asn_DEF_PrivateMessage_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PrivateMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* privateIEs */
};
asn_SEQUENCE_specifics_t asn_SPC_PrivateMessage_specs_1 = {
	sizeof(struct PrivateMessage),
	offsetof(struct PrivateMessage, _asn_ctx),
	asn_MAP_PrivateMessage_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PrivateMessage = {
	"PrivateMessage",
	"PrivateMessage",
	&asn_OP_SEQUENCE,
	asn_DEF_PrivateMessage_tags_1,
	sizeof(asn_DEF_PrivateMessage_tags_1)
		/sizeof(asn_DEF_PrivateMessage_tags_1[0]), /* 1 */
	asn_DEF_PrivateMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_PrivateMessage_tags_1)
		/sizeof(asn_DEF_PrivateMessage_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PrivateMessage_1,
	1,	/* Elements count */
	&asn_SPC_PrivateMessage_specs_1	/* Additional specs */
};

