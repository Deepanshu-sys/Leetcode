class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int res = 0;

        for(int i = 1;i<nums.size();i++)
        {
            if(nums[res] < nums[i])
            {
                res = i;
            }
        }
        return res;
    }
};