class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int ans=0;
        int count;
        for(int x:st){
            int curr;
            if(st.count(x-1)==0){
                 curr=x;
                  count=1;

                  while(st.count(curr+1)){
                        count++;
                        curr++;
                  }
                   ans=max(ans,count);
            }
           
           
        }
        return ans;
    }
};




/*class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int m=1;
        if(nums.empty())return 0;
        if(nums.size()==1) return 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
                count++;
                m=max(m,count);
               
            }else if(nums[i]==nums[i-1]){
                m=max(m,count);
                continue;
            }
            else{
                count=1;
            }
               
        }
        return m;
    }
};*/