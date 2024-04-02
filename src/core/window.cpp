#include "window.h"

#include <GL/gl.h>
#include <iostream>

Window::Window(){}

Window::Window(std::string window_title, int width, int height){
    this->window_title = window_title;
    this->width = width;
    this->height = height;
}

void Window::init(){
    // check if glfw can create a window
      if (glfwInit() == GLFW_FALSE) {
    std::cerr << "Error: Couldn't initialize GLFW lib.\n";
  }

  glfwDefaultWindowHints();
  glfwWindowHint(GLFW_VISIBLE, GL_TRUE);

 // OpenGL settings
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); 
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2); 
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

  // create the window
  this->glfwWindow = glfwCreateWindow(this->width, this->height, this->window_title.c_str(), NULL, NULL);
  if (!glfwWindow) {
    std::cerr << "Error: GLFW window couldn't be created.\n";
  }
}

void Window::run(){
    while (!glfwWindowShouldClose(this->glfwWindow)) {
        glfwPollEvents();
    }
    this->cleanup();
}

void Window::cleanup(){
    glfwDestroyWindow(this->glfwWindow);
}