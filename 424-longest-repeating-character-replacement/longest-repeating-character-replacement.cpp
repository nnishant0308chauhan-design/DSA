class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mpp;
        int fre=0;
        int left=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
           mpp[s[i]]++;
           fre=max(fre,mpp[s[i]]);

           while((i-left+1)-fre >k){
                  mpp[s[left]]--;
                  if(mpp[s[left]]==0){
                    mpp.erase(mpp[s[left]]);
                  }
                  left++;

           }
           ans=max(ans,i-left+1);

        }
        return ans;

    }
};