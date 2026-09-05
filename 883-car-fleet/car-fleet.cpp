class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,double>>pairs;

        for(int i=0;i<n;i++){
            double time=(double)(target-position[i])/speed[i];
            pairs.push_back({position[i],time});
        }
        sort(pairs.rbegin(),pairs.rend());
        stack<double>st;

        for(int i=0;i<n;i++){
            if(st.empty()||pairs[i].second>st.top()){
                st.push(pairs[i].second);
            }
        }
        return st.size();
    }
};