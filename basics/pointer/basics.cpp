#include <iostream>

// &: reference operator
// *: dereference operator

int main(){
    // create a variable of type int in stack
    int a = 13;
    std::cout << "value of a: " << a << "\n";
    std::cout << "address of a (reference): " << &a << "\n";
    // create a pointer
    int* p = &a;
    // print the value of the pointer
    std::cout << "value of p: " << p << "\n";
    std::cout << "value of *p (dereference): " << *p << "\n";
}