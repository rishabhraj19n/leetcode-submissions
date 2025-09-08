#include <vector>
#include <algorithm> // For std::swap

class Solution {
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        backtrack(nums, 0, result);
        return result;
    }

private:
    void backtrack(std::vector<int>& nums, int start, std::vector<std::vector<int>>& result) {
        // Base case: If start has reached the end of the array, a permutation is complete
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }

        // Recursive step: Iterate through the remaining elements
        for (int i = start; i < nums.size(); ++i) {
            // Swap the current element with the element at 'start' to explore a new permutation
            std::swap(nums[start], nums[i]);

            // Recursively call backtrack for the next position
            backtrack(nums, start + 1, result);

            // Backtrack: Undo the swap to restore the array to its previous state
            // This is crucial for exploring other permutations
            std::swap(nums[start], nums[i]);
        }
    }
};
