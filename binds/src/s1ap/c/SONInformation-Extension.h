/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_SONInformation_Extension_H_
#define	_SONInformation_Extension_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-SingleContainer.h"

#ifdef __cplusplus
extern "C" {
#endif

/* SONInformation-Extension */
typedef ProtocolIE_SingleContainer_8146P0_t	 SONInformation_Extension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SONInformation_Extension;
asn_struct_free_f SONInformation_Extension_free;
asn_struct_print_f SONInformation_Extension_print;
asn_constr_check_f SONInformation_Extension_constraint;
ber_type_decoder_f SONInformation_Extension_decode_ber;
der_type_encoder_f SONInformation_Extension_encode_der;
xer_type_decoder_f SONInformation_Extension_decode_xer;
xer_type_encoder_f SONInformation_Extension_encode_xer;
oer_type_decoder_f SONInformation_Extension_decode_oer;
oer_type_encoder_f SONInformation_Extension_encode_oer;
per_type_decoder_f SONInformation_Extension_decode_uper;
per_type_encoder_f SONInformation_Extension_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SONInformation_Extension_H_ */
#include <asn_internal.h>
