#include <iostream>

void helloworld() { // returns nothing (void) and takes no arguments
    std::cout << "Hello World!\n";
}

int add(int a, int b) { // returns an int and takes two ints as arguments, a & b are available in function scope (pass by value)
    return a + b;
}

void change(int &n, int v) { // returns nothing and changes given variable to v in global scope (& = pass by reference)
    n = v;
}

bool is_even(int n) {
    if (n % 2 == 0){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    helloworld();

    int x = add(14, 20);

    change(x, 20);

    if (is_even(x)){
        std::cout << "The number " << x << " is even!\n";
    }
    else {
        std::cout << "The number " << x << " is not even!\n";
    }
}