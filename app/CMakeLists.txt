include_directories(${PROJECT_SOURCE_DIR}/lib/greeter)
add_executable(hello-world
main.cpp
)
target_link_libraries(hello-world
greeter
)
