class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mpp;
        unordered_map<char,int>mpp2;
 
        if(s1.size()>s2.size()){
            return false;
        }
        for(auto x: s1){
            mpp[x]++;
        }
        int left=0;
        for(int i=0;i<s2.size();i++){
            mpp2[s2[i]]++;
            if(i-left+1>s1.size()){
                mpp2[s2[left]]--;
                if(mpp2[s2[left]]==0){
                    mpp2.erase(s2[left]);
                }
                left++;
            }

            if(i-left+1==s1.size() && mpp==mpp2){
                return true;
            }
        }
        return false;
    }
};