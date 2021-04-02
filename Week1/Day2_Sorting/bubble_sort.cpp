#include<bits/stdc++.h>
using namespace std;
 
void bubble_sort(int arr[],int n);
void swap(int* a, int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void bubble_sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++){
		int flag=0;
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
			
			swap(&arr[j],&arr[j+1]);
			flag=1;
		}
		}
		if(flag==0)
		break;
	}
}

int main(){
	int arr[]={5,999,23,-2,89,10};
	int n=6;
	bubble_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}
