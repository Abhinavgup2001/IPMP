int ans(int arr[], int n)
    {
        
         int sum = 0; 
     int ans = 0; 
    int end = -1;
 unordered_map<int,int>mp;
        for (int i = 0; i < n; i++)
        arr[i] = (arr[i] == 0) ? -1 : 1;
        
      for(int i=0;i<n;i++)  
        {
            sum+=arr[i];
            
            if(sum==0)
            {
                ans=i+1;
            }
            
            if(mp.find(sum)  != mp.end())
            {
                int temp=i-mp[sum];
                if(temp>ans)
                ans=temp;

            }
            else
            mp[sum]=i;
            
            
            
            
        }
        return ans;
    }
