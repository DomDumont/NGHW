
cmake_minimum_required (VERSION 2.6)

project (NGHW)

set(EXECUTABLE_OUTPUT_PATH  bin/${CMAKE_BUILD_TYPE})

include_directories(Extern/TestLib/Includes)
link_directories(Extern/TestLib/lib/${CMAKE_BUILD_TYPE})

# add the executable

add_executable(NGHW Sources/main.cpp)
target_link_libraries(NGHW        TestLib )

add_custom_command(TARGET NGHW POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "Extern/TestLib/lib/${CMAKE_BUILD_TYPE}"
        "bin/${CMAKE_BUILD_TYPE}")

add_subdirectory (Extern)
