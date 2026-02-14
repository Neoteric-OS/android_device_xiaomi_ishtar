#
# Copyright (C) 2024 The Android Open Source Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from the Neoteric configuration.
$(call inherit-product, vendor/neoteric/target/product/neoteric-target.mk)

# Inherit from aurora device.
$(call inherit-product, device/xiaomi/ishtar/kalama.mk)

# Device identifier
PRODUCT_DEVICE := ishtar
PRODUCT_NAME := ishtar
PRODUCT_BRAND := Xiaomi
PRODUCT_MODEL := Xiaomi 13 Ultra
PRODUCT_MANUFACTURER := Xiaomi

PRODUCT_BUILD_PROP_OVERRIDES += \
    BuildDesc="ishtar_global-user 15 AQ3A.240912.001 OS2.0.210.0.VMAMIXM release-keys" \
    BuildFingerprint=Xiaomi/ishtar_global/ishtar:15/AQ3A.240912.001/OS2.0.210.0.VMAMIXM:user/release-keys \
    DeviceName=ishtar \
    DeviceProduct=ishtar \
    SystemDevice=ishtar \
    SystemName=ishtar

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
