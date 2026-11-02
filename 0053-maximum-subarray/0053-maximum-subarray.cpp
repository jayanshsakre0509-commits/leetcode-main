class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    if (nums.empty()) return 0;
    int maxsum = nums[0];
    int currsum = nums[0];
    for (size_t i = 1; i < nums.size(); ++i) {
        currsum = max(nums[i], currsum + nums[i]);
        maxsum = max(maxsum, currsum);
    }
    return maxsum;
    }
};