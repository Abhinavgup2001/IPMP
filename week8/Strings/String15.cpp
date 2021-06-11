#include<bits/stdc++.h>
using namespace std;

string smallestWindow (string s, string p)
    {
         int length=INT_MAX;
        int temp[58]={0};
        
        int start=0,idx=0;
        
        for(int i=0;i<p.length();i++)
        temp[p[i]-'A']++;
        
        for(int i=0;i<58;i++)
        cout<<temp[i]<<" ";
        cout<<endl;
        
        int val=0;
        
        for(int i=0;i<58;i++){
            if(temp[i])
            val++;
        }
        cout<<val<<endl;
        for(int i=0;i<s.length();i++){
            
            temp[s[i]-'A']--;
            
            if(temp[s[i]-'A']==0)
            val--;
            
            while(start<=i&&val==0){
                if(length>i-start+1){
                length=i-start+1;
                idx=start;
                cout<<idx<<" "<<length<<endl;
                }
              
                
                
                
                
                
                
                if(temp[s[start]-'A']==0)
                val++;
                
                temp[s[start]-'A']++;
                start++;
                
                
            }
        }
        
        string ans="";
        int i=idx;
        while(length>0){
            ans.push_back(s[i]);
            i++;
            length--;
        }
        
        return ans;
    }
    
    
  int main(){
  	
  	string s="a";
  	string p="a";
  	
  	cout<<smallestWindow(s,p)<<endl;
  }  
