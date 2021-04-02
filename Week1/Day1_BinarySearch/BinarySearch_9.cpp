#include<bits/stdc++.h>
using namespace std;

double median(int a[], int b[], int m,int n){
	
	if(m>n)
	return median(b,a,n,m);
	int low=0,high=m;
	while(low<=high){
		int px=(low+high)/2;
		int py=((m+n+1)/2)-px;
		
		int maxLeftX=(px==0)?INT_MIN:a[px-1];
		int minRightX=(px==m)?INT_MAX:a[px];
		
		int maxLeftY=(py==0)?INT_MIN:b[py-1];
		int minRightY=(py==m)?INT_MAX:b[py];
		//cout<<px<<" "<<py<<endl;
		//cout<<maxLeftX<<" "<<minRightX<<" "<<maxLeftY<<" "<<minRightY<<" "<<endl;
		
		if(maxLeftX<=minRightY&& maxLeftY<=minRightX){
			
			if((m+n)%2==0)
			return ((double)max(maxLeftX,maxLeftY)+min(minRightX,minRightY))/2;
			else
			return max(maxLeftX,maxLeftY);
		}
		else if(maxLeftX>minRightY)
		high=px-1;
		else
		low=px+1;
		
	}
}
	
	
	

int main(){
	int m,n;
	cin>>m>>n;
	int a[m],b[n];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
		for(int i=0;i<n;i++){
		cin>>b[i];
	}
cout<<median(a,b,m,n);	
}
