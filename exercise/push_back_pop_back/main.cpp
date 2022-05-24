#include <iostream>
#include "dyn.hpp"

int main() {
    unsigned int size = 5;
    int* array = new int[size]{0,1,2,3,4};

    // add a value to the array
    push_back(array, size, 88);
    size++;

    // print the array
    print_array(array, size);

    // remove the last item from the array
    pop_back(array, size);
    size--;
    print_array(array, size);

    // free memory on heap and set array to nullptr
    delete[] array;
    array = nullptr;
}