#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int trap(ll arr[], ll n){
        
        
        ll right[n],left[n];
        left[0]=arr[0];
        right[n-1]=arr[n-1];
        ll maxim=INT_MIN;
        for(int i=1;i<n;i++ ){
        	maxim=max(maxim,arr[i]);
        	left[i]=maxim;
		}
		maxim=INT_MIN;
     for(int i=n-1;i>=0;i-- ){
        	maxim=max(maxim,arr[i]);
        	right[i]=maxim;
		}
		int water=0;
		 for(int i=0;i<n;i++ ){
        	water=water+min(left[i],right[i])-arr[i];
		}
		return water;
	}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int ans=trap(arr,n);
		cout<<ans<<endl;
	}
	
}
