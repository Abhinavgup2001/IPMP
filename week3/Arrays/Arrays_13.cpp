vector<int> ans;
        
        vector<int> mina;
        mina.push_back(INT_MAX);
        int mine=arr[0];
        for(int i=1;i<n;i++){
            mina.push_back(mine);
            mine=min(mine,arr[i]);
        }
   /* for(int i=0;i<n;i++){
        cout<<mina[i]<<" ";
    }
    cout<<endl;*/
            vector<int> maxa;
        maxa.push_back(INT_MIN);
        int maxe=arr[n-1];
        for(int i=n-2;i>0;i--){
            maxa.push_back(maxe);
            maxe=max(maxe,arr[i]);
        }
        /*for(int i=0;i<n;i++){
        cout<<maxa[i]<<" ";
    }
    cout<<endl;*/
        
        for(int i=1;i<n-1;i++){
            if(mina[i]<arr[i]&&arr[i]<maxa[n-1-i]){
                //cout<<mina[i]<<" "<<arr[i]<<" "<<maxa[n-1-i]<<endl;
                ans.push_back(mina[i]);
                ans.push_back(arr[i]);
                ans.push_back(maxa[n-1-i]);
                return ans;
            }
        }
        return ans;
