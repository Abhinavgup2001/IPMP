class Solution {
public:
    void moveZeroes(vector<int>& arr) {
     int n=arr.size(),ind=-1,count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0){
                if(count==0)
                ind=i;
                count++;
            }
            else{
                if(count>0){
                swap(arr[ind],arr[i]);
                    if(count>1)
                        ind=ind+1;
                    else
                        ind=i;
                }
            }
        }
    }
};
