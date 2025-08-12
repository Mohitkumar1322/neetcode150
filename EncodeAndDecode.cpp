class Solution {
public:

    string encode(vector<string>& strs) {
        string ans ="";
        for(int i=0;i<strs.size();i++){
            ans += to_string(strs[i].size()) + "#" + strs[i];
        }
        return ans;
        //creating a string like 
        // ans ="4#neet4#code4#love3#you"

    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;

        while(i<s.size()){
            int j=i;
            while (s[j] != '#') j++;
            //finding first # if got it stop j 
            int len = stoi(s.substr(i, j - i));
            //getting the length from which to which it will present
            ans.push_back(s.substr(j + 1, len));
            //pushing tp ans
            i = j + 1 + len;
            //going to next #
        }
        return ans;

    }
};
