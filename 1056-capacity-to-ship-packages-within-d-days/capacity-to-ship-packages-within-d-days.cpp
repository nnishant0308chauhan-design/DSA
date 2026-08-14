class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        int m=0;
        for(int x:weights){
            sum+=x;
            m=max(m,x);
        }

        int left=m;
        int right=sum;
        while(left<=right){
            int mid=(left+right)/2;
            int day=1;
            int curr=0;
            for(int x:weights){
                if(curr+x >mid){
                    day++;
                    curr=0;
                }
                curr+=x;
            }
            if(day<=days){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};