class Solution{
  public:
    int cutRod(int price[], int n) {
        //code here
        
        int dp[n+1][n+1];
        
        int length[n];
        
        for(int i=0;i<n;i++)
        length[i]=i;
        
        for(int i=0;i<=n;i++){
            
            for(int j=0;j<=n;j++){
                
                if(i==0||j==0)
                dp[i][j]=0;
                
                
                else{
                    
                    if(i<=j)
                    dp[i][j]=max(price[i-1]+dp[i][j-i],dp[i-1][j]);
                    
                    else
                    dp[i][j]=dp[i-1][j];
                    
                }
                
            }
        }
        
        return dp[n][n];
    }
