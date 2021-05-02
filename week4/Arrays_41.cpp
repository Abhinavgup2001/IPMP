class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ls=0,gs=nums[0];
        for(int i=0;i<nums.size();i++){
            ls=ls+nums[i];
            
            if(ls>gs)
                gs=ls;
            if(ls<0)
                ls=0;
        }
        return gs;
        
    }
};
