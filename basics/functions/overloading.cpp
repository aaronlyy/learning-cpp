#include <iostream>

int max(const int &a, const int &b){
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

double max(const double &a, const double &b) { // function header needs to differ
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}


int main(){
    int n1 = 5;
    int n2 = 34;
    double n3 = 3.56;
    double n4 = 6.7;
    std::cout << max(n1, n2) << "\n";
    std::cout << max(n3, n3) << "\n";
}