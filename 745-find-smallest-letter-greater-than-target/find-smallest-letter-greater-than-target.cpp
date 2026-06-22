class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int L = 0;
        int R = letters.size() - 1;

        while ( L <= R)
        {
            int mid = L + (R - L) / 2;

            if (letters[mid] > target)
            {
                R = mid - 1;
            }
            else
            {
                L = mid + 1;
            }
        }
        return L == letters.size() ? letters[0] : letters[L];
    }
};