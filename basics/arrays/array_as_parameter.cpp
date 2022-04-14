#include <iostream>

void loop_arr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << "\n";
    }
}

int main() {
    int* arr = new int[3]{1,2,3}; // heap array
    loop_arr(arr, 3);
    delete[] arr;
    arr = nullptr;

    int arr2[]{4,5,6}; // stack array
    loop_arr(arr2, 3);
}