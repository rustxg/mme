/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_NB_IoT_PagingDRX_H_
#define	_NB_IoT_PagingDRX_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NB_IoT_PagingDRX {
	NB_IoT_PagingDRX_v32	= 0,
	NB_IoT_PagingDRX_v64	= 1,
	NB_IoT_PagingDRX_v128	= 2,
	NB_IoT_PagingDRX_v256	= 3,
	NB_IoT_PagingDRX_v512	= 4,
	NB_IoT_PagingDRX_v1024	= 5
	/*
	 * Enumeration is extensible
	 */
} e_NB_IoT_PagingDRX;

/* NB-IoT-PagingDRX */
typedef long	 NB_IoT_PagingDRX_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NB_IoT_PagingDRX;
asn_struct_free_f NB_IoT_PagingDRX_free;
asn_struct_print_f NB_IoT_PagingDRX_print;
asn_constr_check_f NB_IoT_PagingDRX_constraint;
ber_type_decoder_f NB_IoT_PagingDRX_decode_ber;
der_type_encoder_f NB_IoT_PagingDRX_encode_der;
xer_type_decoder_f NB_IoT_PagingDRX_decode_xer;
xer_type_encoder_f NB_IoT_PagingDRX_encode_xer;
oer_type_decoder_f NB_IoT_PagingDRX_decode_oer;
oer_type_encoder_f NB_IoT_PagingDRX_encode_oer;
per_type_decoder_f NB_IoT_PagingDRX_decode_uper;
per_type_encoder_f NB_IoT_PagingDRX_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _NB_IoT_PagingDRX_H_ */
#include <asn_internal.h>
