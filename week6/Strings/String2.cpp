vector<string> permute(string s,int l, int r, vector<string> v){
    
    if(l>r)
    return v;
   
   if(l==r){
       v.push_back(s);
       return v;
   }
   
   for(int i=l;i<=r;i++){
       swap(s[i],s[l]);
       v=permute(s,l+1,r,v);
       swap(s[i],s[l]);
   }
   return v;
   
}
class Solution
{
	public:
		vector<string>find_permutation(string s)
		{
		    // Code here there
		    vector<string> ans;
		   ans = permute(s,0,s.length()-1,ans);
		    sort(ans.begin(),ans.end());
		    return ans;
		    
		    
		}
