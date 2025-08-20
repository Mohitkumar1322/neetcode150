class Solution {
public:
    int bin(vector<int>& arr,int target){
        int l=0,r=arr.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==target){
                return mid;
            }else if(arr[mid]<target){
                l=mid+1;

            }else{
                r=mid-1;
            }
            
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        if(n==0) return false;
        int start=0,end=0;
        for(int i=0;i<n;i++){
            if(target>=matrix[i][0] && target<=matrix[i][n-1]){
                if(bin(matrix[i],target)!=-1){
                    return true;
                }
            }
        }
        return false;
         
    }
};
