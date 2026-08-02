class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
       for(auto x:st){
        if(st.count(x-1)==0){
            int curr=x;
            int count=1;

            while(st.count(curr+1)){
                count++;
                curr++;
            }
            ans=max(ans,count);
        }
       }
       return ans;
    }
};