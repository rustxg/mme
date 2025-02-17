/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_EventTrigger_H_
#define	_EventTrigger_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "EventL1LoggedMDTConfig.h"
#include "ProtocolIE-SingleContainer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EventTrigger_PR {
	EventTrigger_PR_NOTHING,	/* No components present */
	EventTrigger_PR_outOfCoverage,
	EventTrigger_PR_eventL1LoggedMDTConfig,
	EventTrigger_PR_choice_Extensions
} EventTrigger_PR;
typedef enum EventTrigger__outOfCoverage {
	EventTrigger__outOfCoverage_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_EventTrigger__outOfCoverage;

/* EventTrigger */
typedef struct EventTrigger {
	EventTrigger_PR present;
	union EventTrigger_u {
		long	 outOfCoverage;
		EventL1LoggedMDTConfig_t	 eventL1LoggedMDTConfig;
		ProtocolIE_SingleContainer_8146P0_t	 choice_Extensions;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EventTrigger_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_outOfCoverage_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EventTrigger;
extern asn_CHOICE_specifics_t asn_SPC_EventTrigger_specs_1;
extern asn_TYPE_member_t asn_MBR_EventTrigger_1[3];
extern asn_per_constraints_t asn_PER_type_EventTrigger_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _EventTrigger_H_ */
#include <asn_internal.h>
