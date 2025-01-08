#include <iostream>
#include <array>
#include <map>
#include <stack>
#include <vector>

std::array<std::string, 2> split(const std::string &s) {
    std::string test;
    std::array<std::string, 2> result;

    for (char character: s) {
        if (character != '.') {
            test += character;
        }
        else {
            result[0] = test;
            test.clear();
        }
    }
    result[1] = test;
    return result;
}

std::stack<int> division(int divisor, const std::string &num) {
    std::stack<int> result;
    int dividend = std::stoi(num);
    while (dividend > 0) {
        result.push(dividend % divisor);
        dividend = dividend / divisor;
    }
    return result;
}

std::vector<int> stackToVector(std::stack<int> stack) {
    std::vector<int> result;

    while (!stack.empty()) {
        result.insert(result.end(), stack.top());
        stack.pop();
    }
    return result;
}

std::string mapToHexValues(const std::stack<int>& input) {
    std::map<int, char> map = {{10, 'A'},{11, 'B'},{12, 'C'},{13, 'D'},{14, 'E'},{15, 'F'},};
    std::string output;
    std::vector<int> rest = stackToVector(input);

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

std::string convertToHex(const std::string &num) {
    if (num.find('.')) {

        std::array<std::string,2> numParts = split(num);
        std::stack<int> divisionStack = division(16, numParts[0]);
        std::string output = mapToHexValues(divisionStack);
        output += '.';
        // Für Nachkommastellen muss ich noch die Funktion mit Multiplizieren schreiben.
    }

}

int main() {
    convertToHex("3287.237867");
}

