int FindMaxSum(vector<int> arr, int n)
{
    int in = arr[0];
    int out = 0;
    int outn;
    int i;
 
    for (i = 1; i < n; i++)
    {

        outn = max(in,out);
 

        in = out + arr[i];
        out = outn;
    }
 

    return max(in,out);
}
 
