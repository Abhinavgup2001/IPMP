#include<bits/stdc++.h>
using namespace std;
int flipBits(int a,int b){
	int c=a^b;
	int count=0;
	while(c){
		c=c&(c-1);
		count++;
	}
	return count;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
	cout<<flipBits(a,b)<<endl;
	}
	return 0 ;
}
