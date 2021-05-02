class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int m=nums.size();
        int n=nums[0].size();
        int i=0; int j=n-1;
        while(i<m && j>=0)
        {
            if(nums[i][j]==target) 
			return true;
            else if(nums[i][j]>target) {
                j--;
            }
            else{
                i++;
            }
        }
        return false;
        
    }
};
