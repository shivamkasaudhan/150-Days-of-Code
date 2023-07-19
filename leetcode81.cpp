// 1837. Sum of Digits in Base K
//tc O(n)
//100 % beats
class Solution {
public:
    int sumBase(int n, int k) {
        int ans=0;
        while(n>0){
            ans=ans+n%k;
            n/=k;
        }
        return ans;
    }
};
