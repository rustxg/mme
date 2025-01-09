/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_CNTypeRestrictions_Item_H_
#define	_CNTypeRestrictions_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNidentity.h"
#include "CNType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* CNTypeRestrictions-Item */
typedef struct CNTypeRestrictions_Item {
	PLMNidentity_t	 pLMN_Identity;
	CNType_t	 cNType;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CNTypeRestrictions_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CNTypeRestrictions_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_CNTypeRestrictions_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_CNTypeRestrictions_Item_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _CNTypeRestrictions_Item_H_ */
#include <asn_internal.h>
