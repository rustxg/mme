/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_WarningType_H_
#define	_WarningType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* WarningType */
typedef OCTET_STRING_t	 WarningType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WarningType;
asn_struct_free_f WarningType_free;
asn_struct_print_f WarningType_print;
asn_constr_check_f WarningType_constraint;
ber_type_decoder_f WarningType_decode_ber;
der_type_encoder_f WarningType_encode_der;
xer_type_decoder_f WarningType_decode_xer;
xer_type_encoder_f WarningType_encode_xer;
oer_type_decoder_f WarningType_decode_oer;
oer_type_encoder_f WarningType_encode_oer;
per_type_decoder_f WarningType_decode_uper;
per_type_encoder_f WarningType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _WarningType_H_ */
#include <asn_internal.h>
