class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi=0;
        for(int x:nums){
            maxi=max(maxi,x);
        }
        int left=1;
        int right=maxi;

        while(left<right){
            int mid=(left+right)/2;

            int th=0;
            for(int x:nums){
                th+=(mid+x-1)/mid;
            }
            if(th>threshold){
                 left=mid+1;
            }else{
               right=mid;
            }
        }
        return left;
    }
};