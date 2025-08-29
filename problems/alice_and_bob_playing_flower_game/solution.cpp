class Solution {
public:
    long long flowerGame(int n, int m) {
        // Count even and odd numbers for x in the range [1, n]
        long long even_n = n / 2;
        long long odd_n = (n + 1) / 2;

        // Count even and odd numbers for y in the range [1, m]
        long long even_m = m / 2;
        long long odd_m = (m + 1) / 2;

        // Alice wins if x is even and y is odd, or if x is odd and y is even.
        long long result = even_n * odd_m + odd_n * even_m;
        
        return result;
    }
};