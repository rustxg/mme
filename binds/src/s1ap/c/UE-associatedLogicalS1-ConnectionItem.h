/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_UE_associatedLogicalS1_ConnectionItem_H_
#define	_UE_associatedLogicalS1_ConnectionItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MME-UE-S1AP-ID.h"
#include "ENB-UE-S1AP-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* UE-associatedLogicalS1-ConnectionItem */
typedef struct UE_associatedLogicalS1_ConnectionItem {
	MME_UE_S1AP_ID_t	*mME_UE_S1AP_ID	/* OPTIONAL */;
	ENB_UE_S1AP_ID_t	*eNB_UE_S1AP_ID	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_associatedLogicalS1_ConnectionItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_associatedLogicalS1_ConnectionItem;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _UE_associatedLogicalS1_ConnectionItem_H_ */
#include <asn_internal.h>
