#include<bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<vector<int> > sets, int n){
	
	vector<int> ans;
	
	int minsize=INT_MAX;
	int minsizeidx=-1;
	for(int i=0;i<n;i++){
		
		sort(sets[i].begin(),sets[i].end());
		if(minsize>sets[i].size()){
			minsize=sets[i].size();
			minsizeidx=i;
		}
	}
	
	map<int,int> mp;
	
	for(int i=0; sets[minsizeidx].size();i++)
	mp[ sets[minsizeidx][i] ]++;
	
	map<int,int>::iterator it;
    for (it = mp.begin(); it != mp.end(); ++it){
    	int element=it->first;
    	int freq=it->second;
    	
    	bool flag=true;
    	
    	for(int j=0;j<sets.size();j++){
    		if(j!=minsizeidx){
    			
    			if (binary_search( sets[j].begin(), sets[j].end(), element ))
                {
                   int l = lower_bound(sets[j].begin(), sets[j].end(), element)
                                                            - sets[j].begin();
                   int r = upper_bound(sets[j].begin(), sets[j].end(), element)
                                                            - sets[j].begin();
  
                freq=max(freq,r-l);   
                
                }
                
                else
                {
                    flag = false;
                    break;
                }
    			
    			
			}
		}
		if(flag){
			for (int k = 0; k < freq; k++)
                ans.push_back(element);
		}
    	
	}
	return ans;
}

int main(){
	
	int t;
	cin>>t;
	
	int n;
	cin>>n;
	
	vector<vector<int> > sets;
	
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		vector<int> v;
		for(int i=0;i<m;i++){
			int temp;
			cin>>temp;
			v.push_back(temp);
		}
		sets.push_back(v);
	}
	
	
	vector<int> ans= intersection(sets,n);
	for(int i=0;i<ans.size();i++)
	cout<<ans[i]<<" ";
}
