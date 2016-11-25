#ifndef COM_MENACEINC_TESTING_WINDOW_H
#define COM_MENACEINC_TESTING_WINDOW_H

#include <GLFW/glfw3.h>
#include <memory>

static void key_callback(GLFWwindow *window, int key, int scancode, int action, int mods) {


    if ((glfwGetKey(window, GLFW_KEY_LEFT_ALT) == GLFW_PRESS) && (glfwGetKey(window, GLFW_KEY_ENTER) == GLFW_PRESS)) {
        // switch between fullscreen and windowed
    }


    if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
        glfwSetWindowShouldClose(window, GLFW_TRUE);
}


struct glfwDeleteWindow {
    void operator()(GLFWwindow *ptr) {
        glfwDestroyWindow(ptr);
    }
};

typedef std::unique_ptr<GLFWwindow, glfwDeleteWindow> glfwWindow;

class window {
    glfwWindow glWindow;

public:
    window(uint16_t width = 640, uint16_t height = 480, uint8_t bitDepth = 32, bool fullscreen = false);

    ~window();

    void run();
};


#endif //COM_MENACEINC_TESTING_WINDOW_H
