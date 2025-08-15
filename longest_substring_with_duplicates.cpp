class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> st;
        int maxLen=0;
        int left=0,right=0;
        while(right<n){
            while(st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
            }
            
            st.insert(s[right]);
            maxLen=max(maxLen,right-left+1);
            right++;
        }
        return maxLen;
        
    }
};
