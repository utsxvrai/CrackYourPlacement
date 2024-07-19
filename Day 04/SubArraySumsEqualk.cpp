class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> prefix(nums.size()); 
        prefix[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }
        unordered_map<int, int> mm;
        int count = 0;
        for (int i = 0; i < prefix.size(); i++) {
            if (prefix[i] == k) count++;
            if (mm.find(prefix[i] - k) != mm.end()) count += mm[prefix[i] - k];
            mm[prefix[i]]++; // Map the complement
        }
        return count;
    }
};