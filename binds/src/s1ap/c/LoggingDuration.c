/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "LoggingDuration.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_LoggingDuration_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_LoggingDuration_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_LoggingDuration_value2enum_1[] = {
	{ 0,	3,	"m10" },
	{ 1,	3,	"m20" },
	{ 2,	3,	"m40" },
	{ 3,	3,	"m60" },
	{ 4,	3,	"m90" },
	{ 5,	4,	"m120" }
};
static const unsigned int asn_MAP_LoggingDuration_enum2value_1[] = {
	0,	/* m10(0) */
	5,	/* m120(5) */
	1,	/* m20(1) */
	2,	/* m40(2) */
	3,	/* m60(3) */
	4	/* m90(4) */
};
const asn_INTEGER_specifics_t asn_SPC_LoggingDuration_specs_1 = {
	asn_MAP_LoggingDuration_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_LoggingDuration_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_LoggingDuration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_LoggingDuration = {
	"LoggingDuration",
	"LoggingDuration",
	&asn_OP_NativeEnumerated,
	asn_DEF_LoggingDuration_tags_1,
	sizeof(asn_DEF_LoggingDuration_tags_1)
		/sizeof(asn_DEF_LoggingDuration_tags_1[0]), /* 1 */
	asn_DEF_LoggingDuration_tags_1,	/* Same as above */
	sizeof(asn_DEF_LoggingDuration_tags_1)
		/sizeof(asn_DEF_LoggingDuration_tags_1[0]), /* 1 */
	{ &asn_OER_type_LoggingDuration_constr_1, &asn_PER_type_LoggingDuration_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_LoggingDuration_specs_1	/* Additional specs */
};

