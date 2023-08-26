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
#ifndef __UAPI_CAM_SENSOR_H__
#define __UAPI_CAM_SENSOR_H__
#include <linux/types.h>
#include <linux/ioctl.h>
#include <media/cam_defs.h>
#define CAM_SENSOR_PROBE_CMD (CAM_COMMON_OPCODE_MAX + 1)
#define CAM_FLASH_MAX_LED_TRIGGERS 2
#define MAX_OIS_NAME_SIZE 32
#define CAM_CSIPHY_SECURE_MODE_ENABLED 1
#define CAM_SENSOR_NAME_MAX_SIZE 32
#define SKEW_CAL_MASK BIT(1)
#define PREAMBLE_PATTEN_CAL_MASK BIT(2)
#define CAM_CSIPHY_PACKET_META_LANE_INFO 0
#define CAM_CSIPHY_PACKET_META_GENERIC_BLOB 1
#define CAM_CSIPHY_GENERIC_BLOB_TYPE_CDR_CONFIG 0
#define CAM_CSIPHY_GENERIC_BLOB_TYPE_AUX_CONFIG 1
#define CAM_CSIPHY_CDR_ADD_TOLERANCE 1
#define CAM_CSIPHY_CDR_SUB_TOLERANCE 2
#define CAM_SENSOR_PACKET_I2C_COMMANDS 0
#define CAM_SENSOR_PACKET_GENERIC_BLOB 1
#define CAM_SENSOR_GENERIC_BLOB_RES_INFO 0
enum camera_sensor_cmd_type {
  CAMERA_SENSOR_CMD_TYPE_INVALID,
  CAMERA_SENSOR_CMD_TYPE_PROBE,
  CAMERA_SENSOR_CMD_TYPE_PWR_UP,
  CAMERA_SENSOR_CMD_TYPE_PWR_DOWN,
  CAMERA_SENSOR_CMD_TYPE_I2C_INFO,
  CAMERA_SENSOR_CMD_TYPE_I2C_RNDM_WR,
  CAMERA_SENSOR_CMD_TYPE_I2C_RNDM_RD,
  CAMERA_SENSOR_CMD_TYPE_I2C_CONT_WR,
  CAMERA_SENSOR_CMD_TYPE_I2C_CONT_RD,
  CAMERA_SENSOR_CMD_TYPE_WAIT,
  CAMERA_SENSOR_FLASH_CMD_TYPE_INIT_INFO,
  CAMERA_SENSOR_FLASH_CMD_TYPE_FIRE,
  CAMERA_SENSOR_FLASH_CMD_TYPE_RER,
  CAMERA_SENSOR_FLASH_CMD_TYPE_QUERYCURR,
  CAMERA_SENSOR_FLASH_CMD_TYPE_WIDGET,
  CAMERA_SENSOR_CMD_TYPE_RD_DATA,
  CAMERA_SENSOR_FLASH_CMD_TYPE_INIT_FIRE,
  CAMERA_SENSOR_CMD_TYPE_MAX,
};
enum cam_actuator_packet_opcodes {
  CAM_ACTUATOR_PACKET_OPCODE_INIT,
  CAM_ACTUATOR_PACKET_AUTO_MOVE_LENS,
  CAM_ACTUATOR_PACKET_MANUAL_MOVE_LENS,
  CAM_ACTUATOR_PACKET_OPCODE_READ
};
enum cam_eeprom_packet_opcodes {
  CAM_EEPROM_PACKET_OPCODE_INIT,
  CAM_EEPROM_WRITE
};
enum cam_ois_packet_opcodes {
  CAM_OIS_PACKET_OPCODE_INIT,
  CAM_OIS_PACKET_OPCODE_OIS_CONTROL,
  CAM_OIS_PACKET_OPCODE_READ,
  CAM_OIS_PACKET_OPCODE_WRITE_TIME
};
enum camera_sensor_i2c_op_code {
  CAMERA_SENSOR_I2C_OP_INVALID,
  CAMERA_SENSOR_I2C_OP_RNDM_WR,
  CAMERA_SENSOR_I2C_OP_RNDM_WR_VERF,
  CAMERA_SENSOR_I2C_OP_CONT_WR_BRST,
  CAMERA_SENSOR_I2C_OP_CONT_WR_BRST_VERF,
  CAMERA_SENSOR_I2C_OP_CONT_WR_SEQN,
  CAMERA_SENSOR_I2C_OP_CONT_WR_SEQN_VERF,
  CAMERA_SENSOR_I2C_OP_MAX,
};
enum camera_sensor_wait_op_code {
  CAMERA_SENSOR_WAIT_OP_INVALID,
  CAMERA_SENSOR_WAIT_OP_COND,
  CAMERA_SENSOR_WAIT_OP_HW_UCND,
  CAMERA_SENSOR_WAIT_OP_SW_UCND,
  CAMERA_SENSOR_WAIT_OP_MAX,
};
enum cam_tpg_packet_opcodes {
  CAM_TPG_PACKET_OPCODE_INVALID = 0,
  CAM_TPG_PACKET_OPCODE_INITIAL_CONFIG,
  CAM_TPG_PACKET_OPCODE_NOP,
  CAM_TPG_PACKET_OPCODE_MAX,
};
enum cam_sensor_packet_opcodes {
  CAM_SENSOR_PACKET_OPCODE_SENSOR_STREAMON,
  CAM_SENSOR_PACKET_OPCODE_SENSOR_UPDATE,
  CAM_SENSOR_PACKET_OPCODE_SENSOR_INITIAL_CONFIG,
  CAM_SENSOR_PACKET_OPCODE_SENSOR_PROBE,
  CAM_SENSOR_PACKET_OPCODE_SENSOR_CONFIG,
  CAM_SENSOR_PACKET_OPCODE_SENSOR_STREAMOFF,
  CAM_SENSOR_PACKET_OPCODE_SENSOR_READ,
  CAM_SENSOR_PACKET_OPCODE_SENSOR_FRAME_SKIP_UPDATE,
  CAM_SENSOR_PACKET_OPCODE_SENSOR_PROBE_V2,
  CAM_SENSOR_PACKET_OPCODE_SENSOR_REG_BANK_UNLOCK,
  CAM_SENSOR_PACKET_OPCODE_SENSOR_REG_BANK_LOCK,
  CAM_SENSOR_PACKET_OPCODE_SENSOR_NOP = 127,
};
enum tpg_command_type_t {
  TPG_CMD_TYPE_INVALID = 0,
  TPG_CMD_TYPE_GLOBAL_CONFIG,
  TPG_CMD_TYPE_STREAM_CONFIG,
  TPG_CMD_TYPE_ILLUMINATION_CONFIG,
  TPG_CMD_TYPE_MAX,
};
enum tpg_pattern_t {
  TPG_PATTERN_INVALID = 0,
  TPG_PATTERN_REAL_IMAGE,
  TPG_PATTERN_RANDOM_PIXL,
  TPG_PATTERN_RANDOM_INCREMENTING_PIXEL,
  TPG_PATTERN_COLOR_BAR,
  TPG_PATTERN_ALTERNATING_55_AA,
  TPG_PATTERN_ALTERNATING_USER_DEFINED,
  TPG_PATTERN_MAX,
};
enum tpg_color_bar_mode_t {
  TPG_COLOR_BAR_MODE_INVALID = 0,
  TPG_COLOR_BAR_MODE_NORMAL,
  TPG_COLOR_BAR_MODE_SPLIT,
  TPG_COLOR_BAR_MODE_ROTATING,
  TPG_COLOR_BAR_MODE_MAX,
};
enum tpg_image_format_t {
  TPG_IMAGE_FORMAT_INVALID = 0,
  TPG_IMAGE_FORMAT_BAYER,
  TPG_IMAGE_FORMAT_QCFA,
  TPG_IMAGE_FORMAT_YUV,
  TPG_IMAGE_FORMAT_JPEG,
  TPG_IMAGE_FORMAT_MAX,
};
enum tpg_phy_type_t {
  TPG_PHY_TYPE_INVALID = 0,
  TPG_PHY_TYPE_DPHY,
  TPG_PHY_TYPE_CPHY,
  TPG_PHY_TYPE_MAX,
};
enum tpg_interleaving_format_t {
  TPG_INTERLEAVING_FORMAT_INVALID = 0,
  TPG_INTERLEAVING_FORMAT_FRAME,
  TPG_INTERLEAVING_FORMAT_LINE,
  TPG_INTERLEAVING_FORMAT_SHDR,
  TPG_INTERLEAVING_FORMAT_SPARSE_PD,
  TPG_INTERLEAVING_FORMAT_MAX,
};
enum tpg_shutter_t {
  TPG_SHUTTER_TYPE_INVALID = 0,
  TPG_SHUTTER_TYPE_ROLLING,
  TPG_SHUTTER_TYPE_GLOBAL,
  TPG_SHUTTER_TYPE_MAX,
};
enum tpg_stream_t {
  TPG_STREAM_TYPE_INVALID = 0,
  TPG_STREAM_TYPE_IMAGE,
  TPG_STREAM_TYPE_PDAF,
  TPG_STREAM_TYPE_META,
  TPG_STREAM_TYPE_MAX,
};
enum tpg_cfa_arrangement_t {
  TPG_CFA_ARRANGEMENT_TYPE_INVALID = 0,
  TPG_CFA_ARRANGEMENT_TYPE_MAX,
};
struct cam_sensor_query_cap {
  __u32 slot_info;
  __u32 secure_camera;
  __u32 pos_pitch;
  __u32 pos_roll;
  __u32 pos_yaw;
  __u32 actuator_slot_id;
  __u32 eeprom_slot_id;
  __u32 ois_slot_id;
  __u32 flash_slot_id;
  __u32 csiphy_slot_id;
} __attribute__((packed));
struct cam_csiphy_query_cap {
  __u32 slot_info;
  __u32 version;
  __u32 clk_lane;
  __u32 reserved;
} __attribute__((packed));
struct cam_actuator_query_cap {
  __u32 slot_info;
  __u32 reserved;
} __attribute__((packed));
struct cam_eeprom_query_cap_t {
  __u32 slot_info;
  __u16 eeprom_kernel_probe;
  __u16 is_multimodule_mode;
} __attribute__((packed));
struct cam_ois_query_cap_t {
  __u32 slot_info;
  __u16 reserved;
} __attribute__((packed));
struct cam_tpg_query_cap {
  __u32 slot_info;
  __u32 version;
  __u32 secure_camera;
  __u32 csiphy_slot_id;
  __u32 reserved[2];
} __attribute__((packed));
struct cam_cmd_i2c_info {
  __u32 slave_addr;
  __u8 i2c_freq_mode;
  __u8 cmd_type;
  __u16 reserved;
} __attribute__((packed));
struct cam_sensor_res_info {
  __u16 res_index;
  __u32 fps;
  __u32 width;
  __u32 height;
  char caps[64];
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __u16 params[3];
} __attribute__((packed));
struct cam_ois_opcode {
  __u32 prog;
  __u32 coeff;
  __u32 pheripheral;
  __u32 memory;
} __attribute__((packed));
struct cam_cmd_ois_info {
  __u32 slave_addr;
  __u8 i2c_freq_mode;
  __u8 cmd_type;
  __u8 ois_fw_flag;
  __u8 is_ois_calib;
  char ois_name[MAX_OIS_NAME_SIZE];
  struct cam_ois_opcode opcode;
} __attribute__((packed));
struct cam_cmd_probe {
  __u8 data_type;
  __u8 addr_type;
  __u8 op_code;
  __u8 cmd_type;
  __u32 reg_addr;
  __u32 expected_data;
  __u32 data_mask;
  __u16 camera_id;
  __u16 reserved;
} __attribute__((packed));
struct cam_cmd_probe_v2 {
  __u8 data_type;
  __u8 addr_type;
  __u8 op_code;
  __u8 cmd_type;
  __u32 reg_addr;
  __u32 expected_data;
  __u32 data_mask;
  __u16 camera_id;
  __u16 pipeline_delay;
  __u32 logical_camera_id;
  char sensor_name[CAM_SENSOR_NAME_MAX_SIZE];
  __u32 reserved[4];
} __attribute__((packed));
struct cam_power_settings {
  __u16 power_seq_type;
  __u16 reserved;
  __u32 config_val_low;
  __u32 config_val_high;
} __attribute__((packed));
struct cam_cmd_power {
  __u32 count;
  __u8 reserved;
  __u8 cmd_type;
  __u16 more_reserved;
  struct cam_power_settings power_settings[1];
} __attribute__((packed));
struct i2c_rdwr_header {
  __u32 count;
  __u8 op_code;
  __u8 cmd_type;
  __u8 data_type;
  __u8 addr_type;
} __attribute__((packed));
struct i2c_random_wr_payload {
  __u32 reg_addr;
  __u32 reg_data;
} __attribute__((packed));
struct cam_cmd_i2c_random_wr {
  struct i2c_rdwr_header header;
  struct i2c_random_wr_payload random_wr_payload[1];
} __attribute__((packed));
struct cam_cmd_read {
  __u32 reg_data;
  __u32 reserved;
} __attribute__((packed));
struct cam_cmd_i2c_continuous_wr {
  struct i2c_rdwr_header header;
  __u32 reg_addr;
  struct cam_cmd_read data_read[1];
} __attribute__((packed));
struct cam_cmd_i2c_random_rd {
  struct i2c_rdwr_header header;
  struct cam_cmd_read data_read[1];
} __attribute__((packed));
struct cam_cmd_i2c_continuous_rd {
  struct i2c_rdwr_header header;
  __u32 reg_addr;
} __attribute__((packed));
struct cam_cmd_conditional_wait {
  __u8 data_type;
  __u8 addr_type;
  __u16 reserved;
  __u8 op_code;
  __u8 cmd_type;
  __u16 timeout;
  __u32 reg_addr;
  __u32 reg_data;
  __u32 data_mask;
} __attribute__((packed));
struct cam_cmd_unconditional_wait {
  __s16 delay;
  __s16 reserved;
  __u8 op_code;
  __u8 cmd_type;
  __u16 reserved1;
} __attribute__((packed));
struct cam_csiphy_cdr_sweep_params {
  __u32 cdr_tolerance;
  __u32 tolerance_op_type;
  __u32 configured_cdr;
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __u32 params[3];
};
struct cam_csiphy_aux_settings_params {
  __u64 data_rate_aux_mask;
  __u32 num_valid_params;
  __u32 valid_param_mask;
  __u32 params[2];
};
struct cam_csiphy_info {
  __u16 reserved;
  __u16 lane_assign;
  __u16 mipi_flags;
  __u8 lane_cnt;
  __u8 secure_mode;
  __u64 settle_time;
  __u64 data_rate;
} __attribute__((packed));
struct cam_csiphy_acquire_dev_info {
  __u32 combo_mode;
  __u16 cphy_dphy_combo_mode;
  __u8 csiphy_3phase;
  __u8 reserve;
} __attribute__((packed));
struct cam_sensor_acquire_dev {
  __u32 session_handle;
  __u32 device_handle;
  __u32 handle_type;
  __u32 reserved;
  __u64 info_handle;
} __attribute__((packed));
struct cam_tpg_acquire_dev {
  __u32 session_handle;
  __u32 device_handle;
  __u32 handle_type;
  __u32 reserved;
  __u64 info_handle;
} __attribute__((packed));
struct cam_sensor_streamon_dev {
  __u32 session_handle;
  __u32 device_handle;
  __u32 handle_type;
  __u32 reserved;
  __u64 info_handle;
} __attribute__((packed));
struct stream_dimension {
  uint32_t left;
  uint32_t top;
  uint32_t width;
  uint32_t height;
};
struct tpg_command_header_t {
  __u32 cmd_type;
  ssize_t size;
  uint32_t cmd_version;
} __attribute__((packed));
struct tpg_global_config_t {
  struct tpg_command_header_t header;
  enum tpg_phy_type_t phy_type;
  uint8_t lane_count;
  enum tpg_interleaving_format_t interleaving_format;
  uint8_t phy_mode;
  enum tpg_shutter_t shutter_type;
  uint32_t mode;
  uint32_t hbi;
  uint32_t vbi;
  uint32_t skip_pattern;
  uint64_t tpg_clock;
  uint32_t reserved[4];
} __attribute__((packed));
struct tpg_stream_config_t {
  struct tpg_command_header_t header;
  enum tpg_pattern_t pattern_type;
  enum tpg_color_bar_mode_t cb_mode;
  uint32_t frame_count;
  enum tpg_stream_t stream_type;
  struct stream_dimension stream_dimension;
  uint8_t pixel_depth;
  enum tpg_cfa_arrangement_t cfa_arrangement;
  enum tpg_image_format_t output_format;
  uint32_t hbi;
  uint32_t vbi;
  uint16_t vc;
  uint16_t dt;
  uint32_t skip_pattern;
  uint32_t rotate_period;
  uint32_t xcfa_debug;
  uint32_t shdr_line_offset0;
  uint32_t shdr_line_offset1;
  uint32_t reserved[4];
} __attribute__((packed));
struct tpg_illumination_control {
  struct tpg_command_header_t header;
  uint16_t vc;
  uint16_t dt;
  uint32_t exposure_short;
  uint32_t exposure_mid;
  uint32_t exposure_long;
  uint16_t r_gain;
  uint16_t g_gain;
  uint16_t b_gain;
  uint32_t reserved[4];
} __attribute__((packed));
struct cam_flash_init {
  __u32 flash_type;
  __u8 reserved;
  __u8 cmd_type;
  __u16 reserved1;
} __attribute__((packed));
struct cam_flash_set_rer {
  __u32 count;
  __u8 opcode;
  __u8 cmd_type;
  __u16 num_iteration;
  __u32 led_on_delay_ms;
  __u32 led_off_delay_ms;
  __u32 led_current_ma[CAM_FLASH_MAX_LED_TRIGGERS];
} __attribute__((packed));
struct cam_flash_set_on_off {
  __u32 count;
  __u8 opcode;
  __u8 cmd_type;
  __u16 reserved;
  __u32 led_current_ma[CAM_FLASH_MAX_LED_TRIGGERS];
  __u64 time_on_duration_ns;
  __u64 led_on_wait_time_ns;
} __attribute__((packed));
struct cam_flash_query_curr {
  __u16 reserved;
  __u8 opcode;
  __u8 cmd_type;
  __u32 query_current_ma;
} __attribute__((packed));
struct cam_flash_query_cap_info {
  __u32 slot_info;
  __u32 max_current_flash[CAM_FLASH_MAX_LED_TRIGGERS];
  __u32 max_duration_flash[CAM_FLASH_MAX_LED_TRIGGERS];
  __u32 max_current_torch[CAM_FLASH_MAX_LED_TRIGGERS];
} __attribute__((packed));
#endif
