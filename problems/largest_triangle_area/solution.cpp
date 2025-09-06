#include <vector>
#include <cmath>
#include <algorithm>

class Solution {
public:
    double largestTriangleArea(std::vector<std::vector<int>>& points) {
        double maxArea = 0.0;
        int n = points.size();

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    
                    double xA = points[i][0];
                    double yA = points[i][1];
                    double xB = points[j][0];
                    double yB = points[j][1];
                    double xC = points[k][0];
                    double yC = points[k][1];

                    
                    double currentArea = 0.5 * std::abs(xA * (yB - yC) + xB * (yC - yA) + xC * (yA - yB));
                    
                    
                    maxArea = std::max(maxArea, currentArea);
                }
            }
        }
        return maxArea;
    }
};
