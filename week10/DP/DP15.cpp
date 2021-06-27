public:
    int palindromicPartition(string s)
    {
        
        int n=s.length();
        
        bool dp[n][n];
        
        for(int g=0;g<n;g++){
            
            for(int i=0,j=g;j<n;i++,j++){
                
                if(g==0)
                dp[i][j]=true;
                
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
            }
        }
        
        
        int dp2[n];
        for(int i=0;i<n;i++)
        dp2[i]=i;
        
        for(int i=1;i<n;i++){
        if(dp[0][i]){
        dp2[i]=0;
        continue;
        }
            for(int j=1;j<=i;j++ ){
                
                if(dp[j][i])
                dp2[i]=min(dp2[i],1+dp2[j-1]);
                
                
            }
            //cout<<dp2[i]<<" ";
        }
        // code here
        return dp2[n-1];
    }
};
