cmake_minimum_required(VERSION 3.16)
project(RaindropRipples)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ripple_sim
    src/main.cpp
)

# This works even if SFMLConfig is missing
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

target_link_libraries(ripple_sim
    sfml-graphics
    sfml-window
    sfml-system
)
