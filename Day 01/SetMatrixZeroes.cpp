// TakeAway: Use a vector to store the indexes of the zeroes and then iterate over the vector to set the rows and columns to zero.
// Time Complexity: O(n*m)
// Space Complexity: O(n)
// https://leetcode.com/problems/set-matrix-zeroes/


class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<pair<int,int>> z;
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++){
                if(mat[i][j] == 0){
                    z.push_back({i,j});
                }
            }
        }
        
        int k = z.size();
        for(int i = 0 ; i < k ; i++){
            int row = z[i].first;
            int col = z[i].second;
            
            int g = 0;
            while(g<m){
                mat[row][g++]=0;
            }
            int h = 0;
            while(h<n){
                mat[h++][col]=0;
            }
        }
        
    }
};