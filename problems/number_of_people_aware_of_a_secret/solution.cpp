class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        long long MOD = 1e9 + 7;
        vector<long long> dp(n, 0); // dp[i] = number of people who learned secret on day i+1
        dp[0] = 1; // On day 1, one person discovers the secret

        long long share = 0; // Number of people currently sharing the secret

        for (int i = 1; i < n; ++i) {
            // People who can start sharing on day i+1
            if (i - delay >= 0) {
                share = (share + dp[i - delay]) % MOD;
            }
            // People who forget on day i+1
            if (i - forget >= 0) {
                share = (share - dp[i - forget] + MOD) % MOD; // Add MOD to handle negative result
            }
            dp[i] = share; // Number of new people on day i+1
        }

        long long ans = 0;
        // Sum up people who still know the secret on day n
        for (int i = n - forget; i < n; ++i) {
            ans = (ans + dp[i]) % MOD;
        }
        return ans;
    }
};