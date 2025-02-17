/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_EN_DCSONConfigurationTransfer_H_
#define	_EN_DCSONConfigurationTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "EN-DCSONTransferType.h"
#include "SONInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2TNLConfigurationInfo;
struct ProtocolExtensionContainer;

/* EN-DCSONConfigurationTransfer */
typedef struct EN_DCSONConfigurationTransfer {
	EN_DCSONTransferType_t	 transfertype;
	SONInformation_t	 sONInformation;
	struct X2TNLConfigurationInfo	*x2TNLConfigInfo	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EN_DCSONConfigurationTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EN_DCSONConfigurationTransfer;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "X2TNLConfigurationInfo.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _EN_DCSONConfigurationTransfer_H_ */
#include <asn_internal.h>
