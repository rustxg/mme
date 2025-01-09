/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "URI-Address.h"

/*
 * This type is implemented using VisibleString,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_URI_Address_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 7,  7,  32,  126 }	/* (32..126) */,
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER character map necessary */
};
static const ber_tlv_tag_t asn_DEF_URI_Address_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (26 << 2))
};
asn_TYPE_descriptor_t asn_DEF_URI_Address = {
	"URI-Address",
	"URI-Address",
	&asn_OP_VisibleString,
	asn_DEF_URI_Address_tags_1,
	sizeof(asn_DEF_URI_Address_tags_1)
		/sizeof(asn_DEF_URI_Address_tags_1[0]), /* 1 */
	asn_DEF_URI_Address_tags_1,	/* Same as above */
	sizeof(asn_DEF_URI_Address_tags_1)
		/sizeof(asn_DEF_URI_Address_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_URI_Address_constr_1, VisibleString_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};
