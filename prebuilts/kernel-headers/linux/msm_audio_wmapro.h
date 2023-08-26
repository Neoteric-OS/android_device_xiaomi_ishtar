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
#ifndef _UAPI_MSM_AUDIO_WMAPRO_H
#define _UAPI_MSM_AUDIO_WMAPRO_H
#include <linux/types.h>
#define AUDIO_GET_WMAPRO_CONFIG _IOR(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 0), struct msm_audio_wmapro_config)
#define AUDIO_SET_WMAPRO_CONFIG _IOW(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 1), struct msm_audio_wmapro_config)
struct msm_audio_wmapro_config {
  unsigned short armdatareqthr;
  __u8 validbitspersample;
  __u8 numchannels;
  unsigned short formattag;
  __u32 samplingrate;
  __u32 avgbytespersecond;
  unsigned short asfpacketlength;
  __u32 channelmask;
  unsigned short encodeopt;
  unsigned short advancedencodeopt;
  __u32 advancedencodeopt2;
};
#endif
