#include <iostream>

constexpr int add(int n, int m) {
    return n + m;
}


int main() {
    int x = add(5, 6); // calculated at compile-time if possible
}