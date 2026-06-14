#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {  
    string str = to_string(x), og = str;
    reverse(str.begin(), str.end());
    return (str == og) ? true : false;
    }
};