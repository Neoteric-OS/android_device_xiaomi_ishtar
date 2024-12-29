# Audio
PRODUCT_VENDOR_PROPERTIES += \
    aaudio.hw_burst_min_usec=2000 \
    aaudio.mmap_exclusive_policy=2 \
    aaudio.mmap_policy=2 \
    af.fast_track_multiplier=1 \
    audio.deep_buffer.media=true \
    audio.offload.video=true \
    audio.sys.noisy.broadcast.delay=600 \
    audio.sys.offload.pstimeout.secs=3 \
    persist.audio.button_jack.profile=volume \
    persist.audio.button_jack.switch=0 \
    persist.audio.fluence.speaker=true \
    persist.audio.fluence.voicecall=true \
    persist.audio.fluence.voicecomm=true \
    persist.audio.fluence.voicerec=false \
    persist.vendor.audio.ambisonic.auto.profile=false \
    persist.vendor.audio.ambisonic.capture=false \
    persist.vendor.audio.apptype.multirec.enabled=false \
    persist.vendor.audio.auto.scenario=true \
    persist.vendor.audio.avs.afe_api_version=2 \
    persist.vendor.audio.fluence.speaker=true \
    persist.vendor.audio.fluence.tmic.enabled=false \
    persist.vendor.audio.fluence.voicecall=true \
    persist.vendor.audio.fluence.voicerec=false \
    persist.vendor.audio.ha_proxy.enabled=true \
    persist.vendor.audio.misound.disable=true \
    persist.vendor.audio.ras.enabled=false \
    persist.vendor.audio.spv3.enable=true \
    persist.vendor.audio.voicecall.speaker.stereo=true \
    ro.af.client_heap_size_kbyte=7168 \
    ro.audio.flinger_standbytime_ms=2000 \
    ro.audio.monitorRotation=true \
    ro.qc.sdk.audio.fluencetype=none \
    ro.qc.sdk.audio.ssr=false \
    ro.vendor.audio.aiasst.support=true \
    ro.vendor.audio.camera.loopback.support=true \
    ro.vendor.audio.dolby.dax.support=true \
    ro.vendor.audio.dolby.vision.support=true \
    ro.vendor.audio.feature.fade=true \
    ro.vendor.audio.feature.spatial=7 \
    ro.vendor.audio.gain.support=true \
    ro.vendor.audio.game.mode=true \
    ro.vendor.audio.misound.bluetooth.enable=true \
    ro.vendor.audio.multi.channel=true \
    ro.vendor.audio.multichannel.5point1.headset=false \
    ro.vendor.audio.multichannel.5point1=false \
    ro.vendor.audio.multiroute=true \
    ro.vendor.audio.ring.filter=true \
    ro.vendor.audio.sdk.fluencetype=none \
    ro.vendor.audio.sdk.ssr=false \
    ro.vendor.audio.sfx.earadj=true \
    ro.vendor.audio.sfx.scenario=true \
    ro.vendor.audio.sos=true \
    ro.vendor.audio.soundfx.type=mi \
    ro.vendor.audio.soundfx.usb=true \
    ro.vendor.audio.soundtrigger.appdefine.cnn.level=77 \
    ro.vendor.audio.soundtrigger.appdefine.gmm.level=65 \
    ro.vendor.audio.soundtrigger.appdefine.gmm.user.level=55 \
    ro.vendor.audio.soundtrigger.appdefine.vop.level=10 \
    ro.vendor.audio.soundtrigger.lowpower=true \
    ro.vendor.audio.soundtrigger.permian=1 \
    ro.vendor.audio.soundtrigger.snr=14 \
    ro.vendor.audio.soundtrigger.sva-7.0=1 \
    ro.vendor.audio.soundtrigger.training.level=50 \
    ro.vendor.audio.soundtrigger.xanzn.cnn.level=158 \
    ro.vendor.audio.soundtrigger.xanzn.gmm.level=80 \
    ro.vendor.audio.soundtrigger.xanzn.gmm.user.level=80 \
    ro.vendor.audio.soundtrigger.xanzn.vop.level=41 \
    ro.vendor.audio.soundtrigger.xatx.cnn.level=79 \
    ro.vendor.audio.soundtrigger.xatx.gmm.level=60 \
    ro.vendor.audio.soundtrigger.xatx.gmm.user.level=60 \
    ro.vendor.audio.soundtrigger.xatx.vop.level=37 \
    ro.vendor.audio.soundtrigger.xiaomievent=1 \
    ro.vendor.audio.soundtrigger=sva \
    ro.vendor.audio.spk.stereo=true \
    ro.vendor.audio.surround.headphone.only=true \
    ro.vendor.audio.videobox.switch=false \
    ro.vendor.audio.voice.change.support=true \
    ro.vendor.audio.voice.change.youme.support=true \
    vendor.audio.adm.buffering.ms=2 \
    vendor.audio.c2.preferred=true \
    vendor.audio.dolby.ds2.enabled=false \
    vendor.audio.dolby.ds2.hardbypass=false \
    ro.vendor.audio.dolby.dax.version=DAX3_3.8.5.20_r1 \
    vendor.audio.enable.mirrorlink=false \
    vendor.audio.feature.a2dp_offload.enable=true \
    vendor.audio.feature.afe_proxy.enable=true \
    vendor.audio.feature.anc_headset.enable=false \
    vendor.audio.feature.audiozoom.enable=false \
    vendor.audio.feature.battery_listener.enable=true \
    vendor.audio.feature.compr_cap.enable=false \
    vendor.audio.feature.compr_voip.enable=false \
    vendor.audio.feature.compress_in.enable=true \
    vendor.audio.feature.compress_meta_data.enable=true \
    vendor.audio.feature.concurrent_capture.enable=true \
    vendor.audio.feature.custom_stereo.enable=true \
    vendor.audio.feature.deepbuffer_as_primary.enable=false \
    vendor.audio.feature.display_port.enable=true \
    vendor.audio.feature.dmabuf.cma.memory.enable=true \
    vendor.audio.feature.dsm_feedback.enable=false \
    vendor.audio.feature.dynamic_ecns.enable=true \
    vendor.audio.feature.ext_hw_plugin.enable=false \
    vendor.audio.feature.external_dsp.enable=false \
    vendor.audio.feature.external_speaker.enable=false \
    vendor.audio.feature.external_speaker_tfa.enable=false \
    vendor.audio.feature.fluence.enable=true \
    vendor.audio.feature.fm.enable=true \
    vendor.audio.feature.hdmi_edid.enable=true \
    vendor.audio.feature.hdmi_passthrough.enable=true \
    vendor.audio.feature.hfp.enable=true \
    vendor.audio.feature.hifi_audio.enable=false \
    vendor.audio.feature.hwdep_cal.enable=false \
    vendor.audio.feature.incall_music.enable=true \
    vendor.audio.feature.keep_alive.enable=true \
    vendor.audio.feature.kpi_optimize.enable=true \
    vendor.audio.feature.maxx_audio.enable=false \
    vendor.audio.feature.multi_voice_session.enable=true \
    vendor.audio.feature.ras.enable=true \
    vendor.audio.feature.record_play_concurency.enable=false \
    vendor.audio.feature.snd_mon.enable=true \
    vendor.audio.feature.spkr_prot.enable=true \
    vendor.audio.feature.src_trkn.enable=true \
    vendor.audio.feature.ssrec.enable=true \
    vendor.audio.feature.usb_offload.enable=true \
    vendor.audio.feature.usb_offload_burst_mode.enable=true \
    vendor.audio.feature.usb_offload_sidetone_volume.enable=false \
    vendor.audio.feature.vbat.enable=true \
    vendor.audio.feature.wsa.enable=false \
    vendor.audio.flac.sw.decoder.24bit=true \
    vendor.audio.hal.boot.timeout.ms=20000 \
    vendor.audio.hal.output.suspend.supported=true \
    vendor.audio.hdr.record.enable=false \
    vendor.audio.hw.aac.encoder=false \
    vendor.audio.offload.buffer.size.kb=32 \
    vendor.audio.offload.gapless.enabled=true \
    vendor.audio.offload.multiaac.enable=true \
    vendor.audio.offload.multiple.enabled=false \
    vendor.audio.offload.passthrough=false \
    vendor.audio.offload.track.enable=true \
    vendor.audio.parser.ip.buffer.size=262144 \
    vendor.audio.safx.pbe.enabled=false \
    vendor.audio.spkcal.copy.inhal=true \
    vendor.audio.tunnel.encode=false \
    vendor.audio.ull_record_period_multiplier=2 \
    vendor.audio.use.sw.alac.decoder=true \
    vendor.audio.use.sw.ape.decoder=true \
    vendor.audio.use.sw.mpegh.decoder=true \
    vendor.audio.volume.headset.gain.depcal=true \
    vendor.audio_hal.in_period_size=144 \
    vendor.audio_hal.period_multiplier=3 \
    vendor.audio_hal.period_size=192 \
    vendor.qc2audio.per_frame.flac.dec.enabled=true \
    vendor.qc2audio.suspend.enabled=true \
    vendor.voice.path.for.pcm.voip=true

