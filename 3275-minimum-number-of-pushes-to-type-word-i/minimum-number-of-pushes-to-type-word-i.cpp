class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mpp;
        int push=0;
       for(int i=0;i<word.size();i++){
         if(i<8){
            push++;
         }else if(i<16){
            push=push+2;
         }
         else if(i<24){
            push=push+3;
         }else{
            push=push+4;
         }
       }
     return push;

    }
};