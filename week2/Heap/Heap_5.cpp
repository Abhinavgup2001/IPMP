void last_lines(char *s, int n) {
    if(n<=0)
        return;
    int count=0;
    char DEL='\n';
    char *target=NULL; 

    target=strrchr(s, DEL);

    if(target==NULL){
        cout<<"INVALID INPUT";
        return;
    }

    while(count<n){
        if(target>s && *target!=DEL)
            --target;
        
        if(*target==DEL){
            count++;
            --target;
        }else if(target==s)
                    break;
    }
    target+=2;
    if(count<10)
        cout<<s;
    else
        cout<<target;

}
