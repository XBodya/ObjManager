cmake_minimum_required(VERSION 3.16)

project(ObjReader LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(ObjReader
  main.cpp
  reader.h reader.cpp
  saver.h saver.cpp

  basetypes.h
  basetypes.h
  basetypes.h
  basetypes.cpp
  basetypes.cpp basetypes.h
)
target_link_libraries(ObjReader Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS ObjReader
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
