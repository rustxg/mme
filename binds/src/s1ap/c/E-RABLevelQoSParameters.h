/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_E_RABLevelQoSParameters_H_
#define	_E_RABLevelQoSParameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "QCI.h"
#include "AllocationAndRetentionPriority.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GBR_QosInformation;
struct ProtocolExtensionContainer;

/* E-RABLevelQoSParameters */
typedef struct E_RABLevelQoSParameters {
	QCI_t	 qCI;
	AllocationAndRetentionPriority_t	 allocationRetentionPriority;
	struct GBR_QosInformation	*gbrQosInformation	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABLevelQoSParameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABLevelQoSParameters;
extern asn_SEQUENCE_specifics_t asn_SPC_E_RABLevelQoSParameters_specs_1;
extern asn_TYPE_member_t asn_MBR_E_RABLevelQoSParameters_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GBR-QosInformation.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _E_RABLevelQoSParameters_H_ */
#include <asn_internal.h>