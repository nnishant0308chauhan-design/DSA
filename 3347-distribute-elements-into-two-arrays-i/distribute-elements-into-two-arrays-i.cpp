class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        int la=a.size()-1;
        int ba=b.size()-1;

        for(int i=0;i<nums.size();i++){
            if(a.empty()){
                a.push_back(nums[i]);
                la++;
            }else if(b.empty()){
                b.push_back(nums[i]);
                ba++;
            }else{
                if(a[la]>b[ba]){
                    a.push_back(nums[i]);
                    la++;
                }else{
                    b.push_back(nums[i]);
                    ba++;
                }
            }
        }
        a.insert(a.end(),b.begin(),b.end());
        return a;
    }
};