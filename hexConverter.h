#ifndef HEXCONVERTER_H
#define HEXCONVERTER_H

#include <string>
#include <stack>

class hexConverter {
public:
    std::string convertToHex(const std::string &num);

private:
    std::string mapToHexValues(const std::stack<int>& input);
};

#endif //HEXCONVERTER_H