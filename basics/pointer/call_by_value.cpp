#include <iostream>

// takes a pointer to a variable (local copy of pointer variable)
void change_value(int* np, int v) {
    std::cout << "value of number_pointer: " << np << "\n";
    *np = v; // dereference pointer and change value at address
}

int main() {
    int number = 10;
    int* number_pointer = &number; // create a pointer to a variable
    change_value(number_pointer, 20);
    std::cout << "number: " << number << "\n";
}