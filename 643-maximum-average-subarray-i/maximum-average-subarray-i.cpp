class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double max_sum;

        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        max_sum=sum;
        

        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            
            max_sum=max(max_sum,sum);
        }
        double ans=max_sum/k;
        return ans;
    }
};