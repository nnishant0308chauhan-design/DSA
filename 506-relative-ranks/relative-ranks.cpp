class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>>temp;
        for(int i=0;i<score.size();i++){
            temp.push_back({score[i],i});
        }

        vector<string>ans(score.size());
        sort(temp.rbegin(),temp.rend());

        for(int i=0;i<score.size();i++){
            if(i==0){
                ans[temp[i].second]="Gold Medal";
            }else if(i==1){
                ans[temp[i].second]="Silver Medal";
            }else if(i==2){
                  ans[temp[i].second]="Bronze Medal";
            }else{
                ans[temp[i].second]=to_string(i+1);
            }
        }
        return ans;
    }
};