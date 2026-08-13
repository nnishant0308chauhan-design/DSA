class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int total=0;
        int mini=INT_MIN;
        for(int i=0;i<weights.size();i++){
            total+=weights[i];
            mini=max(mini,weights[i]);
        }
        int left=mini;
        int right=total;
        while(left<right){
            int mid=(left+right)/2;
            int reqd=1;
            int curr=0;
            for(int w:weights){
                if(curr+w>mid){
                    reqd++;
                    curr=0;
                }
                curr+=w;
            }

            if(reqd<=days){
                right=mid;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};