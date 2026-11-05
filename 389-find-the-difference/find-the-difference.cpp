class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i=0;i<t.length();i++){
            if(i!=t.length()-1){
                if(s[i]!=t[i]){
                   return t[i];
                }
            }else{
            return t[i];
            }
        }
        return t[0];
    }
};