/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_SourceNgRanNode_ID_H_
#define	_SourceNgRanNode_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Global-RAN-NODE-ID.h"
#include "FiveGSTAI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* SourceNgRanNode-ID */
typedef struct SourceNgRanNode_ID {
	Global_RAN_NODE_ID_t	 global_RAN_NODE_ID;
	FiveGSTAI_t	 selected_TAI;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SourceNgRanNode_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SourceNgRanNode_ID;
extern asn_SEQUENCE_specifics_t asn_SPC_SourceNgRanNode_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_SourceNgRanNode_ID_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _SourceNgRanNode_ID_H_ */
#include <asn_internal.h>