class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int L = 0;
        int R = nums.size() -1;
        
        while (L <= R)
        {
            int mid = L + (R - L) / 2;
            if(nums[mid] == mid)
            {
                L = mid + 1;
            }
            if (nums[mid] > mid)
            {
                R = mid - 1;
            }
        }
        return L;
    }
};