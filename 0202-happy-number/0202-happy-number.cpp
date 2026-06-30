class Solution {
public:
       
        
    bool isHappy(int n) {
        set<int>s;
        int sum=n;
       while(sum!=1){
              sum=0;
             while(n>0){
                int r=n%10;
                sum+=r*r;
                n/=10;
             }
           n=sum;
           
           if(s.find(sum)!=s.end()){
            return false;
           }    
           s.insert(sum);
          
    }
        return true;}
    
};