#include <cstdint>
#include <iostream>

uint8_t classic_mode = 0b00000001;
uint8_t vsync = 0b00000010;
uint8_t capture_mouse = 0b00000100;
uint8_t VR = 0b00001000;
uint8_t raw_input = 0b00010000;
uint8_t server_mode = 0b00100000;

void printOptions(uint8_t options) {
    if(options & classic_mode) {
        std::cout << "Classic mode is enabled" << std::endl;
    }
    if(options & vsync) {
        std::cout << "Vsync is enabled" << std::endl;
    }
    if(options & capture_mouse) {
        std::cout << "Capture mouse is enabled" << std::endl;
    }
    if(options & VR) {
        std::cout << "VR is enabled" << std::endl;
    }
    if(options & raw_input) {
        std::cout << "Raw input is enabled" << std::endl;
    }
    if(options & server_mode) {
        std::cout << "Server mode is enabled" << std::endl;
    }
}


int main(void) {

    uint8_t options = classic_mode | vsync | raw_input;

    printOptions(options);
    std::cout << "\nChanging options\n" << std::endl;

    options ^= vsync | server_mode;

    printOptions(options);
    std::cout << "\nChanging options\n" << std::endl;

    options ^= server_mode | raw_input | VR;

    printOptions(options);

    return 0;
}
