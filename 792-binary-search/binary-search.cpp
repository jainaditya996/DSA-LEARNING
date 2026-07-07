class Solution {
public:

     int binary(vector<int>vec,int tar,int st, int end){
        if(st<=end){
            int mid=st+(end-st)/2;
            if(vec[mid]==tar){
                return mid;
            }else if(vec[mid]<=tar){
             return    binary(vec,tar,mid+1,end);
            }else{
               return   binary(vec,tar,st,mid-1);
            }
        }
        return -1;
     }
    int search(vector<int>& nums, int target) {
        int end=nums.size()-1;
          return binary(nums,target,0,end);
    }
};