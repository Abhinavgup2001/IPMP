bool comp(int a, int b)
{
    return abs(a) < abs(b);
}
 
vector<int> closeToZero(int arr[], int n)
{
    sort(arr, arr + n, cmp);
    int min = INT_MAX, a, b;
    for (int i = 1; i < n; i++) {
 
        
        if (abs(arr[i - 1] + arr[i]) <= min) {
 
        
            min = abs(arr[i - 1] + arr[i]);
            a = i - 1;
            b = i;
        }
    }
    vector<int> ans;
    
         ans.push_back(arr[x],arr[y]);
         return ans;
}
