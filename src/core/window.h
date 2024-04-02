#pragma once

#include <string>

#include <GLFW/glfw3.h>

class Window{
    private:
    GLFWwindow* glfwWindow;
    std::string window_title = "Exodus engine";
    int width = 800, height = 600;
    
    void cleanup();

    public:
        Window();
        Window(std::string window_title, int width, int height);

        void init();
        void run();
};