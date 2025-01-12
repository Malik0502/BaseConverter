#include "hexConverter.h"
#include "stringManipulator.h"
#include "calculationHelper.h"
#include "dataStructureConverter.h"
#include "globals.h"

#include <array>
#include <map>
#include <stack>
#include <string>
#include <vector>

std::string hexConverter::mapToHexValues(const std::stack<int>& input) {
    std::map<int, char> map = {{10, 'A'},{11, 'B'},{12, 'C'},{13, 'D'},{14, 'E'},{15, 'F'},};
    std::string output;
    std::vector<int> rest = dataStrucConverter.stackToVector(input);

    for (int value : rest) {
        if (!map.contains(value)) {
            output += std::to_string(value);
        }
        else {
            output += map[value];
        }
    }
    return output;
}

std::string hexConverter::mapToDecimalValues(const std::stack<std::string>& input) {
    std::map<char,int> map = {{'A', 10},{'B', 11},{'C',12},{'D', 13},{'E', 14},{'F', 15},};
    std::string output;
    std::vector<std::string> rest = dataStrucConverter.stackToVector(input);
    for (std::string value : rest) {
        if (!map.contains(value.c_str()[0])) {
            output += value;
        }
        else {
            output += map[value.c_str()[0]];
        }
    }
    return output;
}

std::string hexConverter::convertToHex(const std::string &num) {
    std::string output;
    if (num.contains('.')) {

        std::array<std::string,2> numParts = strManipulator.split(num);
        std::stack<int> naturalNums = calcHelper.division(16, numParts[0]);
        output = mapToHexValues(naturalNums);
        output += '.';

        naturalNums = calcHelper.multiplication(16, numParts[1]);
        output += mapToHexValues(naturalNums);
    }
    else {
        std::stack<int> naturalNums = calcHelper.division(16, num);
        output = mapToHexValues(naturalNums);
    }
    return output;
}

std::string hexConverter:: convertHexToDecimal(const std::string &num) {
    return "test";
}