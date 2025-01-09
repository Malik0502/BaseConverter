#include "calculationHelper.h"
#include "dataStructureConverter.h"
#include "stringManipulator.h"
#include "globals.h"

#include <array>

std::stack<int> calculationHelper::division(int divisor, const std::string &num) {
    std::stack<int> result;
    int dividend = std::stoi(num);
    while (dividend > 0) {
        result.push(dividend % divisor);
        dividend = dividend / divisor;
    }

    return result;
}

std::stack<int> calculationHelper::multiplication(int product, std::string num)
{
    std::vector<int> result;
    num = "0." + num;
    float fractionalPart = std::stof(num);
    int maxFractions = 0;
    while (fractionalPart > 0 && maxFractions != 10)
    {
        maxFractions++;
        fractionalPart = product * fractionalPart;
        std::string testAsString = std::to_string(fractionalPart);
        std::array<std::string, 2> splitted = strManipulator.split(testAsString);
        result.insert(result.begin(),std::stoi(splitted[0]));
        fractionalPart = std::stof("0." + splitted[1]);
    }
    return dataStrucConverter.vectorToStack(result);

}
