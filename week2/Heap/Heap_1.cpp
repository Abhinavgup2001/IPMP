#include<bits/stdc++.h>
using namespace std;

void sortK(int arr[],int n,int k){
	priority_queue<int,vector<int>,greater<int> >pq;
	int count=0;
	for(int i=0;i<n;i++){
		if(pq.size()<=k)
		pq.push(arr[i]);
		else{
			int temp=pq.top();
			arr[count]=temp;
			count++;
			pq.pop();
			pq.push(arr[i]);
		}
	}
	while(count<n){
		int temp=pq.top();
			arr[count]=temp;
			count++;
			pq.pop();
			
	}
	
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	sortK(arr,n,k);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

