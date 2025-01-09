/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_EnhancedCoverageRestricted_H_
#define	_EnhancedCoverageRestricted_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum EnhancedCoverageRestricted {
	EnhancedCoverageRestricted_restricted	= 0
	/*
	 * Enumeration is extensible
	 */
} e_EnhancedCoverageRestricted;

/* EnhancedCoverageRestricted */
typedef long	 EnhancedCoverageRestricted_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EnhancedCoverageRestricted;
asn_struct_free_f EnhancedCoverageRestricted_free;
asn_struct_print_f EnhancedCoverageRestricted_print;
asn_constr_check_f EnhancedCoverageRestricted_constraint;
ber_type_decoder_f EnhancedCoverageRestricted_decode_ber;
der_type_encoder_f EnhancedCoverageRestricted_encode_der;
xer_type_decoder_f EnhancedCoverageRestricted_decode_xer;
xer_type_encoder_f EnhancedCoverageRestricted_encode_xer;
oer_type_decoder_f EnhancedCoverageRestricted_decode_oer;
oer_type_encoder_f EnhancedCoverageRestricted_encode_oer;
per_type_decoder_f EnhancedCoverageRestricted_decode_uper;
per_type_encoder_f EnhancedCoverageRestricted_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EnhancedCoverageRestricted_H_ */
#include <asn_internal.h>
