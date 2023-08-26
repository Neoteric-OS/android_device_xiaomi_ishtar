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
#ifndef __UAPI_LINUX_CAM_REQ_MGR_H
#define __UAPI_LINUX_CAM_REQ_MGR_H
#include <linux/videodev2.h>
#include <linux/types.h>
#include <linux/ioctl.h>
#include <linux/media.h>
#include <media/cam_defs.h>
#define CAM_REQ_MGR_VNODE_NAME "cam-req-mgr-devnode"
#define CAM_DEVICE_TYPE_BASE (MEDIA_ENT_F_OLD_BASE)
#define CAM_VNODE_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE)
#define CAM_SENSOR_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 1)
#define CAM_IFE_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 2)
#define CAM_ICP_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 3)
#define CAM_LRME_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 4)
#define CAM_JPEG_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 5)
#define CAM_FD_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 6)
#define CAM_CPAS_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 7)
#define CAM_CSIPHY_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 8)
#define CAM_ACTUATOR_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 9)
#define CAM_CCI_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 10)
#define CAM_FLASH_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 11)
#define CAM_EEPROM_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 12)
#define CAM_OIS_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 13)
#define CAM_CUSTOM_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 14)
#define CAM_OPE_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 15)
#define CAM_TFE_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 16)
#define CAM_CRE_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 17)
#define CAM_TPG_DEVICE_TYPE (CAM_DEVICE_TYPE_BASE + 18)
#define CAM_REQ_MGR_HDL_IDX_POS 8
#define CAM_REQ_MGR_HDL_IDX_MASK ((1 << CAM_REQ_MGR_HDL_IDX_POS) - 1)
#define CAM_REQ_MGR_GET_HDL_IDX(hdl) (hdl & CAM_REQ_MGR_HDL_IDX_MASK)
#define CAM_REQ_MGR_MAX_HANDLES 64
#define CAM_REQ_MGR_MAX_HANDLES_V2 256
#define MAX_LINKS_PER_SESSION 2
#define V4L_EVENT_CAM_REQ_MGR_EVENT (V4L2_EVENT_PRIVATE_START + 0)
#define V4L_EVENT_CAM_REQ_MGR_SOF 0
#define V4L_EVENT_CAM_REQ_MGR_ERROR 1
#define V4L_EVENT_CAM_REQ_MGR_SOF_BOOT_TS 2
#define V4L_EVENT_CAM_REQ_MGR_CUSTOM_EVT 3
#define V4L_EVENT_CAM_REQ_MGR_NODE_EVENT 4
#define V4L_EVENT_CAM_REQ_MGR_SOF_UNIFIED_TS 5
#define V4L_EVENT_CAM_REQ_MGR_PF_ERROR 6
#define CAM_REQ_MGR_SOF_EVENT_SUCCESS 0
#define CAM_REQ_MGR_SOF_EVENT_ERROR 1
#define CAM_REQ_MGR_LINK_ACTIVATE 0
#define CAM_REQ_MGR_LINK_DEACTIVATE 1
#define CAM_DMA_BUF_NAME_LEN 128
#define CAM_REQ_MGR_ALLOC_BUF_WITH_NAME 1
#define CAM_REQ_MGR_FLUSH_TYPE_ALL 0
#define CAM_REQ_MGR_FLUSH_TYPE_CANCEL_REQ 1
#define CAM_REQ_MGR_FLUSH_TYPE_MAX 2
#define CAM_REQ_MGR_SYNC_MODE_NO_SYNC 0
#define CAM_REQ_MGR_SYNC_MODE_SYNC 1
struct cam_req_mgr_event_data {
  __s32 session_hdl;
  __s32 link_hdl;
  __s32 frame_id;
  __s32 reserved;
  __s64 req_id;
  __u64 tv_sec;
  __u64 tv_usec;
};
struct cam_req_mgr_session_info {
  __s32 session_hdl;
  __s32 reserved;
};
struct cam_req_mgr_link_info {
  __s32 session_hdl;
  __u32 num_devices;
  __s32 dev_hdls[CAM_REQ_MGR_MAX_HANDLES];
  __s32 link_hdl;
};
struct cam_req_mgr_link_info_v2 {
  __s32 session_hdl;
  __u32 num_devices;
  __s32 dev_hdls[CAM_REQ_MGR_MAX_HANDLES_V2];
  __s32 link_hdl;
};
struct cam_req_mgr_ver_info {
  __u32 version;
  union {
    struct cam_req_mgr_link_info link_info_v1;
    struct cam_req_mgr_link_info_v2 link_info_v2;
  } u;
};
struct cam_req_mgr_unlink_info {
  __s32 session_hdl;
  __s32 link_hdl;
};
struct cam_req_mgr_flush_info {
  __s32 session_hdl;
  __s32 link_hdl;
  __u32 flush_type;
  __u32 reserved;
  __s64 req_id;
};
struct cam_req_mgr_sched_request {
  __s32 session_hdl;
  __s32 link_hdl;
  __s32 bubble_enable;
  __s32 sync_mode;
  __s32 additional_timeout;
  __s32 reserved;
  __s64 req_id;
};
struct cam_req_mgr_sched_request_v2 {
  __s32 version;
  __s32 session_hdl;
  __s32 link_hdl;
  __s32 bubble_enable;
  __s32 sync_mode;
  __s32 additional_timeout;
  __s32 num_links;
  __s32 num_valid_params;
  __s64 req_id;
  __s32 link_hdls[MAX_LINKS_PER_SESSION];
  __s32 param_mask;
  __s32 params[5];
};
struct cam_req_mgr_sync_mode {
  __s32 session_hdl;
  __s32 sync_mode;
  __s32 num_links;
  __s32 link_hdls[MAX_LINKS_PER_SESSION];
  __s32 master_link_hdl;
  __s32 reserved;
};
struct cam_req_mgr_link_control {
  __s32 ops;
  __s32 session_hdl;
  __s32 num_links;
  __s32 reserved;
  __s32 init_timeout[MAX_LINKS_PER_SESSION];
  __s32 link_hdls[MAX_LINKS_PER_SESSION];
};
struct cam_req_mgr_link_properties {
  __s32 version;
  __s32 session_hdl;
  __s32 link_hdl;
  __u32 properties_mask;
  __s32 num_valid_params;
  __u32 param_mask;
  __s32 params[6];
};
#define CAM_LINK_PROPERTY_NONE 0
#define CAM_LINK_PROPERTY_SENSOR_STANDBY_AFTER_EOF BIT(0)
#define CAM_REQ_MGR_CREATE_DEV_NODES (CAM_COMMON_OPCODE_MAX + 1)
#define CAM_REQ_MGR_CREATE_SESSION (CAM_COMMON_OPCODE_MAX + 2)
#define CAM_REQ_MGR_DESTROY_SESSION (CAM_COMMON_OPCODE_MAX + 3)
#define CAM_REQ_MGR_LINK (CAM_COMMON_OPCODE_MAX + 4)
#define CAM_REQ_MGR_UNLINK (CAM_COMMON_OPCODE_MAX + 5)
#define CAM_REQ_MGR_SCHED_REQ (CAM_COMMON_OPCODE_MAX + 6)
#define CAM_REQ_MGR_FLUSH_REQ (CAM_COMMON_OPCODE_MAX + 7)
#define CAM_REQ_MGR_SYNC_MODE (CAM_COMMON_OPCODE_MAX + 8)
#define CAM_REQ_MGR_ALLOC_BUF (CAM_COMMON_OPCODE_MAX + 9)
#define CAM_REQ_MGR_MAP_BUF (CAM_COMMON_OPCODE_MAX + 10)
#define CAM_REQ_MGR_RELEASE_BUF (CAM_COMMON_OPCODE_MAX + 11)
#define CAM_REQ_MGR_CACHE_OPS (CAM_COMMON_OPCODE_MAX + 12)
#define CAM_REQ_MGR_LINK_CONTROL (CAM_COMMON_OPCODE_MAX + 13)
#define CAM_REQ_MGR_LINK_V2 (CAM_COMMON_OPCODE_MAX + 14)
#define CAM_REQ_MGR_REQUEST_DUMP (CAM_COMMON_OPCODE_MAX + 15)
#define CAM_REQ_MGR_SCHED_REQ_V2 (CAM_COMMON_OPCODE_MAX + 16)
#define CAM_REQ_MGR_LINK_PROPERTIES (CAM_COMMON_OPCODE_MAX + 17)
#define CAM_REQ_MGR_ALLOC_BUF_V2 (CAM_COMMON_OPCODE_MAX + 18)
#define CAM_REQ_MGR_MAP_BUF_V2 (CAM_COMMON_OPCODE_MAX + 19)
#define CAM_REQ_MGR_MEM_CPU_ACCESS_OP (CAM_COMMON_OPCODE_MAX + 20)
#define CAM_REQ_MGR_QUERY_CAP (CAM_COMMON_OPCODE_MAX + 21)
#define CAM_MEM_FLAG_HW_READ_WRITE (1 << 0)
#define CAM_MEM_FLAG_HW_READ_ONLY (1 << 1)
#define CAM_MEM_FLAG_HW_WRITE_ONLY (1 << 2)
#define CAM_MEM_FLAG_KMD_ACCESS (1 << 3)
#define CAM_MEM_FLAG_UMD_ACCESS (1 << 4)
#define CAM_MEM_FLAG_PROTECTED_MODE (1 << 5)
#define CAM_MEM_FLAG_CMD_BUF_TYPE (1 << 6)
#define CAM_MEM_FLAG_PIXEL_BUF_TYPE (1 << 7)
#define CAM_MEM_FLAG_STATS_BUF_TYPE (1 << 8)
#define CAM_MEM_FLAG_PACKET_BUF_TYPE (1 << 9)
#define CAM_MEM_FLAG_CACHE (1 << 10)
#define CAM_MEM_FLAG_HW_SHARED_ACCESS (1 << 11)
#define CAM_MEM_FLAG_CDSP_OUTPUT (1 << 12)
#define CAM_MEM_FLAG_DISABLE_DELAYED_UNMAP (1 << 13)
#define CAM_MEM_FLAG_KMD_DEBUG_FLAG (1 << 14)
#define CAM_MEM_FLAG_EVA_NOPIXEL (1 << 15)
#define CAM_MEM_FLAG_HW_AND_CDM_OR_SHARED (1 << 16)
#define CAM_MEM_FLAG_UBWC_P_HEAP (1 << 17)
#define CAM_MEM_MMU_MAX_HANDLE 16
#define CAM_MEM_BUFQ_MAX 2048
#define CAM_MEM_MGR_SECURE_BIT_POS 15
#define CAM_MEM_MGR_HDL_IDX_SIZE 15
#define CAM_MEM_MGR_HDL_FD_SIZE 16
#define CAM_MEM_MGR_HDL_IDX_END_POS 16
#define CAM_MEM_MGR_HDL_FD_END_POS 32
#define CAM_MEM_MGR_HDL_IDX_MASK ((1 << CAM_MEM_MGR_HDL_IDX_SIZE) - 1)
#define GET_MEM_HANDLE(idx,fd) ((idx & CAM_MEM_MGR_HDL_IDX_MASK) | (fd << (CAM_MEM_MGR_HDL_FD_END_POS - CAM_MEM_MGR_HDL_FD_SIZE)))
#define GET_FD_FROM_HANDLE(hdl) (hdl >> (CAM_MEM_MGR_HDL_FD_END_POS - CAM_MEM_MGR_HDL_FD_SIZE))
#define CAM_MEM_MGR_GET_HDL_IDX(hdl) (hdl & CAM_MEM_MGR_HDL_IDX_MASK)
#define CAM_MEM_MGR_SET_SECURE_HDL(hdl,flag) ((flag) ? (hdl |= (1 << CAM_MEM_MGR_SECURE_BIT_POS)) : ((hdl) &= ~(1 << CAM_MEM_MGR_SECURE_BIT_POS)))
#define CAM_MEM_MGR_IS_SECURE_HDL(hdl) (((hdl) & (1 << CAM_MEM_MGR_SECURE_BIT_POS)) >> CAM_MEM_MGR_SECURE_BIT_POS)
#define CAM_MEM_DMA_NONE 0
#define CAM_MEM_DMA_BIDIRECTIONAL 1
#define CAM_MEM_DMA_TO_DEVICE 2
#define CAM_MEM_DMA_FROM_DEVICE 3
#define CAM_MEM_CLEAN_CACHE 1
#define CAM_MEM_INV_CACHE 2
#define CAM_MEM_CLEAN_INV_CACHE 3
#define CAM_MEM_BEGIN_CPU_ACCESS BIT(0)
#define CAM_MEM_END_CPU_ACCESS BIT(1)
#define CAM_MEM_CPU_ACCESS_READ BIT(0)
#define CAM_MEM_CPU_ACCESS_WRITE BIT(1)
#define CAM_REQ_MGR_MEM_UBWC_P_HEAP_SUPPORTED BIT(0)
struct cam_req_mgr_query_cap {
  __u32 version;
  __u64 feature_mask;
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __s32 params[5];
};
struct cam_mem_alloc_out_params {
  __u32 buf_handle;
  __s32 fd;
  __u64 vaddr;
};
struct cam_mem_map_out_params {
  __u32 buf_handle;
  __u32 size;
  __u64 vaddr;
};
struct cam_mem_mgr_alloc_cmd {
  __u64 len;
  __u64 align;
  __s32 mmu_hdls[CAM_MEM_MMU_MAX_HANDLE];
  __u32 num_hdl;
  __u32 flags;
  struct cam_mem_alloc_out_params out;
};
struct cam_mem_mgr_alloc_cmd_v2 {
  __u32 version;
  __u32 num_hdl;
  __s32 mmu_hdls[CAM_MEM_MMU_MAX_HANDLE];
  __u64 len;
  __u64 align;
  __u64 vmids;
  char buf_name[CAM_DMA_BUF_NAME_LEN];
  __u32 flags;
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __s32 params[5];
  struct cam_mem_alloc_out_params out;
};
struct cam_mem_mgr_map_cmd {
  __s32 mmu_hdls[CAM_MEM_MMU_MAX_HANDLE];
  __u32 num_hdl;
  __u32 flags;
  __s32 fd;
  __u32 reserved;
  struct cam_mem_map_out_params out;
};
struct cam_mem_mgr_map_cmd_v2 {
  __u32 version;
  __s32 fd;
  __s32 mmu_hdls[CAM_MEM_MMU_MAX_HANDLE];
  __u32 num_hdl;
  __u32 flags;
  __u64 vmids;
  char buf_name[CAM_DMA_BUF_NAME_LEN];
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __s32 params[4];
  struct cam_mem_map_out_params out;
};
struct cam_mem_mgr_release_cmd {
  __s32 buf_handle;
  __u32 reserved;
};
struct cam_mem_cache_ops_cmd {
  __s32 buf_handle;
  __u32 mem_cache_ops;
};
struct cam_mem_cpu_access_op {
  __u32 version;
  __s32 buf_handle;
  __u32 access;
  __u32 access_type;
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __s32 params[4];
};
#define CAM_REQ_MGR_ERROR_TYPE_DEVICE 0
#define CAM_REQ_MGR_ERROR_TYPE_REQUEST 1
#define CAM_REQ_MGR_ERROR_TYPE_BUFFER 2
#define CAM_REQ_MGR_ERROR_TYPE_RECOVERY 3
#define CAM_REQ_MGR_ERROR_TYPE_SOF_FREEZE 4
#define CAM_REQ_MGR_ERROR_TYPE_FULL_RECOVERY 5
#define CAM_REQ_MGR_ERROR_TYPE_PAGE_FAULT 6
#define CAM_REQ_MGR_WARN_TYPE_KMD_RECOVERY 7
#define CAM_REQ_MGR_ISP_UNREPORTED_ERROR 0
#define CAM_REQ_MGR_LINK_STALLED_ERROR BIT(0)
#define CAM_REQ_MGR_CSID_FATAL_ERROR BIT(1)
#define CAM_REQ_MGR_CSID_FIFO_OVERFLOW_ERROR BIT(2)
#define CAM_REQ_MGR_CSID_RECOVERY_OVERFLOW_ERROR BIT(3)
#define CAM_REQ_MGR_CSID_LANE_FIFO_OVERFLOW_ERROR BIT(4)
#define CAM_REQ_MGR_CSID_PIXEL_COUNT_MISMATCH BIT(5)
#define CAM_REQ_MGR_CSID_RX_PKT_HDR_CORRUPTION BIT(6)
#define CAM_REQ_MGR_CSID_MISSING_PKT_HDR_DATA BIT(7)
#define CAM_REQ_MGR_CSID_ERR_ON_SENSOR_SWITCHING BIT(8)
#define CAM_REQ_MGR_CSID_UNBOUNDED_FRAME BIT(9)
#define CAM_REQ_MGR_ICP_NO_MEMORY BIT(10)
#define CAM_REQ_MGR_ICP_SYSTEM_FAILURE BIT(11)
#define CAM_REQ_MGR_CSID_MISSING_EOT BIT(12)
#define CAM_REQ_MGR_CSID_RX_PKT_PAYLOAD_CORRUPTION BIT(13)
#define CAM_REQ_MGR_SENSOR_STREAM_OFF_FAILED BIT(14)
struct cam_req_mgr_error_msg {
  __u32 error_type;
  __u32 request_id;
  __s32 device_hdl;
  __s32 link_hdl;
  __u32 resource_size;
  __u32 error_code;
};
struct cam_req_mgr_frame_msg {
  __u64 request_id;
  __u64 frame_id;
  __u64 timestamp;
  __s32 link_hdl;
  __u32 sof_status;
  __u32 frame_id_meta;
  __u32 reserved;
};
enum cam_req_msg_timestamp_type {
  CAM_REQ_SOF_QTIMER_TIMESTAMP = 0,
  CAM_REQ_BOOT_TIMESTAMP,
  CAM_REQ_TIMESTAMP_MAX
};
struct cam_req_mgr_frame_msg_v2 {
  __u64 request_id;
  __u64 frame_id;
  __u64 timestamps[CAM_REQ_TIMESTAMP_MAX];
  __s32 link_hdl;
  __u32 frame_id_meta;
  __u32 reserved[4];
};
struct cam_req_mgr_custom_msg {
  __u32 custom_type;
  __u64 request_id;
  __u64 frame_id;
  __u64 timestamp;
  __s32 link_hdl;
  __u64 custom_data;
};
#define CAM_REQ_MGR_NO_EVENT 0
#define CAM_REQ_MGR_RETRY_EVENT 1
#define CAM_REQ_MGR_CAUSE_UNREPORTED 0
#define CAM_REQ_MGR_JPEG_THUBNAIL_SIZE_ERROR 1
struct cam_req_mgr_node_msg {
  __s32 device_hdl;
  __s32 link_hdl;
  __u32 event_type;
  __u32 event_cause;
  __u64 request_id;
  __u64 custom_data;
  __u32 reserved[2];
};
#define CAM_REQ_MGR_PF_EVT_BUF_NOT_FOUND 0
#define CAM_REQ_MGR_PF_EVT_BUF_FOUND_IO_CFG 1
#define CAM_REQ_MGR_PF_EVT_BUF_FOUND_REF_BUF 2
#define CAM_REQ_MGR_PF_EVT_BUF_FOUND_CDM 3
#define CAM_REQ_MGR_PF_EVT_BUF_FOUND_SHARED 4
#define CAM_REQ_MGR_PF_TYPE_NULL 0
#define CAM_REQ_MGR_PF_TYPE_OUT_OF_BOUND 1
#define CAM_REQ_MGR_PF_TYPE_MAPPED_REGION 2
#define CAM_REQ_MGR_STAGE1_FAULT 0
#define CAM_REQ_MGR_STAGE2_FAULT 1
struct cam_req_mgr_pf_err_msg {
  __s32 device_hdl;
  __s32 link_hdl;
  __u8 pf_evt;
  __u8 pf_type;
  __u8 pf_stage;
  __u8 patch_id;
  __s32 buf_hdl;
  __u32 offset;
  __u32 port_id;
  __u64 far_delta;
  __u64 req_id;
  __u8 bid;
  __u8 pid;
  __u16 mid;
  __u32 reserved[3];
};
struct cam_req_mgr_message {
  __s32 session_hdl;
  __s32 reserved;
  union {
    struct cam_req_mgr_error_msg err_msg;
    struct cam_req_mgr_frame_msg frame_msg;
    struct cam_req_mgr_frame_msg_v2 frame_msg_v2;
    struct cam_req_mgr_custom_msg custom_msg;
    struct cam_req_mgr_node_msg node_msg;
    struct cam_req_mgr_pf_err_msg pf_err_msg;
  } u;
};
#endif
