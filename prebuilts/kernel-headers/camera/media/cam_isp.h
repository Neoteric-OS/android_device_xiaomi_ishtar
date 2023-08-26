/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __UAPI_CAM_ISP_H__
#define __UAPI_CAM_ISP_H__
#include <media/cam_defs.h>
#include <media/cam_isp_vfe.h>
#include <media/cam_isp_ife.h>
#include <media/cam_isp_sfe.h>
#include <media/cam_cpas.h>
#define CAM_ISP_DEV_NAME "cam-isp"
#define CAM_ISP_HW_BASE 0
#define CAM_ISP_HW_CSID 1
#define CAM_ISP_HW_VFE 2
#define CAM_ISP_HW_IFE 3
#define CAM_ISP_HW_ISPIF 4
#define CAM_ISP_HW_IFE_LITE 5
#define CAM_ISP_HW_CSID_LITE 6
#define CAM_ISP_HW_SFE 7
#define CAM_ISP_HW_MAX 8
#define CAM_ISP_PATTERN_BAYER_RGRGRG 0
#define CAM_ISP_PATTERN_BAYER_GRGRGR 1
#define CAM_ISP_PATTERN_BAYER_BGBGBG 2
#define CAM_ISP_PATTERN_BAYER_GBGBGB 3
#define CAM_ISP_PATTERN_YUV_YCBYCR 4
#define CAM_ISP_PATTERN_YUV_YCRYCB 5
#define CAM_ISP_PATTERN_YUV_CBYCRY 6
#define CAM_ISP_PATTERN_YUV_CRYCBY 7
#define CAM_ISP_PATTERN_MAX 8
#define CAM_ISP_RES_USAGE_SINGLE 0
#define CAM_ISP_RES_USAGE_DUAL 1
#define CAM_ISP_RES_USAGE_MAX 2
#define CAM_ISP_RES_ID_PORT 0
#define CAM_ISP_RES_ID_CLK 1
#define CAM_ISP_RES_ID_MAX 2
#define CAM_ISP_LANE_TYPE_DPHY 0
#define CAM_ISP_LANE_TYPE_CPHY 1
#define CAM_ISP_LANE_TYPE_MAX 2
#define CAM_ISP_RES_COMP_GROUP_NONE 0
#define CAM_ISP_RES_COMP_GROUP_ID_0 1
#define CAM_ISP_RES_COMP_GROUP_ID_1 2
#define CAM_ISP_RES_COMP_GROUP_ID_2 3
#define CAM_ISP_RES_COMP_GROUP_ID_3 4
#define CAM_ISP_RES_COMP_GROUP_ID_4 5
#define CAM_ISP_RES_COMP_GROUP_ID_5 6
#define CAM_ISP_RES_COMP_GROUP_ID_MAX 6
#define CAM_ISP_PACKET_OP_BASE 0
#define CAM_ISP_PACKET_INIT_DEV 1
#define CAM_ISP_PACKET_UPDATE_DEV 2
#define CAM_ISP_PACKET_OP_MAX 3
#define CAM_ISP_PACKET_META_BASE 0
#define CAM_ISP_PACKET_META_LEFT 1
#define CAM_ISP_PACKET_META_RIGHT 2
#define CAM_ISP_PACKET_META_COMMON 3
#define CAM_ISP_PACKET_META_DMI_LEFT 4
#define CAM_ISP_PACKET_META_DMI_RIGHT 5
#define CAM_ISP_PACKET_META_DMI_COMMON 6
#define CAM_ISP_PACKET_META_CLOCK 7
#define CAM_ISP_PACKET_META_CSID 8
#define CAM_ISP_PACKET_META_DUAL_CONFIG 9
#define CAM_ISP_PACKET_META_GENERIC_BLOB_LEFT 10
#define CAM_ISP_PACKET_META_GENERIC_BLOB_RIGHT 11
#define CAM_ISP_PACKET_META_GENERIC_BLOB_COMMON 12
#define CAM_ISP_PACKET_META_REG_DUMP_PER_REQUEST 13
#define CAM_ISP_PACKET_META_REG_DUMP_ON_FLUSH 14
#define CAM_ISP_PACKET_META_REG_DUMP_ON_ERROR 15
#define CAM_ISP_PACKET_META_CSID_LEFT 16
#define CAM_ISP_PACKET_META_CSID_RIGHT 17
#define CAM_ISP_PACKET_META_CSID_COMMON 18
#define CAM_ISP_SFE_PACKET_META_LEFT 0x15
#define CAM_ISP_SFE_PACKET_META_RIGHT 0x16
#define CAM_ISP_SFE_PACKET_META_COMMON 0x17
#define CAM_ISP_SFE_PACKET_META_DUAL_CONFIG 0x18
#define CAM_ISP_DSP_MODE_NONE 0
#define CAM_ISP_DSP_MODE_ONE_WAY 1
#define CAM_ISP_DSP_MODE_ROUND 2
#define CAM_ISP_GENERIC_BLOB_TYPE_HFR_CONFIG 0
#define CAM_ISP_GENERIC_BLOB_TYPE_CLOCK_CONFIG 1
#define CAM_ISP_GENERIC_BLOB_TYPE_BW_CONFIG 2
#define CAM_ISP_GENERIC_BLOB_TYPE_UBWC_CONFIG 3
#define CAM_ISP_GENERIC_BLOB_TYPE_CSID_CLOCK_CONFIG 4
#define CAM_ISP_GENERIC_BLOB_TYPE_FE_CONFIG 5
#define CAM_ISP_GENERIC_BLOB_TYPE_UBWC_CONFIG_V2 6
#define CAM_ISP_GENERIC_BLOB_TYPE_IFE_CORE_CONFIG 7
#define CAM_ISP_GENERIC_BLOB_TYPE_VFE_OUT_CONFIG 8
#define CAM_ISP_GENERIC_BLOB_TYPE_BW_CONFIG_V2 9
#define CAM_ISP_GENERIC_BLOB_TYPE_DISCARD_INITIAL_FRAMES 10
#define CAM_ISP_GENERIC_BLOB_TYPE_SENSOR_DIMENSION_CONFIG 11
#define CAM_ISP_GENERIC_BLOB_TYPE_CSID_QCFA_CONFIG 12
#define CAM_ISP_GENERIC_BLOB_TYPE_SENSOR_BLANKING_CONFIG 13
#define CAM_ISP_GENERIC_BLOB_TYPE_TPG_CORE_CONFIG 14
#define CAM_ISP_GENERIC_BLOB_TYPE_DYNAMIC_MODE_SWITCH 15
#define CAM_ISP_GENERIC_BLOB_TYPE_BW_LIMITER_CFG 16
#define CAM_ISP_GENERIC_BLOB_TYPE_FPS_CONFIG 17
#define CAM_ISP_GENERIC_BLOB_TYPE_INIT_CONFIG 18
#define CAM_ISP_GENERIC_BLOB_TYPE_RDI_LCR_CONFIG 19
#define CAM_ISP_GENERIC_BLOB_TYPE_SFE_CLOCK_CONFIG 21
#define CAM_ISP_GENERIC_BLOB_TYPE_SFE_CORE_CONFIG 22
#define CAM_ISP_GENERIC_BLOB_TYPE_SFE_OUT_CONFIG 23
#define CAM_ISP_GENERIC_BLOB_TYPE_SFE_HFR_CONFIG 24
#define CAM_ISP_GENERIC_BLOB_TYPE_SFE_FE_CONFIG 25
#define CAM_ISP_GENERIC_BLOB_TYPE_SFE_SCRATCH_BUF_CFG 26
#define CAM_ISP_GENERIC_BLOB_TYPE_SFE_EXP_ORDER_CFG 27
#define CAM_ISP_GENERIC_BLOB_TYPE_DRV_CONFIG 28
#define CAM_ISP_GENERIC_BLOB_TYPE_BW_CONFIG_V3 29
#define CAM_ISP_GENERIC_BLOB_TYPE_NFI_MODE_SWITCH 30
#define CAM_ISP_VC_DT_CFG 4
#define CAM_ISP_IFE0_HW 0x1
#define CAM_ISP_IFE1_HW 0x2
#define CAM_ISP_IFE0_LITE_HW 0x4
#define CAM_ISP_IFE1_LITE_HW 0x8
#define CAM_ISP_IFE2_LITE_HW 0x10
#define CAM_ISP_IFE3_LITE_HW 0x20
#define CAM_ISP_IFE4_LITE_HW 0x40
#define CAM_ISP_IFE2_HW 0x100
#define CAM_ISP_SFE0_HW 0x1000
#define CAM_ISP_SFE1_HW 0x2000
#define CAM_ISP_PXL_PATH 0x1
#define CAM_ISP_PPP_PATH 0x2
#define CAM_ISP_LCR_PATH 0x4
#define CAM_ISP_RDI0_PATH 0x8
#define CAM_ISP_RDI1_PATH 0x10
#define CAM_ISP_RDI2_PATH 0x20
#define CAM_ISP_RDI3_PATH 0x40
#define CAM_ISP_RDI4_PATH 0x80
#define CAM_ISP_USAGE_INVALID 0
#define CAM_ISP_USAGE_LEFT_PX 1
#define CAM_ISP_USAGE_RIGHT_PX 2
#define CAM_ISP_USAGE_RDI 3
#define CAM_ISP_USAGE_SFE_LEFT 4
#define CAM_ISP_USAGE_SFE_RIGHT 5
#define CAM_ISP_USAGE_SFE_RDI 6
#define CAM_ISP_ACQ_CUSTOM_NONE 0
#define CAM_ISP_ACQ_CUSTOM_PRIMARY 1
#define CAM_ISP_ACQ_CUSTOM_SECONDARY 2
#define CAM_IFE_CSID_RDI_MAX 5
#define CAM_ISP_PARAM_FETCH_SECURITY_MODE BIT(0)
#define CAM_ISP_CAN_USE_LITE_MODE BIT(1)
#define CAM_ISP_DYNAMIC_SENOR_SWITCH_EN BIT(2)
#define CAM_ISP_SFE_BINNED_EPOCH_CFG_ENABLE BIT(3)
#define CAM_ISP_EPD_SUPPORT BIT(4)
#define CAM_ISP_SFE_FS_MODE_EN BIT(5)
#define CAM_ISP_SFE_SHDR_MODE_EN BIT(6)
#define CAM_ISP_AEB_MODE_EN BIT(7)
#define CAM_ISP_HDR_MODE_DYNAMIC_SWITCH_EN BIT(8)
#define CAM_ISP_NFI_BASED_MODE_SWITCH_EN BIT(9)
#define CAM_ISP_PARAM_CORE_CFG_HDR_MUX_SEL BIT(0)
#define CAM_ISP_PARAM_CORE_CFG_PP_FORMAT BIT(16)
#define CAM_IFE_DECODE_FORMAT_MASK 0xFF
#define CAM_IFE_DECODE_FORMAT_SHIFT_VAL 8
struct cam_isp_drv_config {
  __u32 drv_en;
  __u32 timeout_val;
  __u32 path_idle_en;
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __u32 params[5];
} __attribute__((packed));
struct cam_isp_dev_cap_info {
  __u32 hw_type;
  __u32 num_hw;
  struct cam_hw_version hw_version;
};
struct cam_isp_query_cap_cmd {
  struct cam_iommu_handle device_iommu;
  struct cam_iommu_handle cdm_iommu;
  __s32 num_dev;
  __u32 reserved;
  struct cam_isp_dev_cap_info dev_caps[CAM_ISP_HW_MAX];
};
struct cam_isp_out_port_info {
  __u32 res_type;
  __u32 format;
  __u32 width;
  __u32 height;
  __u32 comp_grp_id;
  __u32 split_point;
  __u32 secure_mode;
  __u32 reserved;
};
struct cam_isp_out_port_info_v2 {
  __u32 res_type;
  __u32 format;
  __u32 width;
  __u32 height;
  __u32 comp_grp_id;
  __u32 split_point;
  __u32 secure_mode;
  __u32 wm_mode;
  __u32 out_port_res1;
  __u32 out_port_res2;
};
struct cam_isp_in_port_info {
  __u32 res_type;
  __u32 lane_type;
  __u32 lane_num;
  __u32 lane_cfg;
  __u32 vc;
  __u32 dt;
  __u32 format;
  __u32 test_pattern;
  __u32 usage_type;
  __u32 left_start;
  __u32 left_stop;
  __u32 left_width;
  __u32 right_start;
  __u32 right_stop;
  __u32 right_width;
  __u32 line_start;
  __u32 line_stop;
  __u32 height;
  __u32 pixel_clk;
  __u32 batch_size;
  __u32 dsp_mode;
  __u32 hbi_cnt;
  __u32 reserved;
  __u32 num_out_res;
  struct cam_isp_out_port_info data[1];
};
struct cam_isp_in_port_info_v2 {
  __u32 res_type;
  __u32 lane_type;
  __u32 lane_num;
  __u32 lane_cfg;
  __u32 vc[CAM_ISP_VC_DT_CFG];
  __u32 dt[CAM_ISP_VC_DT_CFG];
  __u32 num_valid_vc_dt;
  __u32 format;
  __u32 test_pattern;
  __u32 usage_type;
  __u32 left_start;
  __u32 left_stop;
  __u32 left_width;
  __u32 right_start;
  __u32 right_stop;
  __u32 right_width;
  __u32 line_start;
  __u32 line_stop;
  __u32 height;
  __u32 pixel_clk;
  __u32 batch_size;
  __u32 dsp_mode;
  __u32 hbi_cnt;
  __u32 cust_node;
  __u32 num_out_res;
  __u32 offline_mode;
  __u32 bidirectional_bin;
  __u32 qcfa_bin;
  __u32 sfe_in_path_type;
  __u32 feature_flag;
  __u32 ife_res_1;
  __u32 ife_res_2;
  struct cam_isp_out_port_info_v2 data[1];
};
struct cam_isp_resource {
  __u32 resource_id;
  __u32 length;
  __u32 handle_type;
  __u32 reserved;
  __u64 res_hdl;
};
struct cam_isp_port_hfr_config {
  __u32 resource_type;
  __u32 subsample_pattern;
  __u32 subsample_period;
  __u32 framedrop_pattern;
  __u32 framedrop_period;
  __u32 reserved;
} __attribute__((packed));
struct cam_isp_resource_hfr_config {
  __u32 num_ports;
  __u32 reserved;
  struct cam_isp_port_hfr_config port_hfr_config[1];
} __attribute__((packed));
struct cam_isp_dual_split_params {
  __u32 split_point;
  __u32 right_padding;
  __u32 left_padding;
  __u32 reserved;
};
struct cam_isp_dual_stripe_config {
  __u32 offset;
  __u32 width;
  __u32 tileconfig;
  __u32 port_id;
};
struct cam_isp_dual_config {
  __u32 num_ports;
  __u32 reserved;
  struct cam_isp_dual_split_params split_params;
  struct cam_isp_dual_stripe_config stripes[1];
} __attribute__((packed));
struct cam_isp_clock_config {
  __u32 usage_type;
  __u32 num_rdi;
  __u64 left_pix_hz;
  __u64 right_pix_hz;
  __u64 rdi_hz[1];
} __attribute__((packed));
struct cam_isp_csid_clock_config {
  __u64 csid_clock;
} __attribute__((packed));
struct cam_isp_csid_qcfa_config {
  __u32 csid_binning;
} __attribute__((packed));
struct cam_isp_bw_vote {
  __u32 resource_id;
  __u32 reserved;
  __u64 cam_bw_bps;
  __u64 ext_bw_bps;
} __attribute__((packed));
struct cam_isp_bw_config {
  __u32 usage_type;
  __u32 num_rdi;
  struct cam_isp_bw_vote left_pix_vote;
  struct cam_isp_bw_vote right_pix_vote;
  struct cam_isp_bw_vote rdi_vote[1];
} __attribute__((packed));
struct cam_isp_bw_config_v2 {
  __u32 usage_type;
  __u32 num_paths;
  struct cam_axi_per_path_bw_vote axi_path[1];
} __attribute__((packed));
struct cam_isp_bw_config_v3 {
  __u32 usage_type;
  __u32 num_paths;
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __u32 params[4];
  struct cam_axi_per_path_bw_vote_v2 axi_path[1];
} __attribute__((packed));
struct cam_fe_config {
  __u64 version;
  __u32 min_vbi;
  __u32 fs_mode;
  __u32 fs_line_sync_en;
  __u32 hbi_count;
  __u32 fs_sync_enable;
  __u32 go_cmd_sel;
  __u32 client_enable;
  __u32 source_addr;
  __u32 width;
  __u32 height;
  __u32 stride;
  __u32 format;
  __u32 unpacker_cfg;
  __u32 latency_buf_size;
} __attribute__((packed));
struct cam_isp_sensor_dimension {
  __u32 width;
  __u32 height;
  __u32 measure_enabled;
} __attribute__((packed));
struct cam_isp_sensor_blanking_config {
  __u32 hbi;
  __u32 vbi;
} __attribute__((packed));
struct cam_isp_sensor_config {
  struct cam_isp_sensor_dimension ppp_path;
  struct cam_isp_sensor_dimension ipp_path;
  struct cam_isp_sensor_dimension rdi_path[CAM_IFE_CSID_RDI_MAX];
  __u32 hbi;
  __u32 vbi;
} __attribute__((packed));
struct cam_isp_core_config {
  __u32 version;
  __u32 vid_ds16_r2pd;
  __u32 vid_ds4_r2pd;
  __u32 disp_ds16_r2pd;
  __u32 disp_ds4_r2pd;
  __u32 dsp_streaming_tap_point;
  __u32 ihist_src_sel;
  __u32 hdr_be_src_sel;
  __u32 hdr_bhist_src_sel;
  __u32 input_mux_sel_pdaf;
  __u32 input_mux_sel_pp;
  __u32 core_cfg_flag;
} __attribute__((packed));
struct cam_isp_sfe_core_config {
  __u32 version;
  __u32 mode_sel;
  __u32 ops_mode_cfg;
  __u32 fs_mode_cfg;
  __u32 sfe_params[6];
} __attribute__((packed));
struct cam_isp_sfe_scratch_buf_info {
  __s32 mem_handle;
  __u32 offset;
  __u32 width;
  __u32 height;
  __u32 stride;
  __u32 slice_height;
  __u32 resource_type;
  __u32 scratch_buf_params[5];
};
struct cam_isp_sfe_init_scratch_buf_config {
  __u32 num_ports;
  __u32 reserved;
  struct cam_isp_sfe_scratch_buf_info port_scratch_cfg[1];
};
struct cam_isp_tpg_core_config {
  __u32 version;
  __u32 vc_dt_pattern_id;
  __u32 qcfa_en;
  __u32 pix_pattern;
  __u32 hbi_clk_cnt;
  __u32 vbi_clk_cnt;
  __u32 throttle_pattern;
  __u32 tpg_params[3];
} __attribute__((packed));
struct cam_isp_acquire_hw_info {
  __u16 common_info_version;
  __u16 common_info_size;
  __u32 common_info_offset;
  __u32 num_inputs;
  __u32 input_info_version;
  __u32 input_info_size;
  __u32 input_info_offset;
  __u64 data;
};
struct cam_isp_vfe_wm_config {
  __u32 port_type;
  __u32 wm_mode;
  __u32 h_init;
  __u32 height;
  __u32 width;
  __u32 virtual_frame_en;
  __u32 stride;
  __u32 offset;
  __u32 addr_reuse_en;
  __u32 packer_format;
  __u32 reserved_3;
  __u32 reserved_4;
};
struct cam_isp_vfe_out_config {
  __u32 num_ports;
  __u32 reserved;
  struct cam_isp_vfe_wm_config wm_config[1];
};
struct cam_isp_mode_switch_info {
  __u32 mup;
  __u32 num_expoures;
  __u32 reserved;
} __attribute__((packed));
struct cam_isp_nfi_mode_switch_info {
  __u32 version;
  __u32 mode_id;
  __u32 modeid_vc;
  __u32 x_offset;
  __u32 y_offset;
  __u32 reg_length;
  __u32 num_valid_params;
  __u32 param_mask;
  __u32 params[4];
} __attribute__((packed));
struct cam_isp_sfe_wm_exp_order_config {
  __u32 res_type;
  __u32 additional_params[5];
};
struct cam_isp_sfe_exp_config {
  __u32 num_ports;
  __u32 reserved;
  struct cam_isp_sfe_wm_exp_order_config wm_config[1];
};
struct cam_isp_discard_initial_frames {
  __u32 num_frames;
  __u32 discard_params[5];
} __attribute__((packed));
struct cam_isp_wm_bw_limiter_config {
  __u32 res_type;
  __u32 enable_limiter;
  __u32 counter_limit[CAM_PACKET_MAX_PLANES];
  __u32 additional_params[5];
};
struct cam_isp_out_rsrc_bw_limiter_config {
  __u32 num_ports;
  __u32 reserved;
  struct cam_isp_wm_bw_limiter_config bw_limiter_config[1];
};
struct cam_isp_init_config {
  struct cam_isp_epoch_height_config {
    __u32 epoch_factor;
  } epoch_cfg;
  __u32 additional_params[19];
};
struct cam_isp_lcr_rdi_config {
  __u32 res_id;
  __u32 reserved[5];
};
#define CAM_ISP_ACQUIRE_COMMON_VER0 0x1000
#define CAM_ISP_ACQUIRE_COMMON_SIZE_VER0 0x0
#define CAM_ISP_ACQUIRE_INPUT_VER0 0x2000
#define CAM_ISP_ACQUIRE_INPUT_SIZE_VER0 sizeof(struct cam_isp_in_port_info)
#define CAM_ISP_ACQUIRE_OUT_VER0 0x3000
#define CAM_ISP_ACQUIRE_OUT_SIZE_VER0 sizeof(struct cam_isp_out_port_info)
#endif
