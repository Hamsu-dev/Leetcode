class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = nums.size();
        for( int i = 0; i<nums.size(); i++){
            if (nums[i] == val)
            {
                nums[i] = 101;
            }
        }

        sort(nums.begin(), nums.end());
        for ( int i = 0; i < nums.size(); i++){
            if (nums[i] == 101) {
                count--;
            }
        }
        return count;
    }
};