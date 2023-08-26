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
#ifndef __UAPI_CAM_ICP_H__
#define __UAPI_CAM_ICP_H__
#include <media/cam_defs.h>
#include <media/cam_cpas.h>
#define CAM_ICP_DEV_TYPE_A5 1
#define CAM_ICP_DEV_TYPE_IPE 2
#define CAM_ICP_DEV_TYPE_BPS 3
#define CAM_ICP_DEV_TYPE_IPE_CDM 4
#define CAM_ICP_DEV_TYPE_BPS_CDM 5
#define CAM_ICP_DEV_TYPE_MAX 5
#define CAM_ICP_RES_TYPE_BPS 1
#define CAM_ICP_RES_TYPE_IPE_RT 2
#define CAM_ICP_RES_TYPE_IPE 3
#define CAM_ICP_RES_TYPE_IPE_SEMI_RT 4
#define CAM_ICP_RES_TYPE_BPS_RT 5
#define CAM_ICP_RES_TYPE_BPS_SEMI_RT 6
#define CAM_ICP_RES_TYPE_MAX 7
#define CAM_ICP_OPCODE_IPE_UPDATE 0
#define CAM_ICP_OPCODE_BPS_UPDATE 1
#define CAM_ICP_OPCODE_IPE_SETTINGS 2
#define CAM_ICP_OPCODE_BPS_SETTINGS 3
#define CAM_ICP_IPE_INPUT_IMAGE_FULL 0x0
#define CAM_ICP_IPE_INPUT_IMAGE_DS4 0x1
#define CAM_ICP_IPE_INPUT_IMAGE_DS16 0x2
#define CAM_ICP_IPE_INPUT_IMAGE_DS64 0x3
#define CAM_ICP_IPE_INPUT_IMAGE_FULL_REF 0x4
#define CAM_ICP_IPE_INPUT_IMAGE_DS4_REF 0x5
#define CAM_ICP_IPE_INPUT_IMAGE_DS16_REF 0x6
#define CAM_ICP_IPE_INPUT_IMAGE_DS64_REF 0x7
#define CAM_ICP_IPE_OUTPUT_IMAGE_DISPLAY 0x8
#define CAM_ICP_IPE_OUTPUT_IMAGE_VIDEO 0x9
#define CAM_ICP_IPE_OUTPUT_IMAGE_FULL_REF 0xA
#define CAM_ICP_IPE_OUTPUT_IMAGE_DS4_REF 0xB
#define CAM_ICP_IPE_OUTPUT_IMAGE_DS16_REF 0xC
#define CAM_ICP_IPE_OUTPUT_IMAGE_DS64_REF 0xD
#define CAM_ICP_IPE_OUTPUT_IMAGE_FD 0x33
#define CAM_ICP_IPE_OUTPUT_IMAGE_STATS_IHIST 0x3D
#define CAM_ICP_IPE_IMAGE_MAX (CAM_ICP_IPE_OUTPUT_IMAGE_STATS_IHIST + 1)
#define CAM_ICP_BPS_INPUT_IMAGE 0x0
#define CAM_ICP_BPS_OUTPUT_IMAGE_FULL 0x1
#define CAM_ICP_BPS_OUTPUT_IMAGE_DS4 0x2
#define CAM_ICP_BPS_OUTPUT_IMAGE_DS16 0x3
#define CAM_ICP_BPS_OUTPUT_IMAGE_DS64 0x4
#define CAM_ICP_BPS_OUTPUT_IMAGE_STATS_BG 0x5
#define CAM_ICP_BPS_OUTPUT_IMAGE_STATS_BHIST 0x6
#define CAM_ICP_BPS_OUTPUT_IMAGE_REG1 0x7
#define CAM_ICP_BPS_OUTPUT_IMAGE_REG2 0x8
#define CAM_ICP_BPS_IO_IMAGES_MAX 0x9
#define CAM_ICP_CMD_META_GENERIC_BLOB 0x1
#define CAM_ICP_CMD_GENERIC_BLOB_CLK 0x1
#define CAM_ICP_CMD_GENERIC_BLOB_CFG_IO 0x2
#define CAM_ICP_CMD_GENERIC_BLOB_FW_MEM_MAP 0x3
#define CAM_ICP_CMD_GENERIC_BLOB_FW_MEM_UNMAP 0x4
#define CAM_ICP_CMD_GENERIC_BLOB_CLK_V2 0x5
#define CAM_ICP_CMD_GENERIC_BLOB_PRESIL_HANGDUMP 0x6
struct cam_icp_clk_bw_request_v2 {
  __u64 budget_ns;
  __u32 frame_cycles;
  __u32 rt_flag;
  __u32 reserved;
  __u32 num_paths;
  struct cam_axi_per_path_bw_vote axi_path[1];
};
struct cam_icp_clk_bw_request {
  __u64 budget_ns;
  __u32 frame_cycles;
  __u32 rt_flag;
  __u64 uncompressed_bw;
  __u64 compressed_bw;
};
struct cam_icp_dev_ver {
  __u32 dev_type;
  __u32 reserved;
  struct cam_hw_version hw_ver;
};
struct cam_icp_ver {
  __u32 major;
  __u32 minor;
  __u32 revision;
  __u32 reserved;
};
struct cam_icp_query_cap_cmd {
  struct cam_iommu_handle dev_iommu_handle;
  struct cam_iommu_handle cdm_iommu_handle;
  struct cam_icp_ver fw_version;
  struct cam_icp_ver api_version;
  __u32 num_ipe;
  __u32 num_bps;
  struct cam_icp_dev_ver dev_ver[CAM_ICP_DEV_TYPE_MAX];
};
struct cam_icp_res_info {
  __u32 format;
  __u32 width;
  __u32 height;
  __u32 fps;
};
struct cam_icp_acquire_dev_info {
  __u32 scratch_mem_size;
  __u32 dev_type;
  __u32 io_config_cmd_size;
  __s32 io_config_cmd_handle;
  __u32 secure_mode;
  __s32 chain_info;
  struct cam_icp_res_info in_res;
  __u32 num_out_res;
  struct cam_icp_res_info out_res[1];
} __attribute__((__packed__));
#endif
