#include<bits/stdc++.h>
using namespace std;
int posRSB(int n){
	
	return (int)log2(n ^ (n&(n-1)))+1;;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	cout<<posRSB(n)<<endl;
	}
	return 0 ;
}
