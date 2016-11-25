#include "window.h"

window::window(uint16_t width, uint16_t height, uint8_t bitDepth, bool fullscreen) {
    if (!glfwInit()) {
        throw std::runtime_error("Unable to init glfw");
    }

    if (fullscreen) {
        auto monitor = glfwGetPrimaryMonitor();
        width = static_cast<uint16_t >(glfwGetVideoMode(monitor)->width);
        height = static_cast<uint16_t >(glfwGetVideoMode(monitor)->height);
        glWindow = glfwWindow(glfwCreateWindow(width, height, "Hello World", monitor, nullptr));
    } else {
        glWindow = glfwWindow(glfwCreateWindow(width, height, "Hello World", nullptr, nullptr));
    }

    if (!glWindow) {
        glfwTerminate();
        throw std::runtime_error("Unable to create window");
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(glWindow.get());

    glfwSetKeyCallback(glWindow.get(), key_callback);
}

window::~window() {
    glfwTerminate();
}

void window::run() {
    while (!glfwWindowShouldClose(glWindow.get())) {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(glWindow.get());

        /* Poll for and process events */
        glfwPollEvents();
    }
}
