#include<bits/stdc++.h>
using namespace std;

void maxHeap(int arr[],int n,int i){
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n&&arr[l]>arr[largest])
	largest=l;
	if(r<n&&arr[r]>arr[largest])
	largest=r;
	if(largest!=i){
		swap(arr[i],arr[largest]);
		maxHeap(arr,n,largest);
	}
}

void heap_sort(int arr[],int n){
for(int i=n/2;i>=0;i--){
	maxHeap(arr,n,i);
}
for(int i=n-1;i>=0;i--){
	swap(arr[0],arr[i]);
	--n;
	maxHeap(arr,n,0);
}

}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	heap_sort(arr,n);
	cout<<"sorted array is"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	
}
