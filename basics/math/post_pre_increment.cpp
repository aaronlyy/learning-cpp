#include <iostream>

void func(int i) {
    std::cout << i << "\n";
}

int main(){
    int i = 10;
    func(i++);
    func(++i);
}