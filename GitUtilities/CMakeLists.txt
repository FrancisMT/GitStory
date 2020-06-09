project(GitUtilities)

set(CMAKE_AUTOMOC ON)

add_library(${PROJECT_NAME}
    GitCommandsWrapper.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE Qt5::Core
)
