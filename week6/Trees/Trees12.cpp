 vector <int> verticalSum(Node *root) {
        // add code here.
        vector<int> ans;
        if(root==NULL)
    return ans;
    map<int,vector<Node*>> mp;
    queue<pair<Node*,int>> q;
    
    q.push(make_pair(root,0));
    while(!q.empty()){
        int size=q.size();
        while(size--){
            pair<Node*,int> p= q.front();
            q.pop();
            if(p.first!=NULL){
                if(mp.find(p.second)==mp.end()){
                    vector<Node*> v;
                    v.push_back(p.first);
                    mp.insert({p.second,v});
                }
                else{
                    mp[p.second].push_back(p.first);
                }
            q.push(make_pair(p.first->left,p.second-1));
            q.push(make_pair(p.first->right,p.second+1));
        }
        }
    }
    
    for(auto i=mp.begin();i!=mp.end();i++){
        vector<Node*> v= i->second;
        int sum=0;
        for(int i=0;i<v.size();i++)
        sum+=v[i]->data;
        ans.push_back(sum);
    }
    return ans;
    }
