class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto &it:tokens){
            if(it=="+"||it=="-"||it=="/"||it=="*"){
                int b=st.top(); st.pop();
                int a=st.top(); st.pop();
                if(it=="+") st.push(a+b);
                else if(it=="-") st.push(a-b);
                else if(it=="/") st.push(a/b);
                else if(it=="*") st.push(a*b);

            }else{
                st.push(stoi(it));
            }
            
        }
        return st.top();
    }
};