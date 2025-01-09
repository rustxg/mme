/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_SensorMeasConfigNameList_H_
#define	_SensorMeasConfigNameList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SensorMeasConfigNameItem;

/* SensorMeasConfigNameList */
typedef struct SensorMeasConfigNameList {
	A_SEQUENCE_OF(struct SensorMeasConfigNameItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SensorMeasConfigNameList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SensorMeasConfigNameList;
extern asn_SET_OF_specifics_t asn_SPC_SensorMeasConfigNameList_specs_1;
extern asn_TYPE_member_t asn_MBR_SensorMeasConfigNameList_1[1];
extern asn_per_constraints_t asn_PER_type_SensorMeasConfigNameList_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SensorMeasConfigNameItem.h"

#endif	/* _SensorMeasConfigNameList_H_ */
#include <asn_internal.h>