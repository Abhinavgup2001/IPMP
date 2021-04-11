#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int>> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		vector<int> t;
		int m;
		cin>>m;
		for(int i=0;i<m;i++){
			int temp;
			cin>>temp;
			t.push_back(temp);
		}
		v.push_back(t);
	}
	vector<int> ans;
	for(int i=0;i<n;i++){
		vector<int> v1=v[i];
		for(int i=0;i<v1.size();i++){
			ans.push_back(v1[i]);
		}
	}
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<" ";
	}
}
