class Solution {
public:

    vector<vector<int>> dp;

    bool solve(vector<int>& nums, int i, int target) {

        if (i == nums.size())
            return true;

        if (dp[i][target] != -1)
            return dp[i][target];

        // Keep nums[i]
        if ((nums[i] & 1) == target) {
            if (solve(nums, i + 1, target))
                return dp[i][target] = true;
        }

        // Subtract another element
        for (int j = 0; j < nums.size(); j++) {

            if (j == i)
                continue;

            int value = nums[i] - nums[j];

            if ((value & 1) == target) {
                if (solve(nums, i + 1, target))
                    return dp[i][target] = true;
            }
        }

        return dp[i][target] = false;
    }

    bool uniformArray(vector<int>& nums1) {

        int n = nums1.size();

        dp.assign(n, vector<int>(2, -1));

        if (solve(nums1, 0, 0))
            return true;

        dp.assign(n, vector<int>(2, -1));

        if (solve(nums1, 0, 1))
            return true;

        return false;
    }
};