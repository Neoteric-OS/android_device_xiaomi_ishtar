# Charger
PRODUCT_SYSTEM_PROPERTIES += \
    ro.charger.enable_suspend=1

# FUSE
PRODUCT_SYSTEM_PROPERTIES += \
    persist.sys.fuse.passthrough.enable=true

# NFC
PRODUCT_SYSTEM_PROPERTIES += \
    ro.nfc.port=I2C

# QTI
PRODUCT_SYSTEM_PROPERTIES += \
    ro.vendor.qti.va_aosp.support=1

# Sensor
PRODUCT_SYSTEM_PROPERTIES += \
    persist.vendor.sensors.enable.mag_filter=true
