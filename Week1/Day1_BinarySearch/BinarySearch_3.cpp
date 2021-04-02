#include<bits/stdc++.h>
using namespace std;


int floorValue(int arr[],int l,int r, int target){
	int mid;
	while(l<=r){
		mid=l+(r-l)/2;
		if(arr[mid]==target)
		return mid;
		else if(arr[mid]>target){
		if(arr[mid-1]<target)	
		return mid-1;
		else
		r=mid-1;
		}
		
		else
		l=mid+1;
	}
	return l;
}
int ceilValue(int arr[],int l,int r, int target){
	int mid;
	while(l<=r){
		mid=l+(r-l)/2;
		if(arr[mid]==target)
		return mid;
		if(arr[mid]<target){
			if(arr[mid+1]>target)
		return mid+1;
		else 		
		l=mid+1;
	}
		else
		r=mid-1;
	}
	return r;
}

void solve(int arr[], int n){
	
	int target;
	cin>>target;
	int f,c;
if(arr[0]>target)
f=-1;
else{
	int indf=floorValue(arr,0,n-1,target);
	if(indf>=n)
	f=arr[n-1];
	else
	f=arr[indf];
}
if(arr[n-1]<target)
c=-1;
else{
		int indc=ceilValue(arr,0,n-1,target);
		if(indc<0)
		c=arr[0];
		else
	c=arr[indc];
}
	
	cout<<f<<" "<<c<<endl;
	return;
	}
		

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int t;
	cin>>t;
	while(t--){
		solve(arr,n);
	}
}
