long long int posRSB(long long int n){
	
	return (int)log2(n ^ (n&(n-1)))+1;;
}
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        int n=nums.size();
        vector<int> v;
        int a=nums[0];
        for(int i=1;i<n;i++){
            a=a^nums[i];
        }
        long long int pos=posRSB(a);
        long long int mask=1<<(pos-1);
      int ans1=0,ans2=0;
        
        for(int i=0;i<n;i++){
            if((mask&nums[i]))
                ans1=ans1^nums[i];
            else
                ans2=ans2^nums[i];
        }
       
        v.push_back(ans1);
        v.push_back(ans2);
        return v;
    }
};
