#include <string>
#include <set>

class Solution {
public:
    bool doesAliceWin(std::string s) {
        std::set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int vowelCount = 0;
        for (char c : s) {
            if (vowels.count(c)) {
                vowelCount++;
            }
        }

        // If there are no vowels, Alice cannot make a move, so Bob wins.
        // Otherwise, Alice can always win by deleting the entire string.
        return vowelCount > 0;
    }
};