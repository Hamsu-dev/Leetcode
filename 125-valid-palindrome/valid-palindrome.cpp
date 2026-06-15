#include <cctype>
#include <iostream>

class Solution {
public:
    bool isPalindrome(string s) {
        // convert all upper to lower case
        // removing all non alphanumeric characters remove everythign but characters and letters

        string final_str = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (isalnum(s[i]))
            {
                final_str += tolower(s[i]); 
            }
        }

        string og = final_str;
        reverse(final_str.begin(), final_str.end());

        return (og == final_str) ? true : false;
    }
};