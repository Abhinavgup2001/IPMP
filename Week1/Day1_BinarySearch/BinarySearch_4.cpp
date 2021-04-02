class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=nums[i];
        }
        sort(arr,arr+n);
        int l=0,r=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=nums[i]){
                l=i;
                    break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]!=nums[i]){
                r=i;
                    break;
            }
        }
        if(l==0&&r==0)
            return 0;
        else
            return r-l+1;
    }
};
