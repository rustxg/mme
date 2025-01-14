/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_EN_DCTransferTypeRequest_H_
#define	_EN_DCTransferTypeRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EN-DCSONeNBIdentification.h"
#include "EN-DCSONengNBIdentification.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct EN_DCSONeNBIdentification;
struct TAI;
struct FiveGSTAI;
struct ProtocolExtensionContainer;

/* EN-DCTransferTypeRequest */
typedef struct EN_DCTransferTypeRequest {
	EN_DCSONeNBIdentification_t	 sourceeNB;
	EN_DCSONengNBIdentification_t	 targetengNB;
	struct EN_DCSONeNBIdentification	*targeteNB	/* OPTIONAL */;
	struct TAI	*associatedTAI	/* OPTIONAL */;
	struct FiveGSTAI	*broadcast5GSTAI	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EN_DCTransferTypeRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EN_DCTransferTypeRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_EN_DCTransferTypeRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_EN_DCTransferTypeRequest_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "EN-DCSONeNBIdentification.h"
#include "TAI.h"
#include "FiveGSTAI.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _EN_DCTransferTypeRequest_H_ */
#include <asn_internal.h>
