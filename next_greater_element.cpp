class Solution {
public:
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> ans,finalans;
        int n2=nums2.size();
        for(int i=n2-1;i>=0;i--){
            while(st.size()>0 && st.top()<= nums2[i]){
                st.pop();
            }
            if(st.empty()) ans.push_back(-1);
            else{
                ans.push_back(st.top());
            }
            st.push(nums2[i]);
            
        }
        reverse(ans.begin(),ans.end());
        
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    finalans.push_back(ans[j]);
                }
            }
        }
        return finalans;
        
        
    }
};