# Bluetooth
PRODUCT_VENDOR_PROPERTIES += \
    bluetooth.device.class_of_device=90,2,12 \
    bluetooth.device.default_name=Xiaomi 13 Ultra \
    bluetooth.hardware.power.idle_cur_ma=6 \
    bluetooth.hardware.power.operating_voltage_mv=3700 \
    bluetooth.hardware.power.rx_cur_ma=28 \
    bluetooth.hardware.power.tx_cur_ma=36 \
    bluetooth.profile.a2dp.source.enabled?=true \
    bluetooth.profile.asha.central.enabled?=true \
    bluetooth.profile.avrcp.target.enabled?=true \
    bluetooth.profile.bas.client.enabled?=true \
    bluetooth.profile.gatt.enabled?=true \
    bluetooth.profile.hfp.ag.enabled?=true \
    bluetooth.profile.hid.device.enabled?=true \
    bluetooth.profile.hid.host.enabled?=true \
    bluetooth.profile.map.server.enabled?=true \
    bluetooth.profile.opp.enabled?=true \
    bluetooth.profile.pan.nap.enabled?=true \
    bluetooth.profile.pan.panu.enabled?=true \
    bluetooth.profile.pbap.server.enabled?=true \
    bluetooth.profile.sap.server.enabled?=true \
    persist.vendor.bt.aac_frm_ctl.enabled=true \
    persist.vendor.bt.aac_vbr_frm_ctl.enabled=true \
    persist.vendor.qcom.bluetooth.a2dp_offload_cap=sbc-aptx-aptxtws-aptxhd-aac-ldac-aptxadaptiver2 \
    persist.vendor.qcom.bluetooth.aac_frm_ctl.enabled=true \
    persist.vendor.qcom.bluetooth.aptxadaptiver2_1_support=true \
    persist.bluetooth.a2dp_offload.disabled=false \
    ro.bluetooth.a2dp_offload.supported=true

# Camera
PRODUCT_VENDOR_PROPERTIES += \
    camera.disable_zsl_mode=1 \
    ro.camera.enableCamera1MaxZsl=1 \
    ro.hardware.camera=xiaomi

# Display
PRODUCT_VENDOR_PROPERTIES += \
    persist.sys.sf.native_mode=258 \
    vendor.display.disable_scaler=0 \
    vendor.display.disable_excl_rect=0 \
    vendor.display.disable_excl_rect_partial_fb=1 \
    vendor.display.comp_mask=0 \
    vendor.display.enable_optimize_refresh=0 \
    vendor.display.use_smooth_motion=0 \
    vendor.display.disable_stc_dimming=1 \
    vendor.display.enable_dpps_dynamic_fps=1 \
    vendor.display.vds_allow_hwc=1 \
    vendor.display.enable_async_vds_creation=1 \
    vendor.display.disable_sdr_dimming=1 \
    vendor.display.enable_rc_support=1 \
    vendor.display.disable_sdr_histogram=1 \
    vendor.display.enable_hdr10_gpu_target=1 \
    vendor.display.use_frame_scheduler_extension=1 \
    vendor.display.disable_offline_rotator=1 \
    vendor.display.enable_async_powermode=0 \
    vendor.display.disable_hw_recovery_dump=1 \
    vendor.display.enable_early_wakeup=1 \
    ro.vendor.beluga.p=0x3 \
    ro.vendor.beluga.c=0x4800 \
    ro.vendor.beluga.s=0x900 \
    ro.vendor.beluga.t=0x240 \
    persist.vendor.dc_backlight.enable=false \
    persist.vendor.dc_backlight.threshold=0 \
    ro.vendor.bcbc.enable=true \
    ro.vendor.cabc.enable=fasle \
    ro.vendor.colorpick_adjust=true \
    ro.vendor.dfps.enable=false \
    ro.vendor.display.ai_disp.enable=true \
    ro.vendor.display.default_fps=60 \
    ro.vendor.display.mi_calib.enable=true \
    ro.vendor.display.nature_mode.enable=true \
    ro.vendor.display.touch.idle.enable=true \
    ro.vendor.display.type=oled \
    ro.vendor.fps.switch.default=true \
    ro.vendor.fps.switch.thermal=true \
    ro.vendor.gcp.enable=1 \
    ro.vendor.hbm_backlight.enable=true \
    ro.vendor.histogram.enable=true \
    ro.vendor.localhbm.enable=true \
    ro.vendor.soft_backlight.enable=true \
    ro.vendor.standard.video.enable=true \
    ro.vendor.thermal.dimming.enable=true \
    ro.vendor.touchfeature.type=183 \
    ro.vendor.video_box.version=2 \
    ro.vendor.whitepoint_calibration_enable=false \
    ro.vendor.xiaomi.bl.poll=true \
    sys.displayfeature.entry.enable=true \
    sys.displayfeature_hidl=true \
    ro.vendor.displayfeature.dump=true

# DPM
PRODUCT_VENDOR_PROPERTIES += \
    persist.vendor.dpm.vndr.feature=1 \
    persist.vendor.dpm.vndr.halservice.enable=1 \
    persist.vendor.dpm.vndr.idletimer.mode=default

