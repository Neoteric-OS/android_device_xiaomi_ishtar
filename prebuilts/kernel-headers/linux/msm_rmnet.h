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
#ifndef _UAPI_MSM_RMNET_H_
#define _UAPI_MSM_RMNET_H_
#include <linux/types.h>
#define RMNET_MODE_NONE (0x00)
#define RMNET_MODE_LLP_ETH (0x01)
#define RMNET_MODE_LLP_IP (0x02)
#define RMNET_MODE_QOS (0x04)
#define RMNET_MODE_MASK (RMNET_MODE_LLP_ETH | RMNET_MODE_LLP_IP | RMNET_MODE_QOS)
#define RMNET_IS_MODE_QOS(mode) ((mode & RMNET_MODE_QOS) == RMNET_MODE_QOS)
#define RMNET_IS_MODE_IP(mode) ((mode & RMNET_MODE_LLP_IP) == RMNET_MODE_LLP_IP)
#define RMNET_IOCTL_SET_LLP_ETHERNET 0x000089F1
#define RMNET_IOCTL_SET_LLP_IP 0x000089F2
#define RMNET_IOCTL_GET_LLP 0x000089F3
#define RMNET_IOCTL_SET_QOS_ENABLE 0x000089F4
#define RMNET_IOCTL_SET_QOS_DISABLE 0x000089F5
#define RMNET_IOCTL_GET_QOS 0x000089F6
#define RMNET_IOCTL_GET_OPMODE 0x000089F7
#define RMNET_IOCTL_OPEN 0x000089F8
#define RMNET_IOCTL_CLOSE 0x000089F9
#define RMNET_IOCTL_FLOW_ENABLE 0x000089FA
#define RMNET_IOCTL_FLOW_DISABLE 0x000089FB
#define RMNET_IOCTL_FLOW_SET_HNDL 0x000089FC
#define RMNET_IOCTL_EXTENDED 0x000089FD
#define RMNET_IOCTL_EXTENDED_V2 0x000089FE
#define RMNET_IOCTL_GET_SUPPORTED_FEATURES 0x0000
#define RMNET_IOCTL_SET_MRU 0x0001
#define RMNET_IOCTL_GET_MRU 0x0002
#define RMNET_IOCTL_GET_EPID 0x0003
#define RMNET_IOCTL_GET_DRIVER_NAME 0x0004
#define RMNET_IOCTL_ADD_MUX_CHANNEL 0x0005
#define RMNET_IOCTL_SET_EGRESS_DATA_FORMAT 0x0006
#define RMNET_IOCTL_SET_INGRESS_DATA_FORMAT 0x0007
#define RMNET_IOCTL_SET_AGGREGATION_COUNT 0x0008
#define RMNET_IOCTL_GET_AGGREGATION_COUNT 0x0009
#define RMNET_IOCTL_SET_AGGREGATION_SIZE 0x000A
#define RMNET_IOCTL_GET_AGGREGATION_SIZE 0x000B
#define RMNET_IOCTL_FLOW_CONTROL 0x000C
#define RMNET_IOCTL_GET_DFLT_CONTROL_CHANNEL 0x000D
#define RMNET_IOCTL_GET_HWSW_MAP 0x000E
#define RMNET_IOCTL_SET_RX_HEADROOM 0x000F
#define RMNET_IOCTL_GET_EP_PAIR 0x0010
#define RMNET_IOCTL_SET_QOS_VERSION 0x0011
#define RMNET_IOCTL_GET_QOS_VERSION 0x0012
#define RMNET_IOCTL_GET_SUPPORTED_QOS_MODES 0x0013
#define RMNET_IOCTL_SET_SLEEP_STATE 0x0014
#define RMNET_IOCTL_SET_XLAT_DEV_INFO 0x0015
#define RMNET_IOCTL_DEREGISTER_DEV 0x0016
#define RMNET_IOCTL_GET_SG_SUPPORT 0x0017
#define RMNET_IOCTL_SET_OFFLOAD 0x0018
#define RMNET_IOCTL_GET_MTU 0x0019
#define RMNET_IOCTL_SET_MTU 0x0020
#define RMNET_IOCTL_GET_EPID_LL 0x0021
#define RMNET_IOCTL_GET_EP_PAIR_LL 0x0022
#define RMNET_IOCTL_SET_EGRESS_DATA_FORMAT_V2 0x0000
#define RMNET_IOCTL_SET_INGRESS_DATA_FORMAT_V2 0x0001
#define RMNET_IOCTL_FEAT_NOTIFY_MUX_CHANNEL (1 << 0)
#define RMNET_IOCTL_FEAT_SET_EGRESS_DATA_FORMAT (1 << 1)
#define RMNET_IOCTL_FEAT_SET_INGRESS_DATA_FORMAT (1 << 2)
#define RMNET_IOCTL_FEAT_SET_AGGREGATION_COUNT (1 << 3)
#define RMNET_IOCTL_FEAT_GET_AGGREGATION_COUNT (1 << 4)
#define RMNET_IOCTL_FEAT_SET_AGGREGATION_SIZE (1 << 5)
#define RMNET_IOCTL_FEAT_GET_AGGREGATION_SIZE (1 << 6)
#define RMNET_IOCTL_FEAT_FLOW_CONTROL (1 << 7)
#define RMNET_IOCTL_FEAT_GET_DFLT_CONTROL_CHANNEL (1 << 8)
#define RMNET_IOCTL_FEAT_GET_HWSW_MAP (1 << 9)
#define RMNET_IOCTL_EGRESS_FORMAT_MAP (1 << 1)
#define RMNET_IOCTL_EGRESS_FORMAT_AGGREGATION (1 << 2)
#define RMNET_IOCTL_EGRESS_FORMAT_MUXING (1 << 3)
#define RMNET_IOCTL_EGRESS_FORMAT_CHECKSUM (1 << 4)
#define RMNET_IOCTL_INGRESS_FORMAT_MAP (1 << 1)
#define RMNET_IOCTL_INGRESS_FORMAT_DEAGGREGATION (1 << 2)
#define RMNET_IOCTL_INGRESS_FORMAT_DEMUXING (1 << 3)
#define RMNET_IOCTL_INGRESS_FORMAT_CHECKSUM (1 << 4)
#define RMNET_IOCTL_INGRESS_FORMAT_AGG_DATA (1 << 5)
#define RMNET_IOCTL_OFFLOAD_FORMAT_NONE (0)
#define RMNET_IOCTL_COALESCING_FORMAT_TCP (1 << 0)
#define RMNET_IOCTL_COALESCING_FORMAT_UDP (1 << 1)
#ifndef IFNAMSIZ
#define IFNAMSIZ 16
#endif
enum rmnet_egress_ep_type {
  RMNET_EGRESS_DEFAULT = 0x0000,
  RMNET_EGRESS_LOW_LAT_CTRL = 0x0001,
  RMNET_EGRESS_LOW_LAT_DATA = 0x0002,
  RMNET_EGRESS_MAX = 0x0003,
};
enum rmnet_ingress_ep_type {
  RMNET_INGRESS_COALS = 0x0000,
  RMNET_INGRESS_DEFAULT = 0x0001,
  RMNET_INGRESS_LOW_LAT_CTRL = 0x0002,
  RMNET_INGRESS_LOW_LAT_DATA = 0x0003,
  RMNET_INGRESS_MAX = 0x0004,
};
enum rmnet_egress_ingress_pipe_setup_status {
  IPA_PIPE_SETUP_SUCCESS = 0x0000,
  IPA_PIPE_SETUP_FAILURE = 0x0001,
  IPA_PIPE_SETUP_EXISTS = 0x0002,
};
struct rmnet_egress_param {
  __u32 egress_ep_type;
  __u32 pipe_setup_status;
  __u32 cs_offload_en;
  __u32 aggr_en;
  __u32 ulso_en;
  __u32 ipid_min_max_idx;
  __u32 int_modt;
  __u32 int_modc;
};
struct rmnet_ingress_param {
  __u32 ingress_ep_type;
  __u32 pipe_setup_status;
  __u32 cs_offload_en;
  __u32 buff_size;
  __u32 agg_byte_limit;
  __u32 agg_time_limit;
  __u32 agg_pkt_limit;
  __u32 int_modt;
  __u32 int_modc;
  __u32 padding;
};
struct ingress_format_v2 {
  __u64 ingress_param_ptr;
  __u32 ingress_param_size;
  __u32 number_of_eps;
};
struct egress_format_v2 {
  __u64 egress_param_ptr;
  __u32 egress_param_size;
  __u32 number_of_eps;
};
struct rmnet_ioctl_extended_s_v2 {
  __u64 ioctl_ptr;
  __u32 ioctl_data_size;
  __u32 extended_v2_ioctl_type;
};
struct rmnet_ioctl_extended_s {
  __u32 extended_ioctl;
  union {
    __u32 data;
    __s8 if_name[IFNAMSIZ];
    struct {
      __u32 mux_id;
      __s8 vchannel_name[IFNAMSIZ];
    } rmnet_mux_val;
    struct {
      __u8 flow_mode;
      __u8 mux_id;
    } flow_control_prop;
    struct {
      __u32 consumer_pipe_num;
      __u32 producer_pipe_num;
    } ipa_ep_pair;
    struct {
      __u32 __data;
      __u32 agg_size;
      __u32 agg_count;
    } ingress_format;
    struct {
      __u32 flags;
      __u8 mux_id;
    } offload_params;
    struct {
      __s8 if_name[IFNAMSIZ];
      __u16 mtu_v4;
      __u16 mtu_v6;
    } mtu_params;
  } u;
};
struct rmnet_ioctl_data_s {
  union {
    __u32 operation_mode;
    __u32 tcm_handle;
  } u;
};
#define RMNET_IOCTL_QOS_MODE_6 (1 << 0)
#define RMNET_IOCTL_QOS_MODE_8 (1 << 1)
struct QMI_QOS_HDR_S {
  unsigned char version;
  unsigned char flags;
  __u32 flow_id;
} __attribute((__packed__));
struct qmi_qos_hdr8_s {
  struct QMI_QOS_HDR_S hdr;
  __u8 reserved[2];
} __attribute((__packed__));
#endif
