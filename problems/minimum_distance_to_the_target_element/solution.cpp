#include <vector>
#include <cmath>
#include <algorithm>

class Solution {
public:
    int getMinDistance(std::vector<int>& nums, int target, int start) {
        int minDistance = INT_MAX;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == target) {
                minDistance = std::min(minDistance, std::abs(i - start));
            }
        }
        
        return minDistance;
    }
};