// 1009. Complement of Base 10 Integer
class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;  //binary input always in 32 or 64 bit like 0000.....101. after performing not opration on that value will be 111...010.
        if(n==0) return 1; //edge case
        while(m!=0){
            mask = (mask<<1)|1; //for 101 mask will be 000....111
            m=m>>1;    //right shift
        }
        int ans = (~n)&mask; //not of 5 will be 111...010 and mask for that 000..111. (~n)&mask will be 000.....010(2). this is answer
        return ans;
    }
};
