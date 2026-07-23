class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n=heights.size();
          vector<int>right(n);
          vector<int>left(n);

        for(int i=n-1;i>=0;i--){
            while(st.size()>0 && heights[st.top()]>=heights[i]){
                    st.pop();
            }
            if(!st.empty()){
                right[i]=st.top();
            }else{
                right[i]=n;
            }
            st.push(i);
        }
         while(!st.empty()){
            st.pop();
         }

         for(int i=0;i<n;i++){
            while(st.size()>0 && heights[st.top()]>=heights[i]){
                    st.pop();
            }
             if(!st.empty()){
                left[i]=st.top();
            }else{
                left[i]=-1;
            }
            st.push(i);
         }
         int max_area=0;
         int curr_area;
         for(int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            curr_area=heights[i]*width;
            max_area=max(max_area,curr_area);
         }
         return max_area;
    }
};