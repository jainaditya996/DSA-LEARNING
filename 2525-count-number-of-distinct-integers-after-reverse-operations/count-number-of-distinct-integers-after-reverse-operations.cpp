class Solution {
public:
           int reverse(int n){
            int rev=0;
                while(n>0){
                  int  r=n%10;
                    n/=10;
                    rev=rev*10+r;
                }
                return rev;
           }

    int countDistinctIntegers(vector<int>& nums) {
        int j=nums.size();
        for(int i=0;i<j;i++){
              int m= reverse(nums[i]);
              nums.push_back(m);
        }
        unordered_set<int>st;
        for(int x:nums){
            st.insert(x);
        }
        return st.size();
    }
};