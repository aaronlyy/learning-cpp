#include <iostream>

// &: reference operator
// takes a reference to a variable (no local copy)
void change_value(int &n, int v) {
    n = v;
}

int main() {
    int number = 10;
    change_value(number, 20);
    std::cout << "number: " << number << "\n";
}