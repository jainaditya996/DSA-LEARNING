class Solution {
public:
    bool detectCapitalUse(string word) {
        bool fcap=false;
        int count=0;
        if(word[0]>='A'&&word[0]<='Z'){
            fcap=true;
            count++;
        }
        for(int i=1;i<word.length();i++){
                if(!fcap){
                    if(word[i]>='A' && word[i]<='Z'){
                        return false;
                    }
                }
                if(fcap){
                    if(word[i]>='A' && word[i]<='Z'){
                        count++;
                    }
                    
                }
        }
        if(fcap){
            if(count==1 || count==word.length()){
                return true;
            }else{
                return false;
            }

        }
        return true;
    }
};