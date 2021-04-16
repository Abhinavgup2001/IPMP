// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	    int ind=-1,count=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	        if(count==0)
	        ind=i;
	        count++;
	    }
	    else{
	        if(count>0){
	            swap(arr[ind],arr[i]);
	            if(count>1)
	            ind=ind+1;
	            else
	            ind=i;
	        }
	}
	    }
	    if(count==0)
	    return;
	    int i=1,j=n-count;
	    while(i<j&&j<n){
	        swap(arr[i],arr[j]);
	        i=i+2;
	        j=j+1;
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
