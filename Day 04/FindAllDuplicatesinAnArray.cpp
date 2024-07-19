class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> m;
        vector<int> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto x : m){
            int freq = x.second;
            if(freq > 1) ans.push_back(x.first);
        }
        return ans;
    }
};