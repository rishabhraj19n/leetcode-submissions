#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Solution {
public:
    int maxFreqSum(std::string s) {
        
        std::vector<int> count(26, 0);
        for (char c : s) {
            count[c - 'a']++;
        }

        int maxVowel = 0;
        int maxConsonant = 0;

        
        std::string kVowels = "aeiou";
        for (int i = 0; i < 26; ++i) {
            char current_char = 'a' + i;
            if (kVowels.find(current_char) != std::string::npos) {
              
                maxVowel = std::max(maxVowel, count[i]);
            } else {
             
                maxConsonant = std::max(maxConsonant, count[i]);
            }
        }
        
       
        return maxVowel + maxConsonant;
    }
};

