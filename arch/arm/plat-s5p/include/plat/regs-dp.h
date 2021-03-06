/*
 * Copyright (C) 2011 Samsung Electronics Co., Ltd.
 *
 * Register definition file for Samsung DP driver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_PLAT_S5P_REGS_DP_H
#define __ASM_PLAT_S5P_REGS_DP_H __FILE__

#define S5P_DP_TX_SW_RESET			0x14
#define S5P_DP_FUNC_EN_1			0x18
#define S5P_DP_FUNC_EN_2			0x1C
#define S5P_DP_VIDEO_CTL_1			0x20
#define S5P_DP_VIDEO_CTL_2			0x24
#define S5P_DP_VIDEO_CTL_3			0x28
#define S5P_DP_VIDEO_CTL_4			0x2C

#define S5P_DP_VIDEO_CTL_8			0x3C
#define S5P_DP_VIDEO_CTL_10			0x44
#define S5P_DP_TOTAL_LINE_CFG_L			0x48
#define S5P_DP_TOTAL_LINE_CFG_H			0x4C
#define S5P_DP_ACTIVE_LINE_CFG_L		0x50
#define S5P_DP_ACTIVE_LINE_CFG_H		0x54
#define S5P_DP_V_F_PORCH_CFG			0x58
#define S5P_DP_V_SYNC_WIDTH_CFG			0x5C
#define S5P_DP_V_B_PORCH_CFG			0x60
#define S5P_DP_TOTAL_PIXEL_CFG_L		0x64
#define S5P_DP_TOTAL_PIXEL_CFG_H		0x68
#define S5P_DP_ACTIVE_PIXEL_CFG_L		0x6C
#define S5P_DP_ACTIVE_PIXEL_CFG_H		0x70
#define S5P_DP_H_F_PORCH_CFG_L			0x74
#define S5P_DP_H_F_PORCH_CFG_H			0x78
#define S5P_DP_H_SYNC_CFG_L			0x7C
#define S5P_DP_H_SYNC_CFG_H			0x80
#define S5P_DP_H_B_PORCH_CFG_L			0x84
#define S5P_DP_H_B_PORCH_CFG_H			0x88

#define S5P_DP_LANE_MAP				0x35C

#define S5P_DP_ANALOG_CTL_1			0x370
#define S5P_DP_ANALOG_CTL_2			0x374
#define S5P_DP_ANALOG_CTL_3			0x378
#define S5P_DP_PLL_FILTER_CTL_1			0x37C
#define S5P_DP_PLL_FILTER_CTL_2			0x380

#define S5P_DP_AUX_HW_RETRY_CTL			0x390

#define S5P_DP_COMMON_INT_STA_1			0x3C4
#define S5P_DP_COMMON_INT_STA_2			0x3C8
#define S5P_DP_COMMON_INT_STA_3			0x3CC
#define S5P_DP_COMMON_INT_STA_4			0x3D0
#define S5P_DP_INT_STA				0x3DC
#define S5P_DP_COMMON_INT_MASK_1		0x3E0
#define S5P_DP_COMMON_INT_MASK_2		0x3E4
#define S5P_DP_COMMON_INT_MASK_3		0x3E8
#define S5P_DP_COMMON_INT_MASK_4		0x3EC
#define S5P_DP_INT_STA_MASK			0x3F8
#define S5P_DP_INT_CTL				0x3FC

#define S5P_DP_SYS_CTL_1			0x600
#define S5P_DP_SYS_CTL_2			0x604
#define S5P_DP_SYS_CTL_3			0x608
#define S5P_DP_SYS_CTL_4			0x60C

#define S5P_DP_PKT_SEND_CTL			0x640
#define S5P_DP_HDCP_CTL				0x648

#define S5P_DP_LINK_BW_SET			0x680
#define S5P_DP_LANE_COUNT_SET			0x684
#define S5P_DP_TRAINING_PTN_SET			0x688
#define S5P_DP_LN0_LINK_TRAINING_CTL		0x68C
#define S5P_DP_LN1_LINK_TRAINING_CTL		0x690
#define S5P_DP_LN2_LINK_TRAINING_CTL		0x694
#define S5P_DP_LN3_LINK_TRAINING_CTL		0x698
#define S5P_DP_HW_LINK_TRAINING_CTL		0x6A0

#define S5P_DP_DEBUG_CTL			0x6C0
#define S5P_DP_HPD_DEGLITCH_L			0x6C4
#define S5P_DP_HPD_DEGLITCH_H			0x6C8
#define S5P_DP_LINK_DEBUG_CTL			0x6E0

#define S5P_DP_M_VID_0				0x700
#define S5P_DP_M_VID_1				0x704
#define S5P_DP_M_VID_2				0x708
#define S5P_DP_N_VID_0				0x70C
#define S5P_DP_N_VID_1				0x710
#define S5P_DP_N_VID_2				0x714

#define S5P_DP_PLL_CTL				0x71C
#define S5P_DP_PHY_PD				0x720
#define S5P_DP_PHY_TEST				0x724

#define S5P_DP_VIDEO_FIFO_THRD			0x730
#define S5P_DP_AUDIO_MARGIN			0x73C

#define S5P_DP_M_CAL_CTL			0x760
#define S5P_DP_M_VID_GEN_FILTER_TH		0x764
#define S5P_DP_M_AUD_GEN_FILTER_TH		0x778
#define S5P_DP_AUX_CH_STA			0x780
#define S5P_DP_AUX_CH_DEFER_CTL			0x788
#define S5P_DP_AUX_RX_COMM			0x78C
#define S5P_DP_BUFFER_DATA_CTL			0x790
#define S5P_DP_AUX_CH_CTL_1			0x794
#define S5P_DP_AUX_ADDR_7_0			0x798
#define S5P_DP_AUX_ADDR_15_8			0x79C
#define S5P_DP_AUX_ADDR_19_16			0x7A0
#define S5P_DP_AUX_CH_CTL_2			0x7A4

#define S5P_DP_BUF_DATA_0			0x7C0

#define S5P_DP_SOC_GENERAL_CTL			0x800
#define S5P_DP_H_TOTAL_MASTER			0x804
#define S5P_DP_V_TOTAL_MASTER			0x808
#define S5P_DP_H_F_PORCH_MASTER			0x80C
#define S5P_DP_H_B_PORCH_MASTER			0x810
#define S5P_DP_H_ACTIVE_MASTER			0x814
#define S5P_DP_V_F_PORCH_MASTER			0x818
#define S5P_DP_V_B_PORCH_MASTER			0x81C
#define S5P_DP_V_ACTIVE_MASTER			0x820
#define S5P_DP_M_VID_MASTER			0x824
#define S5P_DP_N_VID_MASTER			0x828

#define S5P_DP_TEST_PATTERN_GEN_EN		0x944
#define S5P_DP_TEST_PATTERN_GEN_CTRL		0x948

/* S5P_DP_TX_SW_RESET */
#define RESET_DP_TX				(0x1 << 0)

