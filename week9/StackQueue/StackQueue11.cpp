//Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<pair<long long,long long >> s;
        vector<long long > l;
        for(long long i=0;i<n;i++)
        {
            while(!s.empty()&&s.top().first>=arr[i]){
                s.pop();
            }
            
            if(s.empty())
            l.push_back(i+1);
            
            else{
                l.push_back(i-s.top().second);
            }
            
            s.push(make_pair(arr[i],i));
        }
        
      //  for(int i=0;i<n;i++)
    //    cout<<l[i]<<" ";
      //  cout<<endl;
        while(!s.empty())
        s.pop();
        
        vector<long long>  r;
         for(long long i=n-1;i>=0;i--)
        {
            while(!s.empty()&&s.top().first>=arr[i]){
                s.pop();
            }
            
            if(s.empty())
            r.push_back(n-i);
            
            else{
                r.push_back(s.top().second-i);
            }
            
            s.push(make_pair(arr[i],i));
        }
        
        reverse(r.begin(),r.end());
      //  for(int i=0;i<n;i++)
    //    cout<<r[i]<<" ";
    //    cout<<endl;
        
        long long ans=0;
        
        for(long long i=0;i<n;i++){
            
            long long count=l[i]+r[i]-1;
            long long temp= count*arr[i];
            ans=max(temp,ans);
        }
        
        // Your code here
        return ans;
    }
