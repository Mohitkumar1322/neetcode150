class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left =0, right =n-1;
        int total=0,leftMax=0,rightMax=0;
        while(left<=right){
            if(leftMax<=rightMax){
                if(height[left]>leftMax){
                    leftMax=height[left];
                }else{
                    total+=leftMax-height[left];
                }
                left++;
            }else{
                if(height[right]>rightMax){
                    rightMax=height[right];
                }else{
                    total+=rightMax-height[right];
                }
                right--;
            }
        }
        return total;

        
    }
};
