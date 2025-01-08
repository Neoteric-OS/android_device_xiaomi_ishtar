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
    PRIVATE_BUILD_DESC="ishtar_global-user 14 UKQ1.230804.001 V816.0.16.0.UMACNXM release-keys"

BUILD_FINGERPRINT := Xiaomi/ishtar_global/ishtar:14/UKQ1.230804.001/V816.0.16.0.UMACNXM:user/release-keys

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
