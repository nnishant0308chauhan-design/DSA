class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int m=0;
        
        for(int i=0;i<piles.size();i++){
           m= max(m,piles[i]);
        }
        int left=1;
        int right=m;
        
    
        while(left<=right){
            int mid=(left+right)/2;
             long long hours=0;
             for(auto x:piles){
                hours+=(mid+x-1)/mid;
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