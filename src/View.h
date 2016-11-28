#ifndef COM_MENACEINC_TESTING_VIEW_H
#define COM_MENACEINC_TESTING_VIEW_H

#include <cstdint>

#if _WIN32
#include "Win32Window.h"
#endif

class View {
    window _window;
public:
    View(std::string title = "", uint16_t width = 640, uint16_t height = 480);

    int run();
};


#endif //COM_MENACEINC_TESTING_VIEW_H
