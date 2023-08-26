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
#ifndef __UAPI_CAM_TFE_H__
#define __UAPI_CAM_TFE_H__
#include <media/cam_defs.h>
#include <media/cam_isp_tfe.h>
#include <media/cam_cpas.h>
#define CAM_ISP_TFE_DEV_NAME "cam-isp"
#define CAM_ISP_TFE_HW_BASE 0
#define CAM_ISP_TFE_HW_CSID 1
#define CAM_ISP_TFE_HW_TFE 2
#define CAM_ISP_TFE_HW_MAX 3
#define CAM_ISP_TFE_PATTERN_BAYER_RGRGRG 0
#define CAM_ISP_TFE_PATTERN_BAYER_GRGRGR 1
#define CAM_ISP_TFE_PATTERN_BAYER_BGBGBG 2
#define CAM_ISP_TFE_PATTERN_BAYER_GBGBGB 3
#define CAM_ISP_TFE_PATTERN_YUV_YCBYCR 4
#define CAM_ISP_TFE_PATTERN_YUV_YCRYCB 5
#define CAM_ISP_TFE_PATTERN_YUV_CBYCRY 6
#define CAM_ISP_TFE_PATTERN_YUV_CRYCBY 7
#define CAM_ISP_TFE_PATTERN_MAX 8
#define CAM_ISP_TFE_IN_RES_USAGE_SINGLE 0
#define CAM_ISP_TFE_IN_RES_USAGE_DUAL 1
#define CAM_ISP_TFE_IN_RES_USAGE_MAX 2
#define CAM_ISP_TFE_RES_ID_PORT 0
#define CAM_ISP_TFE_RES_ID_MAX 1
#define CAM_ISP_TFE_IN_LANE_TYPE_DPHY 0
#define CAM_ISP_TFE_IN_LANE_TYPE_CPHY 1
#define CAM_ISP_TFE_IN_LANE_TYPE_MAX 2
#define CAM_ISP_TFE_PACKET_OP_BASE 0
#define CAM_ISP_TFE_PACKET_INIT_DEV 1
#define CAM_ISP_TFE_PACKET_CONFIG_DEV 2
#define CAM_ISP_TFE_PACKET_OP_MAX 3
#define CAM_ISP_TFE_PACKET_META_BASE 0
#define CAM_ISP_TFE_PACKET_META_LEFT 1
#define CAM_ISP_TFE_PACKET_META_RIGHT 2
#define CAM_ISP_TFE_PACKET_META_COMMON 3
#define CAM_ISP_TFE_PACKET_META_DUAL_CONFIG 4
#define CAM_ISP_TFE_PACKET_META_GENERIC_BLOB_COMMON 5
#define CAM_ISP_TFE_PACKET_META_REG_DUMP_PER_REQUEST 6
#define CAM_ISP_TFE_PACKET_META_REG_DUMP_ON_FLUSH 7
#define CAM_ISP_TFE_PACKET_META_REG_DUMP_ON_ERROR 8
#define CAM_ISP_TFE_GENERIC_BLOB_TYPE_HFR_CONFIG 0
#define CAM_ISP_TFE_GENERIC_BLOB_TYPE_CLOCK_CONFIG 1
#define CAM_ISP_TFE_GENERIC_BLOB_TYPE_BW_CONFIG_V2 2
#define CAM_ISP_TFE_GENERIC_BLOB_TYPE_CSID_CLOCK_CONFIG 3
#define CAM_ISP_TFE_DSP_MODE_NONE 0
#define CAM_ISP_TFE_DSP_MODE_ONE_WAY 1
#define CAM_ISP_TFE_DSP_MODE_ROUND 2
#define CAM_ISP_TFE_USAGE_INVALID 0
#define CAM_ISP_TFE_USAGE_LEFT_PX 1
#define CAM_ISP_TFE_USAGE_RIGHT_PX 2
#define CAM_ISP_TFE_USAGE_RDI 3
#define CAM_ISP_TFE_WM_FRAME_BASED_MODE 0
#define CAM_ISP_TFE_WM_LINE_BASED_MODE 1
#define CAM_ISP_TFE_WM_INDEX_BASED_MODE 2
#define CAM_ISP_TFE_VC_DT_CFG 2
#define CAM_ISP_TFE_FLAG_QCFA_BIN BIT(0)
#define CAM_ISP_TFE_FLAG_BAYER_BIN BIT(1)
struct cam_isp_tfe_dev_cap_info {
  __u32 hw_type;
  __u32 reserved;
  struct cam_hw_version hw_version;
};
struct cam_isp_tfe_query_cap_cmd {
  struct cam_iommu_handle device_iommu;
  struct cam_iommu_handle cdm_iommu;
  __s32 num_dev;
  __u32 reserved;
  struct cam_isp_tfe_dev_cap_info dev_caps[CAM_ISP_TFE_HW_MAX];
};
struct cam_isp_tfe_out_port_info {
  __u32 res_id;
  __u32 format;
  __u32 width;
  __u32 height;
  __u32 stride;
  __u32 comp_grp_id;
  __u32 secure_mode;
  __u32 wm_mode;
  __u32 reserved;
};
struct cam_isp_tfe_in_port_info {
  __u32 res_id;
  __u32 lane_type;
  __u32 lane_num;
  __u32 lane_cfg;
  __u32 vc;
  __u32 dt;
  __u32 format;
  __u32 pix_pattern;
  __u32 usage_type;
  __u32 left_start;
  __u32 left_end;
  __u32 left_width;
  __u32 right_start;
  __u32 right_end;
  __u32 right_width;
  __u32 line_start;
  __u32 line_end;
  __u32 height;
  __u32 batch_size;
  __u32 dsp_mode;
  __u32 sensor_width;
  __u32 sensor_height;
  __u32 sensor_hbi;
  __u32 sensor_vbi;
  __u32 sensor_fps;
  __u32 init_frame_drop;
  __u32 num_out_res;
  struct cam_isp_tfe_out_port_info data[1];
};
struct cam_isp_tfe_in_port_info_v2 {
  __u32 res_id;
  __u32 lane_type;
  __u32 lane_num;
  __u32 lane_cfg;
  __u32 vc[CAM_ISP_TFE_VC_DT_CFG];
  __u32 dt[CAM_ISP_TFE_VC_DT_CFG];
  __u32 num_valid_vc_dt;
  __u32 format;
  __u32 pix_pattern;
  __u32 usage_type;
  __u32 left_start;
  __u32 left_end;
  __u32 left_width;
  __u32 right_start;
  __u32 right_end;
  __u32 right_width;
  __u32 line_start;
  __u32 line_end;
  __u32 height;
  __u32 batch_size;
  __u32 dsp_mode;
  __u32 sensor_width;
  __u32 sensor_height;
  __u32 sensor_hbi;
  __u32 sensor_vbi;
  __u32 sensor_fps;
  __u32 init_frame_drop;
  __u32 num_out_res;
  __u32 feature_flag;
  __u32 core_cfg;
  __u32 reserve_field_1;
  __u32 reserve_field_2;
  __u32 reserve_field_3;
  __u32 reserve_field_4;
  __u32 reserve_field_5;
  __u32 reserve_field_6;
  struct cam_isp_tfe_out_port_info data[1];
};
struct cam_isp_tfe_resource {
  __u32 resource_id;
  __u32 length;
  __u32 handle_type;
  __u32 reserved;
  __u64 res_hdl;
};
struct cam_isp_tfe_port_hfr_config {
  __u32 resource_type;
  __u32 subsample_pattern;
  __u32 subsample_period;
  __u32 framedrop_pattern;
  __u32 framedrop_period;
  __u32 reserved;
} __attribute__((packed));
struct cam_isp_tfe_resource_hfr_config {
  __u32 num_ports;
  __u32 reserved;
  struct cam_isp_tfe_port_hfr_config port_hfr_config[1];
} __attribute__((packed));
struct cam_isp_tfe_dual_stripe_config {
  __u32 offset;
  __u32 width;
  __u32 port_id;
  __u32 reserved;
};
struct cam_isp_tfe_dual_config {
  __u32 num_ports;
  __u32 reserved;
  struct cam_isp_tfe_dual_stripe_config stripes[1];
} __attribute__((packed));
struct cam_isp_tfe_clock_config {
  __u32 usage_type;
  __u32 num_rdi;
  __u64 left_pix_hz;
  __u64 right_pix_hz;
  __u64 rdi_hz[1];
} __attribute__((packed));
struct cam_isp_tfe_csid_clock_config {
  __u64 csid_clock;
  __u64 phy_clock;
} __attribute__((packed));
struct cam_isp_tfe_bw_config_v2 {
  __u32 usage_type;
  __u32 num_paths;
  struct cam_axi_per_path_bw_vote axi_path[1];
} __attribute__((packed));
struct cam_isp_tfe_acquire_hw_info {
  __u16 common_info_version;
  __u16 common_info_size;
  __u32 common_info_offset;
  __u32 num_inputs;
  __u32 input_info_version;
  __u32 input_info_size;
  __u32 input_info_offset;
  __u64 data;
};
#define CAM_TFE_ACQUIRE_COMMON_VER0 0x1000
#define CAM_TFE_ACQUIRE_COMMON_SIZE_VER0 0x0
#define CAM_TFE_ACQUIRE_INPUT_VER0 0x2000
#define CAM_TFE_ACQUIRE_INPUT_SIZE_VER0 sizeof(struct cam_isp_tfe_in_port_info)
#define CAM_TFE_ACQUIRE_OUT_VER0 0x3000
#define CAM_TFE_ACQUIRE_OUT_SIZE_VER0 sizeof(struct cam_isp_tfe_out_port_info)
#endif
