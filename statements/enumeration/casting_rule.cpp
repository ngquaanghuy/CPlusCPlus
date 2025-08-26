#include <iostream>

using namespace std;
namespace Rule {
    enum class Level {
        low,
        medium,
        high,
        superhigh,
        ultrahigh,
    };
    int convert() {
        Level level;
        // level = ultrahigh; // Error: cannot convert 'int' to 'Level' in assignment
        level = Level::ultrahigh; // Correct
        int integer = 300;
        level = static_cast<Level>(integer); // Correct but unsafe
        return static_cast<int>(level);
    }
    int convert2() {
        Level level;
        level = Level::low;
        int integer = 300;
        integer = static_cast<int>(Level::low);
        return integer;
    }
}

int main() {
    cout << Rule::convert() << endl;
    cout << Rule::convert2() << endl;
    return 0;
}