/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_TimeSinceSecondaryNodeRelease_H_
#define	_TimeSinceSecondaryNodeRelease_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TimeSinceSecondaryNodeRelease */
typedef OCTET_STRING_t	 TimeSinceSecondaryNodeRelease_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TimeSinceSecondaryNodeRelease;
asn_struct_free_f TimeSinceSecondaryNodeRelease_free;
asn_struct_print_f TimeSinceSecondaryNodeRelease_print;
asn_constr_check_f TimeSinceSecondaryNodeRelease_constraint;
ber_type_decoder_f TimeSinceSecondaryNodeRelease_decode_ber;
der_type_encoder_f TimeSinceSecondaryNodeRelease_encode_der;
xer_type_decoder_f TimeSinceSecondaryNodeRelease_decode_xer;
xer_type_encoder_f TimeSinceSecondaryNodeRelease_encode_xer;
oer_type_decoder_f TimeSinceSecondaryNodeRelease_decode_oer;
oer_type_encoder_f TimeSinceSecondaryNodeRelease_encode_oer;
per_type_decoder_f TimeSinceSecondaryNodeRelease_decode_uper;
per_type_encoder_f TimeSinceSecondaryNodeRelease_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TimeSinceSecondaryNodeRelease_H_ */
#include <asn_internal.h>
