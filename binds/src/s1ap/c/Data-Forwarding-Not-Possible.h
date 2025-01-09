/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_Data_Forwarding_Not_Possible_H_
#define	_Data_Forwarding_Not_Possible_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Data_Forwarding_Not_Possible {
	Data_Forwarding_Not_Possible_data_Forwarding_not_Possible	= 0
	/*
	 * Enumeration is extensible
	 */
} e_Data_Forwarding_Not_Possible;

/* Data-Forwarding-Not-Possible */
typedef long	 Data_Forwarding_Not_Possible_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Data_Forwarding_Not_Possible;
asn_struct_free_f Data_Forwarding_Not_Possible_free;
asn_struct_print_f Data_Forwarding_Not_Possible_print;
asn_constr_check_f Data_Forwarding_Not_Possible_constraint;
ber_type_decoder_f Data_Forwarding_Not_Possible_decode_ber;
der_type_encoder_f Data_Forwarding_Not_Possible_encode_der;
xer_type_decoder_f Data_Forwarding_Not_Possible_decode_xer;
xer_type_encoder_f Data_Forwarding_Not_Possible_encode_xer;
oer_type_decoder_f Data_Forwarding_Not_Possible_decode_oer;
oer_type_encoder_f Data_Forwarding_Not_Possible_encode_oer;
per_type_decoder_f Data_Forwarding_Not_Possible_decode_uper;
per_type_encoder_f Data_Forwarding_Not_Possible_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _Data_Forwarding_Not_Possible_H_ */
#include <asn_internal.h>
