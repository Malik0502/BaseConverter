#ifndef DATASTRUCTURECONVERTER_H
#define DATASTRUCTURECONVERTER_H
#include <stack>
#include <vector>

class dataStructureConverter {
public:
    template<typename T>
    std::stack<T> vectorToStack(const std::vector<T>& vector) {
        std::stack<T> result;
        for (T i : vector) {
            result.push(i);
        }
        return result;
    }

    template<typename T>
    std::vector<T> stackToVector(std::stack<T> stack) {
        std::vector<T> result;

        while (!stack.empty()) {
            result.insert(result.end(), stack.top());
            stack.pop();
        }
        return result;
    }

};



#endif //DATASTRUCTURECONVERTER_H
