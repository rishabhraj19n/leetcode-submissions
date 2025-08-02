#include <string>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        int sum = 0;
        int prevValue = 0;
        std::unordered_map<char, int> value = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        for (char c : s) {
            int currentValue = value[c];
            if (currentValue > prevValue) {
                sum += (currentValue - 2 * prevValue);
            } else {
                sum += currentValue;
            }
            prevValue = currentValue;
        }
        return sum;
    }
};