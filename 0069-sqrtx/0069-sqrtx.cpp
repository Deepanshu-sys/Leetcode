class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x== 1)
        {
            return x;
        }

        int st = 1;
        int end = x;
        int mid = -1;

        while(st <= end)
        {
            mid = st + (end - st)/2;
            long long sqr = static_cast<long long>(mid) * mid;
            if(sqr > x)
            {
                end = mid -1;
            }
            else if(sqr == x)
            {
                return mid;
            }
            else
            {
                st = mid + 1;
            }
        }
        return static_cast<int>(round(end));
    }
};