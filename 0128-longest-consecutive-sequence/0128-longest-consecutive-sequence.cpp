class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        s.reserve(nums.size());
        s.max_load_factor(0.25);
        for (int n : nums) s.insert(n);

        int best = 0;
        for (int n : s)
            if (!s.count(n - 1)) {
                int len = 1;
                while (s.count(++n)) len++;
                best = max(best, len);
            }
        return best;
    }
};