#include <string>
#include <vector>
#include <algorithm>
#include <set>

class Solution {
private:
    bool isVowel(char c) {
        // Use a set or a simple check for performance
        // For static data, string_view can be efficient
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
public:
    std::string sortVowels(std::string s) {
        std::vector<char> vowels;
        
        // 1. Collect all vowels from the string
        for (char c : s) {
            if (isVowel(c)) {
                vowels.push_back(c);
            }
        }
        
        // 2. Sort the collected vowels by ASCII value
        std::sort(vowels.begin(), vowels.end());
        
        int vowelIndex = 0;
        std::string result = "";
        
        // 3. Build the new string, replacing vowels with sorted ones
        for (char c : s) {
            if (isVowel(c)) {
                result += vowels[vowelIndex++];
            } else {
                result += c;
            }
        }
        
        return result;
    }
};
