project(symbol_hidden VERSION 1.0.1)

set(CMAKE_CXX_STANDARD 11) # -std=c++11

set(CMAKE_POSITION_INDEPENDENT_CODE ON) # -fPIC

# 一旦加入该编译参数则隐藏所有符号
add_compile_options("-fvisibility=hidden") 

add_library(symbol_hidden SHARED symbol_hidden.cc)

add_executable(entry entry.cc)

target_link_libraries(entry symbol_hidden)
