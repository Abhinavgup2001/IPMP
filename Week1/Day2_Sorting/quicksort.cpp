#include<iostream>
using namespace std;
 
 void swap(int *a,int *b){
int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

 int partition(int arr[], int l, int h){
 	int pivot=arr[l];
 	int i=l,j=h;
 	do{
 		do{
		 i++;}
 			while(arr[i]<=pivot);
		 
		 do{
		 j--;}
		 	while(arr[i]>pivot);
		 
		 if(i<j)
		 swap(&arr[i],&arr[j]);
	 }
	 while(i<j);
 	swap(&arr[l],&arr[j]);
 	return j;
 }

void quicksort(int arr[],int l, int h){
	int j;
	if(l<h){
		j=partition(arr,l,h);
		quicksort(arr,l,j);
		quicksort(arr,j+1,h);
	}
}


int main(){
	int arr[]={ 11,13,7,12,16,9,24,5,10,3};
	
	quicksort(arr,0,9);
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
