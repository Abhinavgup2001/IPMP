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
	bool isPath(int V, vector<int> adj[],int s, int d)
	{
	                   
	       vector<int> ans;
	       bool visited[V];
	       for(int i=0;i<V;i++)
	       visited[i]=false;
	       dfs(s,adj,visited,ans);
	                   
	                   
	                   for(int i=0;i<ans.size();i++){
	                   	if(ans[i]==d)
	                   	return true;
					   }
					   
					   return false;
	    }
};
