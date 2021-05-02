#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n){
	
	int sumr=0;
	for(int i=1;i<n;i++)
	sumr+=arr[i];
	
	int suml=0;
	for(int i=1;i<n-1;i++){
		suml+=arr[i-1];
		sumr-=arr[i];
		if(suml==sumr)
		return arr[i];
	}
	return -1;
	
	
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
		
		
		cout<<solve(arr,n)<<endl;
	}
}
