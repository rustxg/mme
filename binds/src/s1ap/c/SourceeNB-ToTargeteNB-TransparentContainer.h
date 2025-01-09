/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_SourceeNB_ToTargeteNB_TransparentContainer_H_
#define	_SourceeNB_ToTargeteNB_TransparentContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-Container.h"
#include "EUTRAN-CGI.h"
#include "SubscriberProfileIDforRFP.h"
#include "UE-HistoryInformation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E_RABInformationList;
struct ProtocolExtensionContainer;

/* SourceeNB-ToTargeteNB-TransparentContainer */
typedef struct SourceeNB_ToTargeteNB_TransparentContainer {
	RRC_Container_t	 rRC_Container;
	struct E_RABInformationList	*e_RABInformationList	/* OPTIONAL */;
	EUTRAN_CGI_t	 targetCell_ID;
	SubscriberProfileIDforRFP_t	*subscriberProfileIDforRFP	/* OPTIONAL */;
	UE_HistoryInformation_t	 uE_HistoryInformation;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SourceeNB_ToTargeteNB_TransparentContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SourceeNB_ToTargeteNB_TransparentContainer;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "E-RABInformationList.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _SourceeNB_ToTargeteNB_TransparentContainer_H_ */
#include <asn_internal.h>
