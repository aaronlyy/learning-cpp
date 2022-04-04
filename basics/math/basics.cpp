#include <iostream>

int main() {
    // +,-,*,/,%,++,--

    // create a variable with value 5
    int a = 5;
    // print value of variable
    std::cout << "init value of a: " << a << "\n";
    // add 1 to variable (increment)
    a++;
    // add one to variable (pre-increment)
    ++a;
    // add 2 to variable
    a = a + 2;
    // add 4 to variable
    a += 4;
    // print value of variable
    std::cout << "value of a after addition: " << a << "\n";

    // subtract 1 from variable (decrement)
    a--;
    // subtract one from variable (pre-decrement)
    --a;
    // subtract 3 from variable
    a = a - 3;
    // subtract 2 from variable
    a -= 2;
    // print value of variable
    std::cout << "value of a after subtraction: " << a << "\n";

    // multiply variable by 2
    a *= 2;
    // multiply variable by 3
    a = a * 3;
    // print value of variable
    std::cout << "value of a after multiplication: " << a << "\n";

    // divide variable by 2
    a /= 2;
    // divide variable by 3
    a = a / 4;
    // print value of variable
    std::cout << "value of a after division: " << a << "\n";

    // modulo variable by 3 (remainder)
    a %= 3; // or a = a % 3;
    // print value of variable
    std::cout << "value of a after modulo: " << a << "\n";
}
