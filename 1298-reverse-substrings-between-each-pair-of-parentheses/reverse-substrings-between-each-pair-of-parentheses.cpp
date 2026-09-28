class Solution {
public:

    void rev(string &s,int first,int last) {
    if (first>=last)
        return;
    swap(s[first], s[last]);

    rev(s,first+1,last-1);
}


    string reverseParentheses(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }

            if(s[i]==')'){
                int top=st.top();
                st.pop();

                rev(s,top+1,i-1);
            }
        }
         string ans="";
         for(char c:s){
            if(c!='('&&c!=')'){
                ans+=c;
            }
         }

        return ans;
    }
};