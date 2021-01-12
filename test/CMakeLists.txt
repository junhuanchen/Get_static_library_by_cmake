cmake_minimum_required(VERSION 3.5)

project(test)

# 根据库文件代码生成静态库
# add_library(test STATIC src/test.cpp)

# 包含指定头文件所在的目录
# target_include_directories(test PUBLIC ${PROJECT_SOURCE_DIR}/include)

# 创建可执行程序

add_executable(test
    src/main.cpp
)

# 链接静态库文件(/../build/libMyClassTest.a)
target_link_libraries(test PRIVATE ${PROJECT_SOURCE_DIR}/../build/libMyClassTest.a)
