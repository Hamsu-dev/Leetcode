#include <iostream>
#include <string>
#include <algorithm>

class Solution {
public:
    int reverse(int x) {
        // just want digits only

        string str = to_string(x);
        string og;

        string limit = (x < 0) ? "2147483648" : "2147483648";

        for (char c : str)
        {
            if (isdigit(c))
            {
                og += c;
            }
        }

        // Now og is digits only
        std::reverse(og.begin(), og.end());

        if (og.length() > limit.length() || (og.length() == limit.length() && og > limit))
        {
            return 0;
        }

        int numbers = stoi(og);
        return (x < 0) ? -numbers : numbers;
    }
};