class Solution {
public:
    int mySqrt(int x) {
        int L = 0;
        int R = x;
        int value;
        while (L <= R)
        {
            long long mid = L + (R - L) / 2; 
            if (mid * mid == x)
            {
                return mid;
            }
            if (mid * mid < x) 
            {
                L = mid + 1;
                value = mid;
            }
            else
            {
                R = mid - 1;
            }
        }
        return value;
    }
};