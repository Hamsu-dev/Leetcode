#include <map>

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000} };

        int final = 0;

        // Input: s = "MCMXCIV"
        for (int i = 0; i < s.size(); i++)
        {
            if ((i + 1) < s.size() && (roman[s[i]] < roman[s[i + 1]]))
            {
                final -= roman[s[i]];
            }
            else
            {
                final += roman[s[i]];
            }
        }
        return final;
    }
};