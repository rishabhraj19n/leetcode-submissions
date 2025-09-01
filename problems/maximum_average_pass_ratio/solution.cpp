#include <vector>
#include <queue>
#include <cmath> 
class Solution {
public:
    double maxAverageRatio(std::vector<std::vector<int>>& classes, int extraStudents) {
        
        std::priority_queue<std::pair<double, int>, std::vector<std::pair<double, int>>, std::greater<std::pair<double, int>>> pq;

       
        for (int i = 0; i < classes.size(); ++i) {
            double pass = classes[i][0];
            double total = classes[i][1];
          
            double current_ratio = pass / total;
            double new_ratio = (pass + 1) / (total + 1);
            pq.push({-(new_ratio - current_ratio), i}); 
        }

        
        while (extraStudents > 0 && !pq.empty()) {
            double neg_increase = pq.top().first;
            int idx = pq.top().second;
            pq.pop();

            
            classes[idx][0]++;
            classes[idx][1]++;
            extraStudents--;

            
            double pass = classes[idx][0];
            double total = classes[idx][1];
            double current_ratio = pass / total;
            double new_ratio = (pass + 1) / (total + 1);
            pq.push({-(new_ratio - current_ratio), idx});
        }

       
        double total_ratio = 0.0;
        for (const auto& cls : classes) {
            total_ratio += static_cast<double>(cls[0]) / cls[1];
        }

        return total_ratio / classes.size();
    }
};