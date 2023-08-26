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
#ifndef __UAPI_OPE_H__
#define __UAPI_OPE_H__
#include <media/cam_defs.h>
#include <media/cam_cpas.h>
#define OPE_DEV_NAME_SIZE 128
#define OPE_HW_TYPE_OPE 0x1
#define OPE_HW_TYPE_OPE_CDM 0x2
#define OPE_HW_TYPE_MAX 0x3
#define OPE_DEV_TYPE_OPE_RT 0x1
#define OPE_DEV_TYPE_OPE_NRT 0x2
#define OPE_DEV_TYPE_OPE_SEMI_RT 0x3
#define OPE_DEV_TYPE_MAX 0x4
#define OPE_IN_RES_FULL 0x1
#define OPE_IN_RES_MAX OPE_IN_RES_FULL
#define OPE_OUT_RES_VIDEO 0x1
#define OPE_OUT_RES_DISP 0x2
#define OPE_OUT_RES_ARGB 0x3
#define OPE_OUT_RES_STATS_RS 0x4
#define OPE_OUT_RES_STATS_IHIST 0x5
#define OPE_OUT_RES_STATS_LTM 0x6
#define OPE_OUT_RES_MAX OPE_OUT_RES_STATS_LTM
#define OPE_OPCODE_CONFIG 0x1
#define OPE_CMD_BUF_SCOPE_BATCH 0x1
#define OPE_CMD_BUF_SCOPE_FRAME 0x2
#define OPE_CMD_BUF_SCOPE_PASS 0x3
#define OPE_CMD_BUF_SCOPE_STRIPE 0x4
#define OPE_CMD_BUF_TYPE_DIRECT 0x1
#define OPE_CMD_BUF_TYPE_INDIRECT 0x2
#define OPE_CMD_BUF_UMD 0x1
#define OPE_CMD_BUF_KMD 0x2
#define OPE_CMD_BUF_DEBUG 0x3
#define OPE_CMD_BUF_SINGLE_BUFFERED 0x1
#define OPE_CMD_BUF_DOUBLE_BUFFERED 0x2
#define OPE_CMD_META_GENERIC_BLOB 0x1
#define OPE_CMD_GENERIC_BLOB_CLK_V2 0x1
#define OPE_STRIPE_FULL 0x0
#define OPE_STRIPE_LEFT 0x1
#define OPE_STRIPE_RIGHT 0x2
#define OPE_STRIPE_MIDDLE 0x3
#define OPE_MAX_CMD_BUFS 64
#define OPE_MAX_IO_BUFS (OPE_OUT_RES_MAX + OPE_IN_RES_MAX)
#define OPE_MAX_PASS 1
#define OPE_MAX_PLANES 2
#define OPE_MAX_STRIPES 64
#define OPE_MAX_BATCH_SIZE 16
struct ope_stripe_info {
  __u32 offset;
  __u32 x_init;
  __u32 stripe_location;
  __u32 width;
  __u32 height;
  __u32 disable_bus;
  __u32 reserved;
};
struct ope_io_buf_info {
  __u32 direction;
  __u32 resource_type;
  __u32 num_planes;
  __u32 pix_pattern;
  __u32 num_stripes[OPE_MAX_PLANES];
  __u32 mem_handle[OPE_MAX_PLANES];
  __u32 plane_offset[OPE_MAX_PLANES];
  __u32 length[OPE_MAX_PLANES];
  __u32 plane_stride[OPE_MAX_PLANES];
  __u32 height[OPE_MAX_PLANES];
  __u32 format;
  __u32 fence;
  struct ope_stripe_info stripe_info[OPE_MAX_PLANES][OPE_MAX_STRIPES];
};
struct ope_frame_set {
  __u32 num_io_bufs;
  __u32 reserved;
  struct ope_io_buf_info io_buf[OPE_MAX_IO_BUFS];
};
struct ope_cmd_buf_info {
  __u32 mem_handle;
  __u32 offset;
  __u32 size;
  __u32 length;
  __u32 cmd_buf_scope;
  __u32 type;
  __u32 cmd_buf_usage;
  __u32 cmd_buf_buffered;
  __u32 stripe_idx;
  __u32 cmd_buf_pass_idx;
  __u32 prefetch_disable;
};
struct ope_frame_process {
  __u32 num_cmd_bufs[OPE_MAX_BATCH_SIZE];
  __u32 batch_size;
  struct ope_cmd_buf_info cmd_buf[OPE_MAX_BATCH_SIZE][OPE_MAX_CMD_BUFS];
  struct ope_frame_set frame_set[OPE_MAX_BATCH_SIZE];
};
struct ope_clk_bw_request_v2 {
  __u64 budget_ns;
  __u32 frame_cycles;
  __u32 rt_flag;
  __u32 reserved;
  __u32 num_paths;
  struct cam_axi_per_path_bw_vote axi_path[1];
};
struct ope_hw_ver {
  __u32 hw_type;
  __u32 reserved;
  struct cam_hw_version hw_ver;
};
struct ope_query_cap_cmd {
  struct cam_iommu_handle dev_iommu_handle;
  struct cam_iommu_handle cdm_iommu_handle;
  __u32 num_ope;
  __u32 reserved;
  struct ope_hw_ver hw_ver[OPE_DEV_TYPE_MAX];
};
struct ope_out_res_info {
  __u32 res_id;
  __u32 format;
  __u32 width;
  __u32 height;
  __u32 alignment;
  __u32 packer_format;
  __u32 subsample_period;
  __u32 subsample_pattern;
  __u32 pixel_pattern;
  __u32 reserved;
};
struct ope_in_res_info {
  __u32 res_id;
  __u32 format;
  __u32 width;
  __u32 height;
  __u32 pixel_pattern;
  __u32 alignment;
  __u32 unpacker_format;
  __u32 max_stripe_size;
  __u32 fps;
  __u32 reserved;
};
struct ope_acquire_dev_info {
  __u32 hw_type;
  __u32 dev_type;
  char dev_name[OPE_DEV_NAME_SIZE];
  __u32 nrt_stripes_for_arb;
  __u32 secure_mode;
  __u32 batch_size;
  __u32 num_in_res;
  struct ope_in_res_info in_res[OPE_IN_RES_MAX];
  __u32 num_out_res;
  __u32 reserved;
  struct ope_out_res_info out_res[OPE_OUT_RES_MAX];
} __attribute__((__packed__));
#endif
