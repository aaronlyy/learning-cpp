#include <iostream>

int main() {
    // create new array of integer (c-style) (stack)
    // array zeigt auf erste Adresse, die im Stack liegt
    // länge muss angegeben werden
    int arr2[5] = {1,2,3,4,5}; // = & size kann weggelassen werden also int arr2[]{1,2,3,4,5};
    // loop through array
    for (int i = 0; i < 5; i++) {
        std::cout << arr2[i] << "\n";
    }

    // create new array of doubles (c-style) (heap)
    unsigned int size = 3;
    double *arr3 = new double[size]; // pointer points to first element
    arr3[0] = 1;
    arr3[1] = 2;
    arr3[2] = 3;
    // loop through array
    for (int i = 0; i < 3; i++) {
        std::cout << arr3[i] << "\n";
    }
    // free space on heap and set pointer to nullptr
    delete[] arr3;
    arr3 = nullptr;

    // create array of chars (text)
    // am ende von char arrays muss ein nullterminator stehen
    const char name[] = "Aaron"; // nullterminator automatisch bei dieser schreibweise

    // char arrays
    char* name = "Hans"; // <=> char* name{"Hans"}
    // name also is a pointer, but with a \0 at the end, so functions dont need size params

}