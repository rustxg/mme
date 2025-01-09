/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_ServedDCNs_H_
#define	_ServedDCNs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ServedDCNsItem;

/* ServedDCNs */
typedef struct ServedDCNs {
	A_SEQUENCE_OF(struct ServedDCNsItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedDCNs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServedDCNs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ServedDCNsItem.h"

#endif	/* _ServedDCNs_H_ */
#include <asn_internal.h>
