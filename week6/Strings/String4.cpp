 string reverseWords(string S) 
    { 
        // code here 
        bool flag=true;
        for(int i=0;i<S.length();i++){
            if(S[i]=='.'){
                flag=false;
                break;
            }
        }
        if(flag)
        return S;
        
        string temp="";
        int i=0;
        while(S[i]!='.'){
            temp.push_back(S[i]);
            S.erase(S.begin()+0);
        }
        S.erase(S.begin()+0);
        string ans= reverseWords(S);
            ans.push_back('.');
        ans=ans+temp;
    
        
        return ans;
    } 
