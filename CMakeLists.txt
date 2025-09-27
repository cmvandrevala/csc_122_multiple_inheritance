cmake_minimum_required(VERSION 3.24)

project("Multiple Inheritance")

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(beaver_test tests/beaver_test.cpp src/beaver.cpp)
add_executable(duck_test tests/duck_test.cpp src/duck.cpp)
add_executable(platypus_test tests/platypus_test.cpp src/platypus.cpp src/beaver.cpp src/duck.cpp)
add_executable(main main.cpp src/beaver.cpp src/duck.cpp src/platypus.cpp)

target_link_libraries(beaver_test PRIVATE Catch2::Catch2WithMain)
target_link_libraries(duck_test PRIVATE Catch2::Catch2WithMain)
target_link_libraries(platypus_test PRIVATE Catch2::Catch2WithMain)
