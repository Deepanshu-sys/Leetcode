class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int res = INT_MAX;
        for(auto x:nums)
        {
            if(abs(x) < abs(res))
            {
                res = x;
            }
            else if(abs(x) == abs(res))
            {
                res = max(res,x);
            }

        }
        return res;
    }
};