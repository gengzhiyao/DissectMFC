
# 搜集所有cpp，递归所有子文件夹
file(GLOB_RECURSE SRCS_CPP
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    "*.cpp"
    "*.CPP"
)

# 搜集所有头文件
file(GLOB_RECURSE SRCS_H
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    "*.h"
    "*.H"
)

# 搜集资源脚本，注意不要递归把中间生成的rc抓进来
file(GLOB_RECURSE RC_FILE
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}
    "*.rc"
    "*.rc2"
)

# 全部文件合并
set(ALL_FILES ${SRCS_CPP} ${SRCS_H} ${RC_FILE})

# 控制台
add_executable(Frame02 ${ALL_FILES})

# ========= source_group：生成VS的过滤器【重点】 =========
# 源文件过滤器
source_group("Source Files" FILES ${SRCS_CPP})
# 头文件过滤器
source_group("Header Files" FILES ${SRCS_H})
# 资源文件过滤器
source_group("Resource Files" FILES ${RC_FILE})
