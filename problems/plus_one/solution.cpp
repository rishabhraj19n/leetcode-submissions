#include <vector>
#include <algorithm> 

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();

        
        for (int i = n - 1; i >= 0; --i) {
            
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            } else {
                
                digits[i] = 0;
            }
        }

        
        std::vector<int> result(n + 1, 0); 
        result[0] = 1; 
        return result;
    }
};