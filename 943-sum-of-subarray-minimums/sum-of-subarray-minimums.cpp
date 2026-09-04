class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>right(n,n);
        vector<int>left(n,-1);
        stack<int>st;

        for(int i=0;i<arr.size();i++){
            while(!st.empty()&&arr[i]<arr[st.top()]){
                right[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        
        for(int i=arr.size()-1;i>=0;i--){
            while(!st.empty()&&arr[i]<=arr[st.top()]){
                left[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        long long ans = 0;
        const int MOD = 1e9 + 7;

        for(int i = 0; i < n; i++) {

            long long contribution = (long long)arr[i] * (i - left[i]) *(right[i] - i);

            ans = (ans + contribution) % MOD;
        }
        return ans;
    }
};