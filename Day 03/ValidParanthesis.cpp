

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0  ; i < s.size() ; i++){
            char ch = s[i];
            
            if(ch =='(' or ch =='{' or ch == '[') st.push(ch);
            else{
                if(!st.empty()){
                    char t  = st.top();
                    if((ch == ')' && t == '(') or
                        (ch == '}' && t == '{')or
                        (ch == ']' && t == '['))
                        st.pop();
                    
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};