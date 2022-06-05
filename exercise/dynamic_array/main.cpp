#include <iostream>
#include "dynamic.hpp"

int main() {
    DynamicArray arr = create_dynamic_array(5, 10);
    push_back(arr, 10);
    print_array(arr);
    pop_back(arr);
    print_array(arr);
}