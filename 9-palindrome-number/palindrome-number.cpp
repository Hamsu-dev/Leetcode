#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {  
    string str = to_string(x), og = str;
    reverse(str.begin(), str.end());
    if (str == og){
        return true;
    }
    return 0;
    }
};