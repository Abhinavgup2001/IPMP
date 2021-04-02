#include<bits/stdc++.h>
using namespace std;

bool isPowerTwo(int n){
	return n&&!(n&(n-1));
}

int onlySB(int n){
	if(isPowerTwo(n))
	return log2(n)+1;
	return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	cout<<onlySB(n)<<endl;
	}
	return 0 ;
}
