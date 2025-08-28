class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        
        vector<int> ans;
        for(int i=0;i<n;i++){
            ans.push_back(nums1[i]);
            //O(n)

        }
        for(int i=0;i<m;i++){
            ans.push_back(nums2[i]);
            //O(m)
        }
        
        //O(n+m)
        double solve=0;
        int mid=0;
        sort(ans.begin(),ans.end());
        //O(n+mLog(n+m))
        int left=0,right=ans.size()-1;
        for(int i=0;i<ans.size();i++){
            if(ans.size() % 2 == 0) {
    mid = (ans.size()/2) - 1;
    solve = (ans[mid] + ans[mid+1]) / 2.0;
} else {
    mid = ans.size()/2;
    solve = ans[mid];
}

        }
        //(O(n))
        return solve;

        //total Tc=O(n+m)+O(n+mLog(n+m))+O(n+m);
    }
};
