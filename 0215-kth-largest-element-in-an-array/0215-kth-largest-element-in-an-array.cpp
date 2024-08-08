class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int> st(nums.begin(),nums.end());
       k--;
       while(k-- && !st.empty())
       {
            st.pop();
       }
       return st.top();
    }
};