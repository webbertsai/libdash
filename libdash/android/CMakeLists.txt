cmake_minimum_required(VERSION 2.8)

option (ANDROID_BUILD "build android port" ON) 

if (ANDROID_BUILD)

  FIND_PROGRAM(ANDROID_NDK_BUILD_PATH ndk-build)

  if(NOT EXISTS ${ANDROID_NDK_BUILD_PATH})
    message(FATAL_ERROR "${ANDROID_NDK_BUILD_PATH} does not exist! Please select program ndk-build in the android-ndk directory")
  endif()
      
  add_custom_target(android ALL "${ANDROID_NDK_BUILD_PATH}"
		    WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}/${CMAKE_MODULE_PATH}/android/dash/")

endif (ANDROID_BUILD)

