class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        
        priority_queue<pair<int,int>,vector<pair<int,int> >, greater<pair<int,int>> > pq;
        
bool vis[V];
for(int i=0;i<V;i++)
vis[i]=false;

int dist[V];
for(int i=0;i<V;i++)
dist[i]=INT_MAX;

vis[S]=true;
dist[S]=0;

pq.push(make_pair(0,S));


while(!pq.empty()){
    
    pair<int,int> p= pq.top();
    pq.pop();
    vis[p.second]=true;
    
    
    for(int i=0;i<adj[p.second].size();i++){
        
    
           // cout<<adj[p.second][i][1]<<endl;
            if(p.first+adj[p.second][i][1]<dist[adj[p.second][i][0]]){
            dist[adj[p.second][i][0]]=p.first+adj[p.second][i][1];
            
            pq.push(make_pair(dist[adj[p.second][i][0]],adj[p.second][i][0]));
        
            }
        
    }
    
    
}

vector<int> ans;

for(int i=0;i<V;i++)
ans.push_back(dist[i]);


return ans;        
        // Code here
        
    }
};
