class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int ans = 0;
        for (auto x : nums) {
            st.insert(x);
        }
        for (auto x : st) {
            if (st.count(x-1) == 0) {
                int count = 1;
                int curr = x;

                while (st.count(curr + 1)) {
                    count++;
                    curr++;
                }
                ans = max(ans, count);
            }
            
        }
        return ans;
    }
};