class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }

        long long left = 1; // Use long long to prevent overflow when calculating mid * mid
        long long right = x;
        long long ans = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2; // Calculate mid to avoid overflow

            if (mid * mid == x) {
                return mid;
            } else if (mid * mid < x) {
                ans = mid; // Potential answer, try a larger value
                left = mid + 1;
            } else {
                right = mid - 1; // Mid is too large, try a smaller value
            }
        }
        return ans;
    }
};