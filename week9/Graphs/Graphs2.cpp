void dfs(int v, vector<int> adj[], bool *vis, vector<int> &ans){
    
    vis[v]=true;
    ans.push_back(v);
    
    for(int i=0;i<adj[v].size();i++){
        if(vis[adj[v][i]]==false)
        dfs(adj[v][i],adj,vis,ans);
    }
    
}


class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	                   
	       vector<int> ans;
	       bool visited[V];
	       for(int i=0;i<V;i++)
	       visited[i]=false;
	       dfs(0,adj,visited,ans);
	                   
	    return ans;
	    }
};
