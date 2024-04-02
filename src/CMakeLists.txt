set(ROOT_SRC
    "${CMAKE_CURRENT_SOURCE_DIR}/core/main.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/core/main.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/core/window.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/core/window.cpp"
)

add_executable(${PROJECT_NAME} ${ROOT_SRC})

# Link the external libs to the program.
target_link_libraries(${PROJECT_NAME}
  PUBLIC
  GLEW::GLEW
  glfw
)