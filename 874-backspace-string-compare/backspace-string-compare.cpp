class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return out(s)==out(t);

    }

    string out(string s){
        string word="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'){
                if(!word.empty())
                word.pop_back();
            }else{
                word+=s[i];
            }
        }
        return word;
    }
};