#include <vector>

class Solution {
public:
    std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix) {
        std::vector<int> ans;
        if (matrix.empty() || matrix[0].empty()) {
            return ans;
        }

        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0;
        int bottom = m - 1;
        int left = 0;
        int right = n - 1;

        while (top <= bottom && left <= right) {
            // Traverse Right
            for (int j = left; j <= right; ++j) {
                ans.push_back(matrix[top][j]);
            }
            top++;

            // Traverse Down
            for (int i = top; i <= bottom; ++i) {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // Traverse Left (if a row still exists)
            if (top <= bottom) {
                for (int j = right; j >= left; --j) {
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            // Traverse Up (if a column still exists)
            if (left <= right) {
                for (int i = bottom; i >= top; --i) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};
