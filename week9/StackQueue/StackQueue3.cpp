void StackQueue :: push(int x)
{
    // Your Code
    while(!s1.empty()){
        
        int temp=s1.top();
        s1.pop();
        s2.push(temp);
    }
    
    s1.push(x);
    
    while(!s2.empty()){
        
        int temp=s2.top();
        s2.pop();
        s1.push(temp);
    }
    
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
    
    if(s1.empty())
	return -1;
	
    int t=s1.top();
    s1.pop();
    return t;
        // Your Code       
}
