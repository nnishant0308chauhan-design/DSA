class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=0;
        for(int x:piles){
            maxi=max(maxi,x);
        }
        int left=1;
        int right=maxi;

        while(left<right){
            int mid=left+(right-left)/2;

            int hours=0;
            for(int x:piles){
                hours+=(x+mid-1)/mid;
            }

            if(hours>h){
              left=mid+1;
            }else{
               right=mid;
            }
        }
            return left;
    }
};