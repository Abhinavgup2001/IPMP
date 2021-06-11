void reverse(string &ans){
    int i=0,j=ans.length()-1;
    
    while(i<j){
        swap(ans[i],ans[j]);
        i++;
        j--;
    }
    
}

class Solution{
    public:
    string removeConsecutiveCharacter(string s)
    {
        // code here.
        
        int n=s.length();
        
        stack<char> st;
        st.push(s[0]);
        for(int i=0;i<n;i++){
            if(!st.empty()){
                if(st.top()!=s[i])
                st.push(s[i]);
            }
            
        }
        
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
    if(ans.length()!=0)
        reverse(ans);
        
        return ans;
        
    }
