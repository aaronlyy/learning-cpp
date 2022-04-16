#include <iostream>
#include <iomanip>

// c++ casting: static_cast<int>(var)
// c casting: (int)(var)

int main() {
    double n = 18.45;
    std::cout << std::setprecision(20) << n << "\n";

    // c casting
    float n1 = (float)(n);
    std::cout << std::setprecision(20) << n1 << "\n";

    // c++ casting
    double n2 = static_cast<double>(n1);
    std::cout << std::setprecision(20) << n2 << "\n";
}