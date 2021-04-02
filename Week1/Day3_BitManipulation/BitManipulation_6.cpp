#include<bits/stdc++.h>
using namespace std;
int absoluteValue(int n){
	int temp=n >> (sizeof(int)*8-1);
	
	return (temp+n)^temp;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	cout<<absoluteValue(n)<<endl;
	}
	return 0 ;
}
