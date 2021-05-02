class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++)
            nums[i]=nums[i]-1;
        
        for(int i=0;i<n;i++){
            int  temp=nums[i]%n;
            nums[temp]+=n;
        }
        for(int i=0;i<n;i++){
            if((nums[i]/n)>1)
                ans.push_back(i+1);
        }
        
        return ans;
    }
};
