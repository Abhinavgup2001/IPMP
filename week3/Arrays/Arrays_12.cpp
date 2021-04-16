// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    // Function to find the two repeated element
    // arr: input array
    // N: denoting that the size of array is N + 2 and range of elements is [1, N]
    pair<int,int> twoRepeated (int arr[], int b)
    {
        // Your code here
        int N=b+2;
        vector<int> v;
        for(int i=0;i<N;i++)
        arr[i]=arr[i]-1;
                
        for(int i=0;i<N;i++)
            arr[arr[i]]+= N;
                    
            for(int i=0;i<N;i++)
            arr[i]=arr[i]/N;
        
            for(int i=0;i<N;i++)
            {
                if(arr[i]==2)
                v.push_back(i+1);
                
            }
            pair<int,int> p=make_pair(v[0],v[1]);
            
            return p;

        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        Solution obj;
        pair<int , int>res;
        res = obj.twoRepeated(a, n);
        cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}
  // } Driver Code Ends
