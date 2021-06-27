void tsp(int graph[][V], vector<bool>& v, int currPos,int n, int count, int cost, int& ans)
{

    if (count == n && graph[currPos][0]) {
        ans = min(ans, cost + graph[currPos][0]);
        return;
    }
 

    for (int i = 0; i < n; i++) {
        if (!v[i] && graph[currPos][i]) {
            v[i] = true;
            tsp(graph, v, i, n, count + 1,cost + graph[currPos][i], ans);
            v[i] = false;
        }
    }
};
 
