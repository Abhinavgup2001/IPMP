#include<bits/stdc++.h>
using namespace std;
int swapBits(int n){
	unsigned int maskEven=0xAAAAAAAA,maskOdd=0x55555555;
	unsigned int evenOnly=n&maskEven;
	evenOnly>>=1;
	
	unsigned int oddOnly=n&maskOdd;
	oddOnly<<=1;
	
	return evenOnly|oddOnly;
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	cout<<swapBits(n)<<endl;
	}
	return 0 ;
}
