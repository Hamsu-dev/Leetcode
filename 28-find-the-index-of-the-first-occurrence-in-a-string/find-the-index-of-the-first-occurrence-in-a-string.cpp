class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        // sadbadsad = 9
        // sad = 3
        // n - m = 9 - 3 = 6
        // i<= 6
        // if haystack.substring(position 0 to m = 3)
        for (int i = 0; i <= n-m; i++)
        {
            if (haystack.substr(i, m) == needle)
            {
                return i;
            }
        }
        return -1;
    }
};