/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_PLMNListforQMC_H_
#define	_PLMNListforQMC_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNidentity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PLMNListforQMC */
typedef struct PLMNListforQMC {
	A_SEQUENCE_OF(PLMNidentity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PLMNListforQMC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PLMNListforQMC;
extern asn_SET_OF_specifics_t asn_SPC_PLMNListforQMC_specs_1;
extern asn_TYPE_member_t asn_MBR_PLMNListforQMC_1[1];
extern asn_per_constraints_t asn_PER_type_PLMNListforQMC_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _PLMNListforQMC_H_ */
#include <asn_internal.h>
