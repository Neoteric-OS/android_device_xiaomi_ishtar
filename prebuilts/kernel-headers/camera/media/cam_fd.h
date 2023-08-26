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
#ifndef __UAPI_CAM_FD_H__
#define __UAPI_CAM_FD_H__
#include <media/cam_defs.h>
#define CAM_FD_MAX_FACES 35
#define CAM_FD_RAW_RESULT_ENTRIES 512
#define CAM_PACKET_OPCODES_FD_FRAME_UPDATE 0x0
#define CAM_FD_CMD_BUFFER_ID_GENERIC 0x0
#define CAM_FD_CMD_BUFFER_ID_CDM 0x1
#define CAM_FD_CMD_BUFFER_ID_MAX 0x2
#define CAM_FD_BLOB_TYPE_SOC_CLOCK_BW_REQUEST 0x0
#define CAM_FD_BLOB_TYPE_RAW_RESULTS_REQUIRED 0x1
#define CAM_FD_INPUT_PORT_ID_IMAGE 0x0
#define CAM_FD_INPUT_PORT_ID_MAX 0x1
#define CAM_FD_OUTPUT_PORT_ID_RESULTS 0x0
#define CAM_FD_OUTPUT_PORT_ID_RAW_RESULTS 0x1
#define CAM_FD_OUTPUT_PORT_ID_WORK_BUFFER 0x2
#define CAM_FD_OUTPUT_PORT_ID_MAX 0x3
struct cam_fd_soc_clock_bw_request {
  __u64 clock_rate;
  __u64 bandwidth;
  __u64 reserved[4];
};
struct cam_fd_face {
  __u32 prop1;
  __u32 prop2;
  __u32 prop3;
  __u32 prop4;
};
struct cam_fd_results {
  struct cam_fd_face faces[CAM_FD_MAX_FACES];
  __u32 face_count;
  __u32 reserved[3];
};
struct cam_fd_hw_caps {
  struct cam_hw_version core_version;
  struct cam_hw_version wrapper_version;
  __u32 raw_results_available;
  __u32 supported_modes;
  __u64 reserved;
};
struct cam_fd_query_cap_cmd {
  struct cam_iommu_handle device_iommu;
  struct cam_iommu_handle cdm_iommu;
  struct cam_fd_hw_caps hw_caps;
  __u64 reserved;
};
struct cam_fd_acquire_dev_info {
  struct cam_fd_soc_clock_bw_request clk_bw_request;
  __u32 priority;
  __u32 mode;
  __u32 get_raw_results;
  __u32 reserved[13];
};
#endif
