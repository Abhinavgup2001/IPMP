#include<bits/stdc++.h>
using namespace std;
int leftrotate(int n, int d){
	int a=n<<d;
	int b=n>>(32-d);
	return a|b;
}
int rightrotate(int n, int d){
	int noOfBits=sizeof(n)*8;
	int a=n>>d;
	int b=n<<(32-d);
	return a|b;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d;
		cin>>n>>d;
	cout<<leftrotate(n,d)<<" "<<rightrotate(n,d)<<endl;
	}
	return 0 ;
}
