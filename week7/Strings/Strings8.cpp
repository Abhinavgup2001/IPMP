// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string s);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
int n=src.length();
    string ans;
    
    
    cout<<"size "<<n<<endl;
    string s;
    int i=0;
    int count=0;
    int j=0;
    while(i<n){
         count=1;
        while(i<n-1&&src[i]==src[i+1]){
            count++;
            i++;
        }
        //cout<<"i "<<i<<endl;
        //cout<<"count "<<count<<endl;
        
            ans.push_back(src[i]);
            string temp=to_string(count);
        ans=ans+temp;
        i++;
    }
    
        
            
    return ans;
  //Your code here 
}     
 

