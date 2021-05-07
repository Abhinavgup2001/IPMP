void MatrixInplaceTranspose(int *A, int r, int c)
{
    int size = r*c - 1, temp, next, cycle, i; 
    bitset<128> b; 
  
    b.reset();
    b[0] = b[size] = 1;
    i = 1; 
    while (i < size)
    {
        cycle = i;
        temp = A[i];
        do
        {
        
            next = (i*r)%size;
            swap(A[next], temp);
            b[i] = 1;
            i = next;
        }
        while (i != cycle);
  
    
        for (i = 1; i < size && b[i]; i++)
            ;
        cout << endl;
    }
}
