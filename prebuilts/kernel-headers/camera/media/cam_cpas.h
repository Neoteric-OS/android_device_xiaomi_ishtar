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
#ifndef __UAPI_CAM_CPAS_H__
#define __UAPI_CAM_CPAS_H__
#include <media/cam_defs.h>
#define CAM_FAMILY_CAMERA_SS 1
#define CAM_FAMILY_CPAS_SS 2
#define CAM_AXI_BW_VOTING_V2 2
#define CAM_AXI_TRANSACTION_READ 0
#define CAM_AXI_TRANSACTION_WRITE 1
#define CAM_AXI_PATH_DATA_IFE_START_OFFSET 0
#define CAM_AXI_PATH_DATA_IFE_LINEAR (CAM_AXI_PATH_DATA_IFE_START_OFFSET + 0)
#define CAM_AXI_PATH_DATA_IFE_VID (CAM_AXI_PATH_DATA_IFE_START_OFFSET + 1)
#define CAM_AXI_PATH_DATA_IFE_DISP (CAM_AXI_PATH_DATA_IFE_START_OFFSET + 2)
#define CAM_AXI_PATH_DATA_IFE_STATS (CAM_AXI_PATH_DATA_IFE_START_OFFSET + 3)
#define CAM_AXI_PATH_DATA_IFE_RDI0 (CAM_AXI_PATH_DATA_IFE_START_OFFSET + 4)
#define CAM_AXI_PATH_DATA_IFE_RDI1 (CAM_AXI_PATH_DATA_IFE_START_OFFSET + 5)
#define CAM_AXI_PATH_DATA_IFE_RDI2 (CAM_AXI_PATH_DATA_IFE_START_OFFSET + 6)
#define CAM_AXI_PATH_DATA_IFE_RDI3 (CAM_AXI_PATH_DATA_IFE_START_OFFSET + 7)
#define CAM_AXI_PATH_DATA_IFE_PDAF (CAM_AXI_PATH_DATA_IFE_START_OFFSET + 8)
#define CAM_AXI_PATH_DATA_IFE_PIXEL_RAW (CAM_AXI_PATH_DATA_IFE_START_OFFSET + 9)
#define CAM_AXI_PATH_DATA_IFE_MAX_OFFSET (CAM_AXI_PATH_DATA_IFE_START_OFFSET + 31)
#define CAM_AXI_PATH_DATA_IPE_START_OFFSET 32
#define CAM_AXI_PATH_DATA_IPE_RD_IN (CAM_AXI_PATH_DATA_IPE_START_OFFSET + 0)
#define CAM_AXI_PATH_DATA_IPE_RD_REF (CAM_AXI_PATH_DATA_IPE_START_OFFSET + 1)
#define CAM_AXI_PATH_DATA_IPE_WR_VID (CAM_AXI_PATH_DATA_IPE_START_OFFSET + 2)
#define CAM_AXI_PATH_DATA_IPE_WR_DISP (CAM_AXI_PATH_DATA_IPE_START_OFFSET + 3)
#define CAM_AXI_PATH_DATA_IPE_WR_REF (CAM_AXI_PATH_DATA_IPE_START_OFFSET + 4)
#define CAM_AXI_PATH_DATA_IPE_WR_APP (CAM_AXI_PATH_DATA_IPE_START_OFFSET + 5)
#define CAM_AXI_PATH_DATA_IPE_MAX_OFFSET (CAM_AXI_PATH_DATA_IPE_START_OFFSET + 31)
#define CAM_AXI_PATH_DATA_OPE_START_OFFSET 64
#define CAM_AXI_PATH_DATA_OPE_RD_IN (CAM_AXI_PATH_DATA_OPE_START_OFFSET + 0)
#define CAM_AXI_PATH_DATA_OPE_RD_REF (CAM_AXI_PATH_DATA_OPE_START_OFFSET + 1)
#define CAM_AXI_PATH_DATA_OPE_WR_VID (CAM_AXI_PATH_DATA_OPE_START_OFFSET + 2)
#define CAM_AXI_PATH_DATA_OPE_WR_DISP (CAM_AXI_PATH_DATA_OPE_START_OFFSET + 3)
#define CAM_AXI_PATH_DATA_OPE_WR_REF (CAM_AXI_PATH_DATA_OPE_START_OFFSET + 4)
#define CAM_AXI_PATH_DATA_OPE_MAX_OFFSET (CAM_AXI_PATH_DATA_OPE_START_OFFSET + 31)
#define CAM_AXI_PATH_DATA_SFE_START_OFFSET 96
#define CAM_AXI_PATH_DATA_SFE_NRDI (CAM_AXI_PATH_DATA_SFE_START_OFFSET + 0)
#define CAM_AXI_PATH_DATA_SFE_RDI0 (CAM_AXI_PATH_DATA_SFE_START_OFFSET + 1)
#define CAM_AXI_PATH_DATA_SFE_RDI1 (CAM_AXI_PATH_DATA_SFE_START_OFFSET + 2)
#define CAM_AXI_PATH_DATA_SFE_RDI2 (CAM_AXI_PATH_DATA_SFE_START_OFFSET + 3)
#define CAM_AXI_PATH_DATA_SFE_RDI3 (CAM_AXI_PATH_DATA_SFE_START_OFFSET + 4)
#define CAM_AXI_PATH_DATA_SFE_RDI4 (CAM_AXI_PATH_DATA_SFE_START_OFFSET + 5)
#define CAM_AXI_PATH_DATA_SFE_STATS (CAM_AXI_PATH_DATA_SFE_START_OFFSET + 6)
#define CAM_AXI_PATH_DATA_SFE_MAX_OFFSET (CAM_AXI_PATH_DATA_SFE_START_OFFSET + 31)
#define CAM_AXI_PATH_DATA_CRE_START_OFFSET (CAM_AXI_PATH_DATA_SFE_MAX_OFFSET + 1)
#define CAM_AXI_PATH_DATA_CRE_RD_IN (CAM_AXI_PATH_DATA_CRE_START_OFFSET + 0)
#define CAM_AXI_PATH_DATA_CRE_WR_OUT (CAM_AXI_PATH_DATA_CRE_START_OFFSET + 1)
#define CAM_AXI_PATH_DATA_CRE_MAX_OFFSET (CAM_AXI_PATH_DATA_CRE_START_OFFSET + 31)
#define CAM_AXI_PATH_DATA_ALL 256
#define CAM_CPAS_FUSES_MAX 32
#define CAM_CPAS_VOTE_LEVEL_HIGH 1
#define CAM_CPAS_VOTE_LEVEL_LOW 2
struct cam_cpas_fuse_value {
  __u32 fuse_id;
  __u32 fuse_val;
};
struct cam_cpas_fuse_info {
  __u32 num_fuses;
  struct cam_cpas_fuse_value fuse_val[CAM_CPAS_FUSES_MAX];
};
struct cam_cpas_query_cap {
  __u32 camera_family;
  __u32 reserved;
  struct cam_hw_version camera_version;
  struct cam_hw_version cpas_version;
};
struct cam_cpas_query_cap_v2 {
  __u32 camera_family;
  __u32 reserved;
  struct cam_hw_version camera_version;
  struct cam_hw_version cpas_version;
  struct cam_cpas_fuse_info fuse_info;
};
struct cam_axi_per_path_bw_vote_v2 {
  __u32 usage_data;
  __u32 transac_type;
  __u32 path_data_type;
  __u32 vote_level;
  __u64 camnoc_bw;
  __u64 mnoc_ab_bw;
  __u64 mnoc_ib_bw;
  __u64 ddr_ab_bw;
  __u64 ddr_ib_bw;
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __u32 params[4];
};
struct cam_axi_per_path_bw_vote {
  __u32 usage_data;
  __u32 transac_type;
  __u32 path_data_type;
  __u32 reserved;
  __u64 camnoc_bw;
  __u64 mnoc_ab_bw;
  __u64 mnoc_ib_bw;
  __u64 ddr_ab_bw;
  __u64 ddr_ib_bw;
};
#endif
