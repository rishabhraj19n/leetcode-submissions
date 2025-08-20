class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        // Create a DP table, or modify the matrix in-place for O(1) space
        // For simplicity, we'll use a separate DP table here.
        vector<vector<int>> dp(n, vector<int>(m, 0));
        
        int totalSquares = 0;

       
        for (int i = 0; i < n; ++i) {
            dp[i][0] = matrix[i][0];
            totalSquares += dp[i][0];
        }
        for (int j = 1; j < m; ++j) { 
            dp[0][j] = matrix[0][j];
            totalSquares += dp[0][j];
        }

       
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                if (matrix[i][j] == 1) {
                    dp[i][j] = min({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]}) + 1;
                } else {
                    dp[i][j] = 0;
                }
                totalSquares += dp[i][j];
            }
        }
        
        return totalSquares;
    }
};