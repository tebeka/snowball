/* Generated from romanian.sbl by Snowball 3.0.1 - https://snowballstem.org/ */

#include "header.h"

#ifdef __cplusplus
extern "C" {
#endif
extern int romanian_UTF_8_stem(struct SN_env * z);
#ifdef __cplusplus
}
#endif
static int r_vowel_suffix(struct SN_env * z);
static int r_verb_suffix(struct SN_env * z);
static int r_combo_suffix(struct SN_env * z);
static int r_standard_suffix(struct SN_env * z);
static int r_step_0(struct SN_env * z);
static int r_R2(struct SN_env * z);
static int r_R1(struct SN_env * z);
static int r_RV(struct SN_env * z);
static int r_mark_regions(struct SN_env * z);
static int r_postlude(struct SN_env * z);
static int r_prelude(struct SN_env * z);
static int r_norm(struct SN_env * z);
#ifdef __cplusplus
extern "C" {
#endif


extern struct SN_env * romanian_UTF_8_create_env(void);
extern void romanian_UTF_8_close_env(struct SN_env * z);


#ifdef __cplusplus
}
#endif
static const symbol s_0_0[2] = { 0xC5, 0x9F };
static const symbol s_0_1[2] = { 0xC5, 0xA3 };
static const struct among a_0[2] = {
{ 2, s_0_0, 0, 1, 0},
{ 2, s_0_1, 0, 2, 0}
};

static const symbol s_1_1[1] = { 'I' };
static const symbol s_1_2[1] = { 'U' };
static const struct among a_1[3] = {
{ 0, 0, 0, 3, 0},
{ 1, s_1_1, -1, 1, 0},
{ 1, s_1_2, -2, 2, 0}
};

static const symbol s_2_0[2] = { 'e', 'a' };
static const symbol s_2_1[5] = { 'a', 0xC8, 0x9B, 'i', 'a' };
static const symbol s_2_2[3] = { 'a', 'u', 'a' };
static const symbol s_2_3[3] = { 'i', 'u', 'a' };
static const symbol s_2_4[5] = { 'a', 0xC8, 0x9B, 'i', 'e' };
static const symbol s_2_5[3] = { 'e', 'l', 'e' };
static const symbol s_2_6[3] = { 'i', 'l', 'e' };
static const symbol s_2_7[4] = { 'i', 'i', 'l', 'e' };
static const symbol s_2_8[3] = { 'i', 'e', 'i' };
static const symbol s_2_9[4] = { 'a', 't', 'e', 'i' };
static const symbol s_2_10[2] = { 'i', 'i' };
static const symbol s_2_11[4] = { 'u', 'l', 'u', 'i' };
static const symbol s_2_12[2] = { 'u', 'l' };
static const symbol s_2_13[4] = { 'e', 'l', 'o', 'r' };
static const symbol s_2_14[4] = { 'i', 'l', 'o', 'r' };
static const symbol s_2_15[5] = { 'i', 'i', 'l', 'o', 'r' };
static const struct among a_2[16] = {
{ 2, s_2_0, 0, 3, 0},
{ 5, s_2_1, 0, 7, 0},
{ 3, s_2_2, 0, 2, 0},
{ 3, s_2_3, 0, 4, 0},
{ 5, s_2_4, 0, 7, 0},
{ 3, s_2_5, 0, 3, 0},
{ 3, s_2_6, 0, 5, 0},
{ 4, s_2_7, -1, 4, 0},
{ 3, s_2_8, 0, 4, 0},
{ 4, s_2_9, 0, 6, 0},
{ 2, s_2_10, 0, 4, 0},
{ 4, s_2_11, 0, 1, 0},
{ 2, s_2_12, 0, 1, 0},
{ 4, s_2_13, 0, 3, 0},
{ 4, s_2_14, 0, 4, 0},
{ 5, s_2_15, -1, 4, 0}
};

