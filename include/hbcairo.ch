/*
 * Cairo library: .prg include file
 *
 * Copyright 2009 Mindaugas Kavaliauskas <dbtopas at dbtopas.lt>
 *
 */

#ifndef HB_CAIRO_CH_
#define HB_CAIRO_CH_

/* cairo_font_slant_t */
#define CAIRO_FONT_SLANT_NORMAL              0
#define CAIRO_FONT_SLANT_ITALIC              1
#define CAIRO_FONT_SLANT_OBLIQUE             2

/* cairo_font_weight_t */
#define CAIRO_FONT_WEIGHT_NORMAL            0
#define CAIRO_FONT_WEIGHT_BOLD              1

/* cairo_path_data_type_t */
#define CAIRO_PATH_MOVE_TO                  0
#define CAIRO_PATH_LINE_TO                  1
#define CAIRO_PATH_CURVE_TO                 2
#define CAIRO_PATH_CLOSE_PATH               3

/* cairo_line_cap_t */
#define CAIRO_LINE_CAP_BUTT                 0
#define CAIRO_LINE_CAP_ROUND                1
#define CAIRO_LINE_CAP_SQUARE               2

/* cairo_line_join_t */
#define CAIRO_LINE_JOIN_MITER               0
#define CAIRO_LINE_JOIN_ROUND               1
#define CAIRO_LINE_JOIN_BEVEL               2

/* cairo_format_t */
#define CAIRO_FORMAT_ARGB32                 0
#define CAIRO_FORMAT_RGB24                  1
#define CAIRO_FORMAT_A8                     2
#define CAIRO_FORMAT_A1                     3

/* cairo_fill_rule_t */
#define CAIRO_FILL_RULE_WINDING             0
#define CAIRO_FILL_RULE_EVEN_ODD            1

/* cairo_operator_t */
#define CAIRO_OPERATOR_CLEAR                0
#define CAIRO_OPERATOR_SOURCE               1
#define CAIRO_OPERATOR_OVER                 2
#define CAIRO_OPERATOR_IN                   3
#define CAIRO_OPERATOR_OUT                  4
#define CAIRO_OPERATOR_ATOP                 5
#define CAIRO_OPERATOR_DEST                 6
#define CAIRO_OPERATOR_DEST_OVER            7
#define CAIRO_OPERATOR_DEST_IN              8
#define CAIRO_OPERATOR_DEST_OUT             9
#define CAIRO_OPERATOR_DEST_ATOP            10
#define CAIRO_OPERATOR_XOR                  11
#define CAIRO_OPERATOR_ADD                  12
#define CAIRO_OPERATOR_SATURATE             13

/* cairo_status_t */
#define CAIRO_STATUS_SUCCESS                0
#define CAIRO_STATUS_NO_MEMORY              1
#define CAIRO_STATUS_INVALID_RESTORE        2
#define CAIRO_STATUS_INVALID_POP_GROUP      3
#define CAIRO_STATUS_NO_CURRENT_POINT       4
#define CAIRO_STATUS_INVALID_MATRIX         5
#define CAIRO_STATUS_INVALID_STATUS         6
#define CAIRO_STATUS_NULL_POINTER           7
#define CAIRO_STATUS_INVALID_STRING         8
#define CAIRO_STATUS_INVALID_PATH_DATA      9
#define CAIRO_STATUS_READ_ERROR             10
#define CAIRO_STATUS_WRITE_ERROR            11
#define CAIRO_STATUS_SURFACE_FINISHED       12
#define CAIRO_STATUS_SURFACE_TYPE_MISMATCH  13
#define CAIRO_STATUS_PATTERN_TYPE_MISMATCH  14
#define CAIRO_STATUS_INVALID_CONTENT        15
#define CAIRO_STATUS_INVALID_FORMAT         16
#define CAIRO_STATUS_INVALID_VISUAL         17
#define CAIRO_STATUS_FILE_NOT_FOUND         18
#define CAIRO_STATUS_INVALID_DASH           19
#define CAIRO_STATUS_INVALID_DSC_COMMENT    20
#define CAIRO_STATUS_INVALID_INDEX          21
#define CAIRO_STATUS_CLIP_NOT_REPRESENTABLE 22
#define CAIRO_STATUS_TEMP_FILE_ERROR        23
#define CAIRO_STATUS_INVALID_STRIDE         24
#define CAIRO_STATUS_FONT_TYPE_MISMATCH     25
#define CAIRO_STATUS_USER_FONT_IMMUTABLE    26
#define CAIRO_STATUS_USER_FONT_ERROR        27
#define CAIRO_STATUS_NEGATIVE_COUNT         28
#define CAIRO_STATUS_INVALID_CLUSTERS       29
#define CAIRO_STATUS_INVALID_SLANT          30
#define CAIRO_STATUS_INVALID_WEIGHT         31

#endif /* HB_CAIRO_CH_ */
