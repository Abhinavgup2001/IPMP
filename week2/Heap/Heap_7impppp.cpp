class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<int> mah;
    priority_queue<int,vector<int>,greater<int> > mih;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(mah.size()==0)
            mah.push(num);
        else if(mah.size()==mih.size()){
            int temp=mih.top();
            if(temp>=num)
                mah.push(num);
            else{
                mah.push(temp);
                mih.pop();
                mih.push(num);
            }
        }
        else if(mah.size()-mih.size()==1){
            int temp=mah.top();
        if(temp<=num){
            mih.push(num);
        }
        
        else{
             mih.push(temp);
                mah.pop();
                mah.push(num);
        }
            
    }
    }
    
    double findMedian() {
     int a=mah.size();
        int b= mih.size();
        double ans;
        if(a==b){
        ans=(mah.top()+mih.top())/2.0;
        }
        else 
            ans=mah.top();
        return ans;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
