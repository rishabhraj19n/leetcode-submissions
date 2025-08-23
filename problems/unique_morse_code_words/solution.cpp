#include <string>
#include <vector>
#include <set>

class Solution {
public:
    int uniqueMorseRepresentations(std::vector<std::string>& words) {
        std::vector<std::string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

        std::set<std::string> uniqueTransformations;

        for (const std::string& word : words) {
            std::string currentTransformation = "";
            for (char c : word) {
                currentTransformation += morse[c - 'a'];
            }
            uniqueTransformations.insert(currentTransformation);
        }

        return uniqueTransformations.size();
    }
};