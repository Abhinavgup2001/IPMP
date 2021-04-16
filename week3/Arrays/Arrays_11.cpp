class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
     int n=nums.size();
        
         vector<vector<int> >r;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            while(i>0 and nums[i]==nums[i-1])
                i++;
        for(int j=i+1;j<n-2;j++){
        while(j>i+1 and nums[j]==nums[j-1])
             j++;
            
            int left=j+1;
            int right=n-1;
            while(left<right){
                int sum=nums[i]+nums[j]+nums[left]+nums[right];
                if(sum>target)
                    right-=1;
                else if(sum==target){
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[left]);
                    v.push_back(nums[right]);
                 r.push_back(v);   
                    left+=1;
                    right-=1;
                }
                else
                    left+=1;
                while(left>j+1&&left<n && nums[left-1]==nums[left])
                    left++;
                while(right<n-1&&right>0 && nums[right+1]==nums[right])
                    right--;
            }
        
        }
            
        }
       
        
        return r;
    }
};
