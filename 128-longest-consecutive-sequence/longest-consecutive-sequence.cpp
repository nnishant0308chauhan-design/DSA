class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int m=1;
        if(nums.empty())return 0;
        if(nums.size()==1) return 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                count++;
                m=max(m,count);
               
            }else if(nums[i]==nums[i-1]){
                m=max(m,count);
                continue;
            }
            else{
                count=1;
            }
               
        }
        return m;
    }
};