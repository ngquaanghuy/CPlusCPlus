#include <iostream>
#include "logger.h"

namespace {
    void logger(const std::string &message) {
        std::cout << "Log: " << message << std::endl;
    }
}

int main() {
    return 0;
}