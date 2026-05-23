class Solution {
public:
   bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;          // empty set to track visited numbers

    for (int num : nums) {            // iterate through each number
        if (seen.count(num)) {        // if num already in set → duplicate!
            return true;
        }
        seen.insert(num);             // otherwise, mark it as seen
    }

    return false;                     // no duplicates found
}
};

