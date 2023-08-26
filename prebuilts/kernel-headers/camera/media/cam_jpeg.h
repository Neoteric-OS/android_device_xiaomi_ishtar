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
#ifndef __UAPI_CAM_JPEG_H__
#define __UAPI_CAM_JPEG_H__
#include <media/cam_defs.h>
#define CAM_JPEG_DEV_TYPE_ENC 0
#define CAM_JPEG_DEV_TYPE_DMA 1
#define CAM_JPEG_DEV_TYPE_MAX 2
#define CAM_JPEG_NUM_DEV_PER_RES_MAX 1
#define CAM_JPEG_RES_TYPE_ENC 0
#define CAM_JPEG_RES_TYPE_DMA 1
#define CAM_JPEG_RES_TYPE_MAX 2
#define CAM_JPEG_OPCODE_ENC_UPDATE 0
#define CAM_JPEG_OPCODE_DMA_UPDATE 1
#define CAM_JPEG_ENC_INPUT_IMAGE 0x0
#define CAM_JPEG_ENC_OUTPUT_IMAGE 0x1
#define CAM_JPEG_ENC_IO_IMAGES_MAX 0x2
#define CAM_JPEG_DMA_INPUT_IMAGE 0x0
#define CAM_JPEG_DMA_OUTPUT_IMAGE 0x1
#define CAM_JPEG_DMA_IO_IMAGES_MAX 0x2
#define CAM_JPEG_IMAGE_MAX 0x2
#define CAM_JPEG_ENC_PACKET_CONFIG_DATA 0x00
#define CAM_JPEG_DMA_PACKET_PLANE0_CONFIG_DATA 0x01
#define CAM_JPEG_DMA_PACKET_PLANE1_CONFIG_DATA 0x02
#define CAM_JPEG_PACKET_INOUT_PARAM 0x03
#define CAM_JPEG_PACKET_GENERIC_BLOB 0x04
#define CAM_JPEG_THUMBNAIL_SIZE_BLOB 0x01
struct cam_jpeg_thumbnail_size_blob {
  __u32 threshold_size;
  __u32 reserved[3];
};
struct cam_jpeg_dev_ver {
  __u32 size;
  __u32 dev_type;
  struct cam_hw_version hw_ver;
};
struct cam_jpeg_query_cap_cmd {
  struct cam_iommu_handle dev_iommu_handle;
  struct cam_iommu_handle cdm_iommu_handle;
  __u32 num_enc;
  __u32 num_dma;
  struct cam_jpeg_dev_ver dev_ver[CAM_JPEG_DEV_TYPE_MAX];
};
struct cam_jpeg_res_info {
  __u32 format;
  __u32 width;
  __u32 height;
  __u32 fps;
};
struct cam_jpeg_acquire_dev_info {
  __u32 dev_type;
  __u32 reserved;
  struct cam_jpeg_res_info in_res;
  struct cam_jpeg_res_info out_res;
};
struct cam_jpeg_config_inout_param_info {
  __s32 clk_index;
  __s32 output_size;
};
#endif
