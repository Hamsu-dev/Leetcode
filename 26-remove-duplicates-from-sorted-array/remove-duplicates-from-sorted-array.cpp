class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        auto new_end = std::unique(nums.begin(), nums.end());
        nums.erase(new_end, nums.end());
    return nums.size();
    }
};