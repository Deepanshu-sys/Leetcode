class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());

        vector<vector<int>> ans(2);

        for(int x:nums1)
        {
            if(!set2.count(x))
            {
                ans[0].push_back(x);
                set2.insert(x);
            }
        }
        for(int x:nums2)
        {
            if(!set1.count(x))
            {
                ans[1].push_back(x);
                set1.insert(x);
            }
        }

        return ans;

    }
};