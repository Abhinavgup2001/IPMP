int longestSubsequence(int n, int arr[])
    {
        int ls[n]={0};
        
        for(int i=0;i<n;i++)
        ls[i]=1;
        int ans=0;
        
        for(int i=1;i<n;i++){
            
            for(int j=0;j<i;j++){
                
                if(arr[i]>arr[j]&&ls[i]<=ls[j])
                ls[i]=1+ls[j];
                
                ans=max(ans,ls[i]);
            }
        }
       
       return ans;
    }
