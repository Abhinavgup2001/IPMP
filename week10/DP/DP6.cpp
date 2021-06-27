class Solution {
public:
    int change(int n, vector<int>& s) {
        
        
        int m=s.size();
        
        int dp[m+1][n+1];
      
      for(int i=0;i<=m;i++){
          
          for(int j=0;j<=n;j++){
              
              if(j==0)
              dp[i][j]=1;
              
              else if(i==0)
              dp[i][j]=0;
              
              else{
                  
                  if(s[i-1]<=j)
                  dp[i][j]=dp[i][j-s[i-1]]+dp[i-1][j];
                  
                  else
                  dp[i][j]=dp[i-1][j];
              }
          }
      }
             
             
        
    return dp[m][n];
    
        
        
        
    }
};
