#include<bits/stdc++.h>
using namespace std;
	void merge(int arr1[], int arr2[], int n, int m) {
	    
int gap=ceil((n+m)/2.0);
while(gap>=1){
	cout<<gap<<endl;
    int i=0;
    while(i+gap<n){
        if(arr1[i]>arr1[i+gap])
        swap(arr1[i],arr1[i+gap]);
        i++;
    }
    while(i+gap>=n && i<n&& i+gap-n<m){
        if(arr1[i]>arr2[i+gap-n])
        swap(arr1[i],arr2[i+gap-n]);
        i++;
    }
    int j=0;
    while(j+gap<m){
        if(arr2[j]>arr2[j+gap])
        swap(arr2[j],arr2[j+gap]);
        j++;
    }
    if(gap!=1)
    gap=ceil(gap/2.0);
    else
    gap=0;
    
}
	}
int main(){
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}
	merge(arr1,arr2,n,m);
	for(int i=0;i<n;i++){
		cout<<arr1[i]<<" ";
	}
	for(int i=0;i<m;i++){
		cout<<arr2[i]<<" ";
	}
}
