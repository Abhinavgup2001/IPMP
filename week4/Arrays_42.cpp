int maxSubarrayProduct(int arr[], int n)
{
    
    int maxLocal = 1;
 
    
    int minEle = 1;
 

    int maxGlobal = 0;
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        
        if (arr[i] > 0)
        {
            maxLocal = maxLocal * arr[i];
            minEle
                = min(minEle * arr[i], 1);
            flag = 1;
        }
 
       
                
        else if (arr[i] == 0) {
            maxLocal = 1;
            minEle = 1;
        }
 
       
 
        else {
            int temp = maxLocal;
            maxLocal
                = max(minEle * arr[i], 1);
            minEle = temp * arr[i];
        }
 
        
        if (maxGlobal < maxLocal)
            maxGlobal = maxLocal;
    }
    if (flag == 0 && maxGlobal == 0)
        return 0;
    return maxGlobal;
}
