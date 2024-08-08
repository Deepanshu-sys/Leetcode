class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int> st(nums.begin(),nums.end());
      for(int i = 0;i < k -1;i++)
      {
        st.pop();
      }
       return st.top();
    }
};