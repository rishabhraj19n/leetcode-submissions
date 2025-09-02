#include <string>
#include <algorithm> // For std::reverse (alternative to prepending)

class Solution {
public:
    std::string convertToTitle(int columnNumber) {
        std::string result = "";
        while (columnNumber > 0) {
            columnNumber--; // Adjust for 0-indexed calculation
            char c = 'A' + (columnNumber % 26);
            result = c + result; // Prepend character
            columnNumber /= 26;
        }
        return result;
    }
};