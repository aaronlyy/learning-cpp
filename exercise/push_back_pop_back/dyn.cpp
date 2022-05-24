#include <iostream>
#include <cstdlib>
#include "dyn.hpp"

void push_back(int *&arr, const unsigned int &size, const int &value) {
    int* new_array = new int[size+1];

    for (unsigned int i = 0; i < size; i++){
        new_array[i] = arr[i];
    }

    new_array[size] = value;

    delete[] arr;

    arr = new_array;
}

void pop_back(int *&arr, const unsigned int &size) {
    int *new_array = new int[size-1];

    for (unsigned int i = 0; i < size-1; i++) {
        new_array[i] = arr[i];
    }

    delete[] arr;
    arr = new_array;
}


void print_array(int *&array, const unsigned int &size) {
    for (unsigned int i = 0; i < size; i++){
        std::cout << array[i] << "\n";
    }
}