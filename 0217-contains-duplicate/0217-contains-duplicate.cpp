class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> checked;
        for(int num:nums){
            if(checked[num]>=1)
            return true;
            checked[num]++;
        }
        return false;
    }
};