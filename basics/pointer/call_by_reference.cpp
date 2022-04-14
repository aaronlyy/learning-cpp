#include <iostream>

// &: reference operator

// takes a reference to a variable (no local copy)
void change_value(int &n, int v) {
    n = v;
}

// takes a pointer reference (no local copy of pointer)
void change_value_p(int* &n, int v) {
    *n = v;
}

int main() {
    int number = 10;
    int *np = &number;

    change_value(number, 20);
    std::cout << "number: " << number << "\n";

    change_value_p(np, 34);
    std::cout << "number: " << number << "\n";
}