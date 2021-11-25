cmake_minimum_required(VERSION 3.14)
project(SimpleVector LANGUAGES CXX)

set (sources
    main.cpp
    )

set (headers
    array_ptr.h
    simple_vector.h
    tests.h)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SimpleVector ${sources} ${headers})

set_target_properties(SimpleVector PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)
if(CMAKE_BUILD_TYPE MATCHES Debug)
if (MSVC)
    target_compile_options(SimpleVector PRIVATE /W4 /WX)
else ()
    target_compile_options(SimpleVector PRIVATE
        -Werror
        -Wall
        -Wextra
        -Wpedantic
        -Wcast-align
        -Wcast-qual
        -Wconversion
        -Wctor-dtor-privacy
        -Wenum-compare
        -Wfloat-equal
        -Wnon-virtual-dtor
        -Wold-style-cast
        -Woverloaded-virtual
        -Wredundant-decls
        -Wsign-conversion
        -Wsign-promo
        -pedantic
        -pedantic-errors)
endif ()
endif ()
