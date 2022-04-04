#include <iostream>

int main(int argc, char** argv)
{
    for (int i = 1; i < argc; i++)
    {
        // argc is the number of arguments, including the program name
        // argv is an array of strings, each string is an argument
        std::cout << argv[i] << "\n";
    }
}