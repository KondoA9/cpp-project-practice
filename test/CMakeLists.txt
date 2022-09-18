include_directories("../src/" "../deps/")

macro(add_template_test name file)
    add_executable(${name} ${file})
    add_test(NAME ${name} COMMAND ${name} WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
endmacro()

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} --coverage")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")

add_template_test(module "module/module.test.cpp")
add_template_test(person "person/person.test.cpp")