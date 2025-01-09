/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_ProSeDirectCommunication_H_
#define	_ProSeDirectCommunication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProSeDirectCommunication {
	ProSeDirectCommunication_authorized	= 0,
	ProSeDirectCommunication_not_authorized	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ProSeDirectCommunication;

/* ProSeDirectCommunication */
typedef long	 ProSeDirectCommunication_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ProSeDirectCommunication_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ProSeDirectCommunication;
extern const asn_INTEGER_specifics_t asn_SPC_ProSeDirectCommunication_specs_1;
asn_struct_free_f ProSeDirectCommunication_free;
asn_struct_print_f ProSeDirectCommunication_print;
asn_constr_check_f ProSeDirectCommunication_constraint;
ber_type_decoder_f ProSeDirectCommunication_decode_ber;
der_type_encoder_f ProSeDirectCommunication_encode_der;
xer_type_decoder_f ProSeDirectCommunication_decode_xer;
xer_type_encoder_f ProSeDirectCommunication_encode_xer;
oer_type_decoder_f ProSeDirectCommunication_decode_oer;
oer_type_encoder_f ProSeDirectCommunication_encode_oer;
per_type_decoder_f ProSeDirectCommunication_decode_uper;
per_type_encoder_f ProSeDirectCommunication_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ProSeDirectCommunication_H_ */
#include <asn_internal.h>
