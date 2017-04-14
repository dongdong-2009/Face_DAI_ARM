## SeetaFace Engine

[![License](https://img.shields.io/badge/license-BSD-blue.svg)](LICENSE)

### Description

**SeetaFace Engine** is an open source C++ face recognition engine, which can run on CPU with no third-party dependence. It contains three key parts, i.e., **SeetaFace Detection**, **SeetaFace Alignment** and **SeetaFace Identification**, which are necessary and sufficient for building a real-world face recognition applicaiton system. 

* SeetaFace Detection implements a funnel-structured (FuSt) cascade schema for real-time multi-view face detection, which achieves a good trade-off between detection accuracy and speed. State of the art accuracy can be achieved on the public dataset [FDDB](http://vis-www.cs.umass.edu/fddb/) in high speed. See [SeetaFace Detection](https://github.com/seetaface/SeetaFaceEngine/tree/master/FaceDetection) for more details. 

* SeetaFace Alignment cascades several stacked auto-encoder networks to detect landmarks in real time (more than 200 fps on a single I7 desktop CPU), and achieves the state-of-the-art accuracy at least on some public datasets [AFLW](http://lrs.icg.tugraz.at/research/aflw/). See [SeetaFace Alignment](https://github.com/seetaface/SeetaFaceEngine/tree/master/FaceAlignment) for more details. 

* SeetaFace Identification is a modification of AlexNet CNN for face recognition, with better performance in terms of both accuracy (97.1% on [LFW] (http://vis-www.cs.umass.edu/lfw/) and speed (about 120ms on a single I7 desktop CPU). See [SeetaFace Identification](https://github.com/seetaface/SeetaFaceEngine/tree/master/FaceIdentification) for more details. 

This face recognition engine is developed by Visual Information Processing and Learning (VIPL) group, Institute of Computing Technology, Chinese Academy of Sciences. The codes are written in C++ without dependence on any 3rd-party libraries. The open source is now released under BSD-2 license (see [LICENSE](LICENSE) for details), which means the codes can be used freely for both acedemic purpose and industrial products.

### Contact Info

If you have any problem on SeetaFace Engine, please contact us by sending email to SeetaFace@vipl.ict.ac.cn.


### Other Documentation

* [SeetaFace Detection](./FaceDetection/README.md)
* [SeetaFace Alignment](./FaceAlignment/README.md)
* [SeetaFace Identification](./FaceIdentification/README.md)
##############################################################
$CXX   -march=armv7-a -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot= ../../../../../../../../toolchain/sysroots/cortexa9hf-vfp-neon-tanxun-linux-gnueabi -I ../../../include/ -I  ../../../../../../../../toolchain/sysroots/cortexa9hf-vfp-neon-tanxun-linux-gnueabi/usr/liclude -mfpu=neon -std=c++11 -O2  -o ./test_face_verification.o -c ./test_face_verification.cpp



#################################################################

 $CXX   -march=armv7-a -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/home/xinruiming/Downloads/hi/toolchain/sdk/toolchain/sysroots/cortexa9hf-vfp-neon-tanxun-linux-gnueabi -I ../../../include -I //home/xinruiming/Downloads/hi/toolchain/sdk/toolchain/sysroots/cortexa9hf-vfp-neon-tanxun-linux-gnueabi/usr/liclude -mfpu=neon -std=c++11 -O2  -o ./test_face_verification.o -c ./test_face_verification.cpp



 $CXX  -march=armv7-a -mfloat-abi=hard -mfpu=neon -mtune=cortex-a9 --sysroot=/home/xinruiming/Downloads/hi/toolchain/sdk/toolchain/sysroots/cortexa9hf-vfp-neon-tanxun-linux-gnueabi   -O2 -pipe -g -feliminate-unused-debug-types   -O2 -pipe -g -feliminate-unused-debug-types  -mfpu=neon -std=c++11 -O2   -Wl,-O1 -Wl,--hash-style=gnu -Wl,--as-needed ./test_face_verification.o  -o ./test_face_verification -I /home/xinruiming/Downloads/hi/toolchain/sdk/toolchain/sysroots/cortexa9hf-vfp-neon-tanxun-linux-gnueabi/usr/liclude -rdynamic ./lib/libviplnet.so.4.5 ./lib/libopencv_stitching.so.2.4.11 ./lib/libopencv_superres.so.2.4.11 ./lib/libopencv_videostab.so.2.4.11  ./lib/libfacea_lib.so ./lib/libfaced_lib.so  ./lib/libopencv_features2d.so.2.4.11 ./lib/libopencv_flann.so.2.4.11 ./lib/libopencv_objdetect.so.2.4.11 ./lib/libopencv_ml.so.2.4.11 ./lib/libopencv_highgui.so.2.4.11 ./lib/libopencv_photo.so.2.4.11 ./lib/libopencv_imgproc.so.2.4.11 ./lib/libopencv_core.so.2.4.11 -Wl,-rpath=./lib
