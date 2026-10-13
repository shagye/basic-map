cmake_minimum_required(VERSION 3.21)
project(basic_map LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets OpenGLWidgets)

# maplibre-native-qt: install edilmiş olmalı (README'ye bak).
# Installed değilse alttaki satırı kapatıp add_subdirectory(third_party/maplibre-native-qt) kullanabilirsin.
find_package(QMapLibre REQUIRED COMPONENTS Core Widgets)

add_executable(basic_map main.cpp)
target_link_libraries(basic_map PRIVATE
    Qt6::Core Qt6::Gui Qt6::Widgets Qt6::OpenGLWidgets
    QMapLibre::Core QMapLibre::Widgets)
