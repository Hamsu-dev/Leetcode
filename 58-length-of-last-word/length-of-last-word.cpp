class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        
        while (i >= 0 && std::isspace(s[i]))
        {
            i--;
        }
        
        int length = 0;
        
        while (i >= 0 && !std::isspace(s[i]))
        {
            length++;
            i--;
        }
        
        return length;
    }
};