cmake_minimum_required(VERSION 3.22.1)

project(TKTLSoft)

# Set the include directory
include_directories(include)

# Add all source files in the src directory
file(GLOB SOURCES "src/*.c")
file(GLOB HEADERS "src/*.h")

# Specify the public header files
set(PUBLIC_HEADERS "include/helloWorld.h" ${HEADERS})  # Add additional headers

# Create a shared library from the source files
add_library(TKTLSoft SHARED ${SOURCES})

# Set the location for installation
install(TARGETS TKTLSoft
        LIBRARY DESTINATION lib
        PUBLIC_HEADER DESTINATION include
        RUNTIME DESTINATION bin) # Install library into /usr/bin

# Add an install command for the public headers
install(FILES ${PUBLIC_HEADERS} DESTINATION include)

# Locate the test source files
file(GLOB TEST_SOURCES "test/*.c")

# Create an executable for each test file
foreach(test_source ${TEST_SOURCES})
    # Get the name of the test file without the extension
    get_filename_component(test_name ${test_source} NAME_WE)
    
    # Create an executable for the test
    add_executable(${test_name}_exe ${test_source})
    
    # Link the test executable with the library being tested
    target_link_libraries(${test_name}_exe TKTLSoft)
endforeach()