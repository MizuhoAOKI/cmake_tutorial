# set required version
cmake_minimum_required(VERSION 3.1)
# set compiler
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)
# set project name
project( CALCPI CXX)

# set build options
# set(CMAKE_CXX_FLAGS "-g")# Debug mode
set(CMAKE_CXX_FLAGS "-O2 -march=native -std=c++11 -Wall")# release mode 

# set include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

# generate shared libraries
add_library(viete     SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/viete.cpp    ) 
add_library(ramanujan SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/ramanujan.cpp) 
add_library(gregory   SHARED ${CMAKE_CURRENT_SOURCE_DIR}/src/gregory.cpp  ) 

# generate executables
add_executable(calcpi ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

# link libraries .aも追加
target_link_libraries(calcpi viete ramanujan gregory)

# Note.0:
#     After building this project you get libcarsimlib.so ,which can also be used in python script.
#     See ../pyscripts for sample programs.
# Note.1:
#     -Lcarsim searches the libcarsim.so.* at LD_LIBRARY_PATH set by ~/.bashrc
#     set `DLL_FILE : libcarsim.so.2020.1` on simfile.sim
# Note.2:
#     Be careful of the order of the libraries!
#     ${CMAKE_DL_LIBS} is needed to #include <dlfcn.h> correctly.