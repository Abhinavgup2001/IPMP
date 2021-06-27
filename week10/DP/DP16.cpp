class Solution {
public:
    int numRollsToTarget(int n, int m, int x) {
        
        long long int dp[n+1][x+1];
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=x;j++)
                dp[i][j]=0;
        }
        
        dp[0][0]=1;
        int mod= 1e9+7;
        
        for(int i=1;i<=n;i++){
            
            for(int j=1;j<=x;j++){
                
                for(int k=1;k<=m && k<=j;k++){
                    
                    dp[i][j]=(dp[i][j]+dp[i-1][j-k])%mod;
                }
            }
        }
        
        
        return dp[n][x]%mod;
    }
