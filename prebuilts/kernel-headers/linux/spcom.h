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
#ifndef _UAPI_SPCOM_H_
#define _UAPI_SPCOM_H_
#include <linux/types.h>
#ifndef BIT
#define BIT(x) (1 << x)
#endif
#ifndef PAGE_SIZE
#define PAGE_SIZE 4096
#endif
#define SPCOM_MAX_CHANNELS 0x20
#define SPCOM_CHANNEL_NAME_SIZE 32
#define SPCOM_GET_NEXT_REQUEST_SIZE (PAGE_SIZE - 1)
enum spcom_cmd_id {
  SPCOM_CMD_LOAD_APP = 0x4C4F4144,
  SPCOM_CMD_RESET_SP = 0x52455354,
  SPCOM_CMD_SEND = 0x53454E44,
  SPCOM_CMD_SEND_MODIFIED = 0x534E444D,
  SPCOM_CMD_LOCK_ION_BUF = 0x4C4F434B,
  SPCOM_CMD_UNLOCK_ION_BUF = 0x554C434B,
  SPCOM_CMD_FSSR = 0x46535352,
  SPCOM_CMD_CREATE_CHANNEL = 0x43524554,
#define SPCOM_CMD_ENABLE_SSR SPCOM_CMD_ENABLE_SSR
  SPCOM_CMD_ENABLE_SSR = 0x45535352,
#define SPCOM_CMD_RESTART_SP SPCOM_CMD_RESTART_SP
  SPCOM_CMD_RESTART_SP = 0x52535452,
};
enum spcom_poll_events {
  SPCOM_POLL_LINK_STATE = BIT(1),
  SPCOM_POLL_CH_CONNECT = BIT(2),
  SPCOM_POLL_READY_FLAG = BIT(14),
  SPCOM_POLL_WAIT_FLAG = BIT(15),
};
struct spcom_user_command {
  enum spcom_cmd_id cmd_id;
  __u32 arg;
} __packed;
struct spcom_send_command {
  enum spcom_cmd_id cmd_id;
  __u32 timeout_msec;
  __u32 buf_size;
  char buf[0];
} __packed;
struct spcom_user_create_channel_command {
  enum spcom_cmd_id cmd_id;
  char ch_name[SPCOM_CHANNEL_NAME_SIZE];
#define SPCOM_IS_SHARABLE_SUPPORTED
  _Bool is_sharable;
} __packed;
#define SPCOM_USER_RESTART_SP_CMD
struct spcom_user_restart_sp_command {
  enum spcom_cmd_id cmd_id;
  __u32 arg;
#define SPCOM_IS_UPDATED_SUPPORETED
  __u32 is_updated;
} __packed;
#define SPCOM_MAX_ION_BUF 4
struct spcom_ion_info {
  __s32 fd;
  __u32 buf_offset;
};
#define SPCOM_ION_FD_UNLOCK_ALL 0xFFFF
struct spcom_ion_handle {
  __s32 fd;
};
struct spcom_rmb_error_info {
  __u32 rmb_error;
  __u32 padding;
} __packed;
struct spcom_user_send_modified_command {
  enum spcom_cmd_id cmd_id;
  struct spcom_ion_info ion_info[SPCOM_MAX_ION_BUF];
  __u32 timeout_msec;
  __u32 buf_size;
  char buf[0];
} __packed;
enum {
  SPCOM_IONFD_CMD,
  SPCOM_POLL_CMD,
  SPCOM_GET_RMB_CMD,
};
enum spcom_poll_cmd_id {
  SPCOM_LINK_STATE_REQ,
  SPCOM_CH_CONN_STATE_REQ,
};
struct spcom_poll_param {
  _Bool wait;
  enum spcom_poll_cmd_id cmd_id;
  int retval;
} __packed;
#define SPCOM_IOCTL_MAGIC 'S'
#define SPCOM_GET_IONFD _IOR(SPCOM_IOCTL_MAGIC, SPCOM_IONFD_CMD, struct spcom_ion_handle)
#define SPCOM_SET_IONFD _IOW(SPCOM_IOCTL_MAGIC, SPCOM_IONFD_CMD, struct spcom_ion_handle)
#define SPCOM_POLL_STATE _IOWR(SPCOM_IOCTL_MAGIC, SPCOM_POLL_CMD, struct spcom_poll_param)
#define SPCOM_GET_RMB_ERROR _IOR(SPCOM_IOCTL_MAGIC, SPCOM_GET_RMB_CMD, struct spcom_rmb_error_info)
#define SPCOM_MAX_DMA_BUF SPCOM_MAX_ION_BUF
#define SPCOM_DMABUF_FD_UNLOCK_ALL 0xFFFF
enum spcom_event_id {
  SPCOM_EVENT_LINK_STATE = 100
};
enum spcom_ioctl_enum {
  SPCOM_IOCTL_STATE_POLL_CMD = 1000,
  SPCOM_IOCTL_SHARED_CH_CREATE_CMD,
  SPCOM_IOCTL_CH_REGISTER_CMD,
  SPCOM_IOCTL_CH_UNREGISTER_CMD,
  SPCOM_IOCTL_CH_IS_CONNECTED_CMD,
  SPCOM_IOCTL_SEND_MSG_CMD,
  SPCOM_IOCTL_SEND_MOD_MSG_CMD,
  SPCOM_IOCTL_GET_NEXT_REQ_SZ_CMD,
  SPCOM_IOCTL_GET_MSG_CMD,
  SPCOM_IOCTL_DMABUF_LOCK_CMD,
  SPCOM_IOCTL_DMABUF_UNLOCK_CMD,
  SPCOM_IOCTL_RESTART_SPU_CMD,
  SPCOM_IOCTL_ENABLE_SSR_CMD
};
struct spcom_dma_buf_info {
  __s32 fd;
  __u32 offset;
} __packed;
struct spcom_dma_buf_info_table {
  struct spcom_dma_buf_info info[SPCOM_MAX_DMA_BUF];
} __packed;
struct spcom_ioctl_poll_event {
  __u32 event_id;
  __u32 wait;
  __s32 retval;
  __u32 padding;
} __packed;
struct spcom_ioctl_ch {
  char ch_name[SPCOM_CHANNEL_NAME_SIZE];
} __packed;
struct spcom_ioctl_message {
  char ch_name[SPCOM_CHANNEL_NAME_SIZE];
  __u32 timeout_msec;
  __u32 buffer_size;
  char buffer[0];
} __packed;
struct spcom_ioctl_modified_message {
  char ch_name[SPCOM_CHANNEL_NAME_SIZE];
  __u32 timeout_msec;
  __u32 buffer_size;
  struct spcom_dma_buf_info info[SPCOM_MAX_DMA_BUF];
  char buffer[0];
} __packed;
struct spcom_ioctl_next_request_size {
  char ch_name[SPCOM_CHANNEL_NAME_SIZE];
  __u32 size;
  __u32 padding;
} __packed;
struct spcom_ioctl_dmabuf_lock {
  char ch_name[SPCOM_CHANNEL_NAME_SIZE];
  __s32 fd;
  __u32 padding;
} __packed;
#define SPCOM_IOCTL_STATE_POLL _IOWR(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_STATE_POLL_CMD, struct spcom_ioctl_poll_event)
#define SPCOM_IOCTL_SHARED_CH_CREATE _IOW(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_SHARED_CH_CREATE_CMD, struct spcom_ioctl_ch)
#define SPCOM_IOCTL_CH_REGISTER _IOW(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_CH_REGISTER_CMD, struct spcom_ioctl_ch)
#define SPCOM_IOCTL_CH_UNREGISTER _IOW(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_CH_UNREGISTER_CMD, struct spcom_ioctl_ch)
#define SPCOM_IOCTL_CH_IS_CONNECTED _IOW(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_CH_IS_CONNECTED_CMD, struct spcom_ioctl_ch)
#define SPCOM_IOCTL_SEND_MSG _IOW(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_SEND_MSG_CMD, struct spcom_ioctl_message)
#define SPCOM_IOCTL_SEND_MOD_MSG _IOW(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_SEND_MOD_MSG_CMD, struct spcom_ioctl_modified_message)
#define SPCOM_IOCTL_GET_NEXT_REQ_SZ _IOWR(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_GET_NEXT_REQ_SZ_CMD, struct spcom_ioctl_next_request_size)
#define SPCOM_IOCTL_GET_MSG _IOWR(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_GET_MSG_CMD, struct spcom_ioctl_message)
#define SPCOM_IOCTL_DMABUF_LOCK _IOW(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_DMABUF_LOCK_CMD, struct spcom_ioctl_dmabuf_lock)
#define SPCOM_IOCTL_DMABUF_UNLOCK _IOW(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_DMABUF_UNLOCK_CMD, struct spcom_ioctl_dmabuf_lock)
#define SPCOM_IOCTL_RESTART_SPU _IO(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_RESTART_SPU_CMD)
#define SPCOM_IOCTL_ENABLE_SSR _IO(SPCOM_IOCTL_MAGIC, SPCOM_IOCTL_ENABLE_SSR_CMD)
#endif
