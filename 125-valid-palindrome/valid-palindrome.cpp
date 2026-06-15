#include <cctype>
#include <iostream>

class Solution {
public:
    bool isPalindrome(string s) {
        string final_str = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isalnum(s[i]))
                final_str += tolower(s[i]); 
        }
        string og = final_str;
        reverse(final_str.begin(), final_str.end());
        return (og == final_str) ? true : false;
    }
};