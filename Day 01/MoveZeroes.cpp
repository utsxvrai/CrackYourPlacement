// TakeAway : Two pointer approach
// Time Complexity : O(n)
// Space Complexity : O(1)
// https://leetcode.com/problems/move-zeroes/

class Solution {
public:
            int j= 0;

    void moveZeroes(vector<int>& nums) {
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(nums[i] != 0){
                swap(nums[i],nums[j++]);
            }
        }
        
    }
};