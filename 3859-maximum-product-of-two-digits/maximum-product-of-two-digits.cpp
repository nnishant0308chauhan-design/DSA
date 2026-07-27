class Solution {
public:
    int maxProduct(int n) {
        int max_product=INT_MIN;
        vector<int>ans;
        int a=INT_MIN;
        int b=INT_MIN;
        while(n>0){
            int last=n%10;
            ans.push_back(last);
            n=n/10;
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]>a){
                b=a;
                a=ans[i];
            }else if(ans[i]>b){
                b=ans[i];
            }
        }
        return a*b;
    }
};