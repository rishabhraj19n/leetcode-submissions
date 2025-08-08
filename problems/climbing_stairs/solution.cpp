class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n; // Base cases: 1 way for n=1, 2 ways for n=2
        }

        int dp[n + 1];
        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};