/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_EN_DCTransferTypeReply_H_
#define	_EN_DCTransferTypeReply_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EN-DCSONengNBIdentification.h"
#include "EN-DCSONeNBIdentification.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* EN-DCTransferTypeReply */
typedef struct EN_DCTransferTypeReply {
	EN_DCSONengNBIdentification_t	 sourceengNB;
	EN_DCSONeNBIdentification_t	 targeteNB;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EN_DCTransferTypeReply_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EN_DCTransferTypeReply;
extern asn_SEQUENCE_specifics_t asn_SPC_EN_DCTransferTypeReply_specs_1;
extern asn_TYPE_member_t asn_MBR_EN_DCTransferTypeReply_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _EN_DCTransferTypeReply_H_ */
#include <asn_internal.h>
