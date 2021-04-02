#include<bits/stdc++.h>
using namespace std;



int lindex(int arr[],int l,int r){
	int mid;
	while(l<=r){
		mid=l+(r-l)/2;
		if(arr[mid]>=1)
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
int l=0,r=1;
/* main change here for finding start and end*/
while(arr[r]==0){
	l=r;
	r=r*2;
}
	



	int ans=lindex(arr,l,r);
	cout<<ans<<endl;	
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
