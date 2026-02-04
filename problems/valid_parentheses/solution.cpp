#include <stack>
#include <string>

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> st;
        for (char c : s) {
            // Push opening brackets onto the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // Handle closing brackets
            else {
                // If stack is empty or top doesn't match, it's invalid
                if (st.empty()) return false;
                if ((c == ')' && st.top() != '(') ||
                    (c == '}' && st.top() != '{') ||
                    (c == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop(); // Matching pair found, remove from stack
            }
        }
        // If stack is empty, all brackets were matched correctly
        return st.empty();
    }
};
