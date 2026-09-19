class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int f=0;

        int count=0;
        while(t[k]>0){
            if(t[f]>0){
                 t[f]-=1;
                
               
                count++;
            }
           f=(f+1)%t.size();
        }
        return count;
    }
};