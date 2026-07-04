class Solution {
public:
    bool isPowerOfFour(int n) {
       
        if(n<=0){
           return false;
        }
     long long int i=1;
             while(i<=n){
            if(i==n){
                return true;
            }
            i*=4;
        }
        return false;
    }
};