#include<bits/stdc++.h>
using namespace std;
int turnOffRSB(int n){
	return n&(n-1);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	cout<<turnOffRSB(n)<<endl;
	}
	return 0 ;
}
