
set(LIBRARY_OUTPUT_PATH lib/${CMAKE_BUILD_TYPE})


include_directories(Includes)

file(
        GLOB_RECURSE
        source_files
        Sources/*
        Includes/*
)


add_library(

        TestLib
        SHARED
        ${source_files}

)