/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_SONInformationRequest_H_
#define	_SONInformationRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SONInformationRequest {
	SONInformationRequest_x2TNL_Configuration_Info	= 0,
	/*
	 * Enumeration is extensible
	 */
	SONInformationRequest_time_Synchronisation_Info	= 1,
	SONInformationRequest_activate_Muting	= 2,
	SONInformationRequest_deactivate_Muting	= 3
} e_SONInformationRequest;

/* SONInformationRequest */
typedef long	 SONInformationRequest_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_SONInformationRequest_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_SONInformationRequest;
extern const asn_INTEGER_specifics_t asn_SPC_SONInformationRequest_specs_1;
asn_struct_free_f SONInformationRequest_free;
asn_struct_print_f SONInformationRequest_print;
asn_constr_check_f SONInformationRequest_constraint;
ber_type_decoder_f SONInformationRequest_decode_ber;
der_type_encoder_f SONInformationRequest_encode_der;
xer_type_decoder_f SONInformationRequest_decode_xer;
xer_type_encoder_f SONInformationRequest_encode_xer;
oer_type_decoder_f SONInformationRequest_decode_oer;
oer_type_encoder_f SONInformationRequest_encode_oer;
per_type_decoder_f SONInformationRequest_decode_uper;
per_type_encoder_f SONInformationRequest_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _SONInformationRequest_H_ */
#include <asn_internal.h>