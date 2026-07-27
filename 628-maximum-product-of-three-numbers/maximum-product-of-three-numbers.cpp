class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int a=INT_MIN;
        int b=INT_MIN;
        int c=INT_MIN;

        int as=INT_MAX;
        int bs=INT_MAX;
        int cs=INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>a){
                c=b;
                b=a;
                a=nums[i];
            }else if(nums[i]>b){
                c=b;
                b=nums[i];
            }else if(nums[i]>c){
                c=nums[i];
            }
        }
         for(int i=0;i<nums.size();i++){
            if(nums[i]<as){
                cs=bs;
                bs=as;
                as=nums[i];
            }else if(nums[i]<bs){
                cs=bs;
                bs=nums[i];
            }else if(nums[i]<cs){
                cs=nums[i];
            }
        }
        int product1=INT_MIN;
        int product2=INT_MIN;
         int product3=INT_MIN;
        if((as<0)&&(bs<0)){
              product1=as*bs*a;
        }else if((as<0)&&(cs<0)){
              product2=as*cs*a;
        }else if((bs<0)&&(cs<0)){
              product3=bs*cs*a;
        }
        int ans=max({product1,product2,product3,a*b*c});
        
        return ans;
    }
};