class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int ssize=s.size();
        int tsize=t.size();
        while(i<ssize && j<tsize){
            if(s[i]==t[j])i++;
            j++;
        }
        if(i!=ssize)return false;
        return true;
    }
};