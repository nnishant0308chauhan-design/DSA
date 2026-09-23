class Solution {
public:

    void swapfn(vector<char>&s,int left,int right){
        if(left>=right) return;
            swap(s[left],s[right]);
            swapfn(s,left+1,right-1);
    }
    
    void reverseString(vector<char>& s) {
        swapfn(s,0,s.size()-1);
    }
};