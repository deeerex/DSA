class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> visited;
        for (int num : nums) {
            if (visited[num] >= 1)
                return true;
            visited[num]++;
        }
        return false;
    }
};