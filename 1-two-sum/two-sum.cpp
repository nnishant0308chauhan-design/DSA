class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        int rem;
        for(int i=0;i<nums.size();i++){
            rem=target-nums[i];
            if(mpp.count(rem)){
                return{mpp[rem],i};
            }
            mpp[nums[i]]=i;
        }
        return {};
    }
};