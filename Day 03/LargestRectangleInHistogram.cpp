

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> st;
        int n = heights.size();
        int res=0;
        int start;
        for(int  i = 0 ; i < n ; i++){
             start = i;
            while((!st.empty()) and st.top().second > heights[i]){
                int idx = st.top().first;
                int h = st.top().second;
                st.pop();
                res = max(res, h * (i - idx));
                start =idx;
            }
            st.push({start,heights[i]});
        }
        while(!(st.empty())){
            int idx = st.top().first;
            int h = st.top().second;
            st.pop();
            res = max(res, h * (n-idx));
            
        }
        return res;
    }
};