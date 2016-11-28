#ifndef COM_MENACEINC_TESTING_WINDOW_H
#define COM_MENACEINC_TESTING_WINDOW_H

#include <string>
#include <cstdint>

class BaseWindow {
protected:
    std::string _title;
    uint16_t _width;
    uint16_t _height;

public:
    BaseWindow(const std::string &title = "", uint16_t width = 640, uint16_t height = 480) : _title(title),
                                                                                             _width(width),
                                                                                             _height(height) {};


    virtual int minimize() = 0;
    virtual int show() = 0;
    virtual int toggleFullscreen() = 0;
};

#endif //COM_MENACEINC_TESTING_WINDOW_H
