#include <vector>
#include <string>
#include <unordered_set>
#include <cctype> // For std::tolower

class Solution {
public:
    std::vector<std::string> findWords(std::vector<std::string>& words) {
        std::unordered_set<char> row1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        std::unordered_set<char> row2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        std::unordered_set<char> row3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};

        std::vector<std::string> result;

        for (const std::string& word : words) {
            if (word.empty()) {
                continue;
            }

            int currentRow = 0; 

            
            char firstCharLower = std::tolower(word[0]);
            if (row1.count(firstCharLower)) {
                currentRow = 1;
            } else if (row2.count(firstCharLower)) {
                currentRow = 2;
            } else if (row3.count(firstCharLower)) {
                currentRow = 3;
            }

            bool belongsToOneRow = true;
            for (char c : word) {
                char lowerC = std::tolower(c);
                if (currentRow == 1 && !row1.count(lowerC)) {
                    belongsToOneRow = false;
                    break;
                } else if (currentRow == 2 && !row2.count(lowerC)) {
                    belongsToOneRow = false;
                    break;
                } else if (currentRow == 3 && !row3.count(lowerC)) {
                    belongsToOneRow = false;
                    break;
                }
            }

            if (belongsToOneRow) {
                result.push_back(word);
            }
        }
        return result;
    }
};