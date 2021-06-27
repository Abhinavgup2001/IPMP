// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

int getsum(int arr[],int R){
    
    int sum=0;
    int ans=arr[0];
    
    for(int i=0;i<R;i++){
        sum+=arr[i];
        
        if(sum>ans)
    ans=sum;
        
        if(sum<0)
        sum=0;
    }
    
    return ans;
}

class Solution {
  public:
    int maximumSumRectangle(int R, int C, vector<vector<int>> m) {
     
     int s[R];
     int ans=INT_MIN;
     
     for(int i=0;i<C;i++){
         
         memset(s,0,sizeof(s));
         
        for(int j=i;j<C;j++)
        {
        
        for(int k=0;k<R;k++){
    s[k]+=m[k][j];
}
    
    int sum=getsum(s,R);
    
    cout<<sum<<endl;
    
    ans=max(ans,sum);
            
        }
        
             
         }
     
        return ans;
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}  // } Driver Code Ends
