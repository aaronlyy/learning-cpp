#include <iostream>

int main() {

    // check if person is allowed to drink beer or vodka
    int age = 18;

    if (age >= 18){
        std::cout << "Your allowed to drink beer and vodka!" << std::endl;
    }
    else if (age >= 16) {
        std::cout << "Your allowed to drink beer!" << std::endl;
    }
    else {
        std::cout << "You are not allowed to drink anything alcoholic!" << std::endl;
    }
}