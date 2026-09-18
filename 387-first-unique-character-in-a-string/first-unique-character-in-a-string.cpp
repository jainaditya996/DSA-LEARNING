class Solution {
public:


    int firstUniqChar(string s) {
        queue<char>Q;
        int freq[26]={0};
        for(int i=0;i<s.length();i++){
              Q.push(s[i]);
            freq[s[i]-'a']++;

        }

        int count=0;
        while(!Q.empty()){
            if(freq[Q.front()-'a']==1){
                return count;
            }
            Q.pop();
            count++;
        }

        return -1;
    }
};