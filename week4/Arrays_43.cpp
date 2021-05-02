int maxBitonicLength(int arr[], int n)
{
    
    if (n == 0)
        return 0;
          
    
    int count=1;
          
    int s=0;
    int r=0;
          
    int i =0;
    while (i < n-1)
    { 
         
        while (i<n-1 && arr[i]<=arr[i+1])
            i++;
              
             
        while (i<n-1 && arr[i]>=arr[i+1]){
                  
        
            if (i<n-1 && arr[i]>arr[i+1])
                r=i+1;
                  
            i++;
        }
              
    
        count = max(count,i-(s-1));
              
        s=r;
    }
          
    return count;
}
