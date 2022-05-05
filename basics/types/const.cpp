#include <iostream>

const int var = 2; // on compile
const float var2 = 2.4f; // not on compile time, use constexpr

void print(const int &age) { // better performance sometimes
    std::cout << age;
}

int main() {
    const int safe_var = 3; // const vars can not be changed
    int age = 18;
    print(18);
}