/* S5P_DP_FUNC_EN_1 */
#define MASTER_VID_FUNC_EN_N			(0x1 << 7)
#define SLAVE_VID_FUNC_EN_N			(0x1 << 5)
#define AUD_FIFO_FUNC_EN_N			(0x1 << 4)
#define AUD_FUNC_EN_N				(0x1 << 3)
#define HDCP_FUNC_EN_N				(0x1 << 2)
#define CRC_FUNC_EN_N				(0x1 << 1)
#define SW_FUNC_EN_N				(0x1 << 0)

/* S5P_DP_FUNC_EN_2 */
#define SSC_FUNC_EN_N				(0x1 << 7)
#define AUX_FUNC_EN_N				(0x1 << 2)
#define SERDES_FIFO_FUNC_EN_N			(0x1 << 1)
#define LS_CLK_DOMAIN_FUNC_EN_N			(0x1 << 0)

/* S5P_DP_VIDEO_CTL_1 */
#define VIDEO_EN				(0x1 << 7)
#define HDCP_VIDEO_MUTE				(0x1 << 6)

/* S5P_DP_VIDEO_CTL_1 */
#define IN_D_RANGE_MASK				(0x1 << 7)
#define IN_D_RANGE_SHIFT			(7)
#define IN_D_RANGE_CEA				(0x1 << 7)
#define IN_D_RANGE_VESA				(0x0 << 7)
#define IN_BPC_MASK				(0x7 << 4)
#define IN_BPC_SHIFT				(4)
#define IN_BPC_12_BITS				(0x3 << 4)
#define IN_BPC_10_BITS				(0x2 << 4)
#define IN_BPC_8_BITS				(0x1 << 4)
#define IN_BPC_6_BITS				(0x0 << 4)
#define IN_COLOR_F_MASK				(0x3 << 0)
#define IN_COLOR_F_SHIFT			(0)
#define IN_COLOR_F_YCBCR444			(0x2 << 0)
#define IN_COLOR_F_YCBCR422			(0x1 << 0)
#define IN_COLOR_F_RGB				(0x0 << 0)

