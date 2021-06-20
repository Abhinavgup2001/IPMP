void dfs(int v, vector<int> adj[], bool *vis, stack<int> &s){
    
    vis[v]=true;
    
    for(int i=0;i<adj[v].size();i++){
        
        if(!vis[adj[v][i]])
        dfs(adj[v][i],adj,vis,s);
        
    }
    
    s.push(v);
}


class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    
	    stack<int> s;
	    
	    bool vis[V];
	    for(int i=0;i<V;i++)
	    vis[i]=false;
	    
	    for(int i=0;i<V;i++){
	        if(!vis[i])
	    dfs(i,adj,vis,s);
	    }
	    
	    vector<int> ans;
	    
	    while(!s.empty()){
	        
	        ans.push_back(s.top());
	        s.pop();
	        
	        
	    }
	    // code here
	    
	    
	    return ans;
	}
};
