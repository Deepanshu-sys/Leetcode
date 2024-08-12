class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0;i < matrix.size();i++)
        {
            for(int j = 0;j < matrix[i].size();j++)
            {
                if(i==j) continue;
                else if (i < j) swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0;i < matrix.size();i++)
        {
            int st = 0,ed = matrix[i].size() -1;
            while(st < ed)
            {
                swap(matrix[i][st],matrix[i][ed]);
                st++;
                ed--;
            }
        }
    }
};