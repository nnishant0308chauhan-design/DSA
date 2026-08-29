class Solution {
public:
      bool split(vector<int>& nums, int k,long long maxsum){
        int count=1;
        long long sum=0;
        for(int x:nums){
            if(sum+x>maxsum){
                count++;
                sum=x;
            }else{
                sum+=x;
            }
        }
        return count<=k;
      }

    int splitArray(vector<int>& nums, int k) {
        int mini=0;
        int maxi=0;
        for(int x:nums){
            mini=max(mini,x);
            maxi+=x;
        }
        long long left=mini;
        long long right=maxi;
        while(left<=right){
            long long mid=(left+right)/2;

            if(split(nums,k,mid)){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};