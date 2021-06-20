struct node {
	int parent;
	int rank;
};

vector<node> dsuf;

int find(int v)
{
	if(dsuf[v].parent==-1)
		return v;
	return dsuf[v].parent=find(dsuf[v].parent);	
}

void union_op(int fromP,int toP)
{
	
	if(dsuf[fromP].rank > dsuf[toP].rank)	
		dsuf[toP].parent = fromP;
	else if(dsuf[fromP].rank < dsuf[toP].rank)	
		dsuf[fromP].parent = toP;
	else
	{
		
		dsuf[fromP].parent = toP;
		dsuf[toP].rank +=1;		
	}
}
