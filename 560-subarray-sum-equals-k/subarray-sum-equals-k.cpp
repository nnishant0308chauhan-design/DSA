class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int ,int>mpp;
        int count=0;
        int prefix=0;
        mpp[0]=1;

        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];

            if(mpp.count(prefix-k)){
                count+=mpp[prefix-k];
            }

            mpp[prefix]++;
        }
        return count;
    }
};