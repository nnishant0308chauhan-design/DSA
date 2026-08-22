class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int real=n;
        int ans;
        while(n>0){
            int last=n%10;
            sum+=last;
            product*=last;

            n=n/10;
        }
        if(real%(sum+product)==0){
            return true;
        }else{
            return false;
        }
    }
};