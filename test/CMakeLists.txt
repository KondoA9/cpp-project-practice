set(SOURCE_FILES_WITHOUT_MAIN ${SOURCE_FILES})
list(REMOVE_ITEM SOURCE_FILES_WITHOUT_MAIN ${PROJECT_SOURCE_DIR}/src/main.cpp)

macro(add_template_test name file)
    add_executable(${name} ${file} ${SOURCE_FILES_WITHOUT_MAIN})
    add_test(NAME ${name} COMMAND ${name} WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
endmacro()

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} --coverage")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} --coverage")

add_template_test(car "car/car.test.cpp")
add_template_test(person "person/person.test.cpp")