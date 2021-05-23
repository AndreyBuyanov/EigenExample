cmake_minimum_required (VERSION 3.16)

project(Example.01 LANGUAGES CXX)

find_package(Eigen3 CONFIG REQUIRED)

file(GLOB HEADERS "*.hpp")
file(GLOB SOURSES "*.cpp")

add_executable(${PROJECT_NAME}
	${HEADERS}
	${SOURSES}
)

target_link_libraries(${PROJECT_NAME} PRIVATE Eigen3::Eigen)
