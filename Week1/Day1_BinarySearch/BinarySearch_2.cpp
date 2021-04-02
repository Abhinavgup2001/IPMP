#include<bits/stdc++.h>
using namespace std;

int lindex(int arr[],int l,int r, int target){
	int mid;
	while(l<=r){
		mid=l+(r-l)/2;
		if(arr[mid]>=target)
		r=mid-1;
		else
		l=mid+1;
	}
	return l;
}


void solve(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	int leftindex=lindex(arr,0,n-1,target);
	if((leftindex+n/2)<n-1&&arr[leftindex+n/2]==target){
		cout<<"YES"<<endl;
		return;
	}
		else{
		cout<<"NO"<<endl;
		return;
	}
	}
		
	

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
