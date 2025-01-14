/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_DL_Forwarding_H_
#define	_DL_Forwarding_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DL_Forwarding {
	DL_Forwarding_dL_Forwarding_proposed	= 0
	/*
	 * Enumeration is extensible
	 */
} e_DL_Forwarding;

/* DL-Forwarding */
typedef long	 DL_Forwarding_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DL_Forwarding_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DL_Forwarding;
extern const asn_INTEGER_specifics_t asn_SPC_DL_Forwarding_specs_1;
asn_struct_free_f DL_Forwarding_free;
asn_struct_print_f DL_Forwarding_print;
asn_constr_check_f DL_Forwarding_constraint;
ber_type_decoder_f DL_Forwarding_decode_ber;
der_type_encoder_f DL_Forwarding_encode_der;
xer_type_decoder_f DL_Forwarding_decode_xer;
xer_type_encoder_f DL_Forwarding_encode_xer;
oer_type_decoder_f DL_Forwarding_decode_oer;
oer_type_encoder_f DL_Forwarding_encode_oer;
per_type_decoder_f DL_Forwarding_decode_uper;
per_type_encoder_f DL_Forwarding_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_Forwarding_H_ */
#include <asn_internal.h>
