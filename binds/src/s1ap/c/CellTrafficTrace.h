/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_CellTrafficTrace_H_
#define	_CellTrafficTrace_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellTrafficTrace */
typedef struct CellTrafficTrace {
	ProtocolIE_Container_8143P0_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellTrafficTrace_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellTrafficTrace;
extern asn_SEQUENCE_specifics_t asn_SPC_CellTrafficTrace_specs_1;
extern asn_TYPE_member_t asn_MBR_CellTrafficTrace_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _CellTrafficTrace_H_ */
#include <asn_internal.h>
