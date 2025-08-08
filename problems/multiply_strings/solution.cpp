#include <string>
#include <vector>
#include <algorithm> // For std::reverse

class Solution {
public:
    std::string multiply(std::string num1, std::string num2) {
        if (num1 == "0" || num2 == "0") {
            return "0";
        }

        int len1 = num1.length();
        int len2 = num2.length();
        std::vector<int> result(len1 + len2, 0);

        // Reverse strings for easier right-to-left processing
        std::reverse(num1.begin(), num1.end());
        std::reverse(num2.begin(), num2.end());

        for (int i = 0; i < len1; ++i) {
            int digit1 = num1[i] - '0';
            for (int j = 0; j < len2; ++j) {
                int digit2 = num2[j] - '0';
                result[i + j] += digit1 * digit2;
            }
        }

        std::string finalResult = "";
        for (int i = 0; i < result.size(); ++i) {
            int digit = result[i] % 10;
            int carry = result[i] / 10;
            if (i + 1 < result.size()) {
                result[i + 1] += carry;
            }
            finalResult = std::to_string(digit) + finalResult; // Build string from right to left
        }

        
        size_t firstNonZero = finalResult.find_first_not_of('0');
        if (std::string::npos == firstNonZero) { 
            return "0";
        }
        return finalResult.substr(firstNonZero);
    }
};