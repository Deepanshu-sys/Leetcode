class Solution {
public:
    int arraySign(vector<int>& nums) {
        int product = 1;
        for(auto x:nums)
        {
            if(x > 0)
            {
                x = 1;
            }
            else if (x < 0)
            {
                x = -1;
            }
            product*= x;
        }

        if(product == 0)
        {
            return 0;
        }
        else if(product >= 1)
        {
            return 1;
        }
        else if (product < 0)
        {
            return -1;
        }
        return 0;
    }
};