/* S5P_DP_VIDEO_CTL_3 */
#define IN_YC_COEFFI_MASK			(0x1 << 7)
#define IN_YC_COEFFI_SHIFT			(7)
#define IN_YC_COEFFI_ITU709			(0x1 << 7)
#define IN_YC_COEFFI_ITU601			(0x0 << 7)
#define VID_CHK_UPDATE_TYPE_MASK		(0x1 << 4)
#define VID_CHK_UPDATE_TYPE_SHIFT		(4)
#define VID_CHK_UPDATE_TYPE_1			(0x1 << 4)
#define VID_CHK_UPDATE_TYPE_0			(0x0 << 4)

/* S5P_DP_VIDEO_CTL_4 */
#define BIST_EN					(0x1 << 3)
#define BIST_WIDTH_MASK				(0x1 << 2)
#define BIST_WIDTH_BAR_32_PIXEL			(0x0 << 2)
#define BIST_WIDTH_BAR_64_PIXEL			(0x1 << 2)
#define BIST_TYPE_MASK				(0x3 << 0)
#define BIST_TYPE_COLOR_BAR			(0x0 << 0)
#define BIST_TYPE_WHITE_GRAY_BLACK_BAR		(0x1 << 0)
#define BIST_TYPE_MOBILE_WHITE_BAR		(0x2 << 0)

/* S5P_DP_VIDEO_CTL_8 */
#define VID_HRES_TH(x)				(((x) & 0xf) << 4)
#define VID_VRES_TH(x)				(((x) & 0xf) << 0)

/* S5P_DP_VIDEO_CTL_10 */
#define FORMAT_SEL				(0x1 << 4)
#define INTERACE_SCAN_CFG			(0x1 << 2)
#define VSYNC_POLARITY_CFG			(0x1 << 1)
#define HSYNC_POLARITY_CFG			(0x1 << 0)

/* S5P_DP_LANE_MAP */
#define LANE3_MAP_LOGIC_LANE_0			(0x0 << 6)
#define LANE3_MAP_LOGIC_LANE_1			(0x1 << 6)
#define LANE3_MAP_LOGIC_LANE_2			(0x2 << 6)
#define LANE3_MAP_LOGIC_LANE_3			(0x3 << 6)
#define LANE2_MAP_LOGIC_LANE_0			(0x0 << 4)
#define LANE2_MAP_LOGIC_LANE_1			(0x1 << 4)
#define LANE2_MAP_LOGIC_LANE_2			(0x2 << 4)
#define LANE2_MAP_LOGIC_LANE_3			(0x3 << 4)
#define LANE1_MAP_LOGIC_LANE_0			(0x0 << 2)
#define LANE1_MAP_LOGIC_LANE_1			(0x1 << 2)
#define LANE1_MAP_LOGIC_LANE_2			(0x2 << 2)
#define LANE1_MAP_LOGIC_LANE_3			(0x3 << 2)
#define LANE0_MAP_LOGIC_LANE_0			(0x0 << 0)
#define LANE0_MAP_LOGIC_LANE_1			(0x1 << 0)
#define LANE0_MAP_LOGIC_LANE_2			(0x2 << 0)
#define LANE0_MAP_LOGIC_LANE_3			(0x3 << 0)

