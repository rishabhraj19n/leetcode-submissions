class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // Calculate the expected sum of numbers from 0 to n
        long long expectedSum = (long long)n * (n + 1) / 2;
        
        // Calculate the actual sum of numbers in the array
        long long actualSum = 0
        ;
        for (int num : nums) {
            actualSum += num;
        }
        
        // The missing number is the difference between the expected and actual sum
        return expectedSum - actualSum;
    }
};