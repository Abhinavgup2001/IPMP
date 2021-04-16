#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[],int n){
	int minr=arr[0];
	int diff=arr[1]-arr[0];
	for(int i=1;i<n;i++){
		diff=max(diff,arr[i]-minr);
		minr=min(minr,arr[i]);
		
	}
	return diff;
}
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        int arr[n];
    
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        
        int ans = maxDiff(arr,n);   // function call
        
                       cout<<ans<<endl;             // print the output
    
        
    }
	return 0;
}// } Driver Code Ends
