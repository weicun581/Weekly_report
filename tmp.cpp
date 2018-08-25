    m_lpf_coeff[0][0] = DataActualValue(dm_2d_shp_tex_0_reg.coef_c0_0, 9);
    m_lpf_coeff[1][0] = DataActualValue(dm_2d_shp_tex_0_reg.coef_c1_0, 7);
    m_lpf_coeff[2][0] = DataActualValue(dm_2d_shp_tex_0_reg.coef_c2_0, 7);
    m_lpf_coeff[3][0] = DataActualValue(dm_2d_shp_tex_1_reg.coef_c3_0, 7);
    m_lpf_coeff[4][0] = DataActualValue(dm_2d_shp_tex_1_reg.coef_c4_0, 7);
    m_lpf_coeff[5][0] = DataActualValue(dm_2d_shp_tex_1_reg.coef_c5_0, 7);

    m_lpf_coeff[0][1] = DataActualValue(dm_2d_shp_tex_2_reg.coef_c0_1, 7);
    m_lpf_coeff[0][2] = DataActualValue(dm_2d_shp_tex_4_reg.coef_c0_2, 7);
    

    m_lpf_coeff[6][0]  = DataActualValue(dm_2d_shp_tex_1_reg.coef_c6_0, 7);
    m_lpf_coeff[7][0]  = DataActualValue(dm_2d_shp_tex_1_1_reg.coef_c7_0, 7);
    m_lpf_coeff[8][0]  = DataActualValue(dm_2d_shp_tex_1_1_reg.coef_c8_0, 7);
    m_lpf_coeff[9][0]  = DataActualValue(dm_2d_shp_tex_1_1_reg.coef_c9_0, 7);
    m_lpf_coeff[10][0] = DataActualValue(dm_2d_shp_tex_1_1_reg.coef_c10_0, 7);
    m_lpf_coeff[0][3]  = DataActualValue(dm_2d_shp_tex_6_reg.coef_c0_3, 7);
    m_lpf_coeff[0][4]  = DataActualValue(dm_2d_shp_tex_7_reg.coef_c0_4, 7);    

typedef struct{
	short	tex_flat_filter_en;
	short	coef_c0_2;
	short	coef_c0_1;
	short	coef_c0_0;
	short	coef_c1_0;
	short	coef_c2_0;
	short	coef_c3_0;
}CHIP_FLAT_FILTER_T;//7
*************[row22]***************







typedef struct {
	short	mb_peaking_en;
	short	h_c0;
	short	h_c1;
	short	h_c2;
	short	h_c3;
	short	v_c0;
	short	v_c1;
	short	v_c2;
} CHIP_MULTIBAND_PEAKING_HPF_T;//8
//*************[row19]***************
这组压根就没找到在哪儿，滚犊子

























typedef struct {
	short	gain_by_y_en;
	short	gain_by_y_v_en;
	short	gain_by_y_tex_en;
	short	gain_by_y_edg_en;
	short	lpf_weight_en;
	short	lpf_weight_edg_en;
	short	lpf_weight_tex_en;
	short	max_min_gain_en;
	short	max_min_v_en;
	short	max_min_tex_en;
	short	max_min_edg_en;
	short	lv_by_Y_enable;
	short	lv_by_y_edg_enable;
	short	lv_by_y_v_edg_enable;
	short	lv_by_y_tex_enable;
	short	lv_by_y_v_enable;
	short	coef_c0;
	short	coef_c1;
	short	coef_c2;
	short	coef_c3;
	short	coef_c4;
	short	coef_c5;
	short	maxmin_s1;
	short	maxmin_s2;
	short	maxmin_s3;
	short	maxmin_s4;
	short	maxmin_s5;
	short	maxmin_s6;
	short	maxmin_g0;
	short	maxmin_g1;
	short	maxmin_g2;
	short	maxmin_g3;
	short	maxmin_g4;
	short	maxmin_g5;
	short	maxmin_g6;
	short	blending_s1;
	short	blending_s2;
	short	blending_s3;
	short	blending_s4;
	short	blending_s5;
	short	blending_s6;
	short	blending_g0;
	short	blending_g1;
	short	blending_g2;
	short	blending_g3;
	short	blending_g4;
	short	blending_g5;
	short	blending_g6;
	short	y_s1;
	short	y_s2;
	short	y_s3;
	short	y_s4;
	short	y_s5;
	short	y_s6;
	short	y_g0;
	short	y_g1;
	short	y_g2;
	short	y_g3;
	short	y_g4;
	short	y_g5;
	short	y_g6;
} CHIP_MKIII_T;//61
//*************[row15]***************
//---这组在原本的代码中没有判断正负----















