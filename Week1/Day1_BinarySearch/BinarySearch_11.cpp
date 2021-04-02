class Solution {
public:
    int findMin(vector<int>& arr) {
        int l=0,r=arr.size()-1,n=arr.size(),mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(mid>0&&arr[mid]<arr[mid-1])
                return arr[mid];
            if(arr[mid]>=arr[l] && arr[mid]>arr[r])
                l=mid+1;
                else 
                r=mid-1;
            
            
        }
        return arr[mid];
    }
};
