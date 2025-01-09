#ifndef CALCULATIONHELPER_H
#define CALCULATIONHELPER_H

#include <stack>
#include <string>

class calculationHelper {
public:
    std::stack<int> division(int divisor, const std::string &num);
    std::stack<int> multiplication(int product, std::string num);
};

#endif //CALCULATIONHELPER_H
