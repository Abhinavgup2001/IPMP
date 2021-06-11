 vector<int> merge(Node *root1, Node *root2)
    {
        
        vector<int> v1,v2,ans;
        
        helper(root1,v1);
        helper(root2,v2);
        
        int i=0,j=0;
        int m=v1.size(),n=v2.size();
        
        while(i<m&&j<n){
            if(v1[i]>v2[j]){
                ans.push_back(v2[j]);
                j++;
            }
            else{
                
                ans.push_back(v1[i]);
                i++;
            }
        }
        
        while(i<m){
            ans.push_back(v1[i]);
                i++;
        }
        
        while(j<n){
            ans.push_back(v2[j]);
                j++;
            
        }
       //Your code here
       
       return ans;
    }
