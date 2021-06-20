void dfs(int v, vector<int> adj[], bool *vis, stack<int> &s){
    
    vis[v]=true;
    
    for(int i=0;i<adj[v].size();i++){
        
        if(!vis[adj[v][i]])
        dfs(adj[v][i],adj,vis,s);
        
    }
    
    s.push(v);
}

void df(int v, vector<int> adj[], bool *vis){
    
     vis[v]=true;
    
    for(int i=0;i<adj[v].size();i++){
        
        if(!vis[adj[v][i]])
        df(adj[v][i],adj,vis);
        
    }
    
    
}

class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        
          stack<int> s;
	    
	    bool vis[V];
	    for(int i=0;i<V;i++)
	    vis[i]=false;
	    
	    for(int i=0;i<V;i++){
	        if(!vis[i])
	    dfs(i,adj,vis,s);
	    }
	    
	    vector<int> t[V];
	    
	    for(int i=0;i<V;i++){
	        vis[i]=false;
	        for(int j=0;j<adj[i].size();j++)
	        t[adj[i][j]].push_back(i);
	    }
	    
	    int count=0;
	    
	    while(!s.empty())
	    {
	    
	    if(!vis[s.top()]){
	     
	     df(s.top(),t,vis);
	     count++;
	        
	    }    
	    s.pop();
	    }
	    
	    
        return count;
        
        
        //code here
    }
};
