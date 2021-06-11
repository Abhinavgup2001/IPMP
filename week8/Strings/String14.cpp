int longestUniqueSubsttr(string s){
        
        int n= s.length();
        int maxLength=0;
        
        int start=0;
        int temp[26]={0};
        int repeat=0;
        
        for(int i=0;i<n;i++){
            
            if(temp[s[i]-'a']!=0)
            repeat++;
            
            temp[s[i]-'a']++;
            
            while(start<=i&&repeat>=0){
                if(repeat==0){
                maxLength=max(maxLength,i-start+1);
                break;
                }
                
                temp[s[start]-'a']--;
                if(temp[s[start]-'a']==1)
                repeat--;
                
                start++;
            }
            
        }
        
        return maxLength;
    }
