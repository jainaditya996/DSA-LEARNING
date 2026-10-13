class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<int>st;
        st.push(s[0]);
        int i=1;
        while(i<n){
            if(st.empty()){
                st.push(s[i]);
                i++;
            }
            if(s[i]==')'){
                if(st.top()=='('){
                    st.pop();
                    i++;
                    continue;
                }
                else{
                    return false;
                }
            }
           else  if(s[i]=='}'){
                if(st.top()=='{'){
                    st.pop();
                    i++;
                    continue;
                }
                else{
                    return false;
                }
            }
           else  if(s[i]==']'){
                if(st.top()=='['){
                    st.pop();
                    i++;
                    continue;
                }
                else{
                    return false;
                }
            }
            else{
                st.push(s[i]);
                i++;
            }

        }
        if(st.empty()){
            return true;
        }
        return false;
    }
};