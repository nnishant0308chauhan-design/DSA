class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>mpp;
        int left=0;
        int ans=0;
        int count=0;

        for(int i=0;i<fruits.size();i++){
               if( !mpp.count(fruits[i])){
                   count++;
               }
                mpp[fruits[i]]++;
            while(count>2){
                   mpp[fruits[left]]--;
                   if(mpp[fruits[left]]==0){
                     mpp.erase(fruits[left]);
                      count--;
                   }
                   left++;
                  
            }
            
            ans=max(ans,i-left+1);
           

        }
        return ans;
    }
};