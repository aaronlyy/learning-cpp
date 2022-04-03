#include <iostream>

int main() {

    // signed: mit vorerzeichen
    // unsigned: ohne vorzeichen

    char g = 'a'; // size of char is 1 byte
    unsigned char v = 'b'; // size of unsigned char is 1 byte

    short int s = 1; // size: 2 byte
    unsigned short int j = 1; // size: 2 byte

    int a = 1; // size of int is 4 bytes, same as signed int
    unsigned int b = 2; // size of unsigned int is 4 bytes

    long int c = 3; // size of long is 8 bytes
    unsigned long int d = 4; // size of unsigned long is 8 bytes
    long long int i = 4; // size of long long is 8 bytes
    unsigned long long int k = 5; // size of unsigned long long is 8 bytes

    float l = 1.0; // size of float is 4 bytes

    double e = 3.14; // size of double is 8 bytes
    long double f = 3.14; // size of long double is 16 bytes

    bool h = true; // size of bool is 1std::cout << "Size of char : " << sizeof(char);
}