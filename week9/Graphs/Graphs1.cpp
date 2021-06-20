{
    public:
	//Function to return the adjacency list for each vertex.
	vector<vector<int>>printGraph(int V, vector<int> adj[])
	{
	    vector<vector<int>> ans;
	    
	    
	    for(int i=0;i<V;i++){
	        
	        vector<int> temp;
	        temp.push_back(i);
	        vector<int> v=adj[i];
	        
	        for(int j=0;j<v.size();j++){
	            temp.push_back(v[j]);
	        }
	        
	        ans.push_back(temp);
	    }
	    
	    return ans;
	    // Code here
	}
};
