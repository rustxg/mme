/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_ENBX2ExtTLA_H_
#define	_ENBX2ExtTLA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransportLayerAddress.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ENBX2GTPTLAs;
struct ProtocolExtensionContainer;

/* ENBX2ExtTLA */
typedef struct ENBX2ExtTLA {
	TransportLayerAddress_t	*iPsecTLA	/* OPTIONAL */;
	struct ENBX2GTPTLAs	*gTPTLAa	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ENBX2ExtTLA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ENBX2ExtTLA;
extern asn_SEQUENCE_specifics_t asn_SPC_ENBX2ExtTLA_specs_1;
extern asn_TYPE_member_t asn_MBR_ENBX2ExtTLA_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ENBX2GTPTLAs.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _ENBX2ExtTLA_H_ */
#include <asn_internal.h>