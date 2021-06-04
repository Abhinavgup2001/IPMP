class Solution {
  public:
    string removeChars(string a, string b) {
        // code here
        
        int n1=a.length();
    int n2=b.length();
        
        int temp[26];
       for(int i=0;i<26;i++)
       temp[i]=0;
        for(int i=0;i<n2;i++)
       temp[b[i]-'a']++;
       
       bool bo[n1];
       for(int i=0;i<n1;i++)
       bo[i]=false;
       
       for(int i=0;i<n1;i++){
           if(temp[a[i]-'a'])
           bo[i]=true;
       }
       
       string s;
       for(int i=0;i<n1;i++){
           if(!bo[i])
           s.push_back(a[i]);
       }
       return s;
    }
};
