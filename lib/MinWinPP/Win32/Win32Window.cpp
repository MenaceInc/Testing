#include "Win32Window.h"

using namespace MW;

LRESULT CALLBACK MessageHandler(_In_ HWND hwnd, _In_ UINT uMsg, _In_ WPARAM wParam, _In_ LPARAM lParam) {

    switch (uMsg) {
    default:return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

Win32Window::Win32Window(std::string title, uint16_t width, uint16_t height) : BaseWindow(title, width, height) {
    WNDCLASS windowclass = {0};
    windowclass.lpfnWndProc = MessageHandler;
    windowclass.hInstance = GetModuleHandle(nullptr);
    windowclass.hCursor = LoadCursor(nullptr, IDC_ARROW);
    windowclass.lpszClassName = title.c_str();

    RECT drawingArea = {0};
    drawingArea.right = _width;
    drawingArea.bottom = _height;

    if (!RegisterClass(&windowclass)) {
        throw std::runtime_error("Unable to register Window class");
    }

    DWORD style = WS_OVERLAPPEDWINDOW | WS_VISIBLE;

    AdjustWindowRect(&drawingArea, style, false);

    handle = CreateWindowEx(0,
                            _title.c_str(),
                            _title.c_str(),
                            style,
                            CW_USEDEFAULT,
                            CW_USEDEFAULT,
                            drawingArea.right - drawingArea.left,
                            drawingArea.bottom - drawingArea.top,
                            0,
                            0,
                            GetModuleHandle(nullptr),
                            0);

    HDC deviceContext = GetDC(handle);
    PatBlt(deviceContext, 0, 0, _width, height, BLACKNESS);
    ReleaseDC(handle, deviceContext);
}

int Win32Window::show() {
    while(true) {
        bool running = true;




        if(running) {
            break;
        }

    }




    return 0;
}
