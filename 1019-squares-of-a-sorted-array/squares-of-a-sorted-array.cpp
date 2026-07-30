class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int k=nums.size()-1;
        vector<int>ans(nums.size());
        
        while(left<=right){
            if(abs(nums[left])>abs(nums[right])){
                ans[k]=nums[left]*nums[left];
                left++;
                k--;
            }else{
                ans[k]=nums[right]*nums[right];
                right--;
                k--;
            }
        }
        return ans;

    }
};



/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }

};

*/