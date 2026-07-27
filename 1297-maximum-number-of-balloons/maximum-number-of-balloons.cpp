class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mpp;
        int ans;
        for(int i=0;i<text.size();i++){
            if(text[i]=='b'||text[i]=='a'||text[i]=='l'||text[i]=='o'||text[i]=='n'){
                mpp[text[i]]++;
            }
           
        }
         mpp['l']=mpp['l']/2;
          mpp['o']=mpp['o']/2;
         return min({mpp['b'],mpp['a'],mpp['l'],mpp['o'],mpp['n']});
    }
};