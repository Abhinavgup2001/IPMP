// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int find(int a[],int x);
void unionSet(int a[],int x ,int z);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
			a[i]=i;
		int k;
		cin>>k;
		for(int i=0;i<k;i++){
			string s;
			cin>>s;
			if(s=="UNION"){
				int z,x;
				cin>>x>>z;
				unionSet(a,x,z);
			}
			else{
				int x;
				cin>>x;
				int parent=find(a,x);
				cout<<parent<<" ";
			}
		}
		cout<<endl;
	}
}// } Driver Code Ends


/*Complete the functions below*/
int find(int a[],int x)
{
    
    if(a[x]==x)
    return x;
    
    return find(a,a[x]);
       //add code here
}
void unionSet(int a[],int x,int z)
{
    
    int x1= find(a,x);
    int x2= find(a,z);
    
    a[x1]=x2;
    
	//add code here.
}
