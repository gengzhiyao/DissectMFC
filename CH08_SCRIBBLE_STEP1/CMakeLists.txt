
# --- 分开定义源文件、头文件、资源文件 ---
set(SRCS_CPP
    MAINFRM.CPP
    CHILDFRM.CPP
    SCRIBBLE.CPP
    SCRIBDOC.CPP
    SCRIBVW.CPP
)

set(SRCS_H
    MAINFRM.H
    CHILDFRM.H
    SCRIBBLE.H
    SCRIBDOC.H
    SCRIBVW.H
    STDAFX.H
)

# Scribble MFC必须的资源脚本，记得工程目录要有SCRIBBLE.RC
set(SRCS_RC
    SCRIBBLE.RC
)
# 全部文件合并
set(ALL_FILES ${SRCS_CPP} ${SRCS_H} ${SRCS_RC})

# WIN32：MFC窗口程序，不是控制台
add_executable(Scribble01 WIN32 ${ALL_FILES})

# ========= source_group：生成VS的过滤器【重点】 =========
# 源文件过滤器
source_group("Source Files" FILES ${SRCS_CPP})
# 头文件过滤器
source_group("Header Files" FILES ${SRCS_H})
# 资源文件过滤器
source_group("Resource Files" FILES ${SRCS_RC})
