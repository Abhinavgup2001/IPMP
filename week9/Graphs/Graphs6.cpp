#include<bits/stdc++.h>
using namespace std;

void dfs( int v, vector<int> adj[], bool* vis){
	vis[v]=true;

	for(int i=0;i<adj[v].size();i++){
		if(!vis[adj[v][i]])
		dfs(adj[v][i],adj,vis);
	}
}

int main(){

	int V,e;
	cin>>V>>e;

	vector<int> adj[V];

	for(int i=0;i<e;i++){

		int u,v;
		cin>>u>>v;

adj[u-1].push_back(v-1);
adj[v-1].push_back(u-1);

	}

	int ans=0;

bool vis[V];
for(int i=0;i<V;i++)
vis[i]=false;

for(int i=0;i<V;i++){
	if(!vis[i]){
		ans++;
		dfs(i,adj,vis);
	}
}
cout<<ans<<endl;
}
