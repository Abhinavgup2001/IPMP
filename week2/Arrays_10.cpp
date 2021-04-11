

class Solution {
    
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++){
        
            
            
             int start=i+1,end=nums.size()-1,sum=-nums[i];
    while(start<end){
        if(nums[start]+nums[end]==sum){
    
            vector<int> v;
            
            v.push_back(nums[i]);
             v.push_back( nums[start]);
             v.push_back(nums[end]);
            ans.push_back(v);
   
         while(end>0&&nums[end]==nums[end-1])
        end--;
            end--;           
            while(start<n-1&&nums[start]==nums[start+1])
        start++;
            start++;
            
    
        }
        else if((nums[start]+nums[end])>sum)
            end--;
        else 
            start++;
        
    }
            
            while(i<n-2&&nums[i]==nums[i+1])
                i++;
        }
        
        return ans;
    }
};
