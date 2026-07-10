class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set<int>window;
        for(int i=0;i<nums.size();i++){

            if(i>k){
                window.erase(nums[i-k-1]);
            }
            
            if(window.count(nums[i])){
                return true;
            }
            
                window.insert(nums[i]);         
            
        }
        return false;
    }
};








/*class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.count(nums[i])&& i-mpp[nums[i]]<=k ){
                return true;
            }
            mpp[nums[i]]=i;
        }
        return false;
    }
};*/