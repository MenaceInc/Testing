#ifndef COM_MENACEINC_TESTING_WIN32WINDOW_H
#define COM_MENACEINC_TESTING_WIN32WINDOW_H

#include <windows.h>
#include <memory>
#include "BaseWindow.h"

class Win32Window : private BaseWindow {
    std::unique_ptr<HWND> handle;
public:
    Win32Window(std::string title, uint16_t width, uint16_t height);
    int show();
};

typedef Win32Window window;
#endif //COM_MENACEINC_TESTING_WIN32WINDOW_H
