#include<bits/stdc++.h>
using namespace std;

int maxValue(int arr[],int l,int r){
	int n=r+1;
	int mid;
	
	while(l<=r){
		mid=l+(r-l)/2;
		if(mid>=n-1)
		return arr[n-1];
		if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
		return arr[mid];
		else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1])
		l=mid+1;
		else
		r=mid-1;
		
	}
	return arr[mid];
}



void solve(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int ans=maxValue(arr,0,n-1);
	cout<<ans<<endl;
	return;	
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
