class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int>st;
        vector<int>ans;
        int mini=INT_MAX;
        int large=INT_MIN;
        for(auto x:nums){
            st.insert(x);
            mini=min(mini,x);
            large=max(large,x);
        }
        int i=mini;
        int j=large;
        while(i<j){
            if(!st.count(i)){
                   ans.push_back(i);
            }
            i++;

        }
        return ans;

    }
};