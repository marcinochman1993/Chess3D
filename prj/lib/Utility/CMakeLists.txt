add_subdirectory(test)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/CMakeFind")
find_package(Boost REQUIRED)
find_package(LibXML++ REQUIRED)
file(GLOB_RECURSE Utility_SRCS ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
include_directories(inc ${LibXML++_INCLUDE_DIRS})
if(UNIX)
  add_definitions(-std=c++11 -pedantic -Wall)
endif(UNIX)
add_library(Utility ${Utility_SRCS})



target_link_libraries(Utility ${Boost_LIBRARIES} ${LibXML++_LIBRARIES})
