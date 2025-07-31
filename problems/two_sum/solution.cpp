#include <vector>
#include <map> // or <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::map<int, int> numMap; // Map to store number and its index

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            // Check if the complement exists in the map
            if (numMap.count(complement)) {
                // If found, return the current index and the index of the complement
                return {numMap[complement], i};
            }

            // If not found, add the current number and its index to the map
            numMap[nums[i]] = i;
        }

        // Should not be reached if a solution is guaranteed to exist
        return {}; 
    }
};