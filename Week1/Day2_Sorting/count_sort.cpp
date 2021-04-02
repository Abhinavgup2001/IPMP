#include<bits/stdc++.h>
using namespace std;
void count_sort(int arr[],int n){
	int count[10000];
	memset(count,0,sizeof(count));
for(int i=0;i<n;i++){
	count[arr[i]]++;
}
	for(int i=0;i<10000;i++){
		if(count[i]){
			while(count[i]){
				cout<<i<<endl;
				count[i]--;
			}
		}
	}
	
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	count_sort(arr,n);
	
}
