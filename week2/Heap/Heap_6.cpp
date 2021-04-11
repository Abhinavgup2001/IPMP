typedef pair<int, pair<int, int> > pp;

class Solution{

 
vector<int> mergeKArrays(vector<vector<int> > arr)
{
    vector<int> ans;
 
   
    priority_queue<pp, vector<pp>, greater<pp> > pq;
 
    for (int i = 0; i < arr.size(); i++)
        pq.push({ arr[i][0], { i, 0 } });
 
    
    while (pq.size()!=0) {
        pp temp = pq.top();
        pq.pop();
 
    
        int i = temp.second.first;
        int j = temp.second.second;
 
        ans.push_back(curr.first);
 
    
        if (j + 1 < arr[i].size())
            pq.push({ arr[i][j + 1], { i, j + 1 } });
    }
 
    return ans;
}

};
 