static const symbol s_3_0[5] = { 'i', 'c', 'a', 'l', 'a' };
static const symbol s_3_1[5] = { 'i', 'c', 'i', 'v', 'a' };
static const symbol s_3_2[5] = { 'a', 't', 'i', 'v', 'a' };
static const symbol s_3_3[5] = { 'i', 't', 'i', 'v', 'a' };
static const symbol s_3_4[5] = { 'i', 'c', 'a', 'l', 'e' };
static const symbol s_3_5[7] = { 'a', 0xC8, 0x9B, 'i', 'u', 'n', 'e' };
static const symbol s_3_6[7] = { 'i', 0xC8, 0x9B, 'i', 'u', 'n', 'e' };
static const symbol s_3_7[6] = { 'a', 't', 'o', 'a', 'r', 'e' };
static const symbol s_3_8[6] = { 'i', 't', 'o', 'a', 'r', 'e' };
static const symbol s_3_9[7] = { 0xC4, 0x83, 't', 'o', 'a', 'r', 'e' };
static const symbol s_3_10[7] = { 'i', 'c', 'i', 't', 'a', 't', 'e' };
static const symbol s_3_11[9] = { 'a', 'b', 'i', 'l', 'i', 't', 'a', 't', 'e' };
static const symbol s_3_12[9] = { 'i', 'b', 'i', 'l', 'i', 't', 'a', 't', 'e' };
static const symbol s_3_13[7] = { 'i', 'v', 'i', 't', 'a', 't', 'e' };
static const symbol s_3_14[5] = { 'i', 'c', 'i', 'v', 'e' };
static const symbol s_3_15[5] = { 'a', 't', 'i', 'v', 'e' };
static const symbol s_3_16[5] = { 'i', 't', 'i', 'v', 'e' };
static const symbol s_3_17[5] = { 'i', 'c', 'a', 'l', 'i' };
static const symbol s_3_18[5] = { 'a', 't', 'o', 'r', 'i' };
static const symbol s_3_19[7] = { 'i', 'c', 'a', 't', 'o', 'r', 'i' };
static const symbol s_3_20[5] = { 'i', 't', 'o', 'r', 'i' };
static const symbol s_3_21[6] = { 0xC4, 0x83, 't', 'o', 'r', 'i' };
static const symbol s_3_22[7] = { 'i', 'c', 'i', 't', 'a', 't', 'i' };
static const symbol s_3_23[9] = { 'a', 'b', 'i', 'l', 'i', 't', 'a', 't', 'i' };
static const symbol s_3_24[7] = { 'i', 'v', 'i', 't', 'a', 't', 'i' };
static const symbol s_3_25[5] = { 'i', 'c', 'i', 'v', 'i' };
static const symbol s_3_26[5] = { 'a', 't', 'i', 'v', 'i' };
static const symbol s_3_27[5] = { 'i', 't', 'i', 'v', 'i' };
static const symbol s_3_28[7] = { 'i', 'c', 'i', 't', 0xC4, 0x83, 'i' };
static const symbol s_3_29[9] = { 'a', 'b', 'i', 'l', 'i', 't', 0xC4, 0x83, 'i' };
static const symbol s_3_30[7] = { 'i', 'v', 'i', 't', 0xC4, 0x83, 'i' };
static const symbol s_3_31[9] = { 'i', 'c', 'i', 't', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_3_32[11] = { 'a', 'b', 'i', 'l', 'i', 't', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_3_33[9] = { 'i', 'v', 'i', 't', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_3_34[4] = { 'i', 'c', 'a', 'l' };
static const symbol s_3_35[4] = { 'a', 't', 'o', 'r' };
static const symbol s_3_36[6] = { 'i', 'c', 'a', 't', 'o', 'r' };
static const symbol s_3_37[4] = { 'i', 't', 'o', 'r' };
static const symbol s_3_38[5] = { 0xC4, 0x83, 't', 'o', 'r' };
static const symbol s_3_39[4] = { 'i', 'c', 'i', 'v' };
static const symbol s_3_40[4] = { 'a', 't', 'i', 'v' };
static const symbol s_3_41[4] = { 'i', 't', 'i', 'v' };
static const symbol s_3_42[6] = { 'i', 'c', 'a', 'l', 0xC4, 0x83 };
static const symbol s_3_43[6] = { 'i', 'c', 'i', 'v', 0xC4, 0x83 };
static const symbol s_3_44[6] = { 'a', 't', 'i', 'v', 0xC4, 0x83 };
static const symbol s_3_45[6] = { 'i', 't', 'i', 'v', 0xC4, 0x83 };
static const struct among a_3[46] = {
{ 5, s_3_0, 0, 4, 0},
{ 5, s_3_1, 0, 4, 0},
{ 5, s_3_2, 0, 5, 0},
{ 5, s_3_3, 0, 6, 0},
{ 5, s_3_4, 0, 4, 0},
{ 7, s_3_5, 0, 5, 0},
{ 7, s_3_6, 0, 6, 0},
{ 6, s_3_7, 0, 5, 0},
{ 6, s_3_8, 0, 6, 0},
{ 7, s_3_9, 0, 5, 0},
{ 7, s_3_10, 0, 4, 0},
{ 9, s_3_11, 0, 1, 0},
{ 9, s_3_12, 0, 2, 0},
{ 7, s_3_13, 0, 3, 0},
{ 5, s_3_14, 0, 4, 0},
{ 5, s_3_15, 0, 5, 0},
{ 5, s_3_16, 0, 6, 0},
{ 5, s_3_17, 0, 4, 0},
{ 5, s_3_18, 0, 5, 0},
{ 7, s_3_19, -1, 4, 0},
{ 5, s_3_20, 0, 6, 0},
{ 6, s_3_21, 0, 5, 0},
{ 7, s_3_22, 0, 4, 0},
{ 9, s_3_23, 0, 1, 0},
{ 7, s_3_24, 0, 3, 0},
{ 5, s_3_25, 0, 4, 0},
{ 5, s_3_26, 0, 5, 0},
{ 5, s_3_27, 0, 6, 0},
{ 7, s_3_28, 0, 4, 0},
{ 9, s_3_29, 0, 1, 0},
{ 7, s_3_30, 0, 3, 0},
{ 9, s_3_31, 0, 4, 0},
{ 11, s_3_32, 0, 1, 0},
{ 9, s_3_33, 0, 3, 0},
{ 4, s_3_34, 0, 4, 0},
{ 4, s_3_35, 0, 5, 0},
{ 6, s_3_36, -1, 4, 0},
{ 4, s_3_37, 0, 6, 0},
{ 5, s_3_38, 0, 5, 0},
{ 4, s_3_39, 0, 4, 0},
{ 4, s_3_40, 0, 5, 0},
{ 4, s_3_41, 0, 6, 0},
{ 6, s_3_42, 0, 4, 0},
{ 6, s_3_43, 0, 4, 0},
{ 6, s_3_44, 0, 5, 0},
{ 6, s_3_45, 0, 6, 0}
};

static const symbol s_4_0[3] = { 'i', 'c', 'a' };
static const symbol s_4_1[5] = { 'a', 'b', 'i', 'l', 'a' };
static const symbol s_4_2[5] = { 'i', 'b', 'i', 'l', 'a' };
static const symbol s_4_3[4] = { 'o', 'a', 's', 'a' };
static const symbol s_4_4[3] = { 'a', 't', 'a' };
static const symbol s_4_5[3] = { 'i', 't', 'a' };
static const symbol s_4_6[4] = { 'a', 'n', 't', 'a' };
static const symbol s_4_7[4] = { 'i', 's', 't', 'a' };
static const symbol s_4_8[3] = { 'u', 't', 'a' };
static const symbol s_4_9[3] = { 'i', 'v', 'a' };
static const symbol s_4_10[2] = { 'i', 'c' };
static const symbol s_4_11[3] = { 'i', 'c', 'e' };
static const symbol s_4_12[5] = { 'a', 'b', 'i', 'l', 'e' };
static const symbol s_4_13[5] = { 'i', 'b', 'i', 'l', 'e' };
static const symbol s_4_14[4] = { 'i', 's', 'm', 'e' };
static const symbol s_4_15[4] = { 'i', 'u', 'n', 'e' };
static const symbol s_4_16[4] = { 'o', 'a', 's', 'e' };
static const symbol s_4_17[3] = { 'a', 't', 'e' };
static const symbol s_4_18[5] = { 'i', 't', 'a', 't', 'e' };
static const symbol s_4_19[3] = { 'i', 't', 'e' };
static const symbol s_4_20[4] = { 'a', 'n', 't', 'e' };
static const symbol s_4_21[4] = { 'i', 's', 't', 'e' };
static const symbol s_4_22[3] = { 'u', 't', 'e' };
static const symbol s_4_23[3] = { 'i', 'v', 'e' };
static const symbol s_4_24[3] = { 'i', 'c', 'i' };
static const symbol s_4_25[5] = { 'a', 'b', 'i', 'l', 'i' };
static const symbol s_4_26[5] = { 'i', 'b', 'i', 'l', 'i' };
static const symbol s_4_27[4] = { 'i', 'u', 'n', 'i' };
static const symbol s_4_28[5] = { 'a', 't', 'o', 'r', 'i' };
static const symbol s_4_29[3] = { 'o', 's', 'i' };
static const symbol s_4_30[3] = { 'a', 't', 'i' };
static const symbol s_4_31[5] = { 'i', 't', 'a', 't', 'i' };
static const symbol s_4_32[3] = { 'i', 't', 'i' };
static const symbol s_4_33[4] = { 'a', 'n', 't', 'i' };
static const symbol s_4_34[4] = { 'i', 's', 't', 'i' };
static const symbol s_4_35[3] = { 'u', 't', 'i' };
static const symbol s_4_36[5] = { 'i', 0xC8, 0x99, 't', 'i' };
static const symbol s_4_37[3] = { 'i', 'v', 'i' };
static const symbol s_4_38[5] = { 'i', 't', 0xC4, 0x83, 'i' };
static const symbol s_4_39[4] = { 'o', 0xC8, 0x99, 'i' };
static const symbol s_4_40[7] = { 'i', 't', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_4_41[4] = { 'a', 'b', 'i', 'l' };
static const symbol s_4_42[4] = { 'i', 'b', 'i', 'l' };
static const symbol s_4_43[3] = { 'i', 's', 'm' };
static const symbol s_4_44[4] = { 'a', 't', 'o', 'r' };
static const symbol s_4_45[2] = { 'o', 's' };
static const symbol s_4_46[2] = { 'a', 't' };
static const symbol s_4_47[2] = { 'i', 't' };
static const symbol s_4_48[3] = { 'a', 'n', 't' };
static const symbol s_4_49[3] = { 'i', 's', 't' };
static const symbol s_4_50[2] = { 'u', 't' };
static const symbol s_4_51[2] = { 'i', 'v' };
static const symbol s_4_52[4] = { 'i', 'c', 0xC4, 0x83 };
static const symbol s_4_53[6] = { 'a', 'b', 'i', 'l', 0xC4, 0x83 };
static const symbol s_4_54[6] = { 'i', 'b', 'i', 'l', 0xC4, 0x83 };
static const symbol s_4_55[5] = { 'o', 'a', 's', 0xC4, 0x83 };
static const symbol s_4_56[4] = { 'a', 't', 0xC4, 0x83 };
static const symbol s_4_57[4] = { 'i', 't', 0xC4, 0x83 };
static const symbol s_4_58[5] = { 'a', 'n', 't', 0xC4, 0x83 };
static const symbol s_4_59[5] = { 'i', 's', 't', 0xC4, 0x83 };
static const symbol s_4_60[4] = { 'u', 't', 0xC4, 0x83 };
static const symbol s_4_61[4] = { 'i', 'v', 0xC4, 0x83 };
static const struct among a_4[62] = {
{ 3, s_4_0, 0, 1, 0},
{ 5, s_4_1, 0, 1, 0},
{ 5, s_4_2, 0, 1, 0},
{ 4, s_4_3, 0, 1, 0},
{ 3, s_4_4, 0, 1, 0},
{ 3, s_4_5, 0, 1, 0},
{ 4, s_4_6, 0, 1, 0},
{ 4, s_4_7, 0, 3, 0},
{ 3, s_4_8, 0, 1, 0},
{ 3, s_4_9, 0, 1, 0},
{ 2, s_4_10, 0, 1, 0},
{ 3, s_4_11, 0, 1, 0},
{ 5, s_4_12, 0, 1, 0},
{ 5, s_4_13, 0, 1, 0},
{ 4, s_4_14, 0, 3, 0},
{ 4, s_4_15, 0, 2, 0},
{ 4, s_4_16, 0, 1, 0},
{ 3, s_4_17, 0, 1, 0},
{ 5, s_4_18, -1, 1, 0},
{ 3, s_4_19, 0, 1, 0},
{ 4, s_4_20, 0, 1, 0},
{ 4, s_4_21, 0, 3, 0},
{ 3, s_4_22, 0, 1, 0},
{ 3, s_4_23, 0, 1, 0},
{ 3, s_4_24, 0, 1, 0},
{ 5, s_4_25, 0, 1, 0},
{ 5, s_4_26, 0, 1, 0},
{ 4, s_4_27, 0, 2, 0},
{ 5, s_4_28, 0, 1, 0},
{ 3, s_4_29, 0, 1, 0},
{ 3, s_4_30, 0, 1, 0},
{ 5, s_4_31, -1, 1, 0},
{ 3, s_4_32, 0, 1, 0},
{ 4, s_4_33, 0, 1, 0},
{ 4, s_4_34, 0, 3, 0},
{ 3, s_4_35, 0, 1, 0},
{ 5, s_4_36, 0, 3, 0},
{ 3, s_4_37, 0, 1, 0},
{ 5, s_4_38, 0, 1, 0},
{ 4, s_4_39, 0, 1, 0},
{ 7, s_4_40, 0, 1, 0},
{ 4, s_4_41, 0, 1, 0},
{ 4, s_4_42, 0, 1, 0},
{ 3, s_4_43, 0, 3, 0},
{ 4, s_4_44, 0, 1, 0},
{ 2, s_4_45, 0, 1, 0},
{ 2, s_4_46, 0, 1, 0},
{ 2, s_4_47, 0, 1, 0},
{ 3, s_4_48, 0, 1, 0},
{ 3, s_4_49, 0, 3, 0},
{ 2, s_4_50, 0, 1, 0},
{ 2, s_4_51, 0, 1, 0},
{ 4, s_4_52, 0, 1, 0},
{ 6, s_4_53, 0, 1, 0},
{ 6, s_4_54, 0, 1, 0},
{ 5, s_4_55, 0, 1, 0},
{ 4, s_4_56, 0, 1, 0},
{ 4, s_4_57, 0, 1, 0},
{ 5, s_4_58, 0, 1, 0},
{ 5, s_4_59, 0, 3, 0},
{ 4, s_4_60, 0, 1, 0},
{ 4, s_4_61, 0, 1, 0}
};

static const symbol s_5_0[2] = { 'e', 'a' };
static const symbol s_5_1[2] = { 'i', 'a' };
static const symbol s_5_2[3] = { 'e', 's', 'c' };
static const symbol s_5_3[4] = { 0xC4, 0x83, 's', 'c' };
static const symbol s_5_4[3] = { 'i', 'n', 'd' };
static const symbol s_5_5[4] = { 0xC3, 0xA2, 'n', 'd' };
static const symbol s_5_6[3] = { 'a', 'r', 'e' };
static const symbol s_5_7[3] = { 'e', 'r', 'e' };
static const symbol s_5_8[3] = { 'i', 'r', 'e' };
static const symbol s_5_9[4] = { 0xC3, 0xA2, 'r', 'e' };
static const symbol s_5_10[2] = { 's', 'e' };
static const symbol s_5_11[3] = { 'a', 's', 'e' };
static const symbol s_5_12[4] = { 's', 'e', 's', 'e' };
static const symbol s_5_13[3] = { 'i', 's', 'e' };
static const symbol s_5_14[3] = { 'u', 's', 'e' };
static const symbol s_5_15[4] = { 0xC3, 0xA2, 's', 'e' };
static const symbol s_5_16[5] = { 'e', 0xC8, 0x99, 't', 'e' };
static const symbol s_5_17[6] = { 0xC4, 0x83, 0xC8, 0x99, 't', 'e' };
static const symbol s_5_18[3] = { 'e', 'z', 'e' };
static const symbol s_5_19[2] = { 'a', 'i' };
static const symbol s_5_20[3] = { 'e', 'a', 'i' };
static const symbol s_5_21[3] = { 'i', 'a', 'i' };
static const symbol s_5_22[3] = { 's', 'e', 'i' };
static const symbol s_5_23[5] = { 'e', 0xC8, 0x99, 't', 'i' };
static const symbol s_5_24[6] = { 0xC4, 0x83, 0xC8, 0x99, 't', 'i' };
static const symbol s_5_25[2] = { 'u', 'i' };
static const symbol s_5_26[3] = { 'e', 'z', 'i' };
static const symbol s_5_27[4] = { 'a', 0xC8, 0x99, 'i' };
static const symbol s_5_28[5] = { 's', 'e', 0xC8, 0x99, 'i' };
static const symbol s_5_29[6] = { 'a', 's', 'e', 0xC8, 0x99, 'i' };
static const symbol s_5_30[7] = { 's', 'e', 's', 'e', 0xC8, 0x99, 'i' };
static const symbol s_5_31[6] = { 'i', 's', 'e', 0xC8, 0x99, 'i' };
static const symbol s_5_32[6] = { 'u', 's', 'e', 0xC8, 0x99, 'i' };
static const symbol s_5_33[7] = { 0xC3, 0xA2, 's', 'e', 0xC8, 0x99, 'i' };
static const symbol s_5_34[4] = { 'i', 0xC8, 0x99, 'i' };
static const symbol s_5_35[4] = { 'u', 0xC8, 0x99, 'i' };
static const symbol s_5_36[5] = { 0xC3, 0xA2, 0xC8, 0x99, 'i' };
static const symbol s_5_37[4] = { 'a', 0xC8, 0x9B, 'i' };
static const symbol s_5_38[5] = { 'e', 'a', 0xC8, 0x9B, 'i' };
static const symbol s_5_39[5] = { 'i', 'a', 0xC8, 0x9B, 'i' };
static const symbol s_5_40[4] = { 'e', 0xC8, 0x9B, 'i' };
static const symbol s_5_41[4] = { 'i', 0xC8, 0x9B, 'i' };
static const symbol s_5_42[7] = { 'a', 'r', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_5_43[8] = { 's', 'e', 'r', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_5_44[9] = { 'a', 's', 'e', 'r', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_5_45[10] = { 's', 'e', 's', 'e', 'r', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_5_46[9] = { 'i', 's', 'e', 'r', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_5_47[9] = { 'u', 's', 'e', 'r', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_5_48[10] = { 0xC3, 0xA2, 's', 'e', 'r', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_5_49[7] = { 'i', 'r', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_5_50[7] = { 'u', 'r', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_5_51[8] = { 0xC3, 0xA2, 'r', 0xC4, 0x83, 0xC8, 0x9B, 'i' };
static const symbol s_5_52[5] = { 0xC3, 0xA2, 0xC8, 0x9B, 'i' };
static const symbol s_5_53[3] = { 0xC3, 0xA2, 'i' };
static const symbol s_5_54[2] = { 'a', 'm' };
static const symbol s_5_55[3] = { 'e', 'a', 'm' };
static const symbol s_5_56[3] = { 'i', 'a', 'm' };
static const symbol s_5_57[2] = { 'e', 'm' };
static const symbol s_5_58[4] = { 'a', 's', 'e', 'm' };
static const symbol s_5_59[5] = { 's', 'e', 's', 'e', 'm' };
static const symbol s_5_60[4] = { 'i', 's', 'e', 'm' };
static const symbol s_5_61[4] = { 'u', 's', 'e', 'm' };
static const symbol s_5_62[5] = { 0xC3, 0xA2, 's', 'e', 'm' };
static const symbol s_5_63[2] = { 'i', 'm' };
static const symbol s_5_64[3] = { 0xC4, 0x83, 'm' };
static const symbol s_5_65[5] = { 'a', 'r', 0xC4, 0x83, 'm' };
static const symbol s_5_66[6] = { 's', 'e', 'r', 0xC4, 0x83, 'm' };
static const symbol s_5_67[7] = { 'a', 's', 'e', 'r', 0xC4, 0x83, 'm' };
static const symbol s_5_68[8] = { 's', 'e', 's', 'e', 'r', 0xC4, 0x83, 'm' };
static const symbol s_5_69[7] = { 'i', 's', 'e', 'r', 0xC4, 0x83, 'm' };
static const symbol s_5_70[7] = { 'u', 's', 'e', 'r', 0xC4, 0x83, 'm' };
static const symbol s_5_71[8] = { 0xC3, 0xA2, 's', 'e', 'r', 0xC4, 0x83, 'm' };
static const symbol s_5_72[5] = { 'i', 'r', 0xC4, 0x83, 'm' };
static const symbol s_5_73[5] = { 'u', 'r', 0xC4, 0x83, 'm' };
static const symbol s_5_74[6] = { 0xC3, 0xA2, 'r', 0xC4, 0x83, 'm' };
static const symbol s_5_75[3] = { 0xC3, 0xA2, 'm' };
static const symbol s_5_76[2] = { 'a', 'u' };
static const symbol s_5_77[3] = { 'e', 'a', 'u' };
static const symbol s_5_78[3] = { 'i', 'a', 'u' };
static const symbol s_5_79[4] = { 'i', 'n', 'd', 'u' };
static const symbol s_5_80[5] = { 0xC3, 0xA2, 'n', 'd', 'u' };
static const symbol s_5_81[2] = { 'e', 'z' };
static const symbol s_5_82[6] = { 'e', 'a', 's', 'c', 0xC4, 0x83 };
static const symbol s_5_83[4] = { 'a', 'r', 0xC4, 0x83 };
static const symbol s_5_84[5] = { 's', 'e', 'r', 0xC4, 0x83 };
static const symbol s_5_85[6] = { 'a', 's', 'e', 'r', 0xC4, 0x83 };
static const symbol s_5_86[7] = { 's', 'e', 's', 'e', 'r', 0xC4, 0x83 };
static const symbol s_5_87[6] = { 'i', 's', 'e', 'r', 0xC4, 0x83 };
static const symbol s_5_88[6] = { 'u', 's', 'e', 'r', 0xC4, 0x83 };
static const symbol s_5_89[7] = { 0xC3, 0xA2, 's', 'e', 'r', 0xC4, 0x83 };
static const symbol s_5_90[4] = { 'i', 'r', 0xC4, 0x83 };
static const symbol s_5_91[4] = { 'u', 'r', 0xC4, 0x83 };
static const symbol s_5_92[5] = { 0xC3, 0xA2, 'r', 0xC4, 0x83 };
static const symbol s_5_93[5] = { 'e', 'a', 'z', 0xC4, 0x83 };
static const struct among a_5[94] = {
{ 2, s_5_0, 0, 1, 0},
{ 2, s_5_1, 0, 1, 0},
{ 3, s_5_2, 0, 1, 0},
{ 4, s_5_3, 0, 1, 0},
{ 3, s_5_4, 0, 1, 0},
{ 4, s_5_5, 0, 1, 0},
{ 3, s_5_6, 0, 1, 0},
{ 3, s_5_7, 0, 1, 0},
{ 3, s_5_8, 0, 1, 0},
{ 4, s_5_9, 0, 1, 0},
{ 2, s_5_10, 0, 2, 0},
{ 3, s_5_11, -1, 1, 0},
{ 4, s_5_12, -2, 2, 0},
{ 3, s_5_13, -3, 1, 0},
{ 3, s_5_14, -4, 1, 0},
{ 4, s_5_15, -5, 1, 0},
{ 5, s_5_16, 0, 1, 0},
{ 6, s_5_17, 0, 1, 0},
{ 3, s_5_18, 0, 1, 0},
{ 2, s_5_19, 0, 1, 0},
{ 3, s_5_20, -1, 1, 0},
{ 3, s_5_21, -2, 1, 0},
{ 3, s_5_22, 0, 2, 0},
{ 5, s_5_23, 0, 1, 0},
{ 6, s_5_24, 0, 1, 0},
{ 2, s_5_25, 0, 1, 0},
{ 3, s_5_26, 0, 1, 0},
{ 4, s_5_27, 0, 1, 0},
{ 5, s_5_28, 0, 2, 0},
{ 6, s_5_29, -1, 1, 0},
{ 7, s_5_30, -2, 2, 0},
{ 6, s_5_31, -3, 1, 0},
{ 6, s_5_32, -4, 1, 0},
{ 7, s_5_33, -5, 1, 0},
{ 4, s_5_34, 0, 1, 0},
{ 4, s_5_35, 0, 1, 0},
{ 5, s_5_36, 0, 1, 0},
{ 4, s_5_37, 0, 2, 0},
{ 5, s_5_38, -1, 1, 0},
{ 5, s_5_39, -2, 1, 0},
{ 4, s_5_40, 0, 2, 0},
{ 4, s_5_41, 0, 2, 0},
{ 7, s_5_42, 0, 1, 0},
{ 8, s_5_43, 0, 2, 0},
{ 9, s_5_44, -1, 1, 0},
{ 10, s_5_45, -2, 2, 0},
{ 9, s_5_46, -3, 1, 0},
{ 9, s_5_47, -4, 1, 0},
{ 10, s_5_48, -5, 1, 0},
{ 7, s_5_49, 0, 1, 0},
{ 7, s_5_50, 0, 1, 0},
{ 8, s_5_51, 0, 1, 0},
{ 5, s_5_52, 0, 2, 0},
{ 3, s_5_53, 0, 1, 0},
{ 2, s_5_54, 0, 1, 0},
{ 3, s_5_55, -1, 1, 0},
{ 3, s_5_56, -2, 1, 0},
{ 2, s_5_57, 0, 2, 0},
{ 4, s_5_58, -1, 1, 0},
{ 5, s_5_59, -2, 2, 0},
{ 4, s_5_60, -3, 1, 0},
{ 4, s_5_61, -4, 1, 0},
{ 5, s_5_62, -5, 1, 0},
{ 2, s_5_63, 0, 2, 0},
{ 3, s_5_64, 0, 2, 0},
{ 5, s_5_65, -1, 1, 0},
{ 6, s_5_66, -2, 2, 0},
{ 7, s_5_67, -1, 1, 0},
{ 8, s_5_68, -2, 2, 0},
{ 7, s_5_69, -3, 1, 0},
{ 7, s_5_70, -4, 1, 0},
{ 8, s_5_71, -5, 1, 0},
{ 5, s_5_72, -8, 1, 0},
{ 5, s_5_73, -9, 1, 0},
{ 6, s_5_74, -10, 1, 0},
{ 3, s_5_75, 0, 2, 0},
{ 2, s_5_76, 0, 1, 0},
{ 3, s_5_77, -1, 1, 0},
{ 3, s_5_78, -2, 1, 0},
{ 4, s_5_79, 0, 1, 0},
{ 5, s_5_80, 0, 1, 0},
{ 2, s_5_81, 0, 1, 0},
{ 6, s_5_82, 0, 1, 0},
{ 4, s_5_83, 0, 1, 0},
{ 5, s_5_84, 0, 2, 0},
{ 6, s_5_85, -1, 1, 0},
{ 7, s_5_86, -2, 2, 0},
{ 6, s_5_87, -3, 1, 0},
{ 6, s_5_88, -4, 1, 0},
{ 7, s_5_89, -5, 1, 0},
{ 4, s_5_90, 0, 1, 0},
{ 4, s_5_91, 0, 1, 0},
{ 5, s_5_92, 0, 1, 0},
{ 5, s_5_93, 0, 1, 0}
};

static const symbol s_6_0[1] = { 'a' };
static const symbol s_6_1[1] = { 'e' };
static const symbol s_6_2[2] = { 'i', 'e' };
static const symbol s_6_3[1] = { 'i' };
static const symbol s_6_4[2] = { 0xC4, 0x83 };
static const struct among a_6[5] = {
{ 1, s_6_0, 0, 1, 0},
{ 1, s_6_1, 0, 1, 0},
{ 2, s_6_2, -1, 1, 0},
{ 1, s_6_3, 0, 1, 0},
{ 2, s_6_4, 0, 1, 0}
};

static const unsigned char g_v[] = { 17, 65, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 32, 0, 0, 4 };

static const symbol s_0[] = { 0xC8, 0x99 };
static const symbol s_1[] = { 0xC8, 0x9B };
static const symbol s_2[] = { 'U' };
static const symbol s_3[] = { 'I' };
static const symbol s_4[] = { 'i' };
static const symbol s_5[] = { 'u' };
static const symbol s_6[] = { 'a' };
static const symbol s_7[] = { 'e' };
static const symbol s_8[] = { 'i' };
static const symbol s_9[] = { 'a', 'b' };
static const symbol s_10[] = { 'i' };
static const symbol s_11[] = { 'a', 't' };
static const symbol s_12[] = { 'a', 0xC8, 0x9B, 'i' };
static const symbol s_13[] = { 'a', 'b', 'i', 'l' };
static const symbol s_14[] = { 'i', 'b', 'i', 'l' };
static const symbol s_15[] = { 'i', 'v' };
static const symbol s_16[] = { 'i', 'c' };
static const symbol s_17[] = { 'a', 't' };
static const symbol s_18[] = { 'i', 't' };
static const symbol s_19[] = { 0xC8, 0x9B };
static const symbol s_20[] = { 't' };
static const symbol s_21[] = { 'i', 's', 't' };

static int r_norm(struct SN_env * z) {
    int among_var;
    {
        int v_1 = z->c;
        while (1) {
            int v_2 = z->c;
            while (1) {
                int v_3 = z->c;
                z->bra = z->c;
                if (z->c + 1 >= z->l || (z->p[z->c + 1] != 159 && z->p[z->c + 1] != 163)) goto lab2;
                among_var = find_among(z, a_0, 2);
                if (!among_var) goto lab2;
                z->ket = z->c;
                switch (among_var) {
                    case 1:
                        {
                            int ret = slice_from_s(z, 2, s_0);
                            if (ret < 0) return ret;
                        }
                        break;
                    case 2:
                        {
                            int ret = slice_from_s(z, 2, s_1);
                            if (ret < 0) return ret;
                        }
                        break;
                }
                z->c = v_3;
                break;
            lab2:
                z->c = v_3;
                {
                    int ret = skip_utf8(z->p, z->c, z->l, 1);
                    if (ret < 0) goto lab1;
                    z->c = ret;
                }
            }
            continue;
        lab1:
            z->c = v_2;
            break;
        }
        z->c = v_1;
    }
    return 1;
}

static int r_prelude(struct SN_env * z) {
    while (1) {
        int v_1 = z->c;
        while (1) {
            int v_2 = z->c;
            if (in_grouping_U(z, g_v, 97, 259, 0)) goto lab1;
            z->bra = z->c;
            {
                int v_3 = z->c;
                if (z->c == z->l || z->p[z->c] != 'u') goto lab3;
                z->c++;
                z->ket = z->c;
                if (in_grouping_U(z, g_v, 97, 259, 0)) goto lab3;
                {
                    int ret = slice_from_s(z, 1, s_2);
                    if (ret < 0) return ret;
                }
                goto lab2;
            lab3:
                z->c = v_3;
                if (z->c == z->l || z->p[z->c] != 'i') goto lab1;
                z->c++;
                z->ket = z->c;
                if (in_grouping_U(z, g_v, 97, 259, 0)) goto lab1;
                {
                    int ret = slice_from_s(z, 1, s_3);
                    if (ret < 0) return ret;
                }
            }
        lab2:
            z->c = v_2;
            break;
        lab1:
            z->c = v_2;
            {
                int ret = skip_utf8(z->p, z->c, z->l, 1);
                if (ret < 0) goto lab0;
                z->c = ret;
            }
        }
        continue;
    lab0:
        z->c = v_1;
        break;
    }
    return 1;
}

static int r_mark_regions(struct SN_env * z) {
    z->I[2] = z->l;
    z->I[1] = z->l;
    z->I[0] = z->l;
    {
        int v_1 = z->c;
        {
            int v_2 = z->c;
            if (in_grouping_U(z, g_v, 97, 259, 0)) goto lab2;
            {
                int v_3 = z->c;
                if (out_grouping_U(z, g_v, 97, 259, 0)) goto lab4;
                {
                    int ret = out_grouping_U(z, g_v, 97, 259, 1);
                    if (ret < 0) goto lab4;
                    z->c += ret;
                }
                goto lab3;
            lab4:
                z->c = v_3;
                if (in_grouping_U(z, g_v, 97, 259, 0)) goto lab2;
                {
                    int ret = in_grouping_U(z, g_v, 97, 259, 1);
                    if (ret < 0) goto lab2;
                    z->c += ret;
                }
            }
        lab3:
            goto lab1;
        lab2:
            z->c = v_2;
            if (out_grouping_U(z, g_v, 97, 259, 0)) goto lab0;
            {
                int v_4 = z->c;
                if (out_grouping_U(z, g_v, 97, 259, 0)) goto lab6;
                {
                    int ret = out_grouping_U(z, g_v, 97, 259, 1);
                    if (ret < 0) goto lab6;
                    z->c += ret;
                }
                goto lab5;
            lab6:
                z->c = v_4;
                if (in_grouping_U(z, g_v, 97, 259, 0)) goto lab0;
                {
                    int ret = skip_utf8(z->p, z->c, z->l, 1);
                    if (ret < 0) goto lab0;
                    z->c = ret;
                }
            }
        lab5:
            ;
        }
    lab1:
        z->I[2] = z->c;
    lab0:
        z->c = v_1;
    }
    {
        int v_5 = z->c;
        {
            int ret = out_grouping_U(z, g_v, 97, 259, 1);
            if (ret < 0) goto lab7;
            z->c += ret;
        }
        {
            int ret = in_grouping_U(z, g_v, 97, 259, 1);
            if (ret < 0) goto lab7;
            z->c += ret;
        }
        z->I[1] = z->c;
        {
            int ret = out_grouping_U(z, g_v, 97, 259, 1);
            if (ret < 0) goto lab7;
            z->c += ret;
        }
        {
            int ret = in_grouping_U(z, g_v, 97, 259, 1);
            if (ret < 0) goto lab7;
            z->c += ret;
        }
        z->I[0] = z->c;
    lab7:
        z->c = v_5;
    }
    return 1;
}

static int r_postlude(struct SN_env * z) {
    int among_var;
    while (1) {
        int v_1 = z->c;
        z->bra = z->c;
        if (z->c >= z->l || (z->p[z->c + 0] != 73 && z->p[z->c + 0] != 85)) among_var = 3; else
        among_var = find_among(z, a_1, 3);
        z->ket = z->c;
        switch (among_var) {
            case 1:
                {
                    int ret = slice_from_s(z, 1, s_4);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int ret = slice_from_s(z, 1, s_5);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {
                    int ret = skip_utf8(z->p, z->c, z->l, 1);
                    if (ret < 0) goto lab0;
                    z->c = ret;
                }
                break;
        }
        continue;
    lab0:
        z->c = v_1;
        break;
    }
    return 1;
}

static int r_RV(struct SN_env * z) {
    return z->I[2] <= z->c;
}

static int r_R1(struct SN_env * z) {
    return z->I[1] <= z->c;
}

static int r_R2(struct SN_env * z) {
    return z->I[0] <= z->c;
}

static int r_step_0(struct SN_env * z) {
    int among_var;
    z->ket = z->c;
    if (z->c - 1 <= z->lb || z->p[z->c - 1] >> 5 != 3 || !((266786 >> (z->p[z->c - 1] & 0x1f)) & 1)) return 0;
    among_var = find_among_b(z, a_2, 16);
    if (!among_var) return 0;
    z->bra = z->c;
    {
        int ret = r_R1(z);
        if (ret <= 0) return ret;
    }
    switch (among_var) {
        case 1:
            {
                int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            break;
        case 2:
            {
                int ret = slice_from_s(z, 1, s_6);
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {
                int ret = slice_from_s(z, 1, s_7);
                if (ret < 0) return ret;
            }
            break;
        case 4:
            {
                int ret = slice_from_s(z, 1, s_8);
                if (ret < 0) return ret;
            }
            break;
        case 5:
            {
                int v_1 = z->l - z->c;
                if (!(eq_s_b(z, 2, s_9))) goto lab0;
                return 0;
            lab0:
                z->c = z->l - v_1;
            }
            {
                int ret = slice_from_s(z, 1, s_10);
                if (ret < 0) return ret;
            }
            break;
        case 6:
            {
                int ret = slice_from_s(z, 2, s_11);
                if (ret < 0) return ret;
            }
            break;
        case 7:
            {
                int ret = slice_from_s(z, 4, s_12);
                if (ret < 0) return ret;
            }
            break;
    }
    return 1;
}

static int r_combo_suffix(struct SN_env * z) {
    int among_var;
    {
        int v_1 = z->l - z->c;
        z->ket = z->c;
        among_var = find_among_b(z, a_3, 46);
        if (!among_var) return 0;
        z->bra = z->c;
        {
            int ret = r_R1(z);
            if (ret <= 0) return ret;
        }
        switch (among_var) {
            case 1:
                {
                    int ret = slice_from_s(z, 4, s_13);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int ret = slice_from_s(z, 4, s_14);
                    if (ret < 0) return ret;
                }
                break;
            case 3:
                {
                    int ret = slice_from_s(z, 2, s_15);
                    if (ret < 0) return ret;
                }
                break;
            case 4:
                {
                    int ret = slice_from_s(z, 2, s_16);
                    if (ret < 0) return ret;
                }
                break;
            case 5:
                {
                    int ret = slice_from_s(z, 2, s_17);
                    if (ret < 0) return ret;
                }
                break;
            case 6:
                {
                    int ret = slice_from_s(z, 2, s_18);
                    if (ret < 0) return ret;
                }
                break;
        }
        z->I[3] = 1;
        z->c = z->l - v_1;
    }
    return 1;
}

static int r_standard_suffix(struct SN_env * z) {
    int among_var;
    z->I[3] = 0;
    while (1) {
        int v_1 = z->l - z->c;
        {
            int ret = r_combo_suffix(z);
            if (ret == 0) goto lab0;
            if (ret < 0) return ret;
        }
        continue;
    lab0:
        z->c = z->l - v_1;
        break;
    }
    z->ket = z->c;
    among_var = find_among_b(z, a_4, 62);
    if (!among_var) return 0;
    z->bra = z->c;
    {
        int ret = r_R2(z);
        if (ret <= 0) return ret;
    }
    switch (among_var) {
        case 1:
            {
                int ret = slice_del(z);
                if (ret < 0) return ret;
            }
            break;
        case 2:
            if (!(eq_s_b(z, 2, s_19))) return 0;
            z->bra = z->c;
            {
                int ret = slice_from_s(z, 1, s_20);
                if (ret < 0) return ret;
            }
            break;
        case 3:
            {
                int ret = slice_from_s(z, 3, s_21);
                if (ret < 0) return ret;
            }
            break;
    }
    z->I[3] = 1;
    return 1;
}

static int r_verb_suffix(struct SN_env * z) {
    int among_var;

    {
        int v_1;
        if (z->c < z->I[2]) return 0;
        v_1 = z->lb; z->lb = z->I[2];
        z->ket = z->c;
        among_var = find_among_b(z, a_5, 94);
        if (!among_var) { z->lb = v_1; return 0; }
        z->bra = z->c;
        switch (among_var) {
            case 1:
                {
                    int v_2 = z->l - z->c;
                    if (out_grouping_b_U(z, g_v, 97, 259, 0)) goto lab1;
                    goto lab0;
                lab1:
                    z->c = z->l - v_2;
                    if (z->c <= z->lb || z->p[z->c - 1] != 'u') { z->lb = v_1; return 0; }
                    z->c--;
                }
            lab0:
                {
                    int ret = slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
            case 2:
                {
                    int ret = slice_del(z);
                    if (ret < 0) return ret;
                }
                break;
        }
        z->lb = v_1;
    }
    return 1;
}

static int r_vowel_suffix(struct SN_env * z) {
    z->ket = z->c;
    if (!find_among_b(z, a_6, 5)) return 0;
    z->bra = z->c;
    {
        int ret = r_RV(z);
        if (ret <= 0) return ret;
    }
    {
        int ret = slice_del(z);
        if (ret < 0) return ret;
    }
    return 1;
}

extern int romanian_UTF_8_stem(struct SN_env * z) {
    {
        int ret = r_norm(z);
        if (ret < 0) return ret;
    }
    {
        int v_1 = z->c;
        {
            int ret = r_prelude(z);
            if (ret < 0) return ret;
        }
        z->c = v_1;
    }
    {
        int ret = r_mark_regions(z);
        if (ret < 0) return ret;
    }
    z->lb = z->c; z->c = z->l;
    {
        int v_2 = z->l - z->c;
        {
            int ret = r_step_0(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - v_2;
    }
    {
        int v_3 = z->l - z->c;
        {
            int ret = r_standard_suffix(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - v_3;
    }
    {
        int v_4 = z->l - z->c;
        {
            int v_5 = z->l - z->c;
            if (!(z->I[3])) goto lab2;
            goto lab1;
        lab2:
            z->c = z->l - v_5;
            {
                int ret = r_verb_suffix(z);
                if (ret == 0) goto lab0;
                if (ret < 0) return ret;
            }
        }
    lab1:
    lab0:
        z->c = z->l - v_4;
    }
    {
        int v_6 = z->l - z->c;
        {
            int ret = r_vowel_suffix(z);
            if (ret < 0) return ret;
        }
        z->c = z->l - v_6;
    }
    z->c = z->lb;
    {
        int v_7 = z->c;
        {
            int ret = r_postlude(z);
            if (ret < 0) return ret;
        }
        z->c = v_7;
    }
    return 1;
}

extern struct SN_env * romanian_UTF_8_create_env(void) { return SN_create_env(0, 4); }

extern void romanian_UTF_8_close_env(struct SN_env * z) { SN_close_env(z, 0); }

