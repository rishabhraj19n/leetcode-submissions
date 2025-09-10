class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int majorityElement = nums[0];
        int count = 1;

        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] == majorityElement) {
                count++;
            } else {
                count--;
            }

            if (count == 0) {
                majorityElement = nums[i];
                count = 1;
            }
        }
        return majorityElement;
    }
};