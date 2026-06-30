class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>m1;
        unordered_map<string,char>m2;
    
        int count =0;
              for(int i=0;i<s.size();i++){
                if(s[i]==' ') count++;
              }

           if(count !=pattern.length()-1) return false;







        int j=0;
        for(int i=0;i<pattern.length();i++){
             string  word="";
                
                while(j<s.length()){
                
                if(s[j]==' '){
                  j++;
                  
                  break;
                            }
                word+=s[j];
                j++;
                              }
            if(m1.count(pattern[i])){
                if(m1[pattern[i]]!=word){
                    return false;
                }}else{
                   m1[pattern[i]]=word;
                }
            
             if(m2.count(word)){
                if( m2[word]!=pattern[i]){
                    return false;
                }}else{
                    m2[word]=pattern[i];
                }
            
        }
        return true;
    }
};