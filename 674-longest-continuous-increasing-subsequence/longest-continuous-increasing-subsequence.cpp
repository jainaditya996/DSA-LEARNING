class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int Max=0;
        int count=1;
        if(nums.size()==1){
            return 1;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]){
                count++;

            }else{
                count=1;
            }

            Max=max(Max,count);
        }
        return Max;
    }
};