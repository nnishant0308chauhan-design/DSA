class Solution {
public:
    bool isHappy(int n) {
        int slow=last(n);
        int fast=last(last(n));
       while(slow!=fast){
          slow=last(slow);
          fast=last(last(fast));
          
       }
          if(fast==1){
            return true;
          }
       
     return false;
        
    }
     int last(int n){
        int rem;
        int sum=0;
            while(n>0){
               rem=n%10;
               sum=sum+(rem*rem);
             n=n/10;
            }
            return sum;
        }
};




        
    
    