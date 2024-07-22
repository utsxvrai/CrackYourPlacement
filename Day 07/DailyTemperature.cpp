class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        vector<int> res(n);
        stack<pair<int, int>> st;
        
        for(int  i = 0 ; i < n ; i++){
            int crr = i;
            int temp = t[i];
            
            while(!st.empty() && st.top().second < temp){
                int pev = st.top().first;
                int ptemp = st.top().second;
                
                st.pop();
                
                res[pev] = crr - pev;
                
            }
            st.push({crr,temp});
        }
        return res;
        
        
    }
};