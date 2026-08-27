class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int n=s.length();
        int i=0;
        while(i<n){
            string word="";
           while(i<n&&s[i]!=' '){
            word+=s[i];
            i++;
           }
          reverse(word.begin(),word.end());
        ans+=word;
        if(i!=n){
        ans+=' ';
        }
        i++;
        }
        return ans;
        
    }
     string reversestring(string word){
        int i=0,j=word.length()-1;
        while(i<j){
            swap(word[i],word[j]);
            i++,j--;
        }
        return word;
     }
};