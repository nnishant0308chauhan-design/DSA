class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int n=nums.size()-1;
        int a,b;
        int ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
                a=i;
            }
             if(nums[i]<mini){
                mini=nums[i];
                b=i;
            }
        }
       int left = max(a + 1, b + 1);
       int right = max(n - a + 1, n - b + 1);
       int both = min(a + 1, n - a + 1) + min(b + 1, n - b + 1);

       return min({left, right, both});
    }
};