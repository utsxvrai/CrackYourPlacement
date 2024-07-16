// TakeAway: Two pointer approach
// Time Complexity: O(n)
// Space Complexity: O(1)
// https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low(0) , mid(0) , high(nums.size() - 1);
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid]  , nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1){
                mid++;
            }
            else{
                swap(nums[high] , nums[mid]);
                high--;
            }
        }
        
    }
};