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
#ifndef __UAPI_CAM_CUSTOM_H__
#define __UAPI_CAM_CUSTOM_H__
#include <media/cam_defs.h>
#define CAM_CUSTOM_DEV_NAME "cam-custom"
#define CAM_CUSTOM_NUM_SUB_DEVICES 2
#define CAM_CUSTOM_HW1 0
#define CAM_CUSTOM_HW2 1
#define CAM_CUSTOM_OUT_RES_UDI_0 1
#define CAM_CUSTOM_OUT_RES_UDI_1 2
#define CAM_CUSTOM_OUT_RES_UDI_2 3
#define CAM_CUSTOM_IN_RES_UDI_0 1
#define CAM_CUSTOM_RES_ID_PORT 0
#define CAM_CUSTOM_PACKET_OP_BASE 0
#define CAM_CUSTOM_PACKET_INIT_DEV 1
#define CAM_CUSTOM_PACKET_UPDATE_DEV 2
#define CAM_CUSTOM_PACKET_OP_MAX 3
#define CAM_CUSTOM_VC_DT_CFG_MAX 4
#define CAM_CUSTOM_IN_RES_BASE 0x5000
#define CAM_CUSTOM_IN_RES_PHY_0 (CAM_CUSTOM_IN_RES_BASE + 1)
#define CAM_CUSTOM_IN_RES_PHY_1 (CAM_CUSTOM_IN_RES_BASE + 2)
#define CAM_CUSTOM_IN_RES_PHY_2 (CAM_CUSTOM_IN_RES_BASE + 3)
#define CAM_CUSTOM_IN_RES_PHY_3 (CAM_CUSTOM_IN_RES_BASE + 4)
struct cam_custom_dev_cap_info {
  __u32 hw_type;
  __u32 hw_version;
};
struct cam_custom_query_cap_cmd {
  struct cam_iommu_handle device_iommu;
  struct cam_iommu_handle cdm_iommu;
  __s32 num_dev;
  __u32 reserved;
  struct cam_custom_dev_cap_info dev_caps[CAM_CUSTOM_NUM_SUB_DEVICES];
};
struct cam_custom_out_port_info {
  __u32 res_type;
  __u32 format;
  __u32 custom_info1;
  __u32 custom_info2;
  __u32 custom_info3;
  __u32 reserved;
};
struct cam_custom_in_port_info {
  __u32 res_type;
  __u32 lane_type;
  __u32 lane_num;
  __u32 lane_cfg;
  __u32 vc[CAM_CUSTOM_VC_DT_CFG_MAX];
  __u32 dt[CAM_CUSTOM_VC_DT_CFG_MAX];
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
  __u32 num_bytes_out;
  __u32 custom_info1;
  __u32 custom_info2;
  __u32 num_out_res;
  struct cam_custom_out_port_info data[1];
};
struct cam_custom_resource {
  __u32 resource_id;
  __u32 length;
  __u32 handle_type;
  __u32 reserved;
  __u64 res_hdl;
};
struct cam_custom_acquire_hw_info {
  __u32 num_inputs;
  __u32 input_info_size;
  __u32 input_info_offset;
  __u32 reserved;
  __u64 data;
};
struct cam_custom_cmd_buf_type_1 {
  __u32 custom_info;
  __u32 reserved;
};
struct cam_custom_cmd_buf_type_2 {
  __u32 custom_info1;
  __u32 custom_info2;
  __u32 custom_info3;
  __u32 reserved;
};
#endif
