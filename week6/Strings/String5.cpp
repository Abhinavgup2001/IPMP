class Solution
{
    public:
    
    vector<char> duplicates(string S)
    {
       vector<char> ans;
       int temp[26];
       for(int i=0;i<26;i++)
       temp[i]=0;
       for(int i=0;i<S.length();i++)
       temp[S[i]-'a']++;
       
       for(int i=0;i<S.length();i++){
           if(temp[S[i]-'a']>1)
        ans.push_back(S[i]);
           
       }
      
       return ans
    }

};
