class Solution {
public:
    void fun(int n , vector<string> &ans , string &temp , int i, int j){
        if(i == n && j == n){
            ans.push_back(temp);
            return;
        }
        if(i < n){
            temp.push_back('(');
            fun(n,ans,temp,i+1,j);
            temp.pop_back();
        }
        if(j < n && j < i){
            temp.push_back(')');
            fun(n,ans,temp,i,j+1);
            temp.pop_back();
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        fun(n,ans,temp,0,0);
        return ans;
        
    }
};