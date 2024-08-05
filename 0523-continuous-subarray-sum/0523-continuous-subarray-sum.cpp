class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if (nums.size() < 2) {
            return false;
        }
        unordered_map<int, int> mp;

        mp[0] = -1;

        int TotalSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            TotalSum += nums[i];

            int rem = TotalSum % k;

            if (mp.find(rem) != mp.end()) {
                if (i - mp[rem] >= 2) {
                    return true;
                }
            } else {
                mp[rem] = i;
            }
        }
        return false;
    }
};