cmake_minimum_required(VERSION 3.15)

project(demo VERSION 1.2.3.4)

add_compile_options(-O3 -g -DNDEBUG)    # 不使用Release或者Debug等CMAKE_BUILD_TYPE类型

add_compile_options(-fdebug-prefix-map=${CMAKE_SOURCE_DIR}=/var/trunk/src/demo)

set(CMAKE_CXX_STANDARD 11)# 设置C++标准

set(CMAKE_POSITION_INDEPENDENT_CODE ON) # 创建相对地址的动静态库

set(CMAKE_INSTALL_PREFIX /usr/local) # 设置安装路径

include(cmake/package.cmake) # 使工程可以打包发布, 支持命令 `make package`

install(FILES README.md DESTINATION demo/doc)

add_subdirectory(cases)
