class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int high=arr.size()-1;
        int low=0;
        while(low<high){
            if(arr[low]%2!=0)
                swap(arr[low],arr[high--]);
                else
                    low++;
            
        }
        return arr;
    }
};
