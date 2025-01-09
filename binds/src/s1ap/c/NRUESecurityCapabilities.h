/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_NRUESecurityCapabilities_H_
#define	_NRUESecurityCapabilities_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRencryptionAlgorithms.h"
#include "NRintegrityProtectionAlgorithms.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* NRUESecurityCapabilities */
typedef struct NRUESecurityCapabilities {
	NRencryptionAlgorithms_t	 nRencryptionAlgorithms;
	NRintegrityProtectionAlgorithms_t	 nRintegrityProtectionAlgorithms;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NRUESecurityCapabilities_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NRUESecurityCapabilities;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _NRUESecurityCapabilities_H_ */
#include <asn_internal.h>
