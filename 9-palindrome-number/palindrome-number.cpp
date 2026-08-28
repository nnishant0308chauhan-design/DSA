class Solution {
public:
    bool isPalindrome(int x) {
        int num=x;
        long long rev=0;
        while(x!=0){
            int last=x%10;
            rev=rev*10+last;
            x=x/10;
        }
        if(rev!=num){
            return false;
        }
        else if(num<0){
            return false;
        }
        else{ 
            return true;
        }
    }
};