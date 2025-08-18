class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        if (n < m) return ""; // FIXED

        unordered_map<char,int> need;
        for (char c : t) need[c]++;
        
        unordered_map<char,int> have;
        int required = need.size();  // FIXED
        int formed = 0;

        int left = 0, right = 0, start = 0;
        int minLen = INT_MAX;

        while (right < n) {
            char c = s[right];
            have[c]++;
            
            if (need.count(c) && have[c] == need[c]) {
                formed++;
            }

            // shrink from left
            while (left <= right && formed == required) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];
                have[leftChar]--;
                if (need.count(leftChar) && have[leftChar] < need[leftChar]) {
                    formed--;
                }
                left++;
            }

            right++;
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};
