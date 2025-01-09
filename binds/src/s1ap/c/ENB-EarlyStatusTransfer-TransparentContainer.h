/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_ENB_EarlyStatusTransfer_TransparentContainer_H_
#define	_ENB_EarlyStatusTransfer_TransparentContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Bearers-SubjectToEarlyStatusTransferList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* ENB-EarlyStatusTransfer-TransparentContainer */
typedef struct ENB_EarlyStatusTransfer_TransparentContainer {
	Bearers_SubjectToEarlyStatusTransferList_t	 bearers_SubjectToEarlyStatusTransferList;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ENB_EarlyStatusTransfer_TransparentContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ENB_EarlyStatusTransfer_TransparentContainer;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _ENB_EarlyStatusTransfer_TransparentContainer_H_ */
#include <asn_internal.h>
