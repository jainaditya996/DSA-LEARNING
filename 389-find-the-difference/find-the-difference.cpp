class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>store_s(26,0);
        vector<int>store_t(26,0);

        for(int i=0;i<s.length();i++){
            store_s[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            store_t[t[i]-'a']++;
        }

        for(int i=0;i<store_s.size();i++){
            if(store_s[i]!=store_t[i]){
                return i+'a';
            }
        }
        return 'n';
    }
};