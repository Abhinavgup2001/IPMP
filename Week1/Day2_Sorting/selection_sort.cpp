#include<bits/stdc++.h>
using namespace std;
void swap(int* a, int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void selection_sort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int j,k;
		j=k=i;
		int temp=arr[i];
		for(int j=i+1;j<n;j++){
			if(temp>arr[j]){
			temp=arr[j];
			k=j;
		}
	}
	swap(&arr[i],&arr[k]);
}
}
int main(){
	int arr[]={5,999,23,-2,89,10};
	int n=6;
	selection_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
