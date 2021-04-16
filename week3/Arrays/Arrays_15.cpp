// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

int li(int l,int r,vector<int> arr){
    int mid;
    int res=-1;
    while(l<=r){
        mid=l+(r-l)/2;
        if(arr[mid]==1){
            res=mid;
        r=mid-1;
        }
        
        else{
        l=mid+1;
        }
    }
    return res;
}


class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	   int ind=li(0,m-1,arr[0]);
	   int max_ind=0;
	   for(int i=1;i<n;i++){
	       if(ind==-1){
	  ind=li(0,m-1,arr[i]);
	  max_ind=i;
	       
	   }
	   else{
	       int index=li(0,m-ind,arr[i]);
	       if(index!=-1 && index<ind)
	       {
	           max_ind=i;
	           ind=index;
	       }
	   }
	   }
	   
	   
	   if(ind==-1)
	   return -1;
	   else
	   return max_ind;
	   
	}

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
