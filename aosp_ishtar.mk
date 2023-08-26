#
# Copyright (C) 2023 PixelExperience
#
# SPDX-License-Identifier: Apache-2.0
#

DEVICE_PATH := device/xiaomi/ishtar

# Inherit device configurations
$(call inherit-product, $(DEVICE_PATH)/kalama.mk)

# Inherit common Pixel Experience configurations
$(call inherit-product, vendor/aosp/config/common_full_phone.mk)

# Device identifier
PRODUCT_DEVICE := ishtar
PRODUCT_NAME := aosp_ishtar
PRODUCT_BRAND := Xiaomi
PRODUCT_MODEL := 13 Ultra
PRODUCT_MANUFACTURER := Xiaomi

# GMS
PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
