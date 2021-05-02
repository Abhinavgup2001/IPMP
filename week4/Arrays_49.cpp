#include<bits/stdc++.h>
using namespace std;

 long long int merge(long long int arr[],long long int l,long long int m,long long int r){
        long long int n1=m-l+1;
        long long int n2=r-m;
        long long int inv=0;
        int a[n1],b[n2];
        for(int i=0;i<n1;i++){
            a[i]=arr[l+i];
        }
        for(int i=0;i<n2;i++){
            b[i]=arr[m+1+i];
        }
    long long int i=0,j=0,k=l;
        while(i<n1&&j<n2){
            if(a[i]<=b[j]){
                arr[k]=a[i];
                i++;
                k++;
            }
            else{
                arr[k]=b[j];
                k++;
                j++;
                inv=inv+n1-i;
            }
        }
        while(i<n1){
        	arr[k]=a[i];
        	k++;
        	i++;
		}
		while(j<n2){
			arr[k]=b[j];
			k++;
			j++;
		}
        return inv;
    }
    long long int mergesort(long long int arr[],long long int l ,long long int r){
        long long int inv=0,mid=0;
        if(l<r){
             mid=(l+r)/2;
             inv=inv+mergesort(arr,l,mid);
             inv=inv+mergesort(arr,mid+1,r);
             inv=inv+merge(arr,l,mid,r);
        }
        return inv;
    }
int main(){
	long long int arr[]={6,5,7,8,2,1,9,3};
	cout<<mergesort(arr,0,7);
}
