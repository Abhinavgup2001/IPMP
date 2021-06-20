class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    
	    long long int dist[n];
	    
	    for(int i=0;i<n;i++)
	    dist[i]=INT_MAX;
	    
	    for(int i=0;i<n-1;i++){
	        
	        for(int j=0;j<edges.size();j++){
	            
	            if(dist[edges[j][0]]+edges[j][2]<dist[edges[j][1]])
	            dist[edges[j][1]]=dist[edges[j][0]]+edges[j][2];
	            
	            
	        }
	        
	        
	    }
	    
	    for(int i=0;i<1;i++){
	     
	     for(int j=0;j<edges.size();j++){
	            
	            if(dist[edges[j][0]]+edges[j][2]<dist[edges[j][1]])
	            return 1;
	            
	            
	        }
	        
	    }
	    
	    return 0;
	}
};
