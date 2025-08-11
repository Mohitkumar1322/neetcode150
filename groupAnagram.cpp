class Solution {
public:
    bool anagram(string &s1,string &s2){
        if(s1.size()!=s2.size()) return false;
        vector<int> freq(26,0);
        for(auto &it:s1) freq[it-'a']++;
        for(auto &it:s2) freq[it-'a']--;
        for(auto &it: freq){
            if(it!=0) return false;
        }
        return true;
    }
    //created the anagram function to check if it anagram when two string is given 

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        //[[]]
        
        vector<bool> visited(strs.size(),false);
        //[F,F,F,F,F,F];

        for(int i=0;i<strs.size();i++){
            if(visited[i]) continue;
            vector<string> subset;
            subset.push_back(strs[i]);
            //[T,F,F,f,f,f];
            visited[i]=true;
            for(int j=i+1;j<strs.size();j++){
                if(!visited[j]&& anagram(strs[i],strs[j])){
                    //[t,f,f,t,f,f];
                    subset.push_back(strs[j]);
                    //["cat","act"]
                    visited[j]=true;
                }

            }
            ans.push_back(subset);
            //[["cat","act"],]

            
        }

        return ans;

    }
};
