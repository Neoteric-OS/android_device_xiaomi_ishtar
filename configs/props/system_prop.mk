# Camera
PRODUCT_SYSTEM_PROPERTIES += \
    persist.vendor.camera.maxRAWSizes=19 \
    persist.vendor.camera.privapp.list=com.android.camera \
    ro.hardware.camera=xiaomi \
    ro.miui.notch=1 \
    ro.product.mod_device=ishtar_global \
    vendor.camera.aux.packagelist=com.android.camera,org.codeaurora.snapcam

# FUSE
PRODUCT_SYSTEM_PROPERTIES += \
    persist.sys.fuse.passthrough.enable=true

# Media
PRODUCT_SYSTEM_PROPERTIES += \
    media.aac_51_output_enabled=true \
    media.settings.xml=/vendor/etc/media_profiles_kalama.xml \
    media.stagefright.enable-aac=true \
    media.stagefright.enable-fma2dp=true \
    media.stagefright.enable-http=true \
    media.stagefright.enable-player=true \
    media.stagefright.enable-qcp=true \
    media.stagefright.enable-scan=true \
    persist.mm.enable.prefetch=true \
    ro.media.recorder-max-base-layer-fps=60

# NFC
PRODUCT_SYSTEM_PROPERTIES += \
    ro.nfc.port=I2C

# QTI
PRODUCT_SYSTEM_PROPERTIES += \
    ro.vendor.qti.va_aosp.support=1

# Sensor
PRODUCT_SYSTEM_PROPERTIES += \
    persist.vendor.sensors.enable.mag_filter=true

# Silence minksocket logs
PRODUCT_SYSTEM_PROPERTIES += \
    persist.log.tag.minksocket=S
