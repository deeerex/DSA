class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans = INT_MAX;
        int n = landStartTime.size();
        int m = waterStartTime.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // Land -> Water
                int t1 = max(landStartTime[i] + landDuration[i],
                             waterStartTime[j])
                         + waterDuration[j];
                // Water -> Land
                int t2 = max(waterStartTime[j] + waterDuration[j],
                             landStartTime[i])
                         + landDuration[i];
                ans = min(ans, min(t1, t2));
            }
        }
        return ans;
    }
};