typedef struct {
	short vpk_en;
	short vpk_c0;
	short vpk_c1;
	short vpk_c2;
	short vpk_c3;
	short vpk_c4;
} CHIP_VERTICAL_HPF_T;//6
//*************[row11]***************
    m_lpf_coeff[m_nFilter_Select][0] = dm_segpk_vpk1_reg.vpk_c0;
    m_lpf_coeff[m_nFilter_Select][1] = DataActualValue(dm_segpk_vpk1_reg.vpk_c1, 8);
    m_lpf_coeff[m_nFilter_Select][2] = DataActualValue(dm_segpk_vpk1_reg.vpk_c2, 7);
    m_lpf_coeff[m_nFilter_Select][3] = DataActualValue(dm_segpk_vpk4_reg.vpk_c3, 7);
    m_lpf_coeff[m_nFilter_Select][4] = DataActualValue(dm_segpk_vpk4_reg.vpk_c4, 7);











typedef struct {
	short	h9_c0;
	short	h9_c1;
	short	h9_c2;
	short	h9_c3;
	short	h9_c4;
	short	h13_c0;
	short	h13_c1;
	short	h13_c2;
	short	h13_c3;
	short	h13_c4;
	short	h13_c5;
	short	h13_c6;
	short	h21_c0;
	short	h21_c1;
	short	h21_c2;
	short	h21_c3;
	short	h21_c4;
	short	h21_c5;
	short	h21_c6;
	short	h21_c7;
	short	h21_c8;
	short	h21_c9;
	short	h21_c10;
	short	v91_c0;
	short	v91_c1;
	short	v91_c2;
	short	v91_c3;
	short	v91_c4;
	short	v92_c0;
	short	v92_c1;
	short	v92_c2;
	short	v92_c3;
	short	v92_c4;
	short	v93_c0;
	short	v93_c1;
	short	v93_c2;
	short	v93_c3;
	short	v93_c4;
} CHIP_COMMON_HPF_T;//38
//*************[row9]***************
    m_H9_coeff[0]   = DataActualValue(reg_dm_sr_9tap_hpf_h_coef_0.c0,8);
    m_H9_coeff[1]   = DataActualValue(reg_dm_sr_9tap_hpf_h_coef_1.c1,7);
    m_H9_coeff[2]   = DataActualValue(reg_dm_sr_9tap_hpf_h_coef_1.c2,7);
    m_H9_coeff[3]   = DataActualValue(reg_dm_sr_9tap_hpf_h_coef_1.c3,7);
    m_H9_coeff[4]   = DataActualValue(reg_dm_sr_9tap_hpf_h_coef_1.c4,7);
    m_H13_coeff[0]  = DataActualValue(reg_dm_sr_13tap_hpf_h_coef_0.c0,8);
    m_H13_coeff[1]  = DataActualValue(reg_dm_sr_13tap_hpf_h_coef_0.c1,7);
    m_H13_coeff[2]  = DataActualValue(reg_dm_sr_13tap_hpf_h_coef_0.c2,7);
    m_H13_coeff[3]  = DataActualValue(reg_dm_sr_13tap_hpf_h_coef_1.c3,7);
    m_H13_coeff[4]  = DataActualValue(reg_dm_sr_13tap_hpf_h_coef_1.c4,7);
    m_H13_coeff[5]  = DataActualValue(reg_dm_sr_13tap_hpf_h_coef_1.c5,7);
    m_H13_coeff[6]  = DataActualValue(reg_dm_sr_13tap_hpf_h_coef_1.c6,7);
    m_H21_coeff[0]  = DataActualValue(reg_dm_sr_21tap_hpf_h_coef_0.c0,8);
    m_H21_coeff[1]  = DataActualValue(reg_dm_sr_21tap_hpf_h_coef_0.c1,7);
    m_H21_coeff[2]  = DataActualValue(reg_dm_sr_21tap_hpf_h_coef_0.c2,7);
    m_H21_coeff[3]  = DataActualValue(reg_dm_sr_21tap_hpf_h_coef_1.c3,7);
    m_H21_coeff[4]  = DataActualValue(reg_dm_sr_21tap_hpf_h_coef_1.c4,7);
    m_H21_coeff[5]  = DataActualValue(reg_dm_sr_21tap_hpf_h_coef_1.c5,7);
    m_H21_coeff[6]  = DataActualValue(reg_dm_sr_21tap_hpf_h_coef_1.c6,7);
    m_H21_coeff[7]  = DataActualValue(reg_dm_sr_21tap_hpf_h_coef_2.c7,7);
    m_H21_coeff[8]  = DataActualValue(reg_dm_sr_21tap_hpf_h_coef_2.c8,7);
    m_H21_coeff[9]  = DataActualValue(reg_dm_sr_21tap_hpf_h_coef_2.c9,7);
    m_H21_coeff[10] = DataActualValue(reg_dm_sr_21tap_hpf_h_coef_2.c10,7);
    m_V91_coeff[0]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_0_0.c0,8);
    m_V91_coeff[1]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_0_1.c1,7);
    m_V91_coeff[2]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_0_1.c2,7);
    m_V91_coeff[3]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_0_1.c3,7);
    m_V91_coeff[4]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_0_1.c4,7);
    m_V92_coeff[0]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_1_0.c0,8);
    m_V92_coeff[1]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_1_1.c1,7);
    m_V92_coeff[2]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_1_1.c2,7);
    m_V92_coeff[3]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_1_1.c3,7);
    m_V92_coeff[4]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_1_1.c4,7);
    m_V93_coeff[0]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_2_0.c0,8);
    m_V93_coeff[1]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_2_1.c1,7);
    m_V93_coeff[2]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_2_1.c2,7);
    m_V93_coeff[3]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_2_1.c3,7);
    m_V93_coeff[4]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_2_1.c4,7);
    m_RH11_coeff[0] = DataActualValue(reg_dm_sr_11tap_hpf_h_coef_0.c0,8);
    m_RH11_coeff[1] = DataActualValue(reg_dm_sr_11tap_hpf_h_coef_0.c1,7);
    m_RH11_coeff[2] = DataActualValue(reg_dm_sr_11tap_hpf_h_coef_1.c2,7);
    m_RH11_coeff[3] = DataActualValue(reg_dm_sr_11tap_hpf_h_coef_1.c3,7);
    m_RH11_coeff[4] = DataActualValue(reg_dm_sr_11tap_hpf_h_coef_1.c4,7);
    m_RH11_coeff[5] = DataActualValue(reg_dm_sr_11tap_hpf_h_coef_1.c5,7);
    m_RV9_coeff[0]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_3_0.c0,8);
    m_RV9_coeff[1]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_3_1.c1,7);
    m_RV9_coeff[2]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_3_1.c2,7);
    m_RV9_coeff[3]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_3_1.c3,7);
    m_RV9_coeff[4]  = DataActualValue(reg_dm_sr_9tap_hpf_v_coef_3_1.c4,7);

























