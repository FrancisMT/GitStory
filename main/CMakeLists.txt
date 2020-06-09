project(main)

set(CMAKE_AUTOMOC ON)

add_executable(${PROJECT_NAME}
        main.cpp
        GitStoryApplication.cpp
        userInterface/mainwindow.cpp
        userInterface/mainwindow.ui
)

target_link_libraries(${PROJECT_NAME}
        PRIVATE Qt5::Widgets
        PRIVATE GitUtilities
)
