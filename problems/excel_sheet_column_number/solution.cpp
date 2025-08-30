#include <string>
#include <numeric> 

class Solution {
public:
    int titleToNumber(std::string columnTitle) {
        int result = 0;
        for (char c : columnTitle) {
            
            int char_value = c - 'A' + 1;
            
            result = result * 26 + char_value;
        }
        return result;
    }
};