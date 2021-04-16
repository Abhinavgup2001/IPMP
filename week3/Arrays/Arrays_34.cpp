// { Driver Code Starts
// Initial Template for C

#include <stdio.h>

struct pair {
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n) ;

int main() {
    long long int t, n, a[100002], i;
    struct pair minmax;

    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);

        for (i = 0; i < n; i++) scanf("%lld", &a[i]);
        minmax = getMinMax(a, n);
        printf("%lld %lld\n", minmax.min, minmax.max);
    }
    return 0;
}// } Driver Code Ends


// User function Template for C
struct pair getminmax(long long int arr[], long long int start, long long int end){
    long long int mid;
    struct pair ans;
    if(start==end){
        ans.max=arr[start];
        ans.min=arr[start];
        return ans;
    }
    if(end==start+1){
        if(arr[end]>arr[start])
        {
            ans.max=arr[end];
            ans.min=arr[start];
        }
        else{
            ans.max=arr[start];
            ans.min=arr[end];
        }
        return ans;
        }
        mid=start+(end-start)/2;
       struct pair ans1=getminmax(arr,start,mid-1);
        struct pair ans2=getminmax(arr,mid,end);
        if(ans1.max>ans2.max)
        ans.max=ans1.max;
        else
        ans.max=ans2.max;
        if(ans1.min>ans2.min)
        ans.min=ans2.min;
        else
        ans.min=ans1.min;
        return ans;
    }

struct pair getMinMax(long long int arr[], long long int n) {
    return getminmax(arr,0,n-1);
    
}
