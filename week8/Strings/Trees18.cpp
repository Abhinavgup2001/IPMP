int lps(string s)
	{
	    // Your code goes here
	    
	    
	    int k=0;
	    while(k<s.length()-1){
	        
	     stack<char> st;
	    for(int i=0;i<s.length()-1-k;i++){
	       
	        st.push(s[i]);
	    }
	        
	        int size=st.size();
	        //cout<<size<<endl;
	        int temp=size;
	        int j=s.length()-1;
	        
	        while(temp){
	            if(st.top()!=s[j])
	            break;
	            
	            st.pop();
	            j--;
	            temp--;
	        }
	        
	        if(temp==0)
	        return size;
	        
	        k++;
	        //cout<<k<<endl;
	    }
	return 0;
	}
