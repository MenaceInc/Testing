#include "Win32Window.h"

Win32Window::Win32Window(std::string title, uint16_t width, uint16_t height) : BaseWindow(title, width, height){
    WNDCLASSEX windowclass = {0};
    windowclass.lpfnWndProc =;
    windowclass.hInstance = GetModuleHandle(nullptr);
    windowclass.hCursor = LoadCursor(nullptr, IDC_ARROW);
    windowclass.lpszClassName = title.c_str();

    if (!RegisterClassEx(&windowclass)) {
        throw std::runtime_error("Unable to register Window class");
    }

    handle = CreateWindowEx(dwExStyle, _title.c_str(), _title.c_str(), dwStyle, x, y, _width, _height, hWndParent, hMenu, hInstance,
                   lpParam);
}

int Win32Window::show() {

}
