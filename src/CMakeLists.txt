cmake_minimum_required(VERSION 3.0.0)


set(SOURCES main.cpp print.cpp)
set(HEADERS ${MY_INCLUDE_DIR}/print.h)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_PREFIX_PATH "/home/oktan/Qt/5.15.2/gcc_64/lib/cmake")



find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)
qt5_wrap_cpp (MOC_SOURCES ${HEADERS})

add_executable(Qt_start ${SOURCES} ${MOC_SOURCES})

target_include_directories(Qt_start PUBLIC ${MY_INCLUDE_DIR})
target_link_libraries(Qt_start Qt5::Core Qt5::Gui Qt5::Widgets)
