cmake_minimum_required(VERSION 3.5.1)
project(cmakeJenkinsLib VERSION 1.0.0)

set(CMAKE_BUILD_TYPE Release)

#Bring the headers, such as ZeroMatrix.h into the project
include_directories(include)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

#Generate the shared library from the sources
add_library(MyClassTest STATIC ${SOURCES})

#Set the location for library installation -- i.e., /usr/lib in this case
# not really necessary in this example. Use "sudo make install" to apply
#install(TARGETS zeroMatrix DESTINATION /usr/lib)
