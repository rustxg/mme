/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#include "BluetoothMeasurementConfiguration.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_bt_rssi_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_bt_rssi_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_bt_rssi_value2enum_4[] = {
	{ 0,	4,	"true" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_bt_rssi_enum2value_4[] = {
	0	/* true(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_bt_rssi_specs_4 = {
	asn_MAP_bt_rssi_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_bt_rssi_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	2,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_bt_rssi_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bt_rssi_4 = {
	"bt-rssi",
	"bt-rssi",
	&asn_OP_NativeEnumerated,
	asn_DEF_bt_rssi_tags_4,
	sizeof(asn_DEF_bt_rssi_tags_4)
		/sizeof(asn_DEF_bt_rssi_tags_4[0]) - 1, /* 1 */
	asn_DEF_bt_rssi_tags_4,	/* Same as above */
	sizeof(asn_DEF_bt_rssi_tags_4)
		/sizeof(asn_DEF_bt_rssi_tags_4[0]), /* 2 */
	{ &asn_OER_type_bt_rssi_constr_4, &asn_PER_type_bt_rssi_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_bt_rssi_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_BluetoothMeasurementConfiguration_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BluetoothMeasurementConfiguration, bluetoothMeasConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BluetoothMeasConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bluetoothMeasConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct BluetoothMeasurementConfiguration, bluetoothMeasConfigNameList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BluetoothMeasConfigNameList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bluetoothMeasConfigNameList"
		},
	{ ATF_POINTER, 2, offsetof(struct BluetoothMeasurementConfiguration, bt_rssi),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_bt_rssi_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bt-rssi"
		},
	{ ATF_POINTER, 1, offsetof(struct BluetoothMeasurementConfiguration, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_8194P0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_BluetoothMeasurementConfiguration_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_BluetoothMeasurementConfiguration_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BluetoothMeasurementConfiguration_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bluetoothMeasConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* bluetoothMeasConfigNameList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bt-rssi */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_BluetoothMeasurementConfiguration_specs_1 = {
	sizeof(struct BluetoothMeasurementConfiguration),
	offsetof(struct BluetoothMeasurementConfiguration, _asn_ctx),
	asn_MAP_BluetoothMeasurementConfiguration_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_BluetoothMeasurementConfiguration_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BluetoothMeasurementConfiguration = {
	"BluetoothMeasurementConfiguration",
	"BluetoothMeasurementConfiguration",
	&asn_OP_SEQUENCE,
	asn_DEF_BluetoothMeasurementConfiguration_tags_1,
	sizeof(asn_DEF_BluetoothMeasurementConfiguration_tags_1)
		/sizeof(asn_DEF_BluetoothMeasurementConfiguration_tags_1[0]), /* 1 */
	asn_DEF_BluetoothMeasurementConfiguration_tags_1,	/* Same as above */
	sizeof(asn_DEF_BluetoothMeasurementConfiguration_tags_1)
		/sizeof(asn_DEF_BluetoothMeasurementConfiguration_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BluetoothMeasurementConfiguration_1,
	4,	/* Elements count */
	&asn_SPC_BluetoothMeasurementConfiguration_specs_1	/* Additional specs */
};

