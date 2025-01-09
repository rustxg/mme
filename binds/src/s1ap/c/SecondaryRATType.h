/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_SecondaryRATType_H_
#define	_SecondaryRATType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SecondaryRATType {
	SecondaryRATType_nR	= 0,
	/*
	 * Enumeration is extensible
	 */
	SecondaryRATType_unlicensed	= 1
} e_SecondaryRATType;

/* SecondaryRATType */
typedef long	 SecondaryRATType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SecondaryRATType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SecondaryRATType;
extern const asn_INTEGER_specifics_t asn_SPC_SecondaryRATType_specs_1;
asn_struct_free_f SecondaryRATType_free;
asn_struct_print_f SecondaryRATType_print;
asn_constr_check_f SecondaryRATType_constraint;
ber_type_decoder_f SecondaryRATType_decode_ber;
der_type_encoder_f SecondaryRATType_encode_der;
xer_type_decoder_f SecondaryRATType_decode_xer;
xer_type_encoder_f SecondaryRATType_encode_xer;
oer_type_decoder_f SecondaryRATType_decode_oer;
oer_type_encoder_f SecondaryRATType_encode_oer;
per_type_decoder_f SecondaryRATType_decode_uper;
per_type_encoder_f SecondaryRATType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SecondaryRATType_H_ */
#include <asn_internal.h>
