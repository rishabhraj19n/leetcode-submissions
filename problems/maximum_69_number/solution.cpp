class Solution {
public:
    int maximum69Number (int num) {
        // Convert the integer to a string to easily manipulate individual digits.
        string s = to_string(num);

        // Iterate through the string to find the first '6'.
        for (char& c : s) {
            if (c == '6') {
                // If a '6' is found, change it to '9' and break the loop
                // because changing the leftmost '6' guarantees the maximum number.
                c = '9';
                break;
            }
        }

        // Convert the modified string back to an integer and return it.
        return stoi(s);
    }
};