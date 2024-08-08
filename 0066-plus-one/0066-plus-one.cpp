class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        int n = d.size();
        if(d[n -1] != 9)
        {
            d[n -1]++;
        }
        else
        {
            int i = n -1;
            while(i >= 0 && d[i] == 9)
            {
                d[i] = 0;
                i--;
            }
            if(i < 0)
            {
                d.insert(d.begin(),1);
            }
            else
            {
                d[i]++;
            }
        }
        return d;
    }
};