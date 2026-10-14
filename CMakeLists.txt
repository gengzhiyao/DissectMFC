cmake_minimum_required(VERSION 3.20)

project(DISSECTING_MFC)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

if(WIN32 AND MSVC)

    set(CMAKE_MFC_FLAG 1) # 1:MFCæ≤Ã¨ø‚£ª 2: MFCπ≤œÌDLL

    # CRT: /MD(Release) /MDd(Debug)£¨∫ÕMFCπ≤œÌDLL≈‰Ã◊
    # set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL")
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()

add_subdirectory(CH03_FRAME7)

add_subdirectory(CH08_SCRIBBLE_STEP1)
