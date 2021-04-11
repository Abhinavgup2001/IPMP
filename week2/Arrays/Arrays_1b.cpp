class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> v;
        int i=0,j=0;
        while(i<n1&&j<n2){
            if(nums1[i]==nums2[j]){
                v.push_back(nums1[i]);
                i++;
                j++;
                }
            else if(nums1[i]>nums2[j])
                j++;
            else
                i++;
        }
      if(v.size()==0)
          return v;
        vector<int> ans;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]!=v[i+1])
                ans.push_back(v[i]);
        }
        ans.push_back(v[v.size()-1]);
        return ans;
    }
};
