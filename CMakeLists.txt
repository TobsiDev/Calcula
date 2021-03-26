cmake_minimum_required(VERSION 3.0.0)
project(Calcula VERSION 0.1.1)

include(CTest)
enable_testing()

add_executable(${PROJECT_NAME} main.cpp formulas)

add_subdirectory(Formulas)

target_include_directories(${PROJECT_NAME} PUBLIC Formulas)

target_link_directories(${PROJECT_NAME} PRIVATE Formulas/ )

target_link_libraries(${PROJECT_NAME} formulas)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
