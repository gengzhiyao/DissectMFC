cmake_minimum_required(VERSION 3.20)

project(DISSECTING_MFC)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

if(WIN32 AND MSVC)

    set(CMAKE_MFC_FLAG 1) # 1:MFCæ≤Ã¨ø‚£ª 2: MFCπ≤œÌDLL

    # CRT: /MD(Release) /MDd(Debug)£¨∫ÕMFCπ≤œÌDLL≈‰Ã◊
    # set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

add_subdirectory(CH03_FRAME1)
add_subdirectory(CH03_FRAME2)
add_subdirectory(CH03_FRAME3)
add_subdirectory(CH03_FRAME4)
add_subdirectory(CH03_FRAME6)
add_subdirectory(CH03_FRAME7)
add_subdirectory(CH03_FRAME8)

add_subdirectory(CH07_SCRIBBLE_STEP0)
add_subdirectory(CH08_SCRIBBLE_STEP1)
add_subdirectory(CH09_SCRIBBLE_STEP2)
add_subdirectory(CH10_SCRIBBLE_STEP3)
add_subdirectory(CH11_SCRIBBLE_STEP4)
add_subdirectory(CH12_SCRIBBLE_STEP5)
