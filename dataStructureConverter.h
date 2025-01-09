#ifndef DATASTRUCTURECONVERTER_H
#define DATASTRUCTURECONVERTER_H
#include <stack>
#include <vector>


class dataStructureConverter {
public:
    std::stack<int> vectorToStack(const std::vector<int>& vector);
    std::vector<int> stackToVector(std::stack<int> stack);

};



#endif //DATASTRUCTURECONVERTER_H
