include_directories(${PROJECT_SOURCE_DIR}/lib/greeter)
include_directories(${PROJECT_SOURCE_DIR}/ext/googletest/include)
link_directories(${PROJECT_SOURCE_DIR}/ext/googletest/lib)

add_executable(hello-world-tests
main.cpp
)
target_link_libraries(hello-world-tests
greeter
gtest
pthread
)
