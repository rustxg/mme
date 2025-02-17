/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_IAB_Node_Indication_H_
#define	_IAB_Node_Indication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IAB_Node_Indication {
	IAB_Node_Indication_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_IAB_Node_Indication;

/* IAB-Node-Indication */
typedef long	 IAB_Node_Indication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IAB_Node_Indication;
asn_struct_free_f IAB_Node_Indication_free;
asn_struct_print_f IAB_Node_Indication_print;
asn_constr_check_f IAB_Node_Indication_constraint;
ber_type_decoder_f IAB_Node_Indication_decode_ber;
der_type_encoder_f IAB_Node_Indication_encode_der;
xer_type_decoder_f IAB_Node_Indication_decode_xer;
xer_type_encoder_f IAB_Node_Indication_encode_xer;
oer_type_decoder_f IAB_Node_Indication_decode_oer;
oer_type_encoder_f IAB_Node_Indication_encode_oer;
per_type_decoder_f IAB_Node_Indication_decode_uper;
per_type_encoder_f IAB_Node_Indication_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _IAB_Node_Indication_H_ */
#include <asn_internal.h>
