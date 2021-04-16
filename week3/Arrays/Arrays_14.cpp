class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        int start=0;
        int n=arr.size();
        int end=n-1,c=0;
        while(start<=end){
            if(arr[start]<=0){
                swap(arr[start],arr[end--]);
            c++;
            }
            else
                start++;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        int size=n-c;
        cout<<size<<endl;
        if(start==0)
            return 1;
        
        for(int i=0;i<size;i++){
            cout<<"OF"<<endl;
            if((abs(arr[i])-1)<size&&arr[abs(arr[i])-1]>0)
                arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<size;i++){
            if(arr[i]>0)
                return i+1;
        }
        return size+1;
        
    }
};
