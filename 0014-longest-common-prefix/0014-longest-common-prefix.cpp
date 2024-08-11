class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = INT_MAX;
        for(auto x:strs)
        {
            int temp = x.length();
            size = min(size,temp);
        }

        int res = 0;
        string s = "";
        for(int i = 0;i < size;i++)
        {
            bool flag = true;
            char ch = strs[0][res];
            for(int i = 0;i < strs.size();i++)
            {
                if(strs[i][res] != ch)
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
            {
                s+=ch;
                res++;
            }
        }
        return s;
    }
};