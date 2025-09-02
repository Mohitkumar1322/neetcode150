#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(auto &it:arr){
	        cin>>it;
	    }
	    int maxi=INT_MIN;
	    int mini=INT_MAX;
	    for(int i=0;i<n;i++){
	        maxi=max(maxi,arr[i]);
	        mini=min(mini,arr[i]);
	        
	    }
	    cout<<maxi-mini<<endl;
	}

}
