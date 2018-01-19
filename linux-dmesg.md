uname -a
========

	Linux ubuntu 4.15.0-rc8-custom #1 SMP Fri Jan 19 09:47:11 +08 2018 x86_64 x86_64 x86_64 GNU/Linux

lsusb
=====

	Bus 001 Device 002: ID 048d:9306 Integrated Technology Express, Inc. IT930x DVB stick
	Bus 001 Device 001: ID 1d6b:0002 Linux Foundation 2.0 root hub
	Bus 002 Device 002: ID 80ee:0021 VirtualBox USB Tablet
	Bus 002 Device 001: ID 1d6b:0001 Linux Foundation 1.1 root hub

/var/log/kern.log
=================

	Jan 20 00:40:44 ubuntu kernel: [ 1276.425818] usb 1-1: new high-speed USB device number 2 using ehci-pci
	Jan 20 00:40:44 ubuntu kernel: [ 1276.803162] usb 1-1: New USB device found, idVendor=048d, idProduct=9306
	Jan 20 00:40:44 ubuntu kernel: [ 1276.803169] usb 1-1: New USB device strings: Mfr=0, Product=0, SerialNumber=0
	Jan 20 00:40:44 ubuntu kernel: [ 1276.921273] dvb_usb_af9035: unknown parameter 'myphone' ignored
	Jan 20 00:40:44 ubuntu kernel: [ 1276.922710] [1517] usb 1-1: dvb_usbv2_probe: bInterfaceNumber=0
	Jan 20 00:40:44 ubuntu kernel: [ 1276.922720] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 0b 00 00 00 03 02 00 00 12 22 db ea
	Jan 20 00:40:44 ubuntu kernel: [ 1276.925979] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 07 00 00 01 06 93 6b f9
	Jan 20 00:40:44 ubuntu kernel: [ 1276.925989] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 0b 00 00 01 01 02 00 00 38 4f ad c6
	Jan 20 00:40:44 ubuntu kernel: [ 1276.929910] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 05 01 00 83 7b ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.930077] dvb_usb_af9035 1-1:1.0: prechip_version=83 chip_version=01 chip_type=9306
	Jan 20 00:40:44 ubuntu kernel: [ 1276.930082] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 06 00 22 02 01 fd dc
	Jan 20 00:40:44 ubuntu kernel: [ 1276.934237] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 08 02 00 00 00 00 00 fd ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.934244] [1517] dvb_usb_af9035 1-1:1.0: reply=00 00 00 00
	Jan 20 00:40:44 ubuntu kernel: [ 1276.934247] usb 1-1: dvb_usb_v2: found a 'ITE 9303 Generic' in cold state
	Jan 20 00:40:44 ubuntu kernel: [ 1276.934250] [1517] usb 1-1: dvb_usbv2_download_firmware:
	Jan 20 00:40:44 ubuntu kernel: [ 1276.942337] usb 1-1: dvb_usb_v2: downloading firmware from file 'dvb-usb-it9303-01.fw'
	Jan 20 00:40:44 ubuntu kernel: [ 1276.942345] [1517] dvb_usb_af9035 1-1:1.0: 
	Jan 20 00:40:44 ubuntu kernel: [ 1276.942351] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 03 03 00 00 03 41 00 03 41 80 06 41 93 1a 02 12 bf 02 41 93 22 00 00 a2 af e4 33 90 7c 00 f0 a2 dd e4 33 a3 f0 7e 4b 7f fc 7c 44 7d ca 7b 04 12 a1 ab 4b
	Jan 20 00:40:44 ubuntu kernel: [ 1276.944996] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 03 00 fc ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.945005] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=48
	Jan 20 00:40:44 ubuntu kernel: [ 1276.945011] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 04 03 00 00 01 41 ad 29 5f e4 ff 74 3b 2f f5 82 e4 34 f5 f5 83 74 ff f0 0f ef b4 40 ee c2 dd c2 af 74 89 90 f5 3b f0 74 41 a3 f0 74 4c 90 f5 5b f0 4c 6b
	Jan 20 00:40:44 ubuntu kernel: [ 1276.950051] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 04 00 fb ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.950065] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=96
	Jan 20 00:40:44 ubuntu kernel: [ 1276.950074] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 05 03 00 00 01 41 d6 29 74 00 a3 f0 74 2f 90 f5 3d f0 74 f5 a3 f0 74 44 90 f5 5d f0 74 76 a3 f0 74 89 90 f5 3f f0 74 2c a3 f0 74 44 90 f5 5f f0 74 fd 3e
	Jan 20 00:40:44 ubuntu kernel: [ 1276.953827] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 05 00 fa ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.953833] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=144
	Jan 20 00:40:44 ubuntu kernel: [ 1276.953838] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 06 03 00 00 01 41 ff 29 68 a3 f0 74 89 90 f5 41 f0 74 31 a3 f0 74 44 90 f5 61 f0 74 6f a3 f0 74 87 90 f5 43 f0 74 59 a3 f0 74 43 90 f5 63 f0 74 04 9f b5
	Jan 20 00:40:44 ubuntu kernel: [ 1276.957797] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 06 00 f9 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.957813] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=192
	Jan 20 00:40:44 ubuntu kernel: [ 1276.957983] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 07 03 00 00 01 42 28 29 a3 f0 74 87 90 f5 45 f0 74 e1 a3 f0 74 43 90 f5 65 f0 74 e3 a3 f0 74 88 90 f5 47 f0 74 3a a3 f0 74 42 90 f5 67 f0 74 a2 a3 58 e0
	Jan 20 00:40:44 ubuntu kernel: [ 1276.961960] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 07 00 f8 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.961989] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=240
	Jan 20 00:40:44 ubuntu kernel: [ 1276.961996] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 08 03 00 00 01 42 51 29 f0 90 f5 3a e0 54 fe 44 01 f0 c2 ae c2 8e 43 8e 10 d2 df 75 c0 50 53 89 0f 43 89 20 75 8b be 75 8d be d2 8e c2 c1 c2 ae d2 8e 0e
	Jan 20 00:40:44 ubuntu kernel: [ 1276.966653] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 08 00 f7 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.966670] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=288
	Jan 20 00:40:44 ubuntu kernel: [ 1276.966681] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 09 03 00 00 01 42 7a 29 be 12 88 3c e4 90 79 04 f0 90 d9 24 e0 54 fe 44 01 f0 e4 90 49 62 f0 90 7c 01 e0 24 ff 92 dd 90 7c 00 e0 24 ff 92 af 22 90 3a a9
	Jan 20 00:40:44 ubuntu kernel: [ 1276.970012] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 09 00 f6 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.970021] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=336
	Jan 20 00:40:44 ubuntu kernel: [ 1276.970026] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 0a 03 00 00 01 42 a3 29 f7 04 e0 70 24 c2 ae c2 8e 43 8e 10 d2 df 75 c0 50 53 89 0f 43 89 20 75 8b be 75 8d be d2 8e c2 c1 c2 ae 90 49 62 f0 80 24 e7 0b
	Jan 20 00:40:44 ubuntu kernel: [ 1276.973789] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 0a 00 f5 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.973796] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=384
	Jan 20 00:40:44 ubuntu kernel: [ 1276.973801] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 0b 03 00 00 01 42 cc 29 c2 ae c2 8e 43 8e 10 d2 df 75 c0 d0 53 89 0f 43 89 20 75 8b be 75 8d be d2 8e c2 c1 d2 ae 90 49 62 74 01 f0 d2 be 12 88 3c 81 ed
	Jan 20 00:40:44 ubuntu kernel: [ 1276.977774] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 0b 00 f4 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.977781] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=432
	Jan 20 00:40:44 ubuntu kernel: [ 1276.977787] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 0c 03 00 00 01 42 f5 29 e4 90 79 04 f0 90 d9 24 e0 54 fe 44 01 f0 22 90 49 62 e0 ff 70 31 c2 c1 90 7c 02 f0 90 f7 04 e0 fe 90 7c 02 e0 fd c3 9e 40 ed 45
	Jan 20 00:40:44 ubuntu kernel: [ 1276.981662] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 0c 00 f3 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.981669] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=480
	Jan 20 00:40:44 ubuntu kernel: [ 1276.981674] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 0d 03 00 00 01 43 1e 29 03 02 43 e2 74 05 2d f5 82 e4 34 f7 f5 83 e0 f5 c1 30 c1 fd c2 c1 90 7c 02 e0 04 f0 80 d5 ef 64 01 60 03 02 43 e2 90 7c 02 33 03
	Jan 20 00:40:44 ubuntu kernel: [ 1276.985735] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 0d 00 f2 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.985742] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=528
	Jan 20 00:40:44 ubuntu kernel: [ 1276.985747] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 0e 03 00 00 01 43 47 29 f0 90 f7 04 e0 ff 90 7c 02 e0 c3 9f 50 25 e0 fe 24 05 f5 82 e4 34 f7 f5 83 e0 fd 90 7a 04 e0 2e 24 05 f5 82 e4 34 79 f5 83 8c b4
	Jan 20 00:40:44 ubuntu kernel: [ 1276.989628] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 0e 00 f1 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.989636] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=576
	Jan 20 00:40:44 ubuntu kernel: [ 1276.989641] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 0f 03 00 00 01 43 70 29 ed f0 90 7c 02 e0 04 f0 80 ce 90 7a 04 e0 2f f0 90 49 65 e0 64 01 70 5a 90 79 04 04 f0 c2 ae c2 c1 e4 90 7c 02 f0 90 7a 04 ca c4
	Jan 20 00:40:44 ubuntu kernel: [ 1276.992194] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 0f 00 f0 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.992200] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=624
	Jan 20 00:40:44 ubuntu kernel: [ 1276.992206] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 10 03 00 00 01 43 99 29 e0 ff 90 7c 02 e0 fe c3 9f 50 2e 74 05 2e f5 82 e4 34 79 f5 83 e0 ff fe c3 13 6e fe 13 13 54 3f 6e fe c4 54 0f 6e fe 13 92 cb 98
	Jan 20 00:40:44 ubuntu kernel: [ 1276.997153] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 10 00 ef ff
	Jan 20 00:40:44 ubuntu kernel: [ 1276.997166] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=672
	Jan 20 00:40:44 ubuntu kernel: [ 1276.997172] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 11 03 00 00 01 43 c2 29 c3 8f c1 30 c1 fd c2 c1 90 7c 02 e0 04 f0 80 c4 c2 c0 12 88 3c d2 ae e4 90 49 65 f0 90 79 04 f0 22 90 49 62 e0 70 3f c2 8e a2 16
	Jan 20 00:40:44 ubuntu kernel: [ 1277.001347] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 11 00 ee ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.001361] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=720
	Jan 20 00:40:44 ubuntu kernel: [ 1277.001389] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 12 03 00 00 01 43 eb 29 90 f7 04 e0 ff 14 60 13 14 60 18 24 f7 50 1c 24 0b 70 20 75 8b be 75 8d be 80 1c 75 8b df 75 8d df 80 14 75 8b ef 75 8d ef de 6f
	Jan 20 00:40:44 ubuntu kernel: [ 1277.005421] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 12 00 ed ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.005429] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=768
	Jan 20 00:40:44 ubuntu kernel: [ 1277.005434] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 13 03 00 00 01 44 14 29 80 0c 75 8b be 75 8d be 80 04 8f 8b 8f 8d 12 88 3c d2 8e 22 90 49 62 e0 64 01 70 37 c2 ae c2 8e 90 f7 04 e0 ff 14 60 10 24 b3 6c
	Jan 20 00:40:44 ubuntu kernel: [ 1277.009647] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 13 00 ec ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.009661] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=816
	Jan 20 00:40:44 ubuntu kernel: [ 1277.009670] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 14 03 00 00 01 44 3d 29 f6 50 14 24 0b 70 18 75 8b be 75 8d be 80 14 75 8b df 75 8d df 80 0c 75 8b be 75 8d be 80 04 8f 8b 8f 8d 12 88 3c d2 8e d2 b3 a7
	Jan 20 00:40:44 ubuntu kernel: [ 1277.014374] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 14 00 eb ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.014385] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=864
	Jan 20 00:40:44 ubuntu kernel: [ 1277.014392] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 15 03 00 00 01 44 66 29 ae 22 75 e8 e0 75 a8 c0 22 75 e8 e3 75 a8 e5 22 90 f7 0a e0 ff 80 00 22 ef 64 0a 70 45 90 f7 08 e0 f4 70 3e a3 e0 64 01 70 d5 0d
	Jan 20 00:40:44 ubuntu kernel: [ 1277.018702] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 15 00 ea ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.018730] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=912
	Jan 20 00:40:44 ubuntu kernel: [ 1277.018737] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 16 03 00 00 01 44 8f 29 38 90 f4 05 74 20 f0 90 f6 b5 e0 54 fb 44 04 f0 e0 54 fb f0 90 f7 00 74 04 f0 90 f7 03 e0 90 f7 01 f0 a3 e4 f0 a3 e0 f4 f0 f1 0c
	Jan 20 00:40:44 ubuntu kernel: [ 1277.023168] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 16 00 e9 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.023175] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=960
	Jan 20 00:40:44 ubuntu kernel: [ 1277.023180] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 17 03 00 00 01 44 b8 29 a3 74 ff f0 e4 ff 12 2f ab 7a 44 79 ce 12 39 70 22 22 01 04 00 00 d0 e0 d0 e0 d0 e0 d0 e0 22 d0 04 d0 05 c0 07 c0 06 c0 05 f5 d9
	Jan 20 00:40:44 ubuntu kernel: [ 1277.027254] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 17 00 e8 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.027263] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1008
	Jan 20 00:40:44 ubuntu kernel: [ 1277.027268] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 18 03 00 00 02 44 e1 0c 4c 00 1a c0 04 22 d0 e0 d0 e0 c0 07 c0 06 22 90 f7 01 e0 54 70 ff c4 54 0f fd e0 54 0f 90 7c 07 f0 90 f7 02 e0 90 47 85 f0 cd 0d
	Jan 20 00:40:44 ubuntu kernel: [ 1277.031208] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 18 00 e7 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.031215] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1056
	Jan 20 00:40:44 ubuntu kernel: [ 1277.031221] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 19 03 00 00 01 4c 1a 29 90 f7 03 e0 90 47 86 f0 e4 90 7c 04 f0 af 05 ef b4 08 00 40 03 02 4e 80 90 4c 39 f8 28 28 73 02 4c 51 02 4d 8b 02 4d df 02 33 67
	Jan 20 00:40:44 ubuntu kernel: [ 1277.035581] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 19 00 e6 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.035587] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1104
	Jan 20 00:40:44 ubuntu kernel: [ 1277.035592] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 1a 03 00 00 01 4c 43 29 4e 33 02 4c 51 02 4d 8b 02 4d df 02 4e 33 90 47 85 e0 64 29 70 03 02 4d 28 90 7c 07 e0 24 fe 60 22 24 fe 60 30 24 fc 60 3e 88 0d
	Jan 20 00:40:44 ubuntu kernel: [ 1277.039505] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 1a 00 e5 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.039513] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1152
	Jan 20 00:40:44 ubuntu kernel: [ 1277.039518] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 1b 03 00 00 01 4c 6c 29 24 f9 60 4c 24 0e 70 5a 90 49 75 e0 90 7c 05 f0 90 49 71 e0 90 7c 06 f0 80 58 90 49 74 e0 90 7c 05 f0 90 49 70 e0 90 7c 06 73 f5
	Jan 20 00:40:44 ubuntu kernel: [ 1277.042594] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 1b 00 e4 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.042603] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1200
	Jan 20 00:40:44 ubuntu kernel: [ 1277.042608] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 1c 03 00 00 01 4c 95 29 f0 80 46 90 49 73 e0 90 7c 05 f0 90 49 6f e0 90 7c 06 f0 80 34 90 49 72 e0 90 7c 05 f0 90 49 6e e0 90 7c 06 f0 80 22 90 49 1b f6
	Jan 20 00:40:44 ubuntu kernel: [ 1277.046609] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 1c 00 e3 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.046619] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1248
	Jan 20 00:40:44 ubuntu kernel: [ 1277.046625] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 1d 03 00 00 01 4c be 29 64 e0 90 7c 05 f0 90 49 63 e0 90 7c 06 f0 80 10 90 49 75 e0 90 7c 05 f0 90 49 71 e0 90 7c 06 f0 90 7c 06 e0 fd 90 7c 05 e0 f5 52
	Jan 20 00:40:44 ubuntu kernel: [ 1277.050691] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 1d 00 e2 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.050722] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1296
	Jan 20 00:40:44 ubuntu kernel: [ 1277.050728] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 1e 03 00 00 01 4c e7 29 fb 7f 01 12 8c 76 90 7c 04 ef f0 12 8d 1d 90 7c 03 ef f0 a3 e0 60 03 02 4e cb 90 7c 03 e0 fd d3 94 00 50 03 02 4e cb 90 7c e6 72
	Jan 20 00:40:44 ubuntu kernel: [ 1277.055182] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 1e 00 e1 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.055189] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1344
	Jan 20 00:40:44 ubuntu kernel: [ 1277.055194] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 1f 03 00 00 01 4d 10 29 06 e0 fb 90 7c 05 e0 90 47 7f f0 7f 01 12 8d f1 90 7c 04 ef f0 02 4e cb 90 7c 03 74 05 f0 90 7c 07 e0 ff 24 fe 60 20 24 fe 87 3b
	Jan 20 00:40:44 ubuntu kernel: [ 1277.059492] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 1f 00 e0 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.059499] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1392
	Jan 20 00:40:44 ubuntu kernel: [ 1277.059503] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 20 03 00 00 01 4d 39 29 60 29 24 fc 60 32 24 f9 60 3b 24 0e 60 03 02 4e cb 7f 01 12 4f 24 90 7c 04 ef f0 02 4e cb 7f 02 12 4f 24 90 7c 04 ef f0 02 a0 b1
	Jan 20 00:40:44 ubuntu kernel: [ 1277.064251] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 20 00 df ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.064260] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1440
	Jan 20 00:40:44 ubuntu kernel: [ 1277.064266] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 21 03 00 00 01 4d 62 29 4e cb 7f 03 12 4f 24 90 7c 04 ef f0 02 4e cb 7f 04 12 4f 24 90 7c 04 ef f0 02 4e cb 7f 05 12 4f 24 90 7c 04 ef f0 02 4e cb 26 5b
	Jan 20 00:40:44 ubuntu kernel: [ 1277.068100] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 21 00 de ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.068111] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1488
	Jan 20 00:40:44 ubuntu kernel: [ 1277.068117] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 22 03 00 00 01 4d 8b 29 90 4b fb e0 ff 90 7c 05 f0 fb 90 49 76 e0 ff 90 7c 06 f0 fd e4 ff 12 8c 76 90 7c 04 ef f0 12 8d 1d 90 7c 03 ef f0 a3 e0 60 6a e7
	Jan 20 00:40:44 ubuntu kernel: [ 1277.072754] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 22 00 dd ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.072762] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1536
	Jan 20 00:40:44 ubuntu kernel: [ 1277.072768] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 23 03 00 00 01 4d b4 29 03 02 4e cb 90 7c 03 e0 fd d3 94 00 50 03 02 4e cb 90 7c 06 e0 fb 90 7c 05 e0 90 47 7f f0 e4 ff 12 8d f1 90 7c 04 ef f0 02 36 dc
	Jan 20 00:40:44 ubuntu kernel: [ 1277.076691] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 23 00 dc ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.076698] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1584
	Jan 20 00:40:44 ubuntu kernel: [ 1277.076704] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 24 03 00 00 01 4d dd 29 4e cb 90 49 78 e0 ff 90 7c 05 f0 fb 90 49 76 e0 ff 90 7c 06 f0 fd e4 ff 12 8c 76 90 7c 04 ef f0 12 8d 1d 90 7c 03 ef f0 a3 ab fe
	Jan 20 00:40:44 ubuntu kernel: [ 1277.080542] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 24 00 db ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.080582] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1632
	Jan 20 00:40:44 ubuntu kernel: [ 1277.080590] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 25 03 00 00 01 4e 06 29 e0 60 03 02 4e cb 90 7c 03 e0 fd d3 94 00 50 03 02 4e cb 90 7c 06 e0 fb 90 7c 05 e0 90 47 7f f0 e4 ff 12 8d f1 90 7c 04 ef 05 6b
	Jan 20 00:40:44 ubuntu kernel: [ 1277.084778] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 25 00 da ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.084787] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1680
	Jan 20 00:40:44 ubuntu kernel: [ 1277.084793] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 26 03 00 00 01 4e 2f 29 f0 02 4e cb 90 49 77 e0 ff 90 7c 05 f0 fb 90 49 76 e0 ff 90 7c 06 f0 fd e4 ff 12 8c 76 90 7c 04 ef f0 12 8d 1d 90 7c 03 ef 0c eb
	Jan 20 00:40:44 ubuntu kernel: [ 1277.088874] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 26 00 d9 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.088884] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1728
	Jan 20 00:40:44 ubuntu kernel: [ 1277.088888] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 27 03 00 00 01 4e 58 29 f0 a3 e0 70 6e 90 7c 03 e0 fd d3 94 00 40 64 90 7c 06 e0 fb 90 7c 05 e0 90 47 7f f0 e4 ff 12 8d f1 90 7c 04 ef f0 80 4b 90 41 66
	Jan 20 00:40:44 ubuntu kernel: [ 1277.093116] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 27 00 d8 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.093123] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1776
	Jan 20 00:40:44 ubuntu kernel: [ 1277.093128] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 28 03 00 00 01 4e 81 29 4b fb e0 ff 90 7c 05 f0 fb 90 49 76 e0 ff 90 7c 06 f0 fd e4 ff 12 8c 76 90 7c 04 ef f0 12 8d 1d 90 7c 03 ef f0 a3 e0 70 21 b2 01
	Jan 20 00:40:44 ubuntu kernel: [ 1277.097133] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 28 00 d7 ff
	Jan 20 00:40:44 ubuntu kernel: [ 1277.097144] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1824
	Jan 20 00:40:44 ubuntu kernel: [ 1277.097148] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 29 03 00 00 01 4e aa 29 90 7c 03 e0 fd d3 94 00 40 17 90 7c 06 e0 fb 90 7c 05 e0 90 47 7f f0 e4 ff 12 8d f1 90 7c 04 ef f0 90 7c 04 e0 ff 60 25 90 3d 0c
	Jan 20 00:40:45 ubuntu kernel: [ 1277.101789] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 29 00 d6 ff
	Jan 20 00:40:45 ubuntu kernel: [ 1277.101798] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1872
	Jan 20 00:40:45 ubuntu kernel: [ 1277.101804] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 2a 03 00 00 01 4e d3 29 7c 03 e0 fe 60 1e 14 90 f7 00 f0 90 47 86 e0 90 f7 01 f0 a3 ef f0 12 2f 1b 90 47 83 e0 70 31 ff 12 2f ab 22 90 7c 03 e0 fb 74 15
	Jan 20 00:40:45 ubuntu kernel: [ 1277.103744] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 2a 00 d5 ff
	Jan 20 00:40:45 ubuntu kernel: [ 1277.103756] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1920
	Jan 20 00:40:45 ubuntu kernel: [ 1277.103762] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 2b 03 00 00 01 4e fc 29 d3 94 00 40 22 7c f0 7d 00 7f 00 7e f7 12 a1 5f 90 f7 02 e0 60 07 e0 24 80 f0 12 2f 1b 90 47 83 e0 70 04 ff 12 2f ab 22 e4 06 2d
	Jan 20 00:40:45 ubuntu kernel: [ 1277.107435] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 2b 00 d4 ff
	Jan 20 00:40:45 ubuntu kernel: [ 1277.107443] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=1968
	Jan 20 00:40:45 ubuntu kernel: [ 1277.107448] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 2c 03 00 00 01 4f 25 29 90 7c 08 f0 ef 24 fe 60 1f 14 60 2e 14 60 3d 14 60 4c 24 04 70 58 90 49 75 e0 90 7c 09 f0 90 49 71 e0 90 7c 0a f0 80 46 90 12 9d
	Jan 20 00:40:45 ubuntu kernel: [ 1277.111650] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 2c 00 d3 ff
	Jan 20 00:40:45 ubuntu kernel: [ 1277.111657] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=2016
	Jan 20 00:40:45 ubuntu kernel: [ 1277.111662] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 2d 03 00 00 01 4f 4e 29 49 74 e0 90 7c 09 f0 90 49 70 e0 90 7c 0a f0 80 34 90 49 73 e0 90 7c 09 f0 90 49 6f e0 90 7c 0a f0 80 22 90 49 72 e0 90 7c 2b ed
	Jan 20 00:40:45 ubuntu kernel: [ 1277.115676] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 2d 00 d2 ff
	Jan 20 00:40:45 ubuntu kernel: [ 1277.115684] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=2064
	Jan 20 00:40:45 ubuntu kernel: [ 1277.115690] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 35 00 29 2e 03 00 00 01 4f 77 29 09 f0 90 49 6e e0 90 7c 0a f0 80 10 90 49 64 e0 90 7c 09 f0 90 49 63 e0 90 7c 0a f0 90 7c 0a e0 fd 90 7c 09 e0 fb 7f 01 12 8e ab
	Jan 20 00:40:45 ubuntu kernel: [ 1277.118293] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 2e 00 d1 ff
	Jan 20 00:40:45 ubuntu kernel: [ 1277.118305] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=2112
	Jan 20 00:40:45 ubuntu kernel: [ 1277.118312] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 34 00 29 2f 03 00 00 01 4f a0 28 8c 76 90 7c 08 ef f0 70 19 90 7c 0a e0 fb 90 7c 09 e0 90 47 7f f0 7d 05 7f 01 12 8d f1 90 7c 08 ef f0 90 7c 08 e0 ff 22 f3 4a
	Jan 20 00:40:45 ubuntu kernel: [ 1277.121669] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 2f 00 d0 ff
	Jan 20 00:40:45 ubuntu kernel: [ 1277.121678] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=2159
	Jan 20 00:40:45 ubuntu kernel: [ 1277.121683] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 0f 00 29 30 03 01 00 01 41 00 03 02 46 00 cb 49
	Jan 20 00:40:45 ubuntu kernel: [ 1277.125155] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 30 00 cf ff
	Jan 20 00:40:45 ubuntu kernel: [ 1277.125163] [1517] dvb_usb_af9035 1-1:1.0: data uploaded=2169
	Jan 20 00:40:45 ubuntu kernel: [ 1277.125167] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 05 00 23 31 ce dc
	Jan 20 00:40:45 ubuntu kernel: [ 1277.128839] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 31 00 ce ff
	Jan 20 00:40:45 ubuntu kernel: [ 1277.128848] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 06 00 22 32 01 cd dc
	Jan 20 00:40:45 ubuntu kernel: [ 1277.131346] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 08 32 00 01 04 00 00 cc fb
	Jan 20 00:40:45 ubuntu kernel: [ 1277.131353] dvb_usb_af9035 1-1:1.0: firmware version=1.4.0.0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.131372] usb 1-1: dvb_usb_v2: found a 'ITE 9303 Generic' in warm state
	Jan 20 00:40:45 ubuntu kernel: [ 1277.131375] [1517] usb 1-1: dvb_usbv2_init:
	Jan 20 00:40:45 ubuntu kernel: [ 1277.131378] [1517] usb 1-1: dvb_usbv2_device_power_ctrl: power=1
	Jan 20 00:40:45 ubuntu kernel: [ 1277.131381] [1517] usb 1-1: dvb_usbv2_i2c_init:
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132009] usb 1-1: dvb_usb_v2: will pass the complete MPEG2 transport stream to the software demuxer
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132014] [1517] usb 1-1: dvb_usbv2_adapter_stream_init: adap=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132018] [1517] usb 1-1: usb_alloc_stream_buffers: all in all I will use 613632 bytes for streaming
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132066] [1517] usb 1-1: usb_alloc_stream_buffers: alloc buf=0 00000000c75bf1dd (dma 2026110976)
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132118] [1517] usb 1-1: usb_alloc_stream_buffers: alloc buf=1 00000000767ae881 (dma 2026373120)
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132169] [1517] usb 1-1: usb_alloc_stream_buffers: alloc buf=2 000000000ecca705 (dma 2026635264)
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132226] [1517] usb 1-1: usb_alloc_stream_buffers: alloc buf=3 000000002dcd1c30 (dma 2047868928)
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132240] [1517] usb 1-1: usb_urb_alloc_bulk_urbs: alloc urb=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132245] [1517] usb 1-1: usb_urb_alloc_bulk_urbs: alloc urb=1
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132249] [1517] usb 1-1: usb_urb_alloc_bulk_urbs: alloc urb=2
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132252] [1517] usb 1-1: usb_urb_alloc_bulk_urbs: alloc urb=3
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132255] [1517] usb 1-1: dvb_usbv2_adapter_dvb_init: adap=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.132260] dvbdev: DVB: registering new adapter (ITE 9303 Generic)
	Jan 20 00:40:45 ubuntu kernel: [ 1277.141001] [1517] usb 1-1: dvb_usbv2_adapter_frontend_init: adap=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.141008] [1517] dvb_usb_af9035 1-1:1.0: adap->id=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.141011] [1517] dvb_usb_af9035 1-1:1.0: num=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.155812] [1517] si2168 1-0067: 
	Jan 20 00:40:45 ubuntu kernel: [ 1277.155823] [1517] usb 1-1: dvb_usb_v2_generic_io: >>> 15 00 2b 33 0d 03 ce c0 12 00 0c 00 0d 16 00 00 00 00 00 00 f2 ce
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159235] [1517] usb 1-1: dvb_usb_v2_generic_io: <<< 04 33 15 cc ea
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159241] [1517] dvb_usb_af9035 1-1:1.0: command=2b failed fw error=21
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159244] [1517] dvb_usb_af9035 1-1:1.0: failed=-5
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159250] [1517] si2168 1-0067: failed=-5
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159253] [1517] si2168 1-0067: failed=-5
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159271] si2168: probe of 1-0067 failed with error -5
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159281] [1517] dvb_usb_af9035 1-1:1.0: failed=-19
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159283] [1517] dvb_usb_af9035 1-1:1.0: failed=-19
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159286] [1517] usb 1-1: dvb_usbv2_adapter_frontend_init: frontend_attach() failed=-19
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159289] [1517] usb 1-1: dvb_usbv2_adapter_frontend_init: failed=-19
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159291] [1517] usb 1-1: dvb_usbv2_adapter_init: failed=-19
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159294] [1517] usb 1-1: dvb_usbv2_device_power_ctrl: power=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159296] [1517] usb 1-1: dvb_usbv2_init: failed=-19
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159298] [1517] usb 1-1: dvb_usbv2_exit:
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159300] [1517] usb 1-1: dvb_usbv2_remote_exit:
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159302] [1517] usb 1-1: dvb_usbv2_adapter_exit:
	Jan 20 00:40:45 ubuntu kernel: [ 1277.159305] [1517] usb 1-1: dvb_usbv2_adapter_dvb_exit: adap=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161218] [1517] usb 1-1: dvb_usbv2_adapter_stream_exit: adap=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161223] [1517] usb 1-1: usb_urb_free_urbs: free urb=3
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161226] [1517] usb 1-1: usb_urb_free_urbs: free urb=2
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161229] [1517] usb 1-1: usb_urb_free_urbs: free urb=1
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161232] [1517] usb 1-1: usb_urb_free_urbs: free urb=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161235] [1517] usb 1-1: usb_free_stream_buffers: free buf=3
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161240] [1517] usb 1-1: usb_free_stream_buffers: free buf=2
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161243] [1517] usb 1-1: usb_free_stream_buffers: free buf=1
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161246] [1517] usb 1-1: usb_free_stream_buffers: free buf=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161249] [1517] usb 1-1: dvb_usbv2_adapter_frontend_exit: adap=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161254] [1517] dvb_usb_af9035 1-1:1.0: adap->id=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161257] [1517] dvb_usb_af9035 1-1:1.0: adap->id=0
	Jan 20 00:40:45 ubuntu kernel: [ 1277.161259] [1517] usb 1-1: dvb_usbv2_i2c_exit:
	Jan 20 00:40:45 ubuntu kernel: [ 1277.162808] [1517] usb 1-1: dvb_usbv2_probe: failed=-19
	Jan 20 00:40:45 ubuntu kernel: [ 1277.162951] usbcore: registered new interface driver dvb_usb_af9035
