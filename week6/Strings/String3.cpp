class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       int temp[26];
       for(int i=0;i<26;i++)
       temp[i]=0;
       for(int i=0;i<S.length();i++)
       temp[S[i]-'a']++;
       //for(int i=0;i<26;i++)
       //cout<<temp[i]<<endl;
       for(int i=0;i<S.length();i++){
           if(temp[S[i]-'a']==1)
           return S[i];
           
       }
      
       return '$';
    }

};
