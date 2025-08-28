class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid; // Target found at mid index
            }

            // Check if the left half is sorted
            if (nums[left] <= nums[mid]) { 
                // If target is within the sorted left half
                if (target >= nums[left] && target < nums[mid]) {
                    right = mid - 1; // Search in the left half
                } else {
                    left = mid + 1; // Search in the right half (rotated part)
                }
            } 
            // Otherwise, the right half must be sorted
            else { 
                // If target is within the sorted right half
                if (target > nums[mid] && target <= nums[right]) {
                    left = mid + 1; // Search in the right half
                } else {
                    right = mid - 1; // Search in the left half (rotated part)
                }
            }
        }

        return -1; // Target not found
    }
};