/* S5P_DP_ANALOG_CTL_1 */
#define SEL_BG_NEW_BANDGAP			(0x0 << 6)
#define SEL_BG_INTERNAL_RESISTOR		(0x1 << 6)
#define TX_TERMINAL_CTRL_73_OHM			(0x0 << 4)
#define TX_TERMINAL_CTRL_61_OHM			(0x1 << 4)
#define TX_TERMINAL_CTRL_50_OHM			(0x2 << 4)
#define TX_TERMINAL_CTRL_45_OHM			(0x3 << 4)
#define SWING_A_30PER_G_INCREASE		(0x1 << 3)
#define SWING_A_30PER_G_NORMAL			(0x0 << 3)

/* S5P_DP_ANALOG_CTL_2 */
#define CPREG_BLEED				(0x1 << 4)
#define SEL_24M					(0x1 << 3)
#define TX_DVDD_BIT_1_0000V			(0x3 << 0)
#define TX_DVDD_BIT_1_0625V			(0x4 << 0)
#define TX_DVDD_BIT_1_1250V			(0x5 << 0)

/* S5P_DP_ANALOG_CTL_3 */
#define DRIVE_DVDD_BIT_1_0000V			(0x3 << 5)
#define DRIVE_DVDD_BIT_1_0625V			(0x4 << 5)
#define DRIVE_DVDD_BIT_1_1250V			(0x5 << 5)
#define SEL_CURRENT_DEFAULT			(0x0 << 3)
#define VCO_BIT_000_MICRO			(0x0 << 0)
#define VCO_BIT_200_MICRO			(0x1 << 0)
#define VCO_BIT_300_MICRO			(0x2 << 0)
#define VCO_BIT_400_MICRO			(0x3 << 0)
#define VCO_BIT_500_MICRO			(0x4 << 0)
#define VCO_BIT_600_MICRO			(0x5 << 0)
#define VCO_BIT_700_MICRO			(0x6 << 0)
#define VCO_BIT_900_MICRO			(0x7 << 0)

/* S5P_DP_PLL_FILTER_CTL_1 */
#define PD_RING_OSC				(0x1 << 6)
#define AUX_TERMINAL_CTRL_52_OHM		(0x3 << 4)
#define AUX_TERMINAL_CTRL_69_OHM		(0x2 << 4)
#define AUX_TERMINAL_CTRL_102_OHM		(0x1 << 4)
#define AUX_TERMINAL_CTRL_200_OHM		(0x0 << 4)
#define TX_CUR1_1X				(0x0 << 2)
#define TX_CUR1_2X				(0x1 << 2)
#define TX_CUR1_3X				(0x2 << 2)
#define TX_CUR_1_MA				(0x0 << 0)
#define TX_CUR_2_MA				(0x1 << 0)
#define TX_CUR_3_MA				(0x2 << 0)
#define TX_CUR_4_MA				(0x3 << 0)

/* S5P_DP_PLL_FILTER_CTL_2 */
#define CH3_AMP_0_MV				(0x3 << 12)
#define CH2_AMP_0_MV				(0x3 << 8)
#define CH1_AMP_0_MV				(0x3 << 4)
#define CH0_AMP_0_MV				(0x3 << 0)

/* S5P_DP_AUX_HW_RETRY_CTL */
#define AUX_BIT_PERIOD_EXPECTED_DELAY(x)	(((x) & 0x7) << 8)
#define AUX_HW_RETRY_INTERVAL_MASK		(0x3 << 3)
#define AUX_HW_RETRY_INTERVAL_600_MICROSECONDS	(0x0 << 3)
#define AUX_HW_RETRY_INTERVAL_800_MICROSECONDS	(0x1 << 3)
#define AUX_HW_RETRY_INTERVAL_1000_MICROSECONDS	(0x2 << 3)
#define AUX_HW_RETRY_INTERVAL_1800_MICROSECONDS	(0x3 << 3)
#define AUX_HW_RETRY_COUNT_SEL(x)		(((x) & 0x7) << 0)

/* S5P_DP_COMMON_INT_STA_1 */
#define VSYNC_DET				(0x1 << 7)
#define PLL_LOCK_CHG				(0x1 << 6)
#define SPDIF_ERR				(0x1 << 5)
#define SPDIF_UNSTBL				(0x1 << 4)
#define VID_FORMAT_CHG				(0x1 << 3)
#define AUD_CLK_CHG				(0x1 << 2)
#define VID_CLK_CHG				(0x1 << 1)
#define SW_INT					(0x1 << 0)

/* S5P_DP_COMMON_INT_STA_2 */
#define ENC_EN_CHG				(0x1 << 6)
#define HW_BKSV_RDY				(0x1 << 3)
#define HW_SHA_DONE				(0x1 << 2)
#define HW_AUTH_STATE_CHG			(0x1 << 1)
#define HW_AUTH_DONE				(0x1 << 0)

/* S5P_DP_COMMON_INT_STA_3 */
#define AFIFO_UNDER				(0x1 << 7)
#define AFIFO_OVER				(0x1 << 6)
#define R0_CHK_FLAG				(0x1 << 5)

/* S5P_DP_COMMON_INT_STA_4 */
#define PSR_ACTIVE				(0x1 << 7)
#define PSR_INACTIVE				(0x1 << 6)
#define SPDIF_BI_PHASE_ERR			(0x1 << 5)
#define HOTPLUG_CHG				(0x1 << 2)
#define HPD_LOST				(0x1 << 1)
#define PLUG					(0x1 << 0)

/* S5P_DP_INT_STA */
#define INT_HPD					(0x1 << 6)
#define HW_TRAINING_FINISH			(0x1 << 5)
#define RPLY_RECEIV				(0x1 << 1)
#define AUX_ERR					(0x1 << 0)

/* S5P_DP_INT_CTL */
#define SOFT_INT_CTRL				(0x1 << 2)
#define INT_POL					(0x1 << 0)

/* S5P_DP_SYS_CTL_1 */
#define DET_STA					(0x1 << 2)
#define FORCE_DET				(0x1 << 1)
#define DET_CTRL				(0x1 << 0)

/* S5P_DP_SYS_CTL_2 */
#define CHA_CRI(x)				(((x) & 0xf) << 4)
#define CHA_STA					(0x1 << 2)
#define FORCE_CHA				(0x1 << 1)
#define CHA_CTRL				(0x1 << 0)

/* S5P_DP_SYS_CTL_3 */
#define HPD_STATUS				(0x1 << 6)
#define F_HPD					(0x1 << 5)
#define HPD_CTRL				(0x1 << 4)
#define HDCP_RDY				(0x1 << 3)
#define STRM_VALID				(0x1 << 2)
#define F_VALID					(0x1 << 1)
#define VALID_CTRL				(0x1 << 0)

/* S5P_DP_SYS_CTL_4 */
#define FIX_M_AUD				(0x1 << 4)
#define ENHANCED				(0x1 << 3)
#define FIX_M_VID				(0x1 << 2)
#define M_VID_UPDATE_CTRL			(0x3 << 0)

/* S5P_DP_TRAINING_PTN_SET */
#define SCRAMBLER_TYPE				(0x1 << 9)
#define HW_LINK_TRAINING_PATTERN		(0x1 << 8)
#define SCRAMBLING_DISABLE			(0x1 << 5)
#define SCRAMBLING_ENABLE			(0x0 << 5)
#define LINK_QUAL_PATTERN_SET_MASK		(0x3 << 2)
#define LINK_QUAL_PATTERN_SET_PRBS7		(0x3 << 2)
#define LINK_QUAL_PATTERN_SET_D10_2		(0x1 << 2)
#define LINK_QUAL_PATTERN_SET_DISABLE		(0x0 << 2)
#define SW_TRAINING_PATTERN_SET_MASK		(0x3 << 0)
#define SW_TRAINING_PATTERN_SET_PTN2		(0x2 << 0)
#define SW_TRAINING_PATTERN_SET_PTN1		(0x1 << 0)
#define SW_TRAINING_PATTERN_SET_NORMAL		(0x0 << 0)

/* S5P_DP_LN0_LINK_TRAINING_CTL */
#define MAX_PRE_EMPHASIS_REACH_0		(0x1 << 5)
#define PRE_EMPHASIS_SET_0_SET(x)		(((x) & 0x3) << 3)
#define PRE_EMPHASIS_SET_0_GET(x)		(((x) >> 3) & 0x3)
#define PRE_EMPHASIS_SET_0_MASK			(0x3 << 3)
#define PRE_EMPHASIS_SET_0_SHIFT		(3)
#define PRE_EMPHASIS_SET_0_LEVEL_3		(0x3 << 3)
#define PRE_EMPHASIS_SET_0_LEVEL_2		(0x2 << 3)
#define PRE_EMPHASIS_SET_0_LEVEL_1		(0x1 << 3)
#define PRE_EMPHASIS_SET_0_LEVEL_0		(0x0 << 3)
#define MAX_DRIVE_CURRENT_REACH_0		(0x1 << 2)
#define DRIVE_CURRENT_SET_0_MASK		(0x3 << 0)
#define DRIVE_CURRENT_SET_0_SET(x)		(((x) & 0x3) << 0)
#define DRIVE_CURRENT_SET_0_GET(x)		(((x) >> 0) & 0x3)
#define DRIVE_CURRENT_SET_0_LEVEL_3		(0x3 << 0)
#define DRIVE_CURRENT_SET_0_LEVEL_2		(0x2 << 0)
#define DRIVE_CURRENT_SET_0_LEVEL_1		(0x1 << 0)
#define DRIVE_CURRENT_SET_0_LEVEL_0		(0x0 << 0)

/* S5P_DP_LN1_LINK_TRAINING_CTL */
#define MAX_PRE_EMPHASIS_REACH_1		(0x1 << 5)
#define PRE_EMPHASIS_SET_1_SET(x)		(((x) & 0x3) << 3)
#define PRE_EMPHASIS_SET_1_GET(x)		(((x) >> 3) & 0x3)
#define PRE_EMPHASIS_SET_1_MASK			(0x3 << 3)
#define PRE_EMPHASIS_SET_1_SHIFT		(3)
#define PRE_EMPHASIS_SET_1_LEVEL_3		(0x3 << 3)
#define PRE_EMPHASIS_SET_1_LEVEL_2		(0x2 << 3)
#define PRE_EMPHASIS_SET_1_LEVEL_1		(0x1 << 3)
#define PRE_EMPHASIS_SET_1_LEVEL_0		(0x0 << 3)
#define MAX_DRIVE_CURRENT_REACH_1		(0x1 << 2)
#define DRIVE_CURRENT_SET_1_MASK		(0x3 << 0)
#define DRIVE_CURRENT_SET_1_SET(x)		(((x) & 0x3) << 0)
#define DRIVE_CURRENT_SET_1_GET(x)		(((x) >> 0) & 0x3)
#define DRIVE_CURRENT_SET_1_LEVEL_3		(0x3 << 0)
#define DRIVE_CURRENT_SET_1_LEVEL_2		(0x2 << 0)
#define DRIVE_CURRENT_SET_1_LEVEL_1		(0x1 << 0)
#define DRIVE_CURRENT_SET_1_LEVEL_0		(0x0 << 0)

