class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";
        int n = a.length() -1;
        int m = b.length() -1;

        int carry = 0;
        while(n>=0 || m>=0 || carry)
        {
            if(n>= 0)
            {
                carry += a[n--] - '0';
            }
            if(m >= 0)
            {
                carry += b[m--] - '0';
            }
            s += carry % 2 + '0';
            carry /= 2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};