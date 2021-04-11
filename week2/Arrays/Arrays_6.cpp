// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
bool isALL9(int num[],int n){
    for(int i=0;i<n;i++){
        if(num[i]!=9)
        return false;
        
    }
    return true;
}
class Solution{
public:
	vector<int> generateNextPalindrome(int num[], int n) {
	    // code here
	    vector<int> v;
	    if(isALL9(num,n)){
	        v.push_back(1);
	        for(int i=1;i<n;i++)
	            v.push_back(0);
	            v.push_back(1);
	
	            
	            
	        
	        return v;
	    }
	    // 
    int mid = n/2;
    bool leftsmall = false;

    int i = mid - 1;
 
    int j = (n % 2)? mid + 1 : mid;
 
    while (i >= 0 && num[i] == num[j])
        i--,j++;
 
    if ( i < 0 || num[i] < num[j])
        leftsmall = true;
 
    while (i >= 0)
    {
        num[j] = num[i];
        j++;
        i--;
    }
 
    if (leftsmall == true)
    {
        int c = 1;
        i = mid - 1;
 
    
        if (n%2 == 1)
        {
            num[mid] += c;
            c = num[mid] / 10;
            num[mid] %= 10;
            j = mid + 1;
        }
        else
            j = mid;
 
    
        while (i >= 0)
        {
            num[i] += c;
            c = num[i] / 10;
            num[i] %= 10;
            num[j++] = num[i--]; 
	    
	}
    }
    for(int i=0;i<n;i++)
    v.push_back(num[i]);
    return v;
	}

};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends
