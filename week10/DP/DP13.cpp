class Solution {
  public:
    string longestPalin (string s) {
        // code here
        
    
    int n=s.length();
    bool dp[n][n];
    
    int l=-1,idxi=0,idxj=0;
    
    for(int g=0;g<n;g++){
        
        for(int i=0,j=g;j<n;i++,j++)
        {
        
        if(g==0){
            dp[i][j]=true;
            
        }
        
        else if(g==1){
            
            if(s[i]==s[j])
            dp[i][j]=true;
            
            else
            dp[i][j]=false;
            
        }
        
        else{
            
            if(s[i]==s[j]&&dp[i+1][j-1])
            dp[i][j]=true;
            
            else
            dp[i][j]=false;
        }
            
            if(dp[i][j]){
                if(l<g){
                    l=g;
                    idxi=i;
                    idxj=j;
                }
            }
        }
    }
    
    string ans="";
    
    while(idxi<=idxj){
        ans.push_back(s[idxi]);
        idxi++;
    }
        
        return ans;
    }
