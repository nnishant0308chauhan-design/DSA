class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double ans=INT_MIN;

        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        ans=sum;
        for(int i=k;i<nums.size();i++){
            
            sum+=nums[i];
            sum-=nums[i-k];
            ans=max(ans,sum);
        }
        
        return ans/k;
    }
};