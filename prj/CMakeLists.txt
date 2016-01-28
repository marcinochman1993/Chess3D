list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(LibXML++ REQUIRED)


add_subdirectory(lib)
set(MY_LIBS_PATH "lib/")
list(APPEND MY_LIBS_INCLUDES  ${MY_LIBS_PATH}/ChessLogic/inc ${MY_LIBS_PATH}/GameEngine/inc 
	${MY_LIBS_PATH}/Utility/inc)
include_directories(${MY_LIBS_INCLUDES} ${LibXML++_INCLUDE_DIRS})
file(COPY config DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/config)
if(UNIX)
  add_definitions(-std=c++11 -pedantic -Wall)
endif(UNIX)
set(CHESS_EXTRA_LIBS ${CHESS_EXTRA_LIBS} ChessLogic GameEngine Utility)
add_executable(chess src/main.cpp)


message(STATUS "XXX: ${LibXML++_LIBRARIES}")

target_link_libraries(chess  ${LibXML++_LIBRARIES})
