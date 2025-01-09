/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "PagingProbabilityInformation.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_PagingProbabilityInformation_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_PagingProbabilityInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  20 }	/* (0..20,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_PagingProbabilityInformation_value2enum_1[] = {
	{ 0,	3,	"p00" },
	{ 1,	3,	"p05" },
	{ 2,	3,	"p10" },
	{ 3,	3,	"p15" },
	{ 4,	3,	"p20" },
	{ 5,	3,	"p25" },
	{ 6,	3,	"p30" },
	{ 7,	3,	"p35" },
	{ 8,	3,	"p40" },
	{ 9,	3,	"p45" },
	{ 10,	3,	"p50" },
	{ 11,	3,	"p55" },
	{ 12,	3,	"p60" },
	{ 13,	3,	"p65" },
	{ 14,	3,	"p70" },
	{ 15,	3,	"p75" },
	{ 16,	3,	"p80" },
	{ 17,	3,	"p85" },
	{ 18,	3,	"p90" },
	{ 19,	3,	"p95" },
	{ 20,	4,	"p100" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_PagingProbabilityInformation_enum2value_1[] = {
	0,	/* p00(0) */
	1,	/* p05(1) */
	2,	/* p10(2) */
	20,	/* p100(20) */
	3,	/* p15(3) */
	4,	/* p20(4) */
	5,	/* p25(5) */
	6,	/* p30(6) */
	7,	/* p35(7) */
	8,	/* p40(8) */
	9,	/* p45(9) */
	10,	/* p50(10) */
	11,	/* p55(11) */
	12,	/* p60(12) */
	13,	/* p65(13) */
	14,	/* p70(14) */
	15,	/* p75(15) */
	16,	/* p80(16) */
	17,	/* p85(17) */
	18,	/* p90(18) */
	19	/* p95(19) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_PagingProbabilityInformation_specs_1 = {
	asn_MAP_PagingProbabilityInformation_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_PagingProbabilityInformation_enum2value_1,	/* N => "tag"; sorted by N */
	21,	/* Number of elements in the maps */
	22,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_PagingProbabilityInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_PagingProbabilityInformation = {
	"PagingProbabilityInformation",
	"PagingProbabilityInformation",
	&asn_OP_NativeEnumerated,
	asn_DEF_PagingProbabilityInformation_tags_1,
	sizeof(asn_DEF_PagingProbabilityInformation_tags_1)
		/sizeof(asn_DEF_PagingProbabilityInformation_tags_1[0]), /* 1 */
	asn_DEF_PagingProbabilityInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_PagingProbabilityInformation_tags_1)
		/sizeof(asn_DEF_PagingProbabilityInformation_tags_1[0]), /* 1 */
	{ &asn_OER_type_PagingProbabilityInformation_constr_1, &asn_PER_type_PagingProbabilityInformation_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_PagingProbabilityInformation_specs_1	/* Additional specs */
};

