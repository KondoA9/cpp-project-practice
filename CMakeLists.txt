cmake_minimum_required (VERSION 3.16.3)

enable_language(CXX)
enable_testing()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(cpp-project-practice)

if (MSVC)
	set(CMAKE_CXX_FLAGS "/W4 /EHsc")
else()
	set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wno-unknown-pragmas")
endif()

set(SOURCE_FILES 
	${PROJECT_SOURCE_DIR}/src/person/person.cpp
)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)

include_directories(
	SYSTEM "deps/"
	"src/"
)

add_executable(cpp-project-practice ${SOURCE_FILES})

add_subdirectory("test")