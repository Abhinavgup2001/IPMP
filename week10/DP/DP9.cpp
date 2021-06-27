int maxSumIS(int arr[], int n)  
	{  
	    
	    int sum[n];
	    int ans=arr[0];
	    for(int i=0;i<n;i++)
	    sum[i]=arr[i];
	    
	    sum[0]=arr[0];
	    
	    
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            
	            if(arr[i]>arr[j]){
	                sum[i]=max(sum[i],sum[j]+arr[i]);
	                ans=max(sum[i],ans);
	            }
	            
	        }
	    }
	    
	    return ans;
	    // Your code goes here
	} 
