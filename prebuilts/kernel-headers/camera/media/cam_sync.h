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
#ifndef __UAPI_CAM_SYNC_H__
#define __UAPI_CAM_SYNC_H__
#include <linux/videodev2.h>
#include <linux/types.h>
#include <linux/ioctl.h>
#include <linux/media.h>
#define CAM_SYNC_DEVICE_NAME "cam_sync_device"
#define CAM_SYNC_V4L_EVENT (V4L2_EVENT_PRIVATE_START + 0)
#define CAM_SYNC_V4L_EVENT_V2 (V4L2_EVENT_PRIVATE_START + 1)
#define CAM_SYNC_V4L_EVENT_ID_CB_TRIG 0
#define CAM_SYNC_USER_PAYLOAD_SIZE 2
#define CAM_SYNC_DEVICE_TYPE (MEDIA_ENT_F_OLD_BASE)
#define CAM_SYNC_GET_PAYLOAD_PTR(ev,type) (type *) ((char *) ev.u.data + sizeof(struct cam_sync_ev_header))
#define CAM_SYNC_GET_HEADER_PTR(ev) ((struct cam_sync_ev_header *) ev.u.data)
#define CAM_SYNC_GET_PAYLOAD_PTR_V2(ev,type) (type *) ((char *) ev.u.data + sizeof(struct cam_sync_ev_header_v2))
#define CAM_SYNC_GET_HEADER_PTR_V2(ev) ((struct cam_sync_ev_header_v2 *) ev.u.data)
#define CAM_SYNC_STATE_INVALID 0
#define CAM_SYNC_STATE_ACTIVE 1
#define CAM_SYNC_STATE_SIGNALED_SUCCESS 2
#define CAM_SYNC_STATE_SIGNALED_ERROR 3
#define CAM_SYNC_STATE_SIGNALED_CANCEL 4
#define CAM_SYNC_COMMON_EVENT_START 0
#define CAM_SYNC_COMMON_EVENT_UNUSED (CAM_SYNC_COMMON_EVENT_START + 0)
#define CAM_SYNC_COMMON_EVENT_SUCCESS (CAM_SYNC_COMMON_EVENT_START + 1)
#define CAM_SYNC_COMMON_EVENT_FLUSH (CAM_SYNC_COMMON_EVENT_START + 2)
#define CAM_SYNC_COMMON_EVENT_STOP (CAM_SYNC_COMMON_EVENT_START + 3)
#define CAM_SYNC_COMMON_EVENT_SYNX (CAM_SYNC_COMMON_EVENT_START + 4)
#define CAM_SYNC_COMMON_REG_PAYLOAD_EVENT (CAM_SYNC_COMMON_EVENT_START + 5)
#define CAM_SYNC_COMMON_SYNC_SIGNAL_EVENT (CAM_SYNC_COMMON_EVENT_START + 6)
#define CAM_SYNC_COMMON_RELEASE_EVENT (CAM_SYNC_COMMON_EVENT_START + 7)
#define CAM_SYNC_COMMON_EVENT_END (CAM_SYNC_COMMON_EVENT_START + 50)
#define CAM_SYNC_ISP_EVENT_START (CAM_SYNC_COMMON_EVENT_END + 1)
#define CAM_SYNC_ISP_EVENT_UNKNOWN (CAM_SYNC_ISP_EVENT_START + 0)
#define CAM_SYNC_ISP_EVENT_BUBBLE (CAM_SYNC_ISP_EVENT_START + 1)
#define CAM_SYNC_ISP_EVENT_OVERFLOW (CAM_SYNC_ISP_EVENT_START + 2)
#define CAM_SYNC_ISP_EVENT_P2I_ERROR (CAM_SYNC_ISP_EVENT_START + 3)
#define CAM_SYNC_ISP_EVENT_VIOLATION (CAM_SYNC_ISP_EVENT_START + 4)
#define CAM_SYNC_ISP_EVENT_BUSIF_OVERFLOW (CAM_SYNC_ISP_EVENT_START + 5)
#define CAM_SYNC_ISP_EVENT_FLUSH (CAM_SYNC_ISP_EVENT_START + 6)
#define CAM_SYNC_ISP_EVENT_HW_STOP (CAM_SYNC_ISP_EVENT_START + 7)
#define CAM_SYNC_ISP_EVENT_RECOVERY_OVERFLOW (CAM_SYNC_ISP_EVENT_START + 8)
#define CAM_SYNC_ISP_EVENT_CSID_OUTPUT_FIFO_OVERFLOW (CAM_SYNC_ISP_EVENT_START + 9)
#define CAM_SYNC_ISP_EVENT_CSID_RX_ERROR (CAM_SYNC_ISP_EVENT_START + 10)
#define CAM_SYNC_ISP_EVENT_CSID_SENSOR_SWITCH_ERROR (CAM_SYNC_ISP_EVENT_START + 11)
#define CAM_SYNC_ISP_EVENT_END (CAM_SYNC_ISP_EVENT_START + 50)
#define CAM_SYNC_ICP_EVENT_START (CAM_SYNC_ISP_EVENT_END + 1)
#define CAM_SYNC_ICP_EVENT_UNKNOWN (CAM_SYNC_ICP_EVENT_START + 0)
#define CAM_SYNC_ICP_EVENT_FRAME_PROCESS_FAILURE (CAM_SYNC_ICP_EVENT_START + 1)
#define CAM_SYNC_ICP_EVENT_CONFIG_ERR (CAM_SYNC_ICP_EVENT_START + 2)
#define CAM_SYNC_ICP_EVENT_NO_MEMORY (CAM_SYNC_ICP_EVENT_START + 3)
#define CAM_SYNC_ICP_EVENT_BAD_STATE (CAM_SYNC_ICP_EVENT_START + 4)
#define CAM_SYNC_ICP_EVENT_BAD_PARAM (CAM_SYNC_ICP_EVENT_START + 5)
#define CAM_SYNC_ICP_EVENT_BAD_ITEM (CAM_SYNC_ICP_EVENT_START + 6)
#define CAM_SYNC_ICP_EVENT_INVALID_FORMAT (CAM_SYNC_ICP_EVENT_START + 7)
#define CAM_SYNC_ICP_EVENT_UNSUPPORTED (CAM_SYNC_ICP_EVENT_START + 8)
#define CAM_SYNC_ICP_EVENT_OUT_OF_BOUND (CAM_SYNC_ICP_EVENT_START + 9)
#define CAM_SYNC_ICP_EVENT_TIME_OUT (CAM_SYNC_ICP_EVENT_START + 10)
#define CAM_SYNC_ICP_EVENT_ABORTED (CAM_SYNC_ICP_EVENT_START + 11)
#define CAM_SYNC_ICP_EVENT_HW_VIOLATION (CAM_SYNC_ICP_EVENT_START + 12)
#define CAM_SYNC_ICP_EVENT_CMD_ERROR (CAM_SYNC_ICP_EVENT_START + 13)
#define CAM_SYNC_ICP_EVENT_HFI_ERR_COMMAND_SIZE (CAM_SYNC_ICP_EVENT_START + 14)
#define CAM_SYNC_ICP_EVENT_HFI_ERR_MESSAGE_SIZE (CAM_SYNC_ICP_EVENT_START + 15)
#define CAM_SYNC_ICP_EVENT_HFI_ERR_QUEUE_EMPTY (CAM_SYNC_ICP_EVENT_START + 16)
#define CAM_SYNC_ICP_EVENT_HFI_ERR_QUEUE_FULL (CAM_SYNC_ICP_EVENT_START + 17)
#define CAM_SYNC_ICP_EVENT_END (CAM_SYNC_ICP_EVENT_START + 50)
#define CAM_SYNC_JPEG_EVENT_START (CAM_SYNC_ICP_EVENT_END + 1)
#define CAM_SYNC_JPEG_EVENT_UNKNOWN (CAM_SYNC_JPEG_EVENT_START + 0)
#define CAM_SYNC_JPEG_EVENT_INVLD_CMD (CAM_SYNC_JPEG_EVENT_START + 1)
#define CAM_SYNC_JPEG_EVENT_SET_IRQ_CB (CAM_SYNC_JPEG_EVENT_START + 2)
#define CAM_SYNC_JPEG_EVENT_HW_RESET_FAILED (CAM_SYNC_JPEG_EVENT_START + 3)
#define CAM_SYNC_JPEG_EVENT_CDM_CHANGE_BASE_ERR (CAM_SYNC_JPEG_EVENT_START + 4)
#define CAM_SYNC_JPEG_EVENT_CDM_CONFIG_ERR (CAM_SYNC_JPEG_EVENT_START + 5)
#define CAM_SYNC_JPEG_EVENT_START_HW_ERR (CAM_SYNC_JPEG_EVENT_START + 6)
#define CAM_SYNC_JPEG_EVENT_START_HW_HANG (CAM_SYNC_JPEG_EVENT_START + 7)
#define CAM_SYNC_JPEG_EVENT_MISR_CONFIG_ERR (CAM_SYNC_JPEG_EVENT_START + 8)
#define CAM_SYNC_JPEG_EVENT_END (CAM_SYNC_JPEG_EVENT_START + 50)
#define CAM_SYNC_FD_EVENT_START (CAM_SYNC_JPEG_EVENT_END + 1)
#define CAM_SYNC_FD_EVENT_UNKNOWN (CAM_SYNC_FD_EVENT_START + 0)
#define CAM_SYNC_FD_EVENT_IRQ_FRAME_DONE (CAM_SYNC_FD_EVENT_START + 1)
#define CAM_SYNC_FD_EVENT_IRQ_RESET_DONE (CAM_SYNC_FD_EVENT_START + 2)
#define CAM_SYNC_FD_EVENT_HALT (CAM_SYNC_FD_EVENT_START + 3)
#define CAM_SYNC_FD_EVENT_END (CAM_SYNC_FD_EVENT_START + 50)
#define CAM_SYNC_LRME_EVENT_START (CAM_SYNC_FD_EVENT_END + 1)
#define CAM_SYNC_LRME_EVENT_UNKNOWN (CAM_SYNC_LRME_EVENT_START + 0)
#define CAM_SYNC_LRME_EVENT_CB_ERROR (CAM_SYNC_LRME_EVENT_START + 1)
#define CAM_SYNC_LRME_EVENT_END (CAM_SYNC_LRME_EVENT_START + 50)
#define CAM_SYNC_OPE_EVENT_START (CAM_SYNC_LRME_EVENT_END + 1)
#define CAM_SYNC_OPE_EVENT_UNKNOWN (CAM_SYNC_OPE_EVENT_START + 0)
#define CAM_SYNC_OPE_EVENT_PAGE_FAULT (CAM_SYNC_OPE_EVENT_START + 1)
#define CAM_SYNC_OPE_EVENT_HW_HANG (CAM_SYNC_OPE_EVENT_START + 2)
#define CAM_SYNC_OPE_EVENT_HALT (CAM_SYNC_OPE_EVENT_START + 3)
#define CAM_SYNC_OPE_EVENT_CONFIG_ERR (CAM_SYNC_OPE_EVENT_START + 4)
#define CAM_SYNC_OPE_EVENT_HW_FLUSH (CAM_SYNC_OPE_EVENT_START + 5)
#define CAM_SYNC_OPE_EVENT_HW_RESUBMIT (CAM_SYNC_OPE_EVENT_START + 6)
#define CAM_SYNC_OPE_EVENT_HW_RESET_DONE (CAM_SYNC_OPE_EVENT_START + 7)
#define CAM_SYNC_OPE_EVENT_HW_ERROR (CAM_SYNC_OPE_EVENT_START + 8)
#define CAM_SYNC_OPE_EVENT_INVLD_CMD (CAM_SYNC_OPE_EVENT_START + 9)
#define CAM_SYNC_OPE_EVENT_HW_RESET_FAILED (CAM_SYNC_OPE_EVENT_START + 10)
#define CAM_SYNC_OPE_EVENT_END (CAM_SYNC_OPE_EVENT_START + 50)
#define CAM_SYNC_CRE_EVENT_START (CAM_SYNC_OPE_EVENT_END + 1)
#define CAM_SYNC_CRE_EVENT_UNKNOWN (CAM_SYNC_CRE_EVENT_START + 0)
#define CAM_SYNC_CRE_EVENT_CONFIG_ERR (CAM_SYNC_CRE_EVENT_START + 1)
#define CAM_SYNC_CRE_EVENT_INVLD_CMD (CAM_SYNC_CRE_EVENT_START + 2)
#define CAM_SYNC_CRE_EVENT_SET_IRQ_CB (CAM_SYNC_CRE_EVENT_START + 3)
#define CAM_SYNC_CRE_EVENT_HW_RESET_FAILED (CAM_SYNC_CRE_EVENT_START + 4)
#define CAM_SYNC_CRE_EVENT_HW_ERR (CAM_SYNC_CRE_EVENT_START + 5)
#define CAM_SYNC_CRE_EVENT_END (CAM_SYNC_CRE_EVENT_START + 50)
#define CAM_SYNC_EVENT_MAX 8
#define CAM_SYNC_EVENT_REASON_CODE_INDEX 0
#define CAM_GENERIC_FENCE_TYPE_SYNC_OBJ 0x1
#define CAM_GENERIC_FENCE_TYPE_DMA_FENCE 0x2
struct cam_sync_ev_header {
  __s32 sync_obj;
  __s32 status;
};
struct cam_sync_ev_header_v2 {
  __s32 sync_obj;
  __s32 status;
  uint32_t version;
  uint32_t evt_param[CAM_SYNC_EVENT_MAX];
};
struct cam_sync_info {
  char name[64];
  __s32 sync_obj;
};
struct cam_sync_signal {
  __s32 sync_obj;
  __u32 sync_state;
};
struct cam_sync_merge {
  __u64 sync_objs;
  __u32 num_objs;
  __s32 merged;
};
struct cam_sync_userpayload_info {
  __s32 sync_obj;
  __u32 reserved;
  __u64 payload[CAM_SYNC_USER_PAYLOAD_SIZE];
};
struct cam_sync_wait {
  __s32 sync_obj;
  __u32 reserved;
  uint64_t timeout_ms;
};
struct cam_generic_fence_config {
  __u32 version;
  char name[64];
  __u32 fence_sel_mask;
  __s32 sync_obj;
  __s32 dma_fence_fd;
  __s32 synx_obj;
  __s32 reason_code;
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __u32 params[4];
};
struct cam_dma_fence_signal {
  __u32 version;
  __s32 dma_fence_fd;
  __s32 status;
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __s32 params[3];
};
struct cam_generic_fence_input_info {
  __u32 version;
  __u32 num_fences_requested;
  __u32 num_fences_processed;
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __s32 params[3];
  struct cam_generic_fence_config fence_cfg[1];
};
struct cam_generic_fence_cmd_args {
  __u32 version;
  __u32 fence_type;
  __u32 input_handle_type;
  __u32 input_data_size;
  __u64 input_handle;
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __u32 params[6];
};
struct cam_private_ioctl_arg {
  __u32 id;
  __u32 size;
  __u32 result;
  __u32 reserved;
  __u64 ioctl_ptr;
};
#define CAM_PRIVATE_IOCTL_CMD _IOWR('V', BASE_VIDIOC_PRIVATE, struct cam_private_ioctl_arg)
#define CAM_SYNC_CREATE 0
#define CAM_SYNC_DESTROY 1
#define CAM_SYNC_SIGNAL 2
#define CAM_SYNC_MERGE 3
#define CAM_SYNC_REGISTER_PAYLOAD 4
#define CAM_SYNC_DEREGISTER_PAYLOAD 5
#define CAM_SYNC_WAIT 6
#define CAM_GENERIC_FENCE_CREATE 11
#define CAM_GENERIC_FENCE_RELEASE 12
#define CAM_GENERIC_FENCE_IMPORT 13
#define CAM_GENERIC_FENCE_SIGNAL 14
#endif
