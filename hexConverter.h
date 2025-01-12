#ifndef HEXCONVERTER_H
#define HEXCONVERTER_H

#include <string>
#include <stack>

class hexConverter {
public:
    std::string convertToHex(const std::string &num);
    std::string convertHexToDecimal(const std::string &num);

private:
    std::string mapToHexValues(const std::stack<int>& input);
    std::string mapToDecimalValues(const std::stack<std::string>& input);
};

#endif //HEXCONVERTER_H