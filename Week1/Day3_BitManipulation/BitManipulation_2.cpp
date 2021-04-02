class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int noOfBits=sizeof(n)*8,reverse=0;
        for(int i=0;i<noOfBits;i++){
            if(n&(1<<i)){
                reverse |= 1<<(noOfBits-1-i);
            }
        }
        return reverse;
    }
};