typedef struct{
	short	texpk_en;
	short	text_select_filter;
	short	tex_lpf_shift;
	short	coef_c0_0;
	short	coef_c1_0;
	short	coef_c2_0;
	short	coef_c3_0;
	short	coef_c4_0;
	short	coef_c5_0;
	short	coef_c6_0;
	short	coef_c7_0;
	short	coef_c8_0;
	short	coef_c9_0;
	short	coef_c10_0;
	short	coef_c0_1;
	short	coef_c0_2;
	short	coef_c0_3;
	short	coef_c0_4;
}CHIP_TEXTURE_HPF_T; //18
//*************[row6]***************
    m_lpf_coeff[0][0] = DataActualValue(dm_2d_shp_edge_0_reg.coef_c0_0, 9);
    m_lpf_coeff[1][0] = DataActualValue(dm_2d_shp_edge_0_reg.coef_c1_0, 7);
    m_lpf_coeff[2][0] = DataActualValue(dm_2d_shp_edge_0_reg.coef_c2_0, 7);
    m_lpf_coeff[3][0] = DataActualValue(dm_2d_shp_edge_1_reg.coef_c3_0, 7);
    m_lpf_coeff[4][0] = DataActualValue(dm_2d_shp_edge_1_reg.coef_c4_0, 7);
    m_lpf_coeff[5][0] = DataActualValue(dm_2d_shp_edge_1_reg.coef_c5_0, 7);

    m_lpf_coeff[0][1] = DataActualValue(dm_2d_shp_edge_2_reg.coef_c0_1, 7);

    m_lpf_coeff[0][2] = DataActualValue(dm_2d_shp_edge_4_reg.coef_c0_2, 7);
    m_lpf_coeff[6][0]  = DataActualValue(dm_2d_shp_edge_1_reg.coef_c6_0, 7);
    m_lpf_coeff[7][0]  = DataActualValue(dm_2d_shp_edge_1_1_reg.coef_c7_0, 7);
    m_lpf_coeff[8][0]  = DataActualValue(dm_2d_shp_edge_1_1_reg.coef_c8_0, 7);
    m_lpf_coeff[9][0]  = DataActualValue(dm_2d_shp_edge_1_1_reg.coef_c9_0, 7);
    m_lpf_coeff[10][0] = DataActualValue(dm_2d_shp_edge_1_1_reg.coef_c10_0, 7);
    m_lpf_coeff[0][3]  = DataActualValue(dm_2d_shp_edge_6_reg.coef_c0_3, 7);
    m_lpf_coeff[0][4]  = DataActualValue(dm_2d_shp_edge_7_reg.coef_c0_4, 7);