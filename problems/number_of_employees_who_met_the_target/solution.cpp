#include <vector> // Required for std::vector

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(std::vector<int>& hours, int target) {
        int count = 0; // Initialize a counter for employees meeting the target
        
        
        for (int employeeHours : hours) {
           
            if (employeeHours >= target) {
                count++; 
            }
        }
        
        return count; 
    }
};