// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>&, int );

// your code will be pasted here

int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        
        vec = productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}// } Driver Code Ends


//User function template for C++

// nums: given vector
// return the Product vector P that hold product except self at each index
vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    //code here
    vector<long long int> v1,v2;
    long long int productl=1,productr=1;
    v1.push_back(1);
    v2.push_back(1);
    for(int i=1;i<n;i++){
    productl=productl*nums[i-1];
    v1.push_back(productl);
    }
    for(int i=n-2;i>=0;i--){
    productr=productr*nums[i+1];
    v2.push_back(productr);
    }
    
    vector<long long int> v;
    for(int i=0;i<n;i++){
        
        v.push_back(v1[i]*v2[n-1-i]);
    }
    return v;
}

