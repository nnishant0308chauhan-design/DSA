class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=0;
        int ans=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
          
          int a=i+1;
          int j=nums.size()-1;

          while(a<j){
            sum=nums[i]+nums[j]+nums[a];
            if(abs(sum-target)<abs(ans-target)){
                ans=sum;
            }
            
            if(sum<target){
                a++;
            }
            else{
                j--;
            }
          } 

        }
        return ans;
    }
};