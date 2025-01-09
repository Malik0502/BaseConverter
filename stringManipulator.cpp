#include "stringManipulator.h"
#include <array>
#include <string>

std::array<std::string, 2> stringManipulator::split(const std::string &s) {
    std::string part;
    std::array<std::string, 2> result;

    for (char character: s) {
        if (character != '.') {
            part += character;
        }
        else {
            result[0] = part;
            part.clear();
        }
    }
    result[1] = part;
    return result;
}
