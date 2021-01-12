# How to use

try run on your linux x86_64.

## build MyClassTest & test

- `pwd`
- `mkdir build && cd build`
- `cmake .. && make && cd ../`

```shell
juwan@juwan-N85-N870HL:~/Get_static_library_by_cmake$ pwd
/home/juwan/Get_static_library_by_cmake
juwan@juwan-N85-N870HL:~/Get_static_library_by_cmake$ mkdir build && cd build
juwan@juwan-N85-N870HL:~/Get_static_library_by_cmake/build$ cmake .. && make && cd ../
-- The C compiler identification is GNU 9.3.0
-- The CXX compiler identification is GNU 9.3.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/juwan/Get_static_library_by_cmake/build
Scanning dependencies of target MyClassTest
[ 50%] Building CXX object CMakeFiles/MyClassTest.dir/src/MyClassTest.cpp.o
[100%] Linking CXX static library libMyClassTest.a
[100%] Built target MyClassTest
```

see this [CMakeLists.txt](./CMakeLists.txt)

## Run test link MyClassTest.a

- `pwd`
- `cd test`
- `mkdir build && cd build`
- `cmake .. && make && cd ../`

```shell
juwan@juwan-N85-N870HL:~/Get_static_library_by_cmake$ pwd
/home/juwan/Get_static_library_by_cmake
juwan@juwan-N85-N870HL:~/Get_static_library_by_cmake$ cd test
juwan@juwan-N85-N870HL:~/Get_static_library_by_cmake/test$ mkdir build && cd build
juwan@juwan-N85-N870HL:~/Get_static_library_by_cmake/test/build$ cmake .. && make && cd ../
-- The C compiler identification is GNU 9.3.0
-- The CXX compiler identification is GNU 9.3.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/juwan/Get_static_library_by_cmake/test/build
Scanning dependencies of target test
[ 50%] Building CXX object CMakeFiles/test.dir/src/main.cpp.o
[100%] Linking CXX executable test
[100%] Built target test
juwan@juwan-N85-N870HL:~/Get_static_library_by_cmake/test$ 
```

see this [test/CMakeLists.txt](./test/CMakeLists.txt)

## 照着跑，还不会就挨打吧
