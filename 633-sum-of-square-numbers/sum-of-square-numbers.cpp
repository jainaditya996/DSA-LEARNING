class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c == 0 || c == 1) {
            return true;
        }

        long long strt = 0;
        long long end = sqrt(c);

        while (strt <= end) {
            long long sum = strt * strt + end * end;

            if (sum == c) {
                return true;
            } else if (sum > c) {
                end--;
            } else {
                strt++;
            }
        }

        return false;
    }
};