class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid=0,l=0,r=nums.size()-1;
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>=nums[l]){
                if(nums[l]<=target&& nums[mid]>=target)
                    r=mid-1;
                else
                    l=mid+1;
            }
            else{
                if(nums[mid]<=target&&nums[r]>=target)
                    l=mid+1;
                else
                    r=mid-1;
            }
        }
        return -1; 
    }
};
