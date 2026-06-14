#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        //make string then compare with reverse list
        string str = to_string(x);
        string og = str;

        reverse(str.begin(), str.end());

        if (str == og)
        {
            return true;
        }
        return 0;
    }
};