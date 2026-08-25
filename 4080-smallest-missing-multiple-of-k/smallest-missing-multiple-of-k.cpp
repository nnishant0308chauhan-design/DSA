class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int ans;
        for(auto x:nums){
            if(x%k==0){
                mpp[x]=x;
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(!mpp.count(k*i)){
                ans=i;
               return k*i;
            }
        }
        return k*(nums.size()+1);
    }
};