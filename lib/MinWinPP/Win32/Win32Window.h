#ifndef WIN32WINDOW_H
#define WIN32WINDOW_H

#include <windows.h>
#include <memory>
#include <string>
#include "BaseWindow.h"

namespace MW {
    class Win32Window : private BaseWindow {
        HWND handle = nullptr;
    public:
        Win32Window(std::string title = "", uint16_t width = 640, uint16_t height = 480);
        int show();
    };

    typedef Win32Window window;
}

#endif //WIN32WINDOW_H
