bool cycle(int v, vector<int> adj[], bool *vis, bool *st){
    
    //cout<<v<<" ";
    
    
    

        vis[v]=true;
        st[v]=true;
    for(int i=0;i<adj[v].size();i++)
    {
        
    if(!vis[adj[v][i]] && cycle(adj[v][i],adj,vis,st))
        return true;
    
 else if(st[adj[v][i]]==true)
        return true;
    }
    
    
    st[v]=false;
    return false;
        
    }



class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	bool isCyclic(int V, vector<int> adj[]) 
	{
	    
	    bool ans=false;
	    
	    bool vis[V];
	    for(int i=0;i<V;i++)
	    vis[i]=false;
	    
	    bool st[V];
	    for(int i=0;i<V;i++)
	    st[i]=false;
	    
	    for(int i=0;i<V;i++){
	        if(!vis[i]&&cycle(i,adj,vis,st))
	        return true;
	    }
	    
	 
	    
	    return false;
	   	// code here
	}
};
