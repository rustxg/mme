/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_EPLMNs_H_
#define	_EPLMNs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNidentity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* EPLMNs */
typedef struct EPLMNs {
	A_SEQUENCE_OF(PLMNidentity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EPLMNs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EPLMNs;
extern asn_SET_OF_specifics_t asn_SPC_EPLMNs_specs_1;
extern asn_TYPE_member_t asn_MBR_EPLMNs_1[1];
extern asn_per_constraints_t asn_PER_type_EPLMNs_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EPLMNs_H_ */
#include <asn_internal.h>
