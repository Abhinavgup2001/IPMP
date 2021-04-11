class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>> > pq;
        for (auto& i : mp) {
    pair<int,string> p= make_pair(i.second,i.first);
            pq.push(p);
            if(pq.size()>k){
                pq.pop();
            }
            
        }
        vector<string> v;
        while(pq.size()){
            pair<int,string> p= pq.top();
            v.push_back(p.second);
            pq.pop();
        }
    
        return v;
    }
};
