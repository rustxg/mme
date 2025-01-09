/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_EN_DCSONTransferType_H_
#define	_EN_DCSONTransferType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EN-DCTransferTypeRequest.h"
#include "EN-DCTransferTypeReply.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EN_DCSONTransferType_PR {
	EN_DCSONTransferType_PR_NOTHING,	/* No components present */
	EN_DCSONTransferType_PR_request,
	EN_DCSONTransferType_PR_reply
	/* Extensions may appear below */
	
} EN_DCSONTransferType_PR;

/* EN-DCSONTransferType */
typedef struct EN_DCSONTransferType {
	EN_DCSONTransferType_PR present;
	union EN_DCSONTransferType_u {
		EN_DCTransferTypeRequest_t	 request;
		EN_DCTransferTypeReply_t	 reply;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EN_DCSONTransferType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EN_DCSONTransferType;
extern asn_CHOICE_specifics_t asn_SPC_EN_DCSONTransferType_specs_1;
extern asn_TYPE_member_t asn_MBR_EN_DCSONTransferType_1[2];
extern asn_per_constraints_t asn_PER_type_EN_DCSONTransferType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EN_DCSONTransferType_H_ */
#include <asn_internal.h>