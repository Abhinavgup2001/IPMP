#include<bits/stdc++.h>
using namespace std;

int bsearch(int arr[],int l,int r, int target){
	int mid;
	while(l<=r){
		mid=l+(r-l)/2;
		if(arr[mid]==target)
		return mid;
		else if(arr[mid]>target)
		r=mid-1;
		else
		l=mid+1;
	}
	return -1;
}

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
int rindex(int arr[],int l,int r, int target){
	int mid;
	while(l<=r){
		mid=l+(r-l)/2;
		if(arr[mid]<=target)
		l=mid+1;
		else
		r=mid-1;
	}
	return r;
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
	int ans=bsearch(arr,0,n-1,target);
	cout<<ans<<endl;
	if(ans==-1){
	cout<<"NO"<<endl;
	return;
}
	else{
	int leftindex=lindex(arr,0,n-1,target);
	int rightindex=rindex(arr,0,n-1,target);
	cout<<leftindex<<" "<<rightindex<<endl;
	int count=rightindex-leftindex+1;
	if(count>n/2){
		cout<<"YES"<<endl;
		return;
	}
		else{
		cout<<"NO"<<endl;
		return;
	}
	}
		
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
