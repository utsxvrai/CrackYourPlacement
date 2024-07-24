class RandomizedCollection {
private:
    vector<int> nums;
    unordered_map<int, unordered_set<int>> valToIndex;

public:
    RandomizedCollection() {}
    
    bool insert(int val) {
        nums.push_back(val);
        valToIndex[val].insert(nums.size() - 1);
        return valToIndex[val].size() == 1;
    }
    
    bool remove(int val) {
        if (valToIndex.find(val) == valToIndex.end()) {
            return false;
        }
        
        int indexToRemove = *valToIndex[val].begin();
        valToIndex[val].erase(indexToRemove);
        
        if (indexToRemove < nums.size() - 1) {
            int lastVal = nums.back();
            nums[indexToRemove] = lastVal;
            valToIndex[lastVal].erase(nums.size() - 1);
            valToIndex[lastVal].insert(indexToRemove);
        }
        
        nums.pop_back();
        
        if (valToIndex[val].empty()) {
            valToIndex.erase(val);
        }
        
        return true;
    }
    
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};
/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */