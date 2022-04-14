#include <iostream>

// enum = enumeration
// valuenames are uppercase
// values are constant
// values are integers

// in an enum class, enums can share the same values names

enum class ExitCode: unsigned char {
    OK = 0,
    WARNING = 1,
    ERROR = 2,
    UNKNOWN = 3
};

enum class TestCode: unsigned char {
    OK = 0,
    WARNING = 1,
    ERROR = 2,
    UNKNOWN = 3
};

// enum class values are own types (enum == 2 doesnt work)

// can be replaced by, values are given incremental from 0
// enum ExitCode {
//     OK,
//     WARNING,
//     ERROR,
//     UNKNOWN
// };

int main() {
    ExitCode code1 = ExitCode::ERROR;
    TestCode code2 = TestCode::ERROR;

    if (code1 == ExitCode::ERROR) {
        std::cout << "code1: ExitCode::ERROR";
    }
    else {
        std::cout << "code1: idk";
    }
}