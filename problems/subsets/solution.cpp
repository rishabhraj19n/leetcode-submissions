class Solution {
public:
    void backtrack(std::vector<std::vector<int>>& ans, std::vector<int>& subset, const std::vector<int>& nums, int start) {
        // Add the current subset to the answer list
        ans.push_back(subset);

        // Iterate through the remaining elements to build new subsets
        for (int i = start; i < nums.size(); ++i) {
            // Include the current element
            subset.push_back(nums[i]);
            // Recursively call backtrack for the next elements
            backtrack(ans, subset, nums, i + 1);
            // Backtrack: remove the current element to explore other possibilities
            subset.pop_back();
        }
    }

    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        std::vector<std::vector<int>> ans;
        std::vector<int> subset;
        // Start the backtracking process from the beginning of the array
        backtrack(ans, subset, nums, 0);
        return ans;
    }
};