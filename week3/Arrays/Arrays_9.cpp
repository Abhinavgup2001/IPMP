bool bs(int l, int r, int n){
        if(l>r)
            return false;
        long mid=l+(r-l)/2;
        if(mid*mid==n)
            return true;
        else if(mid*mid>n)
            return bs(l,mid-1,n);
        else
            return bs(mid+1,r,n);
    }
class Solution {
public:
    bool judgeSquareSum(int c) {
       
        int b;
        for(long a=0;a*a<=c;a++){
            b=c-a*a;
            if(bs(0,b,b))
                return true;
        }
        return false;
    }
};
    
