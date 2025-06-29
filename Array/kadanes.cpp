class Solution {
public:
    int maxSubArray(vector<int>& nums) {
            
        int CurSum = 0;
        int ans = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            CurSum += nums[i];
            ans = max(ans, CurSum);
            if (CurSum < 0) CurSum = 0;  // reset if sum goes negative
        }

        return ans;
    }
};