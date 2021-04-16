// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void sort012(int a[], int n)
{
    
    int low,mid=0;
    int high=n-1;
    while(mid<=high){
        switch(a[mid]){
            
            case 0:
            swap(&a[low++],&a[mid++]);
            break;
            
            case 1:
            mid++;
            break;
            
            case 2:
            swap(&a[mid],&a[high--]);
            break;
            
        }
    }
    
}
