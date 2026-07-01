class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     int  count =0;
        for(int x : nums){
            if(x==0){
                count++;
            }
        }
     int   n=nums.size();
        if(count>=2){
          for(int i=0;i<n;i++){
            nums[i]=0;
          }
        return nums;
        }
        if(count==1){
            int prod=1;
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    prod*=nums[i];
                }
            }
            for(int i=0;i<n;i++){
                if(nums[i]==0){
                    nums[i]=prod;
                    
                }else{
                    nums[i]=0;
                }
            }
        }
        if(count==0){
            int prod=1;
              for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    prod*=nums[i];
                }
            }
            for(int i=0;i<n;i++){
                nums[i]=prod/nums[i];
            }
        }
        return nums;
    }
};