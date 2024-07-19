class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        
        vector<int> pre(k, 0);
        pre[0] = 1;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            sum += nums[i];
            sum = ((sum % k) + k) % k; 
            pre[sum]++;  //increamentinbg the frequency
        }
        
        long long ans = 0;
        for(int i = 0; i < k; i++) {
            long long m = pre[i];
            ans += (m * (m - 1)) / 2; //nc2
        }
        
        
        return static_cast<int>(ans);
        
    }
};