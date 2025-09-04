#include <cmath> 

class Solution {
public:
    int findClosest(int x, int y, int z) {
        
        const int xz_distance = std::abs(x - z);
        
        
        const int yz_distance = std::abs(y - z);
        
        
        if (xz_distance < yz_distance) {
            return 1; 
        } else if (yz_distance < xz_distance) {
            return 2; 
        } else {
            return 0; 
        }
    }
};
