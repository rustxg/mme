/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "asn1c/s1ap-r17.3.0/36413-h30.asn"
 * 	`asn1c -D /home/sid/mme/binds/src/s1ap/c -fcompound-names -no-gen-example`
 */

#ifndef	_M6report_Interval_H_
#define	_M6report_Interval_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum M6report_Interval {
	M6report_Interval_ms1024	= 0,
	M6report_Interval_ms2048	= 1,
	M6report_Interval_ms5120	= 2,
	M6report_Interval_ms10240	= 3
	/*
	 * Enumeration is extensible
	 */
} e_M6report_Interval;

/* M6report-Interval */
typedef long	 M6report_Interval_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_M6report_Interval_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_M6report_Interval;
extern const asn_INTEGER_specifics_t asn_SPC_M6report_Interval_specs_1;
asn_struct_free_f M6report_Interval_free;
asn_struct_print_f M6report_Interval_print;
asn_constr_check_f M6report_Interval_constraint;
ber_type_decoder_f M6report_Interval_decode_ber;
der_type_encoder_f M6report_Interval_encode_der;
xer_type_decoder_f M6report_Interval_decode_xer;
xer_type_encoder_f M6report_Interval_encode_xer;
oer_type_decoder_f M6report_Interval_decode_oer;
oer_type_encoder_f M6report_Interval_encode_oer;
per_type_decoder_f M6report_Interval_decode_uper;
per_type_encoder_f M6report_Interval_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _M6report_Interval_H_ */
#include <asn_internal.h>
