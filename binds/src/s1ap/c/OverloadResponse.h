/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_OverloadResponse_H_
#define	_OverloadResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "OverloadAction.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum OverloadResponse_PR {
	OverloadResponse_PR_NOTHING,	/* No components present */
	OverloadResponse_PR_overloadAction
	/* Extensions may appear below */
	
} OverloadResponse_PR;

/* OverloadResponse */
typedef struct OverloadResponse {
	OverloadResponse_PR present;
	union OverloadResponse_u {
		OverloadAction_t	 overloadAction;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OverloadResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OverloadResponse;

#ifdef __cplusplus
}
#endif

#endif	/* _OverloadResponse_H_ */
#include <asn_internal.h>