#include <iostream>

int main() {
    int a = 17;

    switch (a) {
        case 17:
            std::cout << "a is 17" << std::endl;
            break;
        case 18:
            std::cout << "a is 18" << std::endl;
            break;
        case 19:
            std::cout << "a is 19" << std::endl;
            break;
        default:
            std::cout << "a is not 17, 18 or 19" << std::endl;
            break;
    }
}