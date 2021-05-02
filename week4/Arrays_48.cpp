#include<bits/stdc++.h>
using namespace std;


int solve(int arr[],int n,int k){
	
for(int i=0;i<n;i++){
	int temp=arr[i]%k;
	arr[temp]+=k;
}
for(int i=0;i<n;i++){
	arr[i]=arr[i]/k;
}
int m=arr[0];
int ind=0;
for(int i=1;i<n;i++){
	if(arr[i]>m){
		m=arr[i];
		ind=i;
	}
}
return arr[ind];
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		int k;
		cin>>k;
		
		cout<<solve(arr,n,k)<<endl;
	}
}
