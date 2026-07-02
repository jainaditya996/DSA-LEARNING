class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]*nums[i-1];
           
        }
        int suffix=nums[n-1];
        for(int i=n-2;i>=0;i--){
           
            ans[i]*=suffix;
             suffix*=nums[i];
        }
        return ans;
    }
};

//code following all the statements 
//method commonly known as suffix and prefix method
//in this method i created 1 extra space ans which stores the value of prefixes followed by multiplication of respective suffix in another loop

//here the space complaxity is O(1)
//while timecomplexity is O(2n)----> which collectively means O(n)
