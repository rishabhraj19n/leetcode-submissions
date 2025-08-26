#include <vector>
#include <algorithm> // For std::max

class Solution {
public:
    int areaOfMaxDiagonal(std::vector<std::vector<int>>& dimensions) {
        long long max_diagonal_squared = 0;
        int max_area = 0;

        for (const auto& dim : dimensions) {
            long long length = dim[0];
            long long width = dim[1];

            long long current_diagonal_squared = length * length + width * width;
            int current_area = length * width;

            if (current_diagonal_squared > max_diagonal_squared) {
                max_diagonal_squared = current_diagonal_squared;
                max_area = current_area;
            } else if (current_diagonal_squared == max_diagonal_squared) {
                max_area = std::max(max_area, current_area);
            }
        }
        return max_area;
    }
};