/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "MDTMode-Extension.h"

/*
 * This type is implemented using ProtocolIE_SingleContainer_8146P0,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_MDTMode_Extension_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_MDTMode_Extension = {
	"MDTMode-Extension",
	"MDTMode-Extension",
	&asn_OP_SEQUENCE,
	asn_DEF_MDTMode_Extension_tags_1,
	sizeof(asn_DEF_MDTMode_Extension_tags_1)
		/sizeof(asn_DEF_MDTMode_Extension_tags_1[0]), /* 1 */
	asn_DEF_MDTMode_Extension_tags_1,	/* Same as above */
	sizeof(asn_DEF_MDTMode_Extension_tags_1)
		/sizeof(asn_DEF_MDTMode_Extension_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ProtocolIE_Field_8149P0_1,
	3,	/* Elements count */
	&asn_SPC_ProtocolIE_Field_8149P0_specs_1	/* Additional specs */
};

