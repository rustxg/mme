/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_E_RABToBeUpdatedItem_H_
#define	_E_RABToBeUpdatedItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E-RAB-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SecurityIndication;
struct ProtocolExtensionContainer;

/* E-RABToBeUpdatedItem */
typedef struct E_RABToBeUpdatedItem {
	E_RAB_ID_t	 e_RAB_ID;
	struct SecurityIndication	*securityIndication	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABToBeUpdatedItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABToBeUpdatedItem;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SecurityIndication.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _E_RABToBeUpdatedItem_H_ */
#include <asn_internal.h>
