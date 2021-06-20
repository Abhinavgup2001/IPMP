bool ispar(string x)
    {
        
        stack<char> s;
        
        for(int i=0;i<x.length();i++)
        
        {
            
            if(!s.empty())

            {
            
            if(x[i]==')'){
                
                if(s.top()=='(')
                s.pop();
                
                else
                s.push(x[i]);
            }
            
            else if(x[i]=='}'){

if(s.top()=='{')
                s.pop();
                
                else
                s.push(x[i]);


            }            
            
            else if(x[i]==']'){
            
            if(s.top()=='[')
                s.pop();
                
                else
                s.push(x[i]);
                
                
                
            }
            
            else{
                s.push(x[i]);
            }
            
            
        }
        
        else{
            s.push(x[i]);
        }
        
        }
        // Your code here
        if(s.empty())
        return true;
        
        return false;
    }

};
