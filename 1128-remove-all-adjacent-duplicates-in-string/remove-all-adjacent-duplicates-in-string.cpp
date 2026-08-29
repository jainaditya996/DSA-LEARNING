class Solution {
public:
    string removeDuplicates(string s) {
          if(s.empty()){
            return s;
          }

          stack<char>st;
          st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(!st.empty()&&st.top()==s[i]){
                 st.pop();
            }else{
                st.push(s[i]);
            }
        }
          
          s="";
          
        while(!st.empty()){
             s+=st.top();
             st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};