#include <iostream>

struct User {
    char* name;
    unsigned int age;
    unsigned int id;
};

void access_struct_using_pointer(User* user) {
    std::cout << user->name << "\n"; // use -> for accessing attributes from a struct pointer
}

int main() {
    User levi = {"levi", 20, 777};

    std::cout << levi.name << "\n";
    std::cout << levi.age << "\n";
    std::cout << levi.id << "\n";

    User hans;
    hans.name = "hans";
    hans.age = 69;
    hans.id = 2;

    std::cout << hans.name << "\n";

    // designated struct initalizer >= c++20
    User nerf = {.name = "nerf", .age = 10, .id = 33};


    access_struct_using_pointer(&nerf);

    return 0;
}