#include <iostream>

int main() {
    // create new array of integer (c-style) (stack)
    int arr2[5] = {1,2,3,4,5};
    // loop through array
    for (int i = 0; i < 5; i++) {
        std::cout << arr2[i] << "\n";
    }

    // create new array of doubles (c-style) (heap)
    double *arr3 = new double[3];
    arr3[0] = 1;
    arr3[1] = 2;
    arr3[2] = 3;
    // loop through array
    for (int i = 0; i < 3; i++) {
        std::cout << arr3[i] << "\n";
    }
    // free space on heap
    delete[] arr3;
}