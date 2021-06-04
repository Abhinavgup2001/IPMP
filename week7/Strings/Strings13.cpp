class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
         int n1=a.length();
    int n2=b.length();
    
    int temp1[26];
       for(int i=0;i<26;i++)
       temp1[i]=0;
        for(int i=0;i<n1;i++)
       temp1[a[i]-'a']++;

       
       int temp2[26];
       for(int i=0;i<26;i++)
       temp2[i]=0;
        for(int i=0;i<n2;i++)
       temp2[b[i]-'a']++;

       
       for(int i=0;i<26;i++){
           
           if(temp1[i]!=temp2[i]){
           	//cout<<i<<" "<<temp1[i]<<" "<<temp2[i]<<endl;
           return false;
       }
       
       }
        
    return true;
}
};
