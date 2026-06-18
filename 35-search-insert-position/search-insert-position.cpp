class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int index = 0;
        for (int i = 0; i < nums.size(); i++, index++)
        {
            if (nums[i] == target)
            {
                break;
            }
            else if (i < nums.size() - 1 && nums[i] <= nums[i + 1] && target > nums[i] && target <= nums[i + 1])
            {
                index++;
                break;
            }
            else if (nums.back() < target)
            {
                index = nums.size();
                break;
            }
            else if (nums[i] > target)
            {
                break;
            }
        }
        return index;
    }
};