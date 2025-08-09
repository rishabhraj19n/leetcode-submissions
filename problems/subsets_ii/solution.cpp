#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> subsetsWithDup(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::vector<int> current_subset;
        std::sort(nums.begin(), nums.end()); // Sort the array to handle duplicates
        dfs(result, current_subset, 0, nums);
        return result;
    }

private:
    void dfs(std::vector<std::vector<int>>& result, std::vector<int>& current_subset, int start_index, const std::vector<int>& nums) {
        result.push_back(current_subset); // Add the current subset to the result

        for (int i = start_index; i < nums.size(); ++i) {
            // Skip duplicates: if current element is same as previous AND it's not the first element in this recursion level
            if (i > start_index && nums[i] == nums[i - 1]) {
                continue;
            }

            current_subset.push_back(nums[i]); // Include the current element
            dfs(result, current_subset, i + 1, nums); // Recurse with the next element
            current_subset.pop_back(); 
        }
    }
};