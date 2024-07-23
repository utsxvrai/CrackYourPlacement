class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> counts;
        int mt=nums.size() / 2;

       for(int num:nums){
         counts[num]++;

         if(counts[num] > mt){
            return num;
         }
       }
       return -1;  
    }
};