# DRM
PRODUCT_VENDOR_PROPERTIES += \
    drm.service.enabled=true

# Fingerprint
PRODUCT_VENDOR_PROPERTIES += \
    persist.vendor.fingerprint.type=udfps_optical \
    persist.vendor.fingerprint.sensor_location=720|2541|123 \
    persist.vendor.fingerprint.sensor_modules=goodix_fod \
    persist.vendor.sys.fp.expolevel=0x88 \
    persist.vendor.sys.fp.fod.location.X_Y=720,2541 \
    persist.vendor.sys.fp.fod.size.width_height=246,246 \
    ro.hardware.fp.fod.location=low \
    ro.hardware.fp.fod.lowlight.brightness.threshold=411 \
    ro.hardware.fp.fod.lowlight.lux.threshold=3 \
    ro.hardware.fp.fod.touch.ctl.version=2.0 \
    ro.hardware.fp.fod=true

# FRP
PRODUCT_VENDOR_PROPERTIES += \
    ro.frp.pst=/dev/block/bootdevice/by-name/frp

# Gatekeeper
PRODUCT_VENDOR_PROPERTIES += \
    vendor.gatekeeper.disable_spu=true

# Graphics
PRODUCT_VENDOR_PROPERTIES += \
    debug.egl.hw=0 \
    debug.sf.hw=0 \
    debug.sf.disable_client_composition_cache=1 \
    debug.sf.enable_gl_backpressure=1 \
    debug.sf.enable_hwc_vds=0 \
    debug.sf.enable_advanced_sf_phase_offset=1 \
    debug.sf.frame_rate_multiple_threshold=120 \
    debug.sf.use_phase_offsets_as_durations=1 \
    debug.sf.late.app.duration=13666666 \
    debug.sf.early.app.duration=13666666 \
    debug.sf.earlyGl.app.duration=13666666 \
    debug.sf.early.sf.duration=10500000 \
    debug.sf.earlyGl.sf.duration=10500000 \
    debug.sf.late.sf.duration=10500000 \
    persist.sys.sf.color_saturation=1.0 \
    ro.surface_flinger.has_wide_color_display=true \
    ro.surface_flinger.has_HDR_display=true \
    ro.surface_flinger.use_color_management=true \
    ro.surface_flinger.wcg_composition_dataspace=143261696 \
    ro.surface_flinger.protected_contents=true \
    ro.surface_flinger.use_content_detection_for_refresh_rate=true \
    ro.surface_flinger.set_display_power_timer_ms=1000 \
    ro.surface_flinger.set_touch_timer_ms=200 \
    ro.surface_flinger.set_idle_timer_ms=80 \
    ro.surface_flinger.force_hwc_copy_for_virtual_displays=true \
    ro.surface_flinger.max_frame_buffer_acquired_buffers=3 \
    ro.surface_flinger.max_virtual_display_dimension=4096 \
    ro.surface_flinger.supports_background_blur=1 \
    vendor.gralloc.disable_ubwc=0

# Incremental FS
PRODUCT_VENDOR_PROPERTIES += \
    ro.incremental.enable=yes

# Keystore
PRODUCT_VENDOR_PROPERTIES += \
    ro.hardware.keystore_desede=true

# Marketname
PRODUCT_VENDOR_PROPERTIES += \
    ro.product.marketname=Xiaomi 13 Ultra

# Media
PRODUCT_VENDOR_PROPERTIES += \
    debug.stagefright.c2inputsurface=-1 \
    debug.stagefright.ccodec=4 \
    debug.stagefright.omx_default_rank=0 \
    media.stagefright.thumbnail.prefer_hw_codecs=true \
    ro.mediaserver.64b.enable=true

# Perf
PRODUCT_VENDOR_PROPERTIES += \
    ro.vendor.perf.scroll_opt.heavy_app=2

# QMI
PRODUCT_VENDOR_PROPERTIES += \
    ro.vendor.qspm.enable=true

# RIL
PRODUCT_VENDOR_PROPERTIES += \
    persist.vendor.radio.dynamic_sar=1 \
    persist.vendor.radio.enable_temp_dds=true \
    persist.vendor.radio.enableadvancedscan=true \
    persist.vendor.radio.redir_party_num=0 \
    rild.libpath=/vendor/lib64/libril-qc-hal-qmi.so \
    persist.vendor.data.iwlan.enable=true \
    persist.vendor.radio.add_power_save=1 \
    persist.vendor.radio.dynamic_sar=1 \
    ro.vendor.radio.build_profile=u-stable

# USB
PRODUCT_VENDOR_PROPERTIES += \
    ro.usb.uvc.enabled=true \
    vendor.usb.product_string=Xiaomi 13 Ultra
