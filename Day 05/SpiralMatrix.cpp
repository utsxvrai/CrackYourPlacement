class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<int> ans(n*m); 
        int left = 0, right = m-1, top = 0, bottom = n - 1;
        int index = 0;
        while(left <= right && top <= bottom) {
            for(int i=left; i<=right; i++) {
                ans[index++] = mat[top][i];
            }
            top++;
            for(int i=top;i<=bottom; i++) {
                ans[index++] = mat[i][right];
            }
            right--;
            if(top<=bottom) {
                for(int i=right; i>=left;i--){
                    ans[index++] = mat[bottom][i];
                }
                bottom--;
            }
            if(left <=right) {
                for(int i = bottom; i>=top; i--){
                    ans[index++] = mat[i][left];
                }
                left++;
            }
        }
        return ans;
    }
};