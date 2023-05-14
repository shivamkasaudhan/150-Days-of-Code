// 1281. Subtract the Product and Sum of Digits of an Integer
class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul=1;
        int sum =0;
        while(n!=0){
            int rem=n%10;
            mul*=rem;
            sum+=rem;
            n=n/10;

        }
        return (mul-sum);
    }
};

// 191. Number of 1 Bits
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
};

