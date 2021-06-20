vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        deque<int> dq;
        vector<int> ans;
        
        int i=0;
        while(i<k){
            while(!dq.empty()&& arr[dq.back()]<=arr[i])
            dq.pop_back();
            
            dq.push_back(i);
            i++;
            
        }
        
        ans.push_back(arr[dq.front()]);
        
        while(i<n){
            
        if(dq.front()<=i-k)
        dq.pop_front();
        
        
        
        while(!dq.empty()&& arr[dq.back()]<=arr[i])
            dq.pop_back();
            
            dq.push_back(i);
            
            i++;
            
            ans.push_back(arr[dq.front()]);
        
        
        
        
        }
        
        
        return ans;
        
        // your code here
        
        
    }