/* S5P_DP_LN2_LINK_TRAINING_CTL */
#define MAX_PRE_EMPHASIS_REACH_2		(0x1 << 5)
#define PRE_EMPHASIS_SET_2_SET(x)		(((x) & 0x3) << 3)
#define PRE_EMPHASIS_SET_2_GET(x)		(((x) >> 3) & 0x3)
#define PRE_EMPHASIS_SET_2_MASK			(0x3 << 3)
#define PRE_EMPHASIS_SET_2_SHIFT		(3)
#define PRE_EMPHASIS_SET_2_LEVEL_3		(0x3 << 3)
#define PRE_EMPHASIS_SET_2_LEVEL_2		(0x2 << 3)
#define PRE_EMPHASIS_SET_2_LEVEL_1		(0x1 << 3)
#define PRE_EMPHASIS_SET_2_LEVEL_0		(0x0 << 3)
#define MAX_DRIVE_CURRENT_REACH_2		(0x1 << 2)
#define DRIVE_CURRENT_SET_2_MASK		(0x3 << 0)
#define DRIVE_CURRENT_SET_2_SET(x)		(((x) & 0x3) << 0)
#define DRIVE_CURRENT_SET_2_GET(x)		(((x) >> 0) & 0x3)
#define DRIVE_CURRENT_SET_2_LEVEL_3		(0x3 << 0)
#define DRIVE_CURRENT_SET_2_LEVEL_2		(0x2 << 0)
#define DRIVE_CURRENT_SET_2_LEVEL_1		(0x1 << 0)
#define DRIVE_CURRENT_SET_2_LEVEL_0		(0x0 << 0)

/* S5P_DP_LN3_LINK_TRAINING_CTL */
#define MAX_PRE_EMPHASIS_REACH_3		(0x1 << 5)
#define PRE_EMPHASIS_SET_3_SET(x)		(((x) & 0x3) << 3)
#define PRE_EMPHASIS_SET_3_GET(x)		(((x) >> 3) & 0x3)
#define PRE_EMPHASIS_SET_3_MASK			(0x3 << 3)
#define PRE_EMPHASIS_SET_3_SHIFT		(3)
#define PRE_EMPHASIS_SET_3_LEVEL_3		(0x3 << 3)
#define PRE_EMPHASIS_SET_3_LEVEL_2		(0x2 << 3)
#define PRE_EMPHASIS_SET_3_LEVEL_1		(0x1 << 3)
#define PRE_EMPHASIS_SET_3_LEVEL_0		(0x0 << 3)
#define MAX_DRIVE_CURRENT_REACH_3		(0x1 << 2)
#define DRIVE_CURRENT_SET_3_MASK		(0x3 << 0)
#define DRIVE_CURRENT_SET_3_SET(x)		(((x) & 0x3) << 0)
#define DRIVE_CURRENT_SET_3_GET(x)		(((x) >> 0) & 0x3)
#define DRIVE_CURRENT_SET_3_LEVEL_3		(0x3 << 0)
#define DRIVE_CURRENT_SET_3_LEVEL_2		(0x2 << 0)
#define DRIVE_CURRENT_SET_3_LEVEL_1		(0x1 << 0)
#define DRIVE_CURRENT_SET_3_LEVEL_0		(0x0 << 0)

/* S5P_DP_HW_LINK_TRAINING_CTL */
#define HW_TRAINING_ERROR_CODE			(0x7<<4)
#define HW_TRAINING_EN				(0x1<<0)

/* S5P_DP_DEBUG_CTL */
#define PLL_LOCK				(0x1 << 4)
#define F_PLL_LOCK				(0x1 << 3)
#define PLL_LOCK_CTRL				(0x1 << 2)
#define PN_INV					(0x1 << 0)

/* S5P_DP_PLL_CTL */
#define DP_PLL_PD				(0x1 << 7)
#define DP_PLL_RESET				(0x1 << 6)
#define DP_PLL_LOOP_BIT_DEFAULT			(0x1 << 4)
#define DP_PLL_REF_BIT_1_1250V			(0x5 << 0)
#define DP_PLL_REF_BIT_1_2500V			(0x7 << 0)

/* S5P_DP_PHY_PD */
#define DP_PHY_PD				(0x1 << 5)
#define AUX_PD					(0x1 << 4)
#define CH3_PD					(0x1 << 3)
#define CH2_PD					(0x1 << 2)
#define CH1_PD					(0x1 << 1)
#define CH0_PD					(0x1 << 0)

