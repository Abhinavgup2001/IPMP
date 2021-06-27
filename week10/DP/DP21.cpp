// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

void reverse(string &s){
    int i=0,j=s.length()-1;
    
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}

string lcs(string a, string b, bool *flag){
      int m=a.length();
    int n=b.length();
    
    int dp[m+1][n+1];
    
   
    
    for(int i=0;i<=m;i++){
        
        for(int j=0;j<=n;j++)
        {
        
            if(i==0||j==0)
            dp[i][j]=0;
            
            else {
                if(a[i-1]==b[j-1]){
                   
                dp[i][j]=1+dp[i-1][j-1];
                }
                
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
            
        }
    }
    int l=dp[m][n];
   // cout<<l<<endl;
    int i=m,j=n;
    string ans="";
    while(i>0 && j>0){
        
        if(a[i-1]==b[j-1]){
            //cout<<a[i-1]<<endl;
             flag[j-1]=true;
            ans.push_back(a[i-1]);
            i--;
            j--;
        }
        
        else{
            
            if(dp[i-1][j]>dp[i][j-1])
            i--;
            else
            j--;
            
        }
        
    }
    
    reverse(ans);
    
    return ans;
}



class Solution{
  public:
    /*You are required to complete this method */
    bool isInterleave(string a, string b, string c) 
    {
        //Your code here
        if(c.length()!=(b.length()+a.length()))
        return false;
        
        int m=c.length();
        
         bool flag[m]={false};
         
string a1=lcs(a,c,flag);
cout<<a1<<endl;
//for(int i=0;i<n;i++)
if(a1!=a)
return false;
bool ans=true;
int j=0;
    for(int i=0;i<m;i++){
        
        if(!flag[i]){
        	cout<<b[j]<<" "<<c[i]<<endl;
            if(b[j]!=c[i]){
            ans=false;
            break;
        }
            
            j++;
            flag[i]=true;
        }
    }
    
    if(ans==true)
    return true;
        
    bool flag1[m]={false};
    
string a2=lcs(b,c,flag1);
cout<<a2<<endl;
if(a2!=b)
return false;
ans=true;
j=0;
    for(int i=0;i<m;i++){
        
        if(!flag1[i]){
            if(a[j]!=c[i])
            return false;
            
            j++;
            flag1[i]=true;
        }
    }

    return true;
}

};

// { Driver Code Starts.
int main() {
	

		string a,b,c;
		a="XYYY";
		b="XXYYXY";
		c="XYYXXXXXYX";
		Solution obj;
		cout<<obj.isInterleave(a,b,c)<<endl;
	
	// your code goes here
	return 0;
}  // } Driver Code Ends
