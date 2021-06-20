// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


bool cycle(int v, int parent, bool *vis,vector<int> adj[]){
    
  //  cout<<v<<" ";
    
    vis[v]=true;
    
    
    
    for(int i=0;i<adj[v].size();i++)
    {
        
    if(vis[adj[v][i]]==false){
    if(cycle(adj[v][i],v,vis,adj))
    return true;
    }
    else{
        if(adj[v][i]!=parent)
        return true;
    }
        
    }
    
    return false;
}


class Solution
{
    public:
	//Function to detect cycle in a directed graph.
	bool isCycle(int V, vector<int> adj[]) 
	{
	    
	  
	    
	    bool vis[V];
	    for(int i=0;i<V;i++)
	    vis[i]=false;
	    
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	    if(cycle(i,-1,vis,adj)){
	        cout<<i<<endl;
	        return true;
	    }
	        }
	    }
	   
	    
	    return false;
	   	// code here
	}
};



// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(V, adj);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}  // } Driver Code Ends
