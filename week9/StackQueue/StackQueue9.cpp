 public:
    //Function to calculate the span of stock’s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       
       stack<pair<int,int> > s;
       
       vector<int> ans;
       
       for(int i=0;i<n;i++){
           
           while(!s.empty()&&s.top().first<=price[i]){
               s.pop();
           }
           
           if(s.empty())
           ans.push_back(i+1);
           
           else{
               ans.push_back(i-s.top().second);
           }
           s.push(make_pair(price[i],i));
       }
       
       return ans;
    }
