// 7. Reverse Integer
class Solution {
public:
    int reverse(int x) {
        int ans=0;
        int rem;
        while(x!=0){
            rem=x%10;
            if((ans>INT_MAX/10) || (ans<INT_MIN/10)){ //this condition checks, given no is in range or not. range = [-2^31, 2^31 - 1] 
                return 0;                             // only 32 bits integer allowed. 64bit not
            }
            ans = (ans*10)+rem;
            x=x/10;
        }
        return ans;
    }
};
