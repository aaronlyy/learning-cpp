#include <iostream>

struct User {
    char* name;
    unsigned int age;
    unsigned int id;
};

int main() {
    User levi = {"levi", 20, 777};

    std::cout << levi.name << "\n";
    std::cout << levi.age << "\n";
    std::cout << levi.id << "\n";

    User hans;
    hans.name = "hans";
    hans.age = 69;
    hans.id = 2;

    std::cout << hans.name;

    return 0;
}