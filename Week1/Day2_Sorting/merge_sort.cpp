#include<bits/stdc++.h>
using namespace std;

void merging(int arr[],int l,int m,int h){
	
	int n1=m-l+1;
	int n2=h-m;
	int ms1[n1];
	int ms2[n2];
	for(int i=0;i<n1;i++)
	ms1[i]=arr[l+i];
	for(int i=0;i<n2;i++)
	ms2[i]=arr[m+1+i];
	int i,j,k;
	i=0,k=l;
	j=0;
	while(i<n1&&j<n2){
		if(ms1[i]<ms2[j])
		arr[k++]=ms1[i++];
		else
		arr[k++]=ms2[j++];
	}
	
	for(;i<n1;i++)
	arr[k++]=ms1[i];
	for(;j<n2;j++)
	arr[k++]=ms2[j];
	
}

void merge_sort(int arr[],int l,int h){
	if(l<h){
		int mid=(l+h)/2;
		merge_sort(arr,l,mid);
		merge_sort(arr,mid+1,h);
		merging(arr,l,mid,h);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	merge_sort(arr,0,n-1);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

