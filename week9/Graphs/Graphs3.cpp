class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    
	    bool vis[V];
	    for(int i=0;i<V;i++)
	    vis[i]=false;
	    vector<int> ans;
	   
	   queue<int> q;
	   q.push(0);
	   
	   while(!q.empty()){
	       
	       int size=q.size();
	       
	       while(size--){
	           int t=q.front();
	           q.pop();
	           ans.push_back(t);
	           for(int i=0;i<adj[t].size();i++){
	               if(vis[adj[t][i]]==false){
	                   vis[adj[t][i]]=true;
	               q.push(adj[t][i]);
	               }
	           }
	           
	       }
	       
	       
	   }
	  
	   
	   
	   return ans;
	    }
	    
	    // Code here
	
};
