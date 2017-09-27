aux_source_directory (. SRC_LIST)
message(${SRC_LIST})
link_directories(${PROJECT_BINARY_DIR})
find_package(OpenCV REQUIRED)
#enable_testing ()



if(DUSE_SEETA)
ADD_LIBRARY (face_rec SHARED face_rec.cpp)
target_link_libraries(face_rec abc facev_lib faced_lib facea_lib libopencv_core.so libopencv_highgui.so libopencv_imgproc.so) 
#add_executable(demo demo.cpp)
#target_link_libraries(demo facev_lib face_rec faced_lib facea_lib libopencv_core.so libopencv_highgui.so libopencv_imgproc.so)
add_executable(demo2 demo2.cpp)
target_link_libraries(demo2 facev_lib face_rec faced_lib facea_lib libopencv_core.so libopencv_highgui.so libopencv_imgproc.so)
else()
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DDLIB_JPEG_SUPPORT -DDUSE_DLIB")
ADD_LIBRARY (face_rec SHARED dlib_face_rec.cpp)
target_link_libraries(face_rec abc libdlib.a faced_lib libopencv_core.so libopencv_highgui.so libopencv_imgproc.so)
add_executable(demo2 demo2.cpp)
target_link_libraries(demo2 face_rec libopencv_core.so libopencv_highgui.so libopencv_imgproc.so)
#add_executable(dnn_face_recognition dnn_face_recognition.cpp)
#target_link_libraries(dnn_face_recognition abc libdlib.a faced_lib libopencv_core.so libopencv_highgui.so libopencv_imgproc.so)
endif()








