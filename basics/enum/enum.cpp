#include <iostream>

// enum = enumeration
// valuenames are uppercase
// values are constant
// values are integers

enum ExitCode {
    OK = 0,
    WARNING = 1,
    ERROR = 2,
    UNKNOWN = 3
};

// can be replaced by, values are given incremental from 0
// enum ExitCode {
//     OK,
//     WARNING,
//     ERROR,
//     UNKNOWN
// };

int main() {
    unsigned int age = 18;
    ExitCode code;

    if (age >= 18){
        code = ExitCode::OK;
    }
    else {
        code = ExitCode::ERROR;
    }

    return code;
}