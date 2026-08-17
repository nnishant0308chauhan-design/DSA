class Solution {
public:

  bool enough(vector<int>& nums, int m, int k,int mid){
     int cons=0;
     int btq=0;

     for(int i=0;i<nums.size();i++){
        if(nums[i]<=mid){
            cons++;
            if(cons==k){
                btq++;
                cons=0;
                if(btq==m){
                    return true;
                }
            }
        }else{
            cons=0;
        }

     }
     return false;
  }


    int minDays(vector<int>& nums, int m, int k) {
        int mini=INT_MAX;
        int maxi=0;
        for(int x:nums){
            mini=min(mini,x);
            maxi=max(maxi,x);
        }
        if ((long long)m * k > nums.size()) {
    return -1;
}
        int right=maxi;
        int left=mini;
        while(left<right){
            int mid=(left+right)/2;
            if(enough(nums,m,k,mid)){
                right=mid;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};