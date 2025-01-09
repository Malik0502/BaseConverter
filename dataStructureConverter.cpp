#include "dataStructureConverter.h"

std::stack<int> dataStructureConverter::vectorToStack(const std::vector<int>& vector) {
    std::stack<int> result;
    for (int i : vector) {
        result.push(i);
    }
    return result;
}

std::vector<int> dataStructureConverter::stackToVector(std::stack<int> stack) {
    std::vector<int> result;

    while (!stack.empty()) {
        result.insert(result.end(), stack.top());
        stack.pop();
    }
    return result;
}