void toposort(int v, vector<int> adj[], bool *vis, stack<int> &s){
    
    vis[v]=true;
    
    for(int i=0;i<adj[v].size();i++){
        
        if(!vis[adj[v][i]])
        dfs(adj[v][i],adj,vis,s);
        
    }
    
    s.push(v);
}


shortestPath(int s)
{
    stack<int> st;
    int dist[V];
  

    bool visited[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    for (int i = 0; i < V; i++)
        if (visited[i] == false)
            topolosort(i,adj, visited, st);

    for (int i = 0; i < V; i++)
        dist[i] = INF;
    dist[s] = 0;
  
   
    while (st.empty() == false)
    {
       
        int u = st.top();
        st.pop();
  
        
        list<AdjListNode>::iterator i;
        if (dist[u] != INF)
        {
          for (i = adj[u].begin(); i != adj[u].end(); ++i)
             if (dist[i->getV()] > dist[u] + i->getWeight())
                dist[i->getV()] = dist[u] + i->getWeight();
        }
    }
  
   
    for (int i = 0; i < V; i++)
        (dist[i] == INF)? cout << "INF ": cout << dist[i] << " ";
}
