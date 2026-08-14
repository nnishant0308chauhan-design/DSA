class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<int,int>mpp;
        int left=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;

            while(mpp[s[i]]>2){
                mpp[s[left]]--;
                if(mpp[s[left]]==0){
                    mpp.erase(s[left]);
                }
                left++;
            }
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};