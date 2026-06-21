class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int lastDigit = digits.size()-1;
        digits[lastDigit]++;

        for (int i = lastDigit; i >= 0; i--)
        {
            if (digits[i] == 10 && i-1 < 0)
            {
                digits[i] = 0;
                digits.insert(digits.begin(), 1);
            }
            if (digits[i] == 10)
            {
                digits[i-1]++;
                digits[i] = 0;
            }
        }
        return digits;
    }
};