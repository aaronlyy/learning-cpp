#include <iostream>

namespace math {
    int add(int a, int b) {
        return a + b;
    }
}

int main() {
    std::cout << math::add(7, 19) << "\n";
}