#include<bits/stdc++.h>
using namespace std;

int bsearch(int arr[],int l,int r){
	int mid;
	while(l<=r){
		mid=l+(r-l)/2;
		if(arr[mid]==mid)
		return mid;
		else if(arr[mid]>mid)
		r=mid-1;
		else
		l=mid+1;
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
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
		int ans=bsearch(arr,0,n-1);
	cout<<ans<<endl;
}
}
