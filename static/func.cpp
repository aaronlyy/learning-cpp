#include <iostream>
#include "func.hpp"

static int data[10]{};

void func() {
    static int data2[10]{};
    int data3[10]{};

    std::cout << "data (global & static): " << data[0] << "\n";
    std::cout << "data2 (static): " << data[0] << "\n";
    std::cout << "data3: " << data[0] << "\n";

    data[0] = -1;
    data2[0] = -1;
    data3[0] = -1;
}