set( ROOT_SRC
        ${CMAKE_CURRENT_SOURCE_DIR}/core/main.h
        ${CMAKE_CURRENT_SOURCE_DIR}/core/main.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/core/window.h
        ${CMAKE_CURRENT_SOURCE_DIR}/core/window.cpp
        )

add_executable(${PROJECT_NAME} WIN32  ${ROOT_SRC} ${GLAD_GL} )

target_link_libraries( ${PROJECT_NAME} ${OPENGL_LIBRARIES} glfw )
