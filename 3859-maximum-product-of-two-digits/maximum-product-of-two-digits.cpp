class Solution {
public:
    int maxProduct(int n) {
        int a=INT_MIN;
        int b=INT_MIN;
        while(n>0){
            int last=n%10;
            if(last>a){
                b=a;
                a=last;
            }else if(last>b){
                b=last;
            }
            n=n/10;
        }
       
        return a*b;
    }
};