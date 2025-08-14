class Solution {
public:
    bool palindrome(string s){
        int n=s.size();
        int left=0,right=n-1;
        while(left<right){
            if(s[left]==s[right]){
                left++;
                right--;
            }else{
                return false;
            }
        }
        return true;
    }
    //this the function that check whetet a string s paplindrome or not
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            if (isalnum(s[i])) { // isalnum check for alphanumeric char only letters and digits
                ans += tolower(s[i]);
            }
        }
        if(palindrome(ans)){
            return true;
        }
        return false;

    }
};