/* S5P_DP_PHY_TEST */
#define MACRO_RST				(0x1 << 5)
#define CH1_TEST				(0x1 << 1)
#define CH0_TEST				(0x1 << 0)

/* S5P_DP_M_CAL_CTL */
#define M_AUD_GEN_FILTER_EN_MASK		(0x1 << 3)
#define M_AUD_GEN_FILTER_ENABLE			(0x1 << 3)
#define M_AUD_GEN_FILTER_DISABLE		(0x0 << 3)
#define M_VID_GEN_FILTER_EN_MASK		(0x1 << 2)
#define M_VID_GEN_FILTER_ENABLE			(0x1 << 2)
#define M_VID_GEN_FILTER_DISABLE		(0x0 << 2)

/* S5P_DP_AUX_CH_STA */
#define AUX_BUSY				(0x1 << 4)
#define AUX_STATUS_MASK				(0xf << 0)

/* S5P_DP_AUX_CH_DEFER_CTL */
#define DEFER_CTRL_EN				(0x1 << 7)
#define DEFER_COUNT(x)				(((x) & 0x7f) << 0)

/* S5P_DP_AUX_RX_COMM */
#define AUX_RX_COMM_I2C_DEFER			(0x2 << 2)
#define AUX_RX_COMM_AUX_DEFER			(0x2 << 0)

/* S5P_DP_BUFFER_DATA_CTL */
#define BUF_CLR					(0x1 << 7)
#define BUF_DATA_COUNT(x)			(((x) & 0x1f) << 0)

/* S5P_DP_AUX_CH_CTL_1 */
#define AUX_LENGTH(x)				(((x - 1) & 0xf) << 4)
#define AUX_TX_COMM_MASK			(0xf << 0)
#define AUX_TX_COMM_DP_TRANSACTION		(0x1 << 3)
#define AUX_TX_COMM_I2C_TRANSACTION		(0x0 << 3)
#define AUX_TX_COMM_MOT				(0x1 << 2)
#define AUX_TX_COMM_WRITE			(0x0 << 0)
#define AUX_TX_COMM_READ			(0x1 << 0)

/* S5P_DP_AUX_ADDR_7_0 */
#define AUX_ADDR_7_0(x)				(((x) >> 0) & 0xff)

/* S5P_DP_AUX_ADDR_15_8 */
#define AUX_ADDR_15_8(x)			(((x) >> 8) & 0xff)

/* S5P_DP_AUX_ADDR_19_16 */
#define AUX_ADDR_19_16(x)			(((x) >> 16) & 0x0f)

/* S5P_DP_AUX_CH_CTL_2 */
#define ADDR_ONLY				(0x1 << 1)
#define AUX_EN					(0x1 << 0)

/* S5P_DP_SOC_GENERAL_CTL */
#define AUDIO_MODE_SPDIF_MODE			(0x1 << 8)
#define AUDIO_MODE_MASTER_MODE			(0x0 << 8)
#define MASTER_VIDEO_INTERLACE_EN		(0x1 << 4)
#define VIDEO_MASTER_CLK_SEL			(0x1 << 2)
#define VIDEO_MASTER_MODE_EN			(0x1 << 1)
#define VIDEO_MODE_MASK				(0x1 << 0)
#define VIDEO_MODE_SLAVE_MODE			(0x1 << 0)
#define VIDEO_MODE_MASTER_MODE			(0x0 << 0)

/* S5P_DP_TEST_PATTERN_GEN_EN */
#define TEST_PATTERN_GEN_EN			(0x1 << 0)
#define TEST_PATTERN_GEN_DIS			(0x0 << 0)

/* S5P_DP_TEST_PATTERN_GEN_CTRL */
#define TEST_PATTERN_MODE_COLOR_SQUARE		(0x3 << 0)
#define TEST_PATTERN_MODE_BALCK_WHITE_V_LINES	(0x2 << 0)
#define TEST_PATTERN_MODE_COLOR_RAMP		(0x1 << 0)

#endif /* __ASM_ARCH_REGS_DP_H */
