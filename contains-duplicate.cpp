class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet;
        bool hasDuplicate = false;
        for(int num: nums){
            if(numSet.count(num) > 0){
                hasDuplicate = true;
                break;
            }
            numSet.insert(num);
        }
        return hasDuplicate;
    }
};