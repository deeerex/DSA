class Solution {
public:
    int minElement(vector<int>& nums) {
        int min_sum = INT_MAX;
        for(int num:nums){
            int csum=0;
        while(num>0){
            csum+=num%10;
            num/=10;
        }
        min_sum =min(min_sum,csum);
        }
        return min_sum;
    }
};