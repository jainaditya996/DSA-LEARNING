class Solution {
public:
    bool isPowerOfTwo(int n) {
       
        if(n<=0){
           return false;
        }
     long long int i=1;
             while(i<=n){
            if(i==n){
                return true;
            }
            i*=2;
        }
        return false;
    }
};