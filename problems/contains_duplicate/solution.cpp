#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> seen; // Create an unordered_set to store seen numbers

        for (int num : nums) { // Iterate through each number in the input array
            if (seen.count(num)) { // Check if the current number is already in the set
                return true; // If found, a duplicate exists, return true
            }
            seen.insert(num); // If not found, add the number to the set
        }
        return false; // If the loop completes without finding duplicates, return false
    }
};