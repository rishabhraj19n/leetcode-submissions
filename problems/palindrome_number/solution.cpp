class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers cannot be palindromes (e.g., -121 is not 121-)
        // Numbers ending in 0 (except for 0 itself) cannot be palindromes
        // (e.g., 10, 200, etc., would become 01, 002 when reversed)
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        // The loop continues as long as x is greater than revertedNumber.
        // This effectively reverses only half of the number.
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10; // Append last digit of x to revertedNumber
            x /= 10; // Remove last digit from x
        }

        // For even-digit numbers, x and revertedNumber will be equal at the end.
        // For odd-digit numbers, x will be the middle digit, and revertedNumber will have one more digit.
        // In the odd-digit case, we need to remove the last digit from revertedNumber to compare.
        return x == revertedNumber || x == revertedNumber / 10;
    }
};