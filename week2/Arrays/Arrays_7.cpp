class Solution {
    
    void reverse(vector<int>& nums,int i){
    int start=i,end=nums.size()-1;
    while(start<=end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
    }
    
    

public:
    void nextPermutation(vector<int>& nums) {
 int n=nums.size();
        int i=n-1;
        while(i!=0&&nums[i]<=nums[i-1])
            i--;
        if(i==0)
        {
            sort(nums.begin(),nums.end());
            return;
        
        }
        int temp=nums[i-1];
        int j=n-1;
        while(j&&nums[j]<=temp)
            j--;
        swap(nums[i-1],nums[j]);
        reverse(nums,i);
        
        
    
    }
};


