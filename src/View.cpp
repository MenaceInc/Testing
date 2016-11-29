#include "View.h"

View::View(std::string title, uint16_t width, uint16_t height) :
        _window(title, width, height) {
}

int View::run() {
    return _window.show();
}
