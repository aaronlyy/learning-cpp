#include <iostream>

// &: reference operator
// *: dereference operator
// 
// nullptr

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

    // allocate an int on the heap using a int* and the keyword new
    int* np = new int;

    // assign a value
    *np = 34;
    std::cout << *np << "\n"; // dereference pointer and print its value

    // de-allocate int
    delete np; // remember: this only deletes and frees the memory on the heap, the pointer still exists
    std::cout << np << "\n";

    // set the pointer to nullptr to prevent errors later in the code
    np = nullptr;

    // could be tested like this if needed
    if (np == nullptr) {
        std::cout << "Pointer is a nullptr\n";
    }
}