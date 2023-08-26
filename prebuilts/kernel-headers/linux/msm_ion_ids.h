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
#ifndef _MSM_ION_IDS_H
#define _MSM_ION_IDS_H
#define ION_BIT(nr) (1U << (nr))
#define ION_QSECOM_TA_HEAP_ID ION_BIT(1)
#define ION_CAMERA_HEAP_ID ION_BIT(2)
#define ION_DISPLAY_HEAP_ID ION_BIT(3)
#define ION_ADSP_HEAP_ID ION_BIT(4)
#define ION_AUDIO_ML_HEAP_ID ION_BIT(5)
#define ION_USER_CONTIG_HEAP_ID ION_BIT(6)
#define ION_QSECOM_HEAP_ID ION_BIT(7)
#define ION_AUDIO_HEAP_ID ION_BIT(8)
#define ION_CP_MM_HEAP_ID ION_BIT(9)
#define ION_SECURE_HEAP_ID ION_BIT(10)
#define ION_SECURE_DISPLAY_HEAP_ID ION_BIT(11)
#define ION_SPSS_HEAP_ID ION_BIT(14)
#define ION_SECURE_CARVEOUT_HEAP_ID ION_BIT(15)
#define ION_TUI_CARVEOUT_HEAP_ID ION_BIT(16)
#define ION_SYSTEM_HEAP_ID ION_BIT(25)
#define ION_HEAP_ID_RESERVED ION_BIT(31)
#endif
