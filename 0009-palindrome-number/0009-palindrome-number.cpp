class Solution {
public:
    bool isPalindrome(int x) {
        int64_t rev = 0;
        int n = abs(x);
        while(n != 0)
        {
            rev = rev * 10 + (n % 10);
            n/= 10;
        }

        if(rev == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};