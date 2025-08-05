#include <vector>
#include <cmath> // For std::abs

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        // Mark numbers present in the array by negating the value at their corresponding index
        for (int i = 0; i < nums.size(); ++i) {
            int index = std::abs(nums[i]) - 1; // Calculate the 0-based index
            if (nums[index] > 0) { // If the number at this index hasn't been marked yet
                nums[index] *= -1; // Mark it as seen by making it negative
            }
        }

        // Collect the missing numbers
        std::vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0) { // If the number at this index is still positive, it's missing
                result.push_back(i + 1); // Add the corresponding number (index + 1) to the result
            }
        }

        return result;
    }
};