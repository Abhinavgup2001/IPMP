bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second!=b.second)
        return a.second<b.second;
    else
        return a.first>b.first;
}
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
    map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int> > v;
        for(auto it=mp.begin();it!=mp.end();it++){
            v.push_back(make_pair(it->first,it->second));
        }
        sort(v.begin(),v.end(),cmp);
    int j=0;
        for(int i=0;i<v.size();i++){
            int temp=v[i].second;
            while(temp&&j<n){
                nums[j]=v[i].first;
                j++;
                temp--;
            }
            
        }
        return nums;
    }
};
