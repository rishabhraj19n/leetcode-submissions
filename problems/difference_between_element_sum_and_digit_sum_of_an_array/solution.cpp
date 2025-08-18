#include <vector>
#include <numeric> // For std::accumulate (optional, can do manual sum)
#include <cmath>   // For std::abs

class Solution {
public:
    int differenceOfSum(std::vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;

        // Calculate element sum
        for (int num : nums) {
            elementSum += num;
        }

        // Calculate digit sum
        for (int num : nums) {
            int currentNum = num;
            while (currentNum > 0) {
                digitSum += currentNum % 10;
                currentNum /= 10;
            }
        }

        return std::abs(elementSum - digitSum);
    }
};