class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n =heights.size();
        int left=0,right=n-1;
        int maxi=INT_MIN;
        while(left<right){
            int mini=min(heights[left],heights[right]);
            int currentLength=right-left;

            int mulitple=mini*currentLength;
            maxi=max(mulitple,maxi);
            if(heights[left]<heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxi;
    }
};
