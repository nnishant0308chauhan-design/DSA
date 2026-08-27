class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int m=0;
        
        for(int x:piles){
           m=max(m,x);
        }
        int left=1;
        int right=m;
        while(left<=right){
            int mid=(left+right)/2;
            long long hours=0;

            for(int x:piles){
                hours+=(x+mid-1)/mid;
            }

            if(hours<=h){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return left;
    }
};