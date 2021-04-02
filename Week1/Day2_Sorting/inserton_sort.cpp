#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
	for(int i=1;i<n;i++){
		int temp=arr[i];
		int j;
		for( j=i-1;j>=0;j--){
			if(arr[j]>temp)
			arr[j+1]=arr[j];
			else
			break;
		}
		arr[j+1]=temp;
	}
}
int main(){
	int arr[]={5,999,23,-2,89,110};
	int n=6;
	insertion_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
