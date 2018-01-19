ADB logcat
==========


Dongle attached
===============

	01-19 07:21:57.153  5316  7227 D UsbHostManager: Added device UsbDevice[mName=/dev/bus/usb/001/002,mVendorId=1165,mProductId=37638,mClass=0,mSubclass=0,mProtocol=0,mManufacturerName=null,mProductName=null,mVersion=2.0,mSerialNumber=null,mConfigurations=[
	01-19 07:21:57.153  5316  7227 D UsbHostManager: UsbConfiguration[mId=1,mName=null,mAttributes=128,mMaxPower=250,mInterfaces=[
	01-19 07:21:57.153  5316  7227 D UsbHostManager: UsbInterface[mId=0,mAlternateSetting=0,mName=null,mClass=255,mSubclass=0,mProtocol=0,mEndpoints=[
	01-19 07:21:57.153  5316  7227 D UsbHostManager: UsbEndpoint[mAddress=129,mAttributes=2,mMaxPacketSize=512,mInterval=0]
	01-19 07:21:57.153  5316  7227 D UsbHostManager: UsbEndpoint[mAddress=2,mAttributes=2,mMaxPacketSize=512,mInterval=0]
	01-19 07:21:57.153  5316  7227 D UsbHostManager: UsbEndpoint[mAddress=132,mAttributes=2,mMaxPacketSize=512,mInterval=0]
	01-19 07:21:57.153  5316  7227 D UsbHostManager: UsbEndpoint[mAddress=133,mAttributes=2,mMaxPacketSize=512,mInterval=0]]]]
	01-19 07:21:57.278  5316  7227 I ActivityManager: START u0 {act=android.hardware.usb.action.USB_DEVICE_ATTACHED flg=0x10000000 cmp=com.bestone.mytv.usb/hypertech.hyperplayer.WelcomeActivity (has extras)} from uid 1000 on display 0
	01-19 07:21:57.283  5316  7227 I WindowManager: setFocusedApp token: Token{1241ebf ActivityRecord{1f81cde u0 com.bestone.mytv.usb/hypertech.hyperplayer.WelcomeActivity t12568}} requestedOrientation: 6
	01-19 07:21:57.339  5316 26156 I ActivityManager: Start proc 9741:com.bestone.mytv.usb/u0a156 for activity com.bestone.mytv.usb/hypertech.hyperplayer.WelcomeActivity
	01-19 07:21:57.371  5316 26160 I ActivityManager: Config changes=480 {1.0 515mcc2mnc [en_US] ldltr sw449dp w799dp h425dp 384dpi nrml long land finger -keyb/v/h -nav/h s.97}
	01-19 07:21:57.477  5316 26160 W ActivityManager: Slow operation: 134ms so far, now at attachApplicationLocked: after mServices.attachApplicationLocked
	01-19 07:21:58.103  9741  9741 D WelcomeActivity: onCreate
	01-19 07:21:59.352  5316  7044 W WindowManager: Window freeze timeout expired.
	01-19 07:21:59.352  5316  7044 W WindowManager: Force clearing orientation change: Window{57126b7 u0 Starting com.bestone.mytv.usb}
	01-19 07:21:59.352  5316  7044 W WindowManager: Force clearing orientation change: Window{16dd690 u0 com.android.systemui.ImageWallpaper}
	01-19 07:21:59.383  5316  7044 W WindowManager: App freeze timeout expired.
	01-19 07:21:59.383  5316  7044 W WindowManager: Force clearing freeze: AppWindowToken{90998d5 token=Token{1241ebf ActivityRecord{1f81cde u0 com.bestone.mytv.usb/hypertech.hyperplayer.WelcomeActivity t12568}}}
	01-19 07:21:59.445  5316 26156 I WindowManager: Screen frozen for +2s94ms due to Window{57126b7 u0 Starting com.bestone.mytv.usb}
	01-19 07:21:59.464  5316  7044 I ActivityManager: Displayed com.bestone.mytv.usb/hypertech.hyperplayer.WelcomeActivity: +2s176ms
	01-19 07:21:59.915  5316  7044 I ActivityManager: Config changes=480 {1.0 515mcc2mnc [en_US] ldltr sw449dp w449dp h775dp 384dpi nrml long port finger -keyb/v/h -nav/h s.98}
	01-19 07:22:00.034  5316  7044 I WindowManager: Screen frozen for +149ms due to Window{e9426ac u0 com.bestone.mytv.usb/hypertech.hyperplayer.WelcomeActivity}
	01-19 07:22:04.299  5316 26157 I ActivityManager: START u0 {cmp=com.bestone.mytv.usb/hypertech.hyperplayer.MediaPlayerActivity} from uid 10156 on display 0
	01-19 07:22:04.308  5316 26157 I WindowManager: setFocusedApp token: Token{e378f40 ActivityRecord{e22eac3 u0 com.bestone.mytv.usb/hypertech.hyperplayer.MediaPlayerActivity t12568}} requestedOrientation: 6
	01-19 07:22:04.344  5316  8440 I ActivityManager: Config changes=480 {1.0 515mcc2mnc [en_US] ldltr sw449dp w799dp h425dp 384dpi nrml long land finger -keyb/v/h -nav/h s.99}
	01-19 07:22:04.537  9741  9741 D HYPERSIP_API: detected CPU capacity = 0x23
	01-19 07:22:04.547  9741 10104 D HYPERSIP_API: build time: 2017-09-25 19:36:46
	01-19 07:22:04.547  9741 10104 D HYPERSIP_API: build VideoOut ok
	01-19 07:22:04.548  9741 10104 D HYPERSIP_API: screen_width = 0
	01-19 07:22:04.548  9741 10104 D HYPERSIP_API: screen_height = 0
	01-19 07:22:04.618  9741  9741 I Player  : createEGLSurface()
	01-19 07:22:04.634  9741  9741 V Util    : support vendorId = 0x3344, productId = 0x1120
	01-19 07:22:04.634  9741  9741 V Util    : support vendorId = 0x3344, productId = 0x2480
	01-19 07:22:04.634  9741  9741 V Util    : support vendorId = 0x48d, productId = 0x9175
	01-19 07:22:04.634  9741  9741 V Util    : support vendorId = 0x48d, productId = 0x9135
	01-19 07:22:04.634  9741  9741 V Util    : support vendorId = 0x48d, productId = 0x9005
	01-19 07:22:04.634  9741  9741 V Util    : support vendorId = 0x48d, productId = 0x9006
	01-19 07:22:04.634  9741  9741 V Util    : support vendorId = 0x48d, productId = 0x9306
	01-19 07:22:04.634  9741  9741 V Util    : support vendorId = 0x1234, productId = 0x5678
	01-19 07:22:04.635  9741  9741 V Util    : device vendorId = 0x48d, productId = 0x9306
	01-19 07:22:04.636  9741  9741 V Util    : Device is found
	01-19 07:22:04.834  9741  9741 I Player  : Show Support Devices List.
	01-19 07:22:04.834  9741  9741 I KK.LMEDTVSDK.Debug: Android Version: 7.1.2
	01-19 07:22:04.838  9741  9741 I KK.LMEDTVSDK.Debug: /dev/bus/usb/001/002 48d 9306
	01-19 07:22:04.838  9741  9741 I KK.LMEDTVSDK.Debug: DTV Device prob -1
	01-19 07:22:04.838  9741  9741 I Player  : 111
	01-19 07:22:04.847  9741  9741 V Bus     : support vendorId = 0x3344, productId = 0x1120
	01-19 07:22:04.847  9741  9741 V Bus     : support vendorId = 0x3344, productId = 0x2480
	01-19 07:22:04.847  9741  9741 V Bus     : support vendorId = 0x48d, productId = 0x9175
	01-19 07:22:04.847  9741  9741 V Bus     : support vendorId = 0x48d, productId = 0x9135
	01-19 07:22:04.847  9741  9741 V Bus     : support vendorId = 0x48d, productId = 0x9005
	01-19 07:22:04.847  9741  9741 V Bus     : support vendorId = 0x48d, productId = 0x9006
	01-19 07:22:04.847  9741  9741 V Bus     : support vendorId = 0x48d, productId = 0x9306
	01-19 07:22:04.847  9741  9741 V Bus     : support vendorId = 0x1234, productId = 0x5678
	01-19 07:22:04.848  9741  9741 V Bus     : device vendorId = 0x48d, productId = 0x9306
	01-19 07:22:04.848  9741  9741 V Bus     : Device is found
	01-19 07:22:04.849  9741  9741 V Bus     : EP(0), addr = 0x81, attr = 2, dir = 128, num = 1, intval = 0, maxSize =512
	01-19 07:22:04.849  9741  9741 V Bus     : EP(1), addr = 0x2, attr = 2, dir = 0, num = 2, intval = 0, maxSize =512
	01-19 07:22:04.849  9741  9741 V Bus     : EP(2), addr = 0x84, attr = 2, dir = 128, num = 4, intval = 0, maxSize =512
	01-19 07:22:04.849  9741  9741 V Bus     : EP(3), addr = 0x85, attr = 2, dir = 128, num = 5, intval = 0, maxSize =512
	01-19 07:22:04.860  9741  9741 D EndeavourJni: jlong Java_com_init(JNIEnv*, jobject) 27
	01-19 07:22:05.559  9741  9741 D EndeavourJni: IT9300 initialize ok 
	01-19 07:22:06.345  5316  7044 W WindowManager: App freeze timeout expired.
	01-19 07:22:06.345  5316  7044 W WindowManager: Force clearing freeze: AppWindowToken{6cdae79 token=Token{e378f40 ActivityRecord{e22eac3 u0 com.bestone.mytv.usb/hypertech.hyperplayer.MediaPlayerActivity t12568}}}
	01-19 07:22:07.171  9741  9741 D EndeavourJni: MN88553H-EL Initial OK
	01-19 07:22:07.453  9741  9741 I Player  : surfaceCreated()
	01-19 07:22:07.453  9741  9741 I Player  : surfaceChanged(), format = 2, w = 1920, h = 1080
	01-19 07:22:07.464  9741 10104 I Player  : EGL2 enabled
	01-19 07:22:07.466  9741 10104 I Player  : r = 8, g = 8, b = 8
	01-19 07:22:07.475  9741 10125 I Player  : freq = 647143, channel = 42
	01-19 07:22:07.476  9741 10125 D EndeavourJni: jlong Java_com_MN88553H_EL_tuning(JNIEnv*, jobject, jint, jbooleanArray) 118 channel = 42
	01-19 07:22:07.521  5316  7044 I ActivityManager: Displayed com.bestone.mytv.usb/hypertech.hyperplayer.MediaPlayerActivity: +3s202ms
	01-19 07:22:07.524  5316  7044 I WindowManager: Screen frozen for +3s202ms due to Window{caf5b46 u0 com.bestone.mytv.usb/hypertech.hyperplayer.MediaPlayerActivity}
	01-19 07:22:07.927  9741 10125 D EndeavourJni: jlong Java_com_MN88553H_EL_tuning(JNIEnv*, jobject, jint, jbooleanArray) lock = 1
	01-19 07:22:07.928  9741 10125 I Player  : locked = true
	01-19 07:22:07.929  9741 10125 I Player  : reset_pid_filter
	01-19 07:22:08.723  9741 10104 I Player  : add_pid_filter, index = 0, pid = 0
	01-19 07:22:08.723  9741 10104 I Player  : add_pid_filter, index = 1, pid = 1110
	01-19 07:22:08.723  9741 10104 I Player  : add_pid_filter, index = 2, pid = 1111
	01-19 07:22:08.727  9741 10104 I Player  : add_pid_filter, index = 3, pid = 1112
	01-19 07:22:08.731  9741 10104 I Player  : add_pid_filter, index = 4, pid = 902
	01-19 07:22:08.732  9741 10104 I Player  : add_pid_filter, index = 5, pid = 903
	01-19 07:22:08.732  9741 10104 I Player  : add_pid_filter, index = 6, pid = 904
	01-19 07:22:08.984  9741 10104 I Player  : AudioPortAndroid.init, channels = 2, sample_rate = 48000, frame_size = 4096, dir = 2
	01-19 07:22:11.614  9741 10104 D HYPERSIP_API: error::after i = glGetAttribLocation(m_program, "vPosition"), glError(0x500)


App closed
==========

	01-19 07:23:04.975  5316  8473 I ActivityManager: Config changes=480 {1.0 515mcc2mnc [en_US] ldltr sw449dp w449dp h775dp 384dpi nrml long port finger -keyb/v/h -nav/h s.100}
	01-19 07:23:05.366  9741  9741 I Player  : surfaceDestroyed() isFloatWindow:false
	01-19 07:23:05.503  5316  7035 I WindowManager: Screen frozen for +551ms due to Window{6636809 u0 com.facebook.orca}
	01-19 07:23:05.739  9741  9741 I Player  : AudioPortAndroid.close
	01-19 07:23:06.066  9741 10637 V Util    : support vendorId = 0x3344, productId = 0x1120
	01-19 07:23:06.066  9741 10637 V Util    : support vendorId = 0x3344, productId = 0x2480
	01-19 07:23:06.066  9741 10637 V Util    : support vendorId = 0x48d, productId = 0x9175
	01-19 07:23:06.066  9741 10637 V Util    : support vendorId = 0x48d, productId = 0x9135
	01-19 07:23:06.066  9741 10637 V Util    : support vendorId = 0x48d, productId = 0x9005
	01-19 07:23:06.066  9741 10637 V Util    : support vendorId = 0x48d, productId = 0x9006
	01-19 07:23:06.067  9741 10637 V Util    : support vendorId = 0x48d, productId = 0x9306
	01-19 07:23:06.067  9741 10637 V Util    : support vendorId = 0x1234, productId = 0x5678
	01-19 07:23:06.096  9741 10637 V Util    : device vendorId = 0x48d, productId = 0x9306
	01-19 07:23:06.096  9741 10637 V Util    : Device is found
	01-19 07:23:06.488  5316  7036 I ActivityManager: Start proc 10653:com.android.printspooler/u0a64 for service com.android.printspooler/.model.PrintSpoolerService
	01-19 07:23:07.024  5316 26160 I ActivityManager: Process com.bestone.mytv.usb (pid 9741) has died
	01-19 07:23:07.024  5316 26160 D ActivityManager: cleanUpApplicationRecord -- 9741


App launched
============

	01-19 07:23:22.443  5316  7496 I ActivityManager: START u0 {act=android.intent.action.MAIN cat=[android.intent.category.LAUNCHER] flg=0x10200000 cmp=com.bestone.mytv.usb/hypertech.hyperplayer.WelcomeActivity (has extras)} from uid 10027 on display 0
	01-19 07:23:22.455  5316  7496 I WindowManager: setFocusedApp token: Token{230ee8a ActivityRecord{27870f5 u0 com.bestone.mytv.usb/hypertech.hyperplayer.WelcomeActivity t12569}} requestedOrientation: 6
	01-19 07:23:22.522  5316  8491 I ActivityManager: Start proc 10784:com.bestone.mytv.usb/u0a156 for activity com.bestone.mytv.usb/hypertech.hyperplayer.WelcomeActivity
	01-19 07:23:22.553  5316 26155 I ActivityManager: Config changes=480 {1.0 515mcc2mnc [en_US] ldltr sw449dp w799dp h425dp 384dpi nrml long land finger -keyb/v/h -nav/h s.101}
	01-19 07:23:22.627  5316 26155 W ActivityManager: Slow operation: 102ms so far, now at attachApplicationLocked: after mServices.attachApplicationLocked
	01-19 07:23:23.118 10784 10784 D WelcomeActivity: onCreate
	01-19 07:23:24.082  5316  7044 E WindowManager: Performed 6 layouts in a row. Skipping
	01-19 07:23:24.096  5316  7044 I ActivityManager: Displayed com.bestone.mytv.usb/hypertech.hyperplayer.WelcomeActivity: +1s625ms
	01-19 07:23:24.130  5316  7044 I WindowManager: Screen frozen for +1s599ms due to Window{858c4e2 u0 Starting com.bestone.mytv.usb}
	01-19 07:23:24.595  5316  7044 I ActivityManager: Config changes=480 {1.0 515mcc2mnc [en_US] ldltr sw449dp w449dp h775dp 384dpi nrml long port finger -keyb/v/h -nav/h s.102}
	01-19 07:23:24.900  5316  7044 I WindowManager: Screen frozen for +324ms due to Window{6e92c2f u0 com.facebook.orca}
	01-19 07:23:28.923  5316  8437 I ActivityManager: START u0 {cmp=com.bestone.mytv.usb/hypertech.hyperplayer.MediaPlayerActivity} from uid 10156 on display 0
	01-19 07:23:28.931  5316  8437 I WindowManager: setFocusedApp token: Token{b6aec3b ActivityRecord{52402ca u0 com.bestone.mytv.usb/hypertech.hyperplayer.MediaPlayerActivity t12569}} requestedOrientation: 6
	01-19 07:23:28.968  5316  8473 I ActivityManager: Config changes=480 {1.0 515mcc2mnc [en_US] ldltr sw449dp w799dp h425dp 384dpi nrml long land finger -keyb/v/h -nav/h s.103}
	01-19 07:23:29.133 10784 10784 D HYPERSIP_API: detected CPU capacity = 0x23
	01-19 07:23:29.145 10784 11105 D HYPERSIP_API: build time: 2017-09-25 19:36:46
	01-19 07:23:29.146 10784 11105 D HYPERSIP_API: build VideoOut ok
	01-19 07:23:29.146 10784 11105 D HYPERSIP_API: screen_width = 0
	01-19 07:23:29.147 10784 11105 D HYPERSIP_API: screen_height = 0
	01-19 07:23:29.201 10784 10784 I Player  : createEGLSurface()
	01-19 07:23:29.222 10784 10784 V Util    : support vendorId = 0x3344, productId = 0x1120
	01-19 07:23:29.222 10784 10784 V Util    : support vendorId = 0x3344, productId = 0x2480
	01-19 07:23:29.222 10784 10784 V Util    : support vendorId = 0x48d, productId = 0x9175
	01-19 07:23:29.222 10784 10784 V Util    : support vendorId = 0x48d, productId = 0x9135
	01-19 07:23:29.222 10784 10784 V Util    : support vendorId = 0x48d, productId = 0x9005
	01-19 07:23:29.222 10784 10784 V Util    : support vendorId = 0x48d, productId = 0x9006
	01-19 07:23:29.222 10784 10784 V Util    : support vendorId = 0x48d, productId = 0x9306
	01-19 07:23:29.222 10784 10784 V Util    : support vendorId = 0x1234, productId = 0x5678
	01-19 07:23:29.225 10784 10784 V Util    : device vendorId = 0x48d, productId = 0x9306
	01-19 07:23:29.226 10784 10784 V Util    : Device is found
	01-19 07:23:29.389 10784 10784 I Player  : Show Support Devices List.
	01-19 07:23:29.390 10784 10784 I KK.LMEDTVSDK.Debug: Android Version: 7.1.2
	01-19 07:23:29.393 10784 10784 I KK.LMEDTVSDK.Debug: /dev/bus/usb/001/002 48d 9306
	01-19 07:23:29.394 10784 10784 I KK.LMEDTVSDK.Debug: DTV Device prob -1
	01-19 07:23:29.394 10784 10784 I Player  : 111
	01-19 07:23:29.403 10784 10784 V Bus     : support vendorId = 0x3344, productId = 0x1120
	01-19 07:23:29.403 10784 10784 V Bus     : support vendorId = 0x3344, productId = 0x2480
	01-19 07:23:29.403 10784 10784 V Bus     : support vendorId = 0x48d, productId = 0x9175
	01-19 07:23:29.403 10784 10784 V Bus     : support vendorId = 0x48d, productId = 0x9135
	01-19 07:23:29.403 10784 10784 V Bus     : support vendorId = 0x48d, productId = 0x9005
	01-19 07:23:29.404 10784 10784 V Bus     : support vendorId = 0x48d, productId = 0x9006
	01-19 07:23:29.404 10784 10784 V Bus     : support vendorId = 0x48d, productId = 0x9306
	01-19 07:23:29.404 10784 10784 V Bus     : support vendorId = 0x1234, productId = 0x5678
	01-19 07:23:29.404 10784 10784 V Bus     : device vendorId = 0x48d, productId = 0x9306
	01-19 07:23:29.404 10784 10784 V Bus     : Device is found
	01-19 07:23:29.405 10784 10784 V Bus     : EP(0), addr = 0x81, attr = 2, dir = 128, num = 1, intval = 0, maxSize =512
	01-19 07:23:29.405 10784 10784 V Bus     : EP(1), addr = 0x2, attr = 2, dir = 0, num = 2, intval = 0, maxSize =512
	01-19 07:23:29.405 10784 10784 V Bus     : EP(2), addr = 0x84, attr = 2, dir = 128, num = 4, intval = 0, maxSize =512
	01-19 07:23:29.405 10784 10784 V Bus     : EP(3), addr = 0x85, attr = 2, dir = 128, num = 5, intval = 0, maxSize =512
	01-19 07:23:29.410 10784 10784 D EndeavourJni: jlong Java_com_init(JNIEnv*, jobject) 27
	01-19 07:23:30.036 10784 10784 D EndeavourJni: IT9300 initialize ok 
	01-19 07:23:30.967  5316  7044 W WindowManager: App freeze timeout expired.
	01-19 07:23:30.967  5316  7044 W WindowManager: Force clearing freeze: AppWindowToken{122bf58 token=Token{b6aec3b ActivityRecord{52402ca u0 com.bestone.mytv.usb/hypertech.hyperplayer.MediaPlayerActivity t12569}}}
	01-19 07:23:31.523 10784 10784 D EndeavourJni: MN88553H-EL Initial OK
	01-19 07:23:31.753 10784 10784 I Player  : surfaceCreated()
	01-19 07:23:31.754 10784 10784 I Player  : surfaceChanged(), format = 2, w = 1920, h = 1080
	01-19 07:23:31.764 10784 11105 I Player  : EGL2 enabled
	01-19 07:23:31.767 10784 11105 I Player  : r = 8, g = 8, b = 8
	01-19 07:23:31.781 10784 11166 I Player  : freq = 647143, channel = 42
	01-19 07:23:31.782 10784 11166 D EndeavourJni: jlong Java_com_MN88553H_EL_tuning(JNIEnv*, jobject, jint, jbooleanArray) 118 channel = 42
	01-19 07:23:31.832  5316  7044 I ActivityManager: Displayed com.bestone.mytv.usb/hypertech.hyperplayer.MediaPlayerActivity: +2s889ms
	01-19 07:23:31.840  5316  7044 I WindowManager: Screen frozen for +2s894ms due to Window{e1c726d u0 com.bestone.mytv.usb/hypertech.hyperplayer.MediaPlayerActivity}
	01-19 07:23:32.228 10784 11166 D EndeavourJni: jlong Java_com_MN88553H_EL_tuning(JNIEnv*, jobject, jint, jbooleanArray) lock = 1
	01-19 07:23:32.229 10784 11166 I Player  : locked = true
	01-19 07:23:32.230 10784 11166 I Player  : reset_pid_filter
	01-19 07:23:32.723 10784 11105 I Player  : add_pid_filter, index = 0, pid = 0
	01-19 07:23:32.723 10784 11105 I Player  : add_pid_filter, index = 1, pid = 1110
	01-19 07:23:32.723 10784 11105 I Player  : add_pid_filter, index = 2, pid = 1111
	01-19 07:23:32.725 10784 11105 I Player  : add_pid_filter, index = 3, pid = 1112
	01-19 07:23:32.727 10784 11105 I Player  : add_pid_filter, index = 4, pid = 902
	01-19 07:23:32.727 10784 11105 I Player  : add_pid_filter, index = 5, pid = 903
	01-19 07:23:32.727 10784 11105 I Player  : add_pid_filter, index = 6, pid = 904
	01-19 07:23:32.919 10784 11105 I Player  : AudioPortAndroid.init, channels = 2, sample_rate = 48000, frame_size = 4096, dir = 2
	01-19 07:23:35.257 10784 11105 D HYPERSIP_API: error::after i = glGetAttribLocation(m_program, "vPosition"), glError(0x500)
	01-19 07:23:43.690  5316 26154 W ActivityManager: Slow operation: 53ms so far, now at getContentProviderImpl: after start process
	01-19 07:23:43.690  5316 26154 W ActivityManager: Slow operation: 53ms so far, now at getContentProviderImpl: updating data structures
	01-19 07:23:43.690  5316 26154 W ActivityManager: Slow operation: 53ms so far, now at getContentProviderImpl: done!


Dongle detached
===============

	01-19 07:23:58.110  5316  7037 I ActivityManager: Start proc 11977:com.android.mtp/u0a11 for broadcast com.android.mtp/.UsbIntentReceiver
	01-19 07:23:59.060  5316  8443 W ActivityManager: Slow operation: 80ms so far, now at getContentProviderImpl: after updateOomAdj
	01-19 07:23:59.060  5316  8443 W ActivityManager: Slow operation: 80ms so far, now at getContentProviderImpl: done!
	01-19 07:23:59.349  5316  7496 I ActivityManager: Config changes=480 {1.0 515mcc2mnc [en_US] ldltr sw449dp w449dp h775dp 384dpi nrml long port finger -keyb/v/h -nav/h s.104}
	01-19 07:23:59.376  5316  7496 I WindowManager: Failed to capture screenshot of Token{b6aec3b ActivityRecord{52402ca u0 com.bestone.mytv.usb/hypertech.hyperplayer.MediaPlayerActivity t12569 f}} appWin=Window{79ac869 u0 SurfaceView - com.bestone.mytv.usb/hypertech.hyperplayer.MediaPlayerActivity} drawState=4
	01-19 07:23:59.674 10784 10784 I Player  : surfaceDestroyed() isFloatWindow:false
	01-19 07:23:59.787  5316  7044 I WindowManager: Screen frozen for +649ms due to Window{6636809 u0 com.facebook.orca}
	01-19 07:23:59.807 10784 10784 I Player  : AudioPortAndroid.close
	01-19 07:23:59.903 10784 12031 V Util    : support vendorId = 0x3344, productId = 0x1120
	01-19 07:23:59.903 10784 12031 V Util    : support vendorId = 0x3344, productId = 0x2480
	01-19 07:23:59.903 10784 12031 V Util    : support vendorId = 0x48d, productId = 0x9175
	01-19 07:23:59.903 10784 12031 V Util    : support vendorId = 0x48d, productId = 0x9135
	01-19 07:23:59.903 10784 12031 V Util    : support vendorId = 0x48d, productId = 0x9005
	01-19 07:23:59.903 10784 12031 V Util    : support vendorId = 0x48d, productId = 0x9006
	01-19 07:23:59.903 10784 12031 V Util    : support vendorId = 0x48d, productId = 0x9306
	01-19 07:23:59.903 10784 12031 V Util    : support vendorId = 0x1234, productId = 0x5678
	01-19 07:23:59.906 10784 12031 V Util    : This Android device does not meet the system requirements
	01-19 07:24:00.542  5316  7265 I WindowManager: WIN DEATH: Window{f0eefb8 u0 Toast}
	01-19 07:24:00.547  5316  7035 I ActivityManager: Process com.bestone.mytv.usb (pid 10784) has died
	01-19 07:24:00.547  5316  7035 D ActivityManager: cleanUpApplicationRecord -- 10784
	01-19 07:24:00.694  5316  8437 I ActivityManager: Process com.android.mtp (pid 11977) has died
	01-19 07:24:00.695  5316  8437 D ActivityManager: cleanUpApplicationRecord